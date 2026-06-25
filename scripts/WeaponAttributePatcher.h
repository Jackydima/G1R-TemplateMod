#pragma once

#include "AttributePatcherBase.h"

class WeaponAttributePatcher : public AttributePatcherBase
{
private:
    bool m_InitiatedRequirements;
    FGameplayAttribute m_STRAttribute;
    FGameplayAttribute m_DEXAttribute;
    bool InitReqFields();
    void ApplyRequirements(const FAttributeData &configData, const std::wstring &itemName, RC::Unreal::UObject *objItem);
    void ApplyDamageValues(const FAttributeData &configData, const std::wstring &itemName, RC::Unreal::UObject *objItem);

public:
    WeaponAttributePatcher();
    ~WeaponAttributePatcher();

    void ApplyPatchOnItem(const FAttributeConfig &config, UObject *objItem) override;
    void GetDefaultAttributes(std::wstring itemName, UObject *obj) override;
};