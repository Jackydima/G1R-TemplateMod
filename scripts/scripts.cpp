
#include "scripts.h"

using namespace RC;
using namespace RC::Unreal;

#define MAX_PATH_LENGTH 256

// Global storage for patcher configurations
std::vector<std::unique_ptr<AttributePatcherBase>> g_Patcher;

/**
 * @brief Loads item all configs from INI files
 */
bool LoadConfig()
{
    // May make them singletons...
    g_Patcher.push_back(
        std::make_unique<WeaponAttributePatcher>());

    g_Patcher.push_back(
        std::make_unique<GEAttributePatcher>());

    g_Patcher.push_back(
        std::make_unique<SpellAttributePatcher>());

    for (auto &patcher : g_Patcher)
    {
        patcher->LoadConfig();
    }

    return true;
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
 * @brief Patches all the items which are loaded by the config (LoadConfigGE())
 * @param reset Flag for resetting default values (default is false)
 */
void PatchItems(bool reset)
{
    Output::send<LogLevel::Verbose>(STR("Start Patching Items...\n\n"));

    for (auto &patcher : g_Patcher)
    {
        patcher->PatchItems();
    }
}

/**
 * @brief Reset all modified items back to default values
 */
void ResetItems()
{
    Output::send<LogLevel::Verbose>(STR("Resetting Items...\n\n"));

    for (auto &patcher : g_Patcher)
    {
        patcher->ResetTemplates();
        patcher->ResetConfig();
        patcher->LoadConfig();
    }
}