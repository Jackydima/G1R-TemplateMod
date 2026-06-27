#include "AttributePatcherBase.h"

AttributePatcherBase::AttributePatcherBase() {}

bool AttributePatcherBase::LoadConfig()
{
    try
    {
        // Maybe Safe this once!
        char buffer[MAX_PATH_LENGTH];
        GetModuleFileNameA(NULL, buffer, MAX_PATH_LENGTH);

        std::filesystem::path exeDir = std::filesystem::path(buffer).parent_path();
        std::filesystem::path configPath = exeDir / L"ue4ss/Mods/g1r-templateMod/";
        configPath /= this->m_IniFileName;

        if (!std::filesystem::exists(configPath))
        {
            Output::send<LogLevel::Verbose>(STR("{} not found at: {}\n"), this->m_IniFileName,
                                            configPath.wstring());
            return false;
        }

        Output::send<LogLevel::Verbose>(STR("Loading Config from: {}\n"),
                                        configPath.wstring());

        ini::IniFile config;
        config.load(configPath.string());

        // Iterate through all sections in the INI file
        for (const auto &sectionPair : config)
        {
            const std::string &itemName = sectionPair.first;
            const ini::IniSection &section = sectionPair.second;

            FAttributeConfig itemConfig;
            itemConfig.ItemName = std::wstring(itemName.begin(), itemName.end());

            // Parse all attributes in this section
            for (const auto &fieldPair : section)
            {
                const std::string &fieldName = fieldPair.first;
                const ini::IniField &fieldValue = fieldPair.second;

                auto seperator = fieldName.find(".") + 1;
                std::string attributeType = fieldName.substr(0, seperator);
                std::string attributeName = fieldName.substr(seperator);
                try
                {
                    float value = fieldValue.as<float>();
                    itemConfig.AttributeData.emplace_back(std::wstring(attributeName.begin(), attributeName.end()), std::wstring(attributeType.begin(), attributeType.end()), value);

                    //Output::send<LogLevel::Verbose>(STR("{}.{} > {} = {}\n"), itemConfig.ItemName,
                    //                                std::wstring(attributeType.begin(), attributeType.end()), std::wstring(attributeName.begin(), attributeName.end()), value);
                }
                catch (const std::exception)
                {
                    Output::send<LogLevel::Warning>(STR("Failed to parse modifier value for {}.{}: {}\n"),
                                                    itemConfig.ItemName, std::wstring(attributeType.begin(), attributeType.end()), std::wstring(attributeName.begin(), attributeName.end()));
                    continue;
                }
            }

            // Store the configuration
            this->m_AttributeConfigMap[itemConfig.ItemName] = itemConfig;
        }

        Output::send<LogLevel::Verbose>(STR("Successfully loaded {} item configurations\n"),
                                        this->m_AttributeConfigMap.size());
    }
    catch (const std::exception)
    {
        Output::send<LogLevel::Error>(STR("Error loading {}\n"), this->m_IniFileName);
        return false;
    }

    return true;
}

void AttributePatcherBase::PatchItems(bool reset)
{
    Output::send<LogLevel::Verbose>(STR("Start Patching Items...\n\n"));

    // Base prefix used for gameplay objItem default object names
    AttributeConfigMap &configList = this->m_AttributeConfigMap;
    if (reset)
    {
        configList = this->m_Default_AttributeConfigMap;
    }

    // Iterate all loaded item configs and apply them
    for (const auto &pair : configList)
    {
        const std::wstring &itemName = pair.first;
        const FAttributeConfig &config = pair.second;

        std::wstring fullPath = this->m_BaseClassName + itemName;

        Output::send<LogLevel::Verbose>(STR("Looking for object: {}\n"), fullPath);

        // Try to find the object in memory
        RC::Unreal::UObject *obj = UObjectGlobals::StaticFindObject<RC::Unreal::UObject *>(nullptr, nullptr, fullPath.c_str());

        if (!obj)
        {
            Output::send<LogLevel::Verbose>(STR("Object not found: {}\n"), fullPath);
            continue;
        }

        // For every new Entry get the default values first!
        if (this->m_Default_AttributeConfigMap.find(itemName) == this->m_Default_AttributeConfigMap.end())
        {
            Output::send<LogLevel::Verbose>(STR("Item was not already included!: {}\n"), itemName);
            GetDefaultAttributes(itemName, obj);
        }

        // Apply configuration
        ApplyPatchOnItem(config, obj);
    }
}

void AttributePatcherBase::ResetTemplates()
{
    PatchItems(true);
}

AttributeConfigMap &AttributePatcherBase::GetConfigMap()
{
    return this->m_AttributeConfigMap;
}

AttributeConfigMap &AttributePatcherBase::GetDefaultConfigMap()
{
    return this->m_Default_AttributeConfigMap;
}

void AttributePatcherBase::ResetConfig()
{
    this->m_AttributeConfigMap.clear();
}