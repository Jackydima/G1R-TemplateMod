#pragma once

#include "AttributePatcherBase.h"

class GEAttributePatcher : public AttributePatcherBase
{
private:
public:
    GEAttributePatcher();
    ~GEAttributePatcher();

    void ApplyPatchOnItem(const FAttributeConfig &config, UObject *objItem) override;
    void GetDefaultAttributes(std::wstring itemName, UObject *obj) override;
};