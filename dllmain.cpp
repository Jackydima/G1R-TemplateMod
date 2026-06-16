
#include <Mod/CppUserModBase.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/UObject.hpp>
#include <Unreal/FProperty.hpp>
#include <Unreal/Script.hpp>
#include <Unreal/UObjectGlobals.hpp>

#include "GamePlayEffect_Proxy.hpp"
#include "scripts/scripts.h"

using namespace RC;
using namespace RC::Unreal;

std::pair<int, int> g_HookIds = {};
bool g_bPatchDone = false;

class G1RMod : public RC::CppUserModBase
{
public:
    G1RMod() : CppUserModBase()
    {
        ModName = STR("G1RMod");
        ModVersion = STR("1.0");
        ModDescription = STR("Jacky Dima's Template Mod");
        ModAuthors = STR("Jackydima");
        // Do not change this unless you want to target a UE4SS version
        // other than the one you're currently building with somehow.
        // ModIntendedSDKVersion = STR("2.6");

        Output::send<LogLevel::Verbose>(STR("G1RMod says hello\n"));
    }

    ~G1RMod() override
    {
    }

    auto on_update() -> void override
    {
    }

    auto on_unreal_init() -> void override
    {
        /*RC::Unreal::Hook::GlobalCallbackId Id = RC::Unreal::Hook::RegisterStaticConstructObjectPostCallback(
            [](RC::Unreal::Hook::TCallbackIterationData<UObject *> &data,
               const RC::Unreal::FStaticConstructObjectParameters &params)
            {
                UObject *obj = data.GetOriginalFunctionCallResult();

                if (obj)
                {
                    if (obj->GetName().contains(STR("GE_Kdf_Armor_L")))
                    {
                        Output::send<LogLevel::Verbose>(STR("Found the \n\n"));
                        PrintModifiers(obj);
                    }
                }
            },
            RC::Unreal::Hook::FCallbackOptions{
                .bOnce = false,
                .bReadonly = false,
                .OwnerModName = STR("G1RMod"),
                .HookName = STR("PostStaticConstructObjectCallback")});

        auto GE_Kdf_Armor_L = UObjectGlobals::StaticFindObject<UObject *>(nullptr, nullptr, STR("/Script/Angelscript.Default__GE_Kdf_Armor_L"));
        Output::send<LogLevel::Verbose>(STR("Trying instant Patch\n"));

        PrintModifiers(GE_Kdf_Armor_L);*/

        Output::send<LogLevel::Verbose>(STR("Starting to load the config...\n"));
        if (!LoadConfig())
        {
            Output::send<LogLevel::Verbose>(STR("Failed to load config :(\n"));
        }

        register_keydown_event(RC::Input::F2, []()
                               {
            if (!g_bPatchDone)
                return;
            
            Output::send<LogLevel::Verbose>(STR("HotReloaded Config and Patches\n"));
            ResetItems();
            LoadConfig();
            PatchItems(); });
    }

    auto on_program_start() -> void override
    {
        // Hook a function that triggers once when entering a level/gameplay state
        g_HookIds = UObjectGlobals::RegisterHook(STR("/Script/Engine.PlayerController:ClientRestart"), [](UnrealScriptFunctionCallableContext &Context, void *CustomData) {}, [](UnrealScriptFunctionCallableContext &Context, void *CustomData)
                                                 {                                 
            // Patch should be done here already, since the default template data already exists

            if (g_bPatchDone)
                return;
                            
            PatchItems();

            // Testing Things
            auto GE_Kdf_Armor_L = UObjectGlobals::StaticFindObject<RC::Unreal::UObject *>(nullptr, nullptr, STR("/Script/Angelscript.Default__GE_Kdf_Armor_L"));
            PrintModifiers(GE_Kdf_Armor_L);

            g_bPatchDone = true;
            UObjectGlobals::UnregisterHook(STR("/Script/Engine.PlayerController:ClientRestart"), g_HookIds); }, nullptr);
    }
};

#define G1RMOD_API __declspec(dllexport)
extern "C"
{
    G1RMOD_API RC::CppUserModBase *start_mod()
    {
        return new G1RMod();
    }

    G1RMOD_API void uninstall_mod(RC::CppUserModBase *mod)
    {
        delete mod;
    }
}