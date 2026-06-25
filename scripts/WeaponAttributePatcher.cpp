#include "WeaponAttributePatcher.h"

void WeaponAttributePatcher::ApplyRequirements(const FAttributeData &configData, const std::wstring &itemName, RC::Unreal::UObject *objItem)
{
    /*auto RequiredStatsProperty = CastField<FMapProperty>(class->FindProperty(FName(STR("m_RequiredStats"))));
    if (!RequiredStatsProperty)
    {
        Output::send<LogLevel::Verbose>(STR("[WeaponAttributePatcher] No m_RequiredStats property\n"));
        return false;
    }

    TMap<FGameplayAttribute, float> *RequiredStatsMapPtr =
        RequiredStatsProperty->ContainerPtrToValuePtr<TMap<FGameplayAttribute, float>>(objItem);*/

    // Quick class Hack
    UWeaponDefinition *weapon = reinterpret_cast<UWeaponDefinition *>(objItem);

    if (configData.AttributeName == L"Strength")
    {
        weapon->m_RequiredStats.Emplace(this->m_STRAttribute, configData.Value);
        Output::send<LogLevel::Verbose>(STR("[WeaponAttributePatcher] Updated Req for {}: Strength -> {}\n"), itemName, configData.Value);
    }

    if (configData.AttributeName == L"Dexterity")
    {
        weapon->m_RequiredStats.Emplace(this->m_DEXAttribute, configData.Value);
        Output::send<LogLevel::Verbose>(STR("[WeaponAttributePatcher] Updated Req for {}: Dexterity -> {}\n"), itemName, configData.Value);
    }
    /*for (auto &entry : *RequiredStatsMapPtr)
    {
        FGameplayAttribute &attribute = entry.Key;
        float val = entry.Value;
        Output::send<LogLevel::Verbose>(STR("Requirement Name -> {} \n"), std::wstring(attribute.AttributeName.GetCharArray().GetData()));
        Output::send<LogLevel::Verbose>(STR("Attribute.Path[0] Name -> {} \n"), attribute.Attribute.Path[0].ToString());
        Output::send<LogLevel::Verbose>(STR("Attribute.ResolvedField->GetFName() Name -> {} \n"), attribute.Attribute.ResolvedField.);

    }*/
}

void WeaponAttributePatcher::ApplyDamageValues(const FAttributeData &configData, const std::wstring &itemName, RC::Unreal::UObject *objItem)
{
    // TMap<FGameplayTag, float> m_DamageBase;
    /*auto *DamangeProp = CastField<FMapProperty>(class->FindProperty(FName(STR("m_DamageBase"))));
    if (!DamangeProp)
    {
        Output::send<LogLevel::Verbose>(STR("[WeaponAttributePatcher] No m_DamageBase property found on {}\n"), itemName);
        return;
    }

    TMap<FGameplayTag, float> *DamageMapPtr =
        DamangeProp->ContainerPtrToValuePtr<TMap<FGameplayTag, float>>(objItem);*/

    // Quick class Hack
    UWeaponDefinition *weapon = reinterpret_cast<UWeaponDefinition *>(objItem);

    // Apply each modifier from the configuration
    FGameplayTag ftag;
    FString fString;
    fString = FString(configData.AttributeName.c_str());
    ftag.TagName = FName(*fString);
    Output::send<LogLevel::Verbose>(STR("Item ({}): Damage {} to {}\n"), itemName, configData.AttributeName, configData.Value);
    weapon->m_DamageBase.Emplace(ftag, configData.Value);
}

WeaponAttributePatcher::WeaponAttributePatcher() : AttributePatcherBase()
{
    this->m_IniFileName = L"WeaponConfig.ini";
    this->m_InitiatedRequirements = false;
}

WeaponAttributePatcher::~WeaponAttributePatcher()
{
}

bool WeaponAttributePatcher::InitReqFields()
{
    // Get the Dexterity Attribute stat from the First Bow
    UObject *bow = UObjectGlobals::StaticFindObject<RC::Unreal::UObject *>(nullptr, nullptr, L"/Script/Angelscript.Default__ItRw_Bow_Small_01");
    if (!bow)
    {
        return false;
    }

    UWeaponDefinition *bowItem = reinterpret_cast<UWeaponDefinition *>(bow);

    for (auto &entry : bowItem->m_RequiredStats)
    {
        // There should be maximum one entry: Dexterity!
        FGameplayAttribute &data = entry.Key;
        // if (data.AttributeName == "Dexterity")
        this->m_DEXAttribute = data;
    }

    // Get the Strength Attribute stat from the First Sword
    UObject *sword = UObjectGlobals::StaticFindObject<RC::Unreal::UObject *>(nullptr, nullptr, L"/Script/Angelscript.Default__ItMw_1H_Sword_01");
    if (!sword)
    {
        return false;
    }

    UWeaponDefinition *swordItem = reinterpret_cast<UWeaponDefinition *>(sword);

    for (auto &entry : swordItem->m_RequiredStats)
    {
        // There should be maximum one entry: Strength!
        FGameplayAttribute &data = entry.Key;
        // if (data.AttributeName == "Strength")
        this->m_STRAttribute = data;
    }

    return true;
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

    // Setup Requirements Pointers
    if (!this->m_InitiatedRequirements)
    {
        this->m_InitiatedRequirements = InitReqFields();
    }

    // Quick hack :)
    UWeaponDefinition *weapon = reinterpret_cast<UWeaponDefinition *>(objItem);
    bool adjustedDamage = false;
    bool adjustedReq = false;

    for (auto &configModifier : config.AttributeData)
    {
        if (configModifier.AttributeType == L"Damage.")
        {
            if (!adjustedDamage)
            {
                adjustedDamage = true;
                weapon->m_DamageBase.Empty();
            }
            this->ApplyDamageValues(configModifier, config.ItemName, objItem);
        }

        if (configModifier.AttributeType == L"Requirement.")
        {
            if (!adjustedReq)
            {
                adjustedReq = true;
                weapon->m_RequiredStats.Empty();
            }
            this->ApplyRequirements(configModifier, config.ItemName, objItem);
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

    // Damage Attribute type!
    // TMap<FGameplayTag, float> m_DamageBase;
    /*auto *DamangeProp = CastField<FMapProperty>(Cls->FindProperty(FName(STR("m_DamageBase"))));
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
    }*/

    UWeaponDefinition *item = reinterpret_cast<UWeaponDefinition *>(obj);

    FAttributeConfig config;
    config.ItemName = itemName;
    FAttributeData currentAttribute;

    for (const auto &pair : item->m_DamageBase)
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

    for (const auto &pair : item->m_RequiredStats)
    {
        FGameplayAttribute key = pair.Key;
        float value = pair.Value;
        currentAttribute.AttributeName = std::wstring(key.AttributeName.GetCharArray().GetData());
        currentAttribute.AttributeType = L"Requirement.";
        currentAttribute.Value = value;

        Output::send<LogLevel::Verbose>(STR("[{}] -> {} = {}\n"), itemName, currentAttribute.AttributeName, currentAttribute.Value);

        config.AttributeData.push_back(currentAttribute);
    }

    this->m_Default_AttributeConfigMap[itemName] = config;
}
