#pragma once

#include <Mod/CppUserModBase.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/UObject.hpp>
#include <Unreal/FProperty.hpp>
#include <Unreal/Script.hpp>

#include <filesystem>
#include <windows.h>
#include <memory>

#include "proxy/GamePlayEffect_Proxy.hpp"
#include "thirdparty/inicpp.h"
#include "AttributeConfig.h"
#include "WeaponAttributePatcher.h"
#include "GEAttributePatcher.h"

using namespace RC;
using namespace RC::Unreal;

bool LoadConfig();
void PrintModifiers(UObject *obj);
void PatchItems(bool reset = false);
void ResetItems();
