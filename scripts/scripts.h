#include <Mod/CppUserModBase.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/UObject.hpp>
#include <Unreal/FProperty.hpp>
#include <Unreal/Script.hpp>
#include <Unreal/UObjectGlobals.hpp>

#include <filesystem>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "GamePlayEffect_Proxy.hpp"
#include "thirdparty/inicpp.h"
#include "GEModifierConfig.h"

using namespace RC;
using namespace RC::Unreal;

// Global storage for loaded item configurations
extern GEModifierConfigConfigMap g_GEModifierConfigs;
extern GEModifierConfigConfigMap g_Default_GEModifierConfigs;

bool LoadConfig();
void PrintModifiers(UObject *obj);
void PatchItems(bool reset = false);
void GetDefaultModifiers(const std::wstring &itemName, UObject *obj);
void ResetItems();
void ApplyConfigToEffect(const FGEModifierConfig &config, UObject *effect);
