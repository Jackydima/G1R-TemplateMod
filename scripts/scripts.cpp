
#include "scripts.h"

using namespace RC;
using namespace RC::Unreal;

#define MAX_PATH_LENGTH 256

// Global storage for loaded item configurations
GEModifierConfigConfigMap g_GEModifierConfigs;
GEModifierConfigConfigMap g_Default_GEModifierConfigs;

/**
 * @brief Loads item configuration from INI file
 *
 * The INI file should be in the same directory as the DLL with the structure:
 * [ItemName]
 * Modifier.AttributeName = Value
 *
 * Example:
 * [Kdf_Armor_L]
 * Modifier.MaxMana = 100.0
 * Modifier.MaxHealth = 100.0
 * Modifier.Resistance_Edge = 100.0
 */
bool LoadConfig()
{
    g_GEModifierConfigs.clear();

    try
    {
        char buffer[MAX_PATH_LENGTH];
        GetModuleFileNameA(NULL, buffer, MAX_PATH_LENGTH);

        std::filesystem::path exeDir = std::filesystem::path(buffer).parent_path();
        std::filesystem::path configPath = exeDir / "ue4ss/Mods/g1r-templateMod/GEModifierConfig.ini";

        if (!std::filesystem::exists(configPath))
        {
            Output::send<LogLevel::Verbose>(STR("GEModifierConfig.ini not found at: {}\n"),
                                            configPath.wstring());
            return false;
        }

        Output::send<LogLevel::Verbose>(STR("Loading GEModifierConfig from: {}\n"),
                                        configPath.wstring());

        ini::IniFile config;
        config.load(configPath.string());

        // Iterate through all sections in the INI file
        for (const auto &sectionPair : config)
        {
            const std::string &geName = sectionPair.first;
            const ini::IniSection &section = sectionPair.second;

            FGEModifierConfig geConfig;
            geConfig.ItemName = std::wstring(geName.begin(), geName.end());

            // Parse all modifiers in this section
            for (const auto &fieldPair : section)
            {
                const std::string &fieldName = fieldPair.first;
                const ini::IniField &fieldValue = fieldPair.second;

                // Check if this field is a modifier (starts with "Modifier.")
                if (fieldName.substr(0, 9) == "Modifier.")
                {
                    // Extract the attribute name (everything after "Modifier.")
                    std::string attributeName = fieldName.substr(9);

                    try
                    {
                        float value = fieldValue.as<float>();
                        geConfig.Modifiers.emplace_back(std::wstring(attributeName.begin(), attributeName.end()), value);

                        Output::send<LogLevel::Verbose>(STR(" > Modifier: {} = {}\n"),
                                                        std::wstring(attributeName.begin(), attributeName.end()), value);
                    }
                    catch (const std::exception)
                    {
                        Output::send<LogLevel::Warning>(STR("Failed to parse modifier value for {}.{}: {}\n"),
                                                        std::wstring(geName.begin(), geName.end()), std::wstring(attributeName.begin(), attributeName.end()));
                        continue;
                    }
                }
            }

            // Store the configuration
            g_GEModifierConfigs[std::wstring(geName.begin(), geName.end())] = geConfig;
        }

        Output::send<LogLevel::Verbose>(STR("Successfully loaded {} item configurations\n"),
                                        g_GEModifierConfigs.size());
    }
    catch (const std::exception)
    {
        Output::send<LogLevel::Error>(STR("Error loading ItemConfig.ini\n"));
        return false;
    }

    return true;
}

/**
 * @brief Applies configuration modifiers to a UGameplayEffect object
 *
 * @param config The item configuration containing modifiers
 * @param effect The UGameplayEffect object to modify
 * @param reset Flag for resetting default values (default is false)
 */
void ApplyConfigToEffect(const FGEModifierConfig &config, UObject *effect)
{
    if (!effect)
    {
        Output::send<LogLevel::Verbose>(STR("Cannot apply config to null effect\n"));
        return;
    }

    auto *Cls = effect->GetClassPrivate();
    if (!Cls)
    {
        Output::send<LogLevel::Verbose>(STR("Cannot get class from effect object\n"));
        return;
    }

    auto *ModifiersProp = CastField<FArrayProperty>(Cls->FindProperty(FName(STR("Modifiers"))));
    if (!ModifiersProp)
    {
        Output::send<LogLevel::Verbose>(STR("No Modifiers property found on {}\n"), config.ItemName);
        return;
    }

    RC::Unreal::TArray<FGameplayModifierInfo> *ModifierPtr =
        ModifiersProp->ContainerPtrToValuePtr<RC::Unreal::TArray<FGameplayModifierInfo>>(effect);

    if (!ModifierPtr)
    {
        Output::send<LogLevel::Verbose>(STR("Failed to get modifiers pointer\n"));
        return;
    }

    // Apply each modifier from the configuration
    for (const auto &configModifier : config.Modifiers)
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

                Output::send<LogLevel::Verbose>(
                    STR("Updated {}.{}: {} -> {}\n"),
                    config.ItemName,
                    configModifier.AttributeName,
                    oldValue,
                    configModifier.Value);
                break;
            }
        }
    }
}

/**
 * @brief Prints the modifiers of a single UGamplayEffect object for testing purposes
 * Warning: Has not type checks for correct classes
 * @param obj The UGameplayEffect object to recon
 */
void PrintModifiers(UObject *obj)
{
    if (!obj)
    {
        Output::send<LogLevel::Verbose>(STR("Object Missing"));
        return;
    }

    Output::send<LogLevel::Verbose>(STR("Object Name: {}\n"), obj->GetFullName());

    auto *Cls = obj->GetClassPrivate();

    Output::send<LogLevel::Verbose>(
        STR("Class = {}\n"),
        Cls->GetFullName());

    auto *ModifiersProp = CastField<FArrayProperty>(Cls->FindProperty(FName(STR("Modifiers"))));
    if (!ModifiersProp)
    {
        Output::send<LogLevel::Verbose>(STR("No Modifiers property found!\n"));
        return;
    }

    Output::send<LogLevel::Verbose>(STR("Name of Searched Property: {}\n"), ModifiersProp->GetName());
    RC::Unreal::TArray<FGameplayModifierInfo> *ModifierPtr = ModifiersProp->ContainerPtrToValuePtr<RC::Unreal::TArray<FGameplayModifierInfo>>(obj);

    int i = 0;
    for (auto &Entry : *ModifierPtr)
    {
        auto &Name = Entry.Attribute.AttributeName;
        Output::send<LogLevel::Verbose>(STR("Attribute {}: {}\n"), i++, StringType(Name.GetCharArray().GetData()));
    }
}

/**
 * @brief Get the default modifier values for the UGameplayEffect objects
 * Warning: Has not type checks for correct classes
 * @param itemName Name of the GE Item Name
 * @param obj The UGameplayEffect object which default values are saved
 */
void GetDefaultModifiers(const std::wstring &itemName, UObject *obj)
{
    if (!obj)
    {
        Output::send<LogLevel::Verbose>(STR("GetDefaultModifiers: Object cannot be null!\n"));
        return;
    }

    auto *Cls = obj->GetClassPrivate();
    if (!Cls)
    {
        Output::send<LogLevel::Verbose>(STR("GetDefaultModifiers: Class not found!\n"));
        return;
    }

    auto *ModifiersProp = CastField<FArrayProperty>(Cls->FindProperty(FName(STR("Modifiers"))));
    if (!ModifiersProp)
    {
        Output::send<LogLevel::Verbose>(STR("GetDefaultModifiers: No Modifiers property found!\n"));
        return;
    }

    RC::Unreal::TArray<FGameplayModifierInfo> *ModifierPtr = ModifiersProp->ContainerPtrToValuePtr<RC::Unreal::TArray<FGameplayModifierInfo>>(obj);

    FGEModifierConfig geConfig;
    geConfig.ItemName = itemName;
    FModifierAttribute currentAttribute;
    for (auto &Entry : *ModifierPtr)
    {
        auto &Name = Entry.Attribute.AttributeName;
        currentAttribute = FModifierAttribute(std::wstring(Name.GetCharArray().GetData()), Entry.ModifierMagnitude.ScalableFloatMagnitude.Value);
        geConfig.Modifiers.push_back(currentAttribute);
        Output::send<LogLevel::Verbose>(STR("[{}]Added Default Attribute {}: {}\n"), itemName, StringType(Name.GetCharArray().GetData()), Entry.ModifierMagnitude.ScalableFloatMagnitude.Value);
    }

    g_Default_GEModifierConfigs[itemName] = geConfig;
}

/**
 * @brief Patches all the items which are loaded by the config (LoadConfig())
 * @param reset Flag for resetting default values (default is false)
 */
void PatchItems(bool reset)
{
    Output::send<LogLevel::Verbose>(STR("Start Patching Items...\n\n"));

    // Base prefix used for gameplay effect default object names
    const std::wstring BaseClassName = L"/Script/Angelscript.Default__GE_";

    GEModifierConfigConfigMap &configList = g_GEModifierConfigs;
    if (reset)
    {
        configList = g_Default_GEModifierConfigs;
    }

    // Iterate all loaded GEModifier configs and apply them
    for (const auto &pair : configList)
    {
        const std::wstring &geName = pair.first;
        const FGEModifierConfig &config = pair.second;

        std::wstring fullPath = BaseClassName + geName;

        Output::send<LogLevel::Verbose>(STR("Looking for object: {}\n"), std::wstring(fullPath.begin(), fullPath.end()));

        // Try to find the object in memory
        RC::Unreal::UObject *obj = UObjectGlobals::StaticFindObject<RC::Unreal::UObject *>(nullptr, nullptr, fullPath.c_str());

        if (!obj)
        {
            Output::send<LogLevel::Verbose>(STR("Object not found: {}\n"), std::wstring(fullPath.begin(), fullPath.end()));
            continue;
        }

        // For every new Entry get the default values first!
        if (g_Default_GEModifierConfigs.find(geName) == g_Default_GEModifierConfigs.end())
        {
            Output::send<LogLevel::Verbose>(STR("Item was not already included!: {}\n"), geName);
            GetDefaultModifiers(geName, obj);
        }

        // Apply configuration
        ApplyConfigToEffect(config, obj);
    }
}

/**
 * @brief Reset all modified items back to default values
 */
void ResetItems()
{
    Output::send<LogLevel::Verbose>(STR("Resetting Items...\n\n"));
    PatchItems(true);
    // Maybe clear the g_Default_GEModifierConfigs here if reset was called
}