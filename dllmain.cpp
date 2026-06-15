
#include <Mod/CppUserModBase.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/UObject.hpp>
#include <Unreal/FProperty.hpp>
#include <Unreal/Script.hpp>
#include <Unreal/UObjectGlobals.hpp>

#include "GamePlayEffect_Proxy.hpp"

using namespace RC;
using namespace RC::Unreal;

bool active = false;

void PatchGameplayEffect(UObject *obj)
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

    for (auto &Entry : *ModifierPtr)
    {
        auto &Name = Entry.Attribute.AttributeName;

        if (Name == STR("MaxMana"))
        {
            Output::send<LogLevel::Verbose>(
                STR("Old MaxMana = {}\n"),
                Entry.ModifierMagnitude
                    .ScalableFloatMagnitude
                    .Value);

            Entry.ModifierMagnitude
                .ScalableFloatMagnitude
                .Value = 100.0f;

            Output::send<LogLevel::Verbose>(
                STR("New MaxMana = {}\n"),
                Entry.ModifierMagnitude
                    .ScalableFloatMagnitude
                    .Value);
        }
    }
}

std::pair<int, int> g_HookIds = {};

class G1RMod : public RC::CppUserModBase
{
public:
    G1RMod() : CppUserModBase()
    {
        ModName = STR("G1RMod");
        ModVersion = STR("1.0");
        ModDescription = STR("This is my awesome mod");
        ModAuthors = STR("UE4SS Team");
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
        RC::Unreal::Hook::GlobalCallbackId Id = RC::Unreal::Hook::RegisterStaticConstructObjectPostCallback(
            [](RC::Unreal::Hook::TCallbackIterationData<UObject *> &data,
               const RC::Unreal::FStaticConstructObjectParameters &params)
            {
                UObject *obj = data.GetOriginalFunctionCallResult();

                if (obj)
                {
                    if (obj->GetName().contains(STR("GE_Kdf_Armor_L")))
                    {
                        Output::send<LogLevel::Verbose>(STR("Found the \n\n"));
                        PatchGameplayEffect(obj);
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

        PatchGameplayEffect(GE_Kdf_Armor_L);
    }

    auto on_program_start() -> void override
    {
        // Hook a function that triggers once when entering a level/gameplay state
        g_HookIds = UObjectGlobals::RegisterHook(STR("/Script/Engine.PlayerController:ClientRestart"), [](UnrealScriptFunctionCallableContext &Context, void *CustomData) {}, [](UnrealScriptFunctionCallableContext &Context, void *CustomData)
                                                 {

        // Patch should be done here already, since the default template data already exists
        static bool bPatchDone = false;
        if (bPatchDone) return;

        auto GE_Kdf_Armor_L = UObjectGlobals::StaticFindObject<RC::Unreal::UObject*>(nullptr, nullptr, STR("/Script/Angelscript.Default__GE_Kdf_Armor_L"));

        PatchGameplayEffect(GE_Kdf_Armor_L);
        bPatchDone = true;
        
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