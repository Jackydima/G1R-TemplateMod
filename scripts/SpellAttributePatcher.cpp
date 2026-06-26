#include "SpellAttributePatcher.h"

// e.g FireRainDefinition
void SpellAttributePatcher::ApplySpellDefinition(const FAttributeConfig &config, UObject *objItem)
{
    USpellProjectileDefinition *spellProjectile = reinterpret_cast<USpellProjectileDefinition *>(objItem);

    bool updatedDamage = false;
    bool updatedCircle = false;

    for (auto &configModifier : config.AttributeData)
    {
        if (config.ItemName == L"FireRainDefinition")
        {
            UFireRainDefinition *fireRainDef = reinterpret_cast<UFireRainDefinition *>(objItem);

            if (configModifier.AttributeName == L"m_StormRadius")
            {
                Output::send<LogLevel::Verbose>(STR("Firerain Radius from {} to {}\n"), fireRainDef->m_StormRadius, configModifier.Value);
                fireRainDef->m_StormRadius = static_cast<double>(configModifier.Value);
                continue;
            }

            if (configModifier.AttributeName == L"m_StormHeight")
            {
                Output::send<LogLevel::Verbose>(STR("Firerain m_StormHeight from {} to {}\n"), fireRainDef->m_StormHeight, configModifier.Value);
                fireRainDef->m_StormHeight = static_cast<double>(configModifier.Value);
                continue;
            }

            if (configModifier.AttributeName == L"m_Probability")
            {
                Output::send<LogLevel::Verbose>(STR("Firerain m_Probability from {} to {}\n"), fireRainDef->m_Probability, configModifier.Value);
                fireRainDef->m_Probability = static_cast<int>(configModifier.Value);
                continue;
            }

            if (configModifier.AttributeName == L"m_Min")
            {
                Output::send<LogLevel::Verbose>(STR("Firerain m_Min from {} to {}\n"), fireRainDef->m_Min, configModifier.Value);
                fireRainDef->m_Min = static_cast<int>(configModifier.Value);
                continue;
            }

            if (configModifier.AttributeName == L"m_Max")
            {
                Output::send<LogLevel::Verbose>(STR("Firerain m_Max from {} to {}\n"), fireRainDef->m_Max, configModifier.Value);
                fireRainDef->m_Max = static_cast<int>(configModifier.Value);
                continue;
            }

            if (configModifier.AttributeName == L"m_Forced")
            {
                Output::send<LogLevel::Verbose>(STR("Firerain m_Forced from {} to {}\n"), fireRainDef->m_Forced, configModifier.Value);
                fireRainDef->m_Forced = static_cast<bool>(configModifier.Value);
                continue;
            }
        }

        if (configModifier.AttributeType == L"Requirements.")
        {
        }

        if (configModifier.AttributeType == L"Damage.")
        {
            for (auto &entry : spellProjectile->m_DamageBase)
            {
                FGameplayTag tag = entry.Key;
                Output::send<LogLevel::Verbose>(STR("Spell {}: Tag {} - Value {}\n"), config.ItemName, tag.TagName.ToString(), entry.Value);
            }

            if (!updatedDamage)
            {
                spellProjectile->m_DamageBase.Empty();
                updatedDamage = true;
            }

            FGameplayTag ftag;
            FString fString = FString(configModifier.AttributeName.c_str());
            ftag.TagName = FName(*fString);
            spellProjectile->m_DamageBase.Emplace(ftag, configModifier.Value);
        }

        if (configModifier.AttributeType == L"DamageCircle.")
        {
            for (auto &entry : spellProjectile->m_DamageMagicCircleProgression)
            {
                FGameplayTag tag = entry.Key;
                FDamageProgressionMagicCircle dPMC = entry.Value;

                for (auto &Item : dPMC.m_DamageByMagicCircle)
                {
                    Output::send<LogLevel::Verbose>(STR("Spell {}: m_DamageMagicCircleProgression Key {}, Tag {} - Value {}\n"), config.ItemName,
                    tag.TagName.ToString(), Item.m_CircleTag.TagName.ToString(), Item.m_Damage);
                }
            }

            if (!updatedCircle)
            {
                spellProjectile->m_DamageMagicCircleProgression.Empty();
                FDamageProgressionMagicCircle dPMC;
                TArray<FGameplayTag> tagArray;
                spellProjectile->m_DamageBase.GenerateKeyArray(tagArray);
                if (!tagArray.IsValidIndex(0))
                    continue;
                spellProjectile->m_DamageMagicCircleProgression.Emplace(tagArray[0], dPMC); // Only one Tag should be included in the damage!
                updatedDamage = true;
            }

            TArray<FGameplayTag> tagArray;
            spellProjectile->m_DamageBase.GenerateKeyArray(tagArray);
            if (!tagArray.IsValidIndex(0))
                continue;

            FDamageByMagicCircle damageByMC;
            FGameplayTag ftag;
            FString fString = FString(configModifier.AttributeName.c_str());
            ftag.TagName = FName(*fString);
            damageByMC.m_CircleTag = ftag;
            damageByMC.m_Damage = configModifier.Value;
        
            FDamageProgressionMagicCircle &dPMC = spellProjectile->m_DamageMagicCircleProgression[tagArray[0]];
            dPMC.m_DamageByMagicCircle.Add(damageByMC);
        }
    }
}

// e.g FireRainSpellConfig
void SpellAttributePatcher::ApplySpellConfig(const FAttributeConfig &config, UObject *objItem)
{
    USpellConfig *spellProjectile = reinterpret_cast<USpellConfig *>(objItem);
    auto &spellLevels = spellProjectile->m_SpellLevels;

    for (auto &configModifier : config.AttributeData)
    {
        if (configModifier.AttributeType == L"Requirements.")
        {
            int index = -1;
            size_t indexStart = configModifier.AttributeName.find(L"[") + 1;
            size_t indexEnd = configModifier.AttributeName.find(L"]", indexStart);
            try
            {
                index = std::stoi(configModifier.AttributeName.substr(indexStart, indexEnd));
            }
            catch (std::exception)
            {
                Output::send<LogLevel::Verbose>(STR("Error Parsing index\n"));
            }

            Output::send<LogLevel::Verbose>(STR("Spelllevels count: {}\n"), spellLevels.Num());
            if (!spellLevels.IsValidIndex(index))
                continue;

            Output::send<LogLevel::Verbose>(STR("Valid Req Attribute = {}\n"), configModifier.AttributeName);

            if (configModifier.AttributeName.substr(indexEnd).contains(L"CastTime"))
            {
                spellLevels[index].CastTime = configModifier.Value;
                Output::send<LogLevel::Verbose>(STR("Spell-> {} from {} to {}\n"), configModifier.AttributeName, spellLevels[index].CastTime, configModifier.Value);
                continue;
            }

            if (configModifier.AttributeName.substr(indexEnd).contains(L"CastManaCost"))
            {
                spellLevels[index].CastManaCost = configModifier.Value;
                Output::send<LogLevel::Verbose>(STR("Spell-> {} from {} to {}\n"), configModifier.AttributeName, spellLevels[index].CastManaCost, configModifier.Value);
                continue;
            }

            if (configModifier.AttributeName.substr(indexEnd).contains(L"ManaCostSc"))
            {
                spellLevels[index].ManaCostSc = configModifier.Value;
                Output::send<LogLevel::Verbose>(STR("Spell-> {} from {} to {}\n"), configModifier.AttributeName, spellLevels[index].ManaCostSc, configModifier.Value);
                continue;
            }
        }
    }
}

SpellAttributePatcher::SpellAttributePatcher() : AttributePatcherBase()
{
    this->m_IniFileName = L"SpellConfig.ini";
}

SpellAttributePatcher::~SpellAttributePatcher()
{
}

void SpellAttributePatcher::ApplyPatchOnItem(const FAttributeConfig &config, UObject *objItem)
{
    if (!objItem)
    {
        Output::send<LogLevel::Verbose>(STR("[SpellAttributePatcher] Cannot apply config to null objItem\n"));
        return;
    }

    auto *Cls = objItem->GetClassPrivate();
    if (!Cls)
    {
        Output::send<LogLevel::Verbose>(STR("[SpellAttributePatcher] Cannot get class from objItem object\n"));
        return;
    }

    // TODO: Test with class structure only (no reflection)
    if (config.ItemName.contains(L"Definition"))
        this->ApplySpellDefinition(config, objItem);

    if (config.ItemName.contains(L"SpellConfig"))
        this->ApplySpellConfig(config, objItem);
}

void SpellAttributePatcher::GetDefaultAttributes(std::wstring itemName, UObject *obj)
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

    // TODO: Test with class structure only (no reflection)
}
