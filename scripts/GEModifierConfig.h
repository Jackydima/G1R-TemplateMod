#pragma once

#include <string>
#include <vector>
#include <map>

/**
 * @struct FModifierAttribute
 * @brief Represents a single modifier attribute for a gameplay effect
 */
struct FModifierAttribute
{
    std::wstring AttributeName; ///< Name of the attribute to modify (e.g., "MaxMana")
    float Value;                ///< Value of the modifier

    FModifierAttribute() : AttributeName(L""), Value(0.0f) {}
    FModifierAttribute(const std::wstring &name, float val)
        : AttributeName(name), Value(val) {}
};

/**
 * @struct FGEModifierConfig
 * @brief Configuration for a single item GameplayEffect with its modifiers
 */
struct FGEModifierConfig
{
    std::wstring ItemName;                     ///< Item-Name (e.g., "Kdf_Armor_L")
    std::vector<FModifierAttribute> Modifiers; ///< List of modifier attributes

    FGEModifierConfig() : ItemName(L"") {}
    FGEModifierConfig(const std::wstring &name)
        : ItemName(name) {}
};

/**
 * @typedef GEModifierConfigConfigMap
 * @brief Map of item name to its configuration
 */
using GEModifierConfigConfigMap = std::map<std::wstring, FGEModifierConfig>;
