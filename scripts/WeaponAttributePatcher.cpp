#include "WeaponAttributePatcher.h"

WeaponAttributePatcher::WeaponAttributePatcher() : AttributePatcherBase()
{
    this->m_IniFileName = L"WeaponConfig.ini";
}

WeaponAttributePatcher::~WeaponAttributePatcher()
{
}

void WeaponAttributePatcher::ApplyPatchOnItem(const FAttributeConfig &config, UObject *objItem)
{
    if (!objItem)
    {
        Output::send<LogLevel::Verbose>(STR("[WeaponAttributePatcher] Cannot apply config to null objItem\n"));
        return;
    }

    auto *Cls = objItem->GetClassPrivate();
    if (!Cls)
    {
        Output::send<LogLevel::Verbose>(STR("[WeaponAttributePatcher] Cannot get class from objItem object\n"));
        return;
    }

    // TMap<FGameplayTag, float> m_DamageBase;
    auto *DamangeProp = CastField<FMapProperty>(Cls->FindProperty(FName(STR("m_DamageBase"))));
    if (!DamangeProp)
    {
        Output::send<LogLevel::Verbose>(STR("[WeaponAttributePatcher] No m_DamageBase property found on {}\n"), config.ItemName);
        return;
    }

    TMap<FGameplayTag, float> *DamageMapPtr =
        DamangeProp->ContainerPtrToValuePtr<TMap<FGameplayTag, float>>(objItem);

    if (!DamageMapPtr)
    {
        Output::send<LogLevel::Verbose>(STR("[WeaponAttributePatcher] Failed to get damage map pointer\n"));
        return;
    }

    // Apply each modifier from the configuration
    FGameplayTag ftag;
    FString fString;
    for (const auto &configModifier : config.AttributeData)
    {
        fString = FString(configModifier.AttributeName.c_str());
        ftag.TagName = FName(*fString);
        auto dataPtr = DamageMapPtr->Find(ftag);
        if (dataPtr)
        {
            *dataPtr = configModifier.Value;
        }
    }
}

void WeaponAttributePatcher::GetDefaultAttributes(std::wstring itemName, UObject *obj)
{
    if (!obj)
    {
        Output::send<LogLevel::Verbose>(STR("GetDefaultAttributes: Object cannot be null!\n"));
        return;
    }

    auto *Cls = obj->GetClassPrivate();
    if (!Cls)
    {
        Output::send<LogLevel::Verbose>(STR("GetDefaultAttributes: Class not found!\n"));
        return;
    }

    // TODO: Create functions for every supported attribute type

    // Damage Attribute type!
    // TMap<FGameplayTag, float> m_DamageBase;
    auto *DamangeProp = CastField<FMapProperty>(Cls->FindProperty(FName(STR("m_DamageBase"))));
    if (!DamangeProp)
    {
        Output::send<LogLevel::Verbose>(STR("GetDefaultAttributes: No m_DamageBase property found on {}\n"), itemName);
        return;
    }

    Output::send<LogLevel::Verbose>(STR("Found Field m_DamageBase!\n"));

    TMap<FGameplayTag, float> *DamageMapPtr =
        DamangeProp->ContainerPtrToValuePtr<TMap<FGameplayTag, float>>(obj);

    if (!DamageMapPtr)
    {
        Output::send<LogLevel::Verbose>(STR("GetDefaultAttributes: Failed to get damage map pointer\n"));
        return;
    }

    FAttributeConfig config;
    config.ItemName = itemName;
    FAttributeData currentAttribute;
    for (const auto &pair : *DamageMapPtr)
    {
        FGameplayTag key = pair.Key;
        StringType attrName = key.TagName.ToString();
        float value = pair.Value;
        currentAttribute.AttributeName = std::wstring(attrName);
        currentAttribute.AttributeType = L"Damage.";
        currentAttribute.Value = value;

        Output::send<LogLevel::Verbose>(STR("[{}] -> {} = {}\n"), itemName, currentAttribute.AttributeName, currentAttribute.Value);

        config.AttributeData.push_back(currentAttribute);
    }

    this->m_Default_AttributeConfigMap[itemName] = config;
}
