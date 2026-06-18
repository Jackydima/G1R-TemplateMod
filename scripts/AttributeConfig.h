#pragma once

#include <string>
#include <vector>
#include <map>

/**
 * @struct FAttributeData
 * @brief Represents a single modifier attribute for a gameplay effect
 */
struct FAttributeData
{
    std::wstring AttributeName; ///< Name of the attribute to modify (e.g., "MaxMana")
    std::wstring AttributeType; ///< Type of the attribute to modify (e.g., "Modifier" or "Damage")
    float Value;                ///< Value of the modifier

    FAttributeData() : AttributeName(L""), AttributeType(L""), Value(0.0f) {}
    FAttributeData(const std::wstring &name, const std::wstring &type, float val)
        : AttributeName(name), AttributeType(type), Value(val) {}
};

/**
 * @struct FAttributeConfig
 * @brief Configuration for a single item of Attribute(string,float)
 */
struct FAttributeConfig
{
    std::wstring ItemName;                     ///< Item-Name (e.g., "Kdf_Armor_L")
    std::vector<FAttributeData> AttributeData; ///< List of modifier attributes

    FAttributeConfig() : ItemName(L"") {}
    FAttributeConfig(const std::wstring &name)
        : ItemName(name) {}
};

/**
 * @typedef AttributeConfigMap
 * @brief Map of item name to its configuration
 */
using AttributeConfigMap = std::map<std::wstring, FAttributeConfig>;
