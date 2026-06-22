#pragma once

#include "AttributePatcherBase.h"

class SpellAttributePatcher : public AttributePatcherBase
{
private:

    void ApplySpellDefinition(const FAttributeConfig &config, UObject *objItem);
    void ApplySpellConfig(const FAttributeConfig &config, UObject *objItem);
    
public:
    SpellAttributePatcher();
    ~SpellAttributePatcher();

    void ApplyPatchOnItem(const FAttributeConfig &config, UObject *objItem) override;
    void GetDefaultAttributes(std::wstring itemName, UObject *obj) override;
};