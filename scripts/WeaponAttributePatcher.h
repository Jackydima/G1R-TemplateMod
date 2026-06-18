#pragma once

#include "AttributePatcherBase.h"
#include "WeaponDefinition_Proxy.hpp"

class WeaponAttributePatcher : public AttributePatcherBase
{
private:
public:
    WeaponAttributePatcher();
    ~WeaponAttributePatcher();

    void ApplyPatchOnItem(const FAttributeConfig &config, UObject *objItem) override;
    void GetDefaultAttributes(std::wstring itemName, UObject *obj) override;
};