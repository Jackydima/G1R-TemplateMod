#pragma once

#include <Mod/CppUserModBase.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/UObject.hpp>
#include <Unreal/FProperty.hpp>
#include <Unreal/Script.hpp>

#include <filesystem>
#include <windows.h>

#include "GamePlayEffect_Proxy.hpp"
#include "WeaponDefinition_Proxy.hpp"
#include "thirdparty/inicpp.h"
#include "AttributeConfig.h"

#define MAX_PATH_LENGTH 256

using namespace RC;
using namespace RC::Unreal;

/**
 * @class AttributePatcherBase
 * @brief Base Class for all Template File Patcher
 */
class AttributePatcherBase
{
protected:
    AttributeConfigMap m_AttributeConfigMap;
    AttributeConfigMap m_Default_AttributeConfigMap;
    std::wstring m_IniFileName;
    std::wstring m_BaseClassName = L"/Script/Angelscript.Default__";

public:
    AttributePatcherBase();
    virtual ~AttributePatcherBase() = default;

    /**
     * @brief Loads weapon configuration from INI file
     * The INI file should be in the same directory as the DLL with the structure:
     * Example:
     * [ItMw_2H_Sword_Heavy_04]
     * Damage.Item.Damage.Physical.Edge = 100.0
     * Damage.Item.Damage.Elemental.Fire = 100.0
     * or
     * [Kdf_Armor_L]
     * Modifier.MaxMana = 100.0
     * Modifier.MaxHealth = 100.0
     * Modifier.Resistance_Edge = 100.0
     * @return returns bool for success
     */
    bool LoadConfig();

    AttributeConfigMap &GetConfigMap();
    AttributeConfigMap &GetDefaultConfigMap();

    /**
     * @brief Resets the config build from the ini file
     */
    void ResetConfig();

    /**
     * @brief Patches all the items found in the corresponding configuration setup
     * @param reset flag used to determine if all items should be reverted
     */
    void PatchItems(bool reset = false);

    /**
     * @brief Reverts the item template back to its original values of the game before
     * the patch
     */
    void ResetTemplates();

    /**
     * @brief Applies configuration modifiers to a single object
     *
     * @param config The item configuration containing modifiers
     * @param objItem The Items object to modify
     */
    virtual void ApplyPatchOnItem(const FAttributeConfig &config, UObject *objItem) = 0;

    /**
     * @brief Gets and saves the default attributes for an item
     *
     * @param itemName The items name
     * @param obj The target item to find the default attributes
     */
    virtual void GetDefaultAttributes(std::wstring itemName, UObject *obj) = 0;
};