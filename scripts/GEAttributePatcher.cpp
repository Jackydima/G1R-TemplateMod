#include "GEAttributePatcher.h"

GEAttributePatcher::GEAttributePatcher() : AttributePatcherBase()
{
    this->m_IniFileName = L"GEConfig.ini";
    this->m_BaseClassName = L"/Script/Angelscript.Default__GE_";
}

GEAttributePatcher::~GEAttributePatcher()
{
}

void GEAttributePatcher::ApplyPatchOnItem(const FAttributeConfig &config, UObject *objItem)
{
    if (!objItem)
    {
        Output::send<LogLevel::Verbose>(STR("Cannot apply config to null GEAttributePatcher object\n"));
        return;
    }

    auto *Cls = objItem->GetClassPrivate();
    if (!Cls)
    {
        Output::send<LogLevel::Verbose>(STR("Cannot get class from GEAttributePatcher object\n"));
        return;
    }

    auto *ModifiersProp = CastField<FArrayProperty>(Cls->FindProperty(FName(STR("Modifiers"))));
    if (!ModifiersProp)
    {
        Output::send<LogLevel::Verbose>(STR("No Modifiers property found on {}\n"), config.ItemName);
        return;
    }

    RC::Unreal::TArray<FGameplayModifierInfo> *ModifierPtr =
        ModifiersProp->ContainerPtrToValuePtr<RC::Unreal::TArray<FGameplayModifierInfo>>(objItem);

    if (!ModifierPtr)
    {
        Output::send<LogLevel::Verbose>(STR("Failed to get modifiers pointer\n"));
        return;
    }

    // Apply each modifier from the configuration
    for (const auto &configModifier : config.AttributeData)
    {
        RC::Unreal::FString modifierName(configModifier.AttributeName);

        // Find matching modifier in the effect
        for (auto &effectModifier : *ModifierPtr)
        {
            auto &attrName = effectModifier.Attribute.AttributeName;

            // Compare attribute names
            if (attrName == modifierName)
            {
                float oldValue = effectModifier.ModifierMagnitude.ScalableFloatMagnitude.Value;
                effectModifier.ModifierMagnitude.ScalableFloatMagnitude.Value = configModifier.Value;

                /*Output::send<LogLevel::Verbose>(
                    STR("Updated {}.{}: {} -> {}\n"),
                    config.ItemName,
                    configModifier.AttributeName,
                    oldValue,
                    configModifier.Value);*/
                break;
            }
        }
    }
}

void GEAttributePatcher::GetDefaultAttributes(std::wstring itemName, UObject *obj)
{
    if (!obj)
    {
        Output::send<LogLevel::Verbose>(STR("GetDefaultGE: Object cannot be null!\n"));
        return;
    }

    auto *Cls = obj->GetClassPrivate();
    if (!Cls)
    {
        Output::send<LogLevel::Verbose>(STR("GetDefaultGE: Class not found!\n"));
        return;
    }

    // TODO: Add more attributes to change!
    // Only Modifier working now

    auto *ModifiersProp = CastField<FArrayProperty>(Cls->FindProperty(FName(STR("Modifiers"))));
    if (!ModifiersProp)
    {
        Output::send<LogLevel::Verbose>(STR("GetDefaultGE: No Modifiers property found!\n"));
        return;
    }

    RC::Unreal::TArray<FGameplayModifierInfo> *ModifierPtr = ModifiersProp->ContainerPtrToValuePtr<RC::Unreal::TArray<FGameplayModifierInfo>>(obj);

    FAttributeConfig geConfig;
    geConfig.ItemName = itemName;
    FAttributeData currentAttribute;
    for (auto &Entry : *ModifierPtr)
    {
        auto &Name = Entry.Attribute.AttributeName;
        currentAttribute = FAttributeData(std::wstring(Name.GetCharArray().GetData()), std::wstring(L"Modifier."), Entry.ModifierMagnitude.ScalableFloatMagnitude.Value);
        geConfig.AttributeData.push_back(currentAttribute);
        //Output::send<LogLevel::Verbose>(STR("[{}]Added Default Attribute {}: {}\n"), itemName, StringType(Name.GetCharArray().GetData()), Entry.ModifierMagnitude.ScalableFloatMagnitude.Value);
    }

    this->m_Default_AttributeConfigMap[itemName] = geConfig;
}
