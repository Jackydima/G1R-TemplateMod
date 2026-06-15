#ifndef UE4SS_SDK_BPL_LightSetupUtils_HPP
#define UE4SS_SDK_BPL_LightSetupUtils_HPP

class UBPL_LightSetupUtils_C : public UBlueprintFunctionLibrary
{

    void SetupLightWithIntensity(double Intensity, FS_TorchData TorchData, TArray<class ULocalLightComponent*>& LightSources, class UObject* __WorldContext);
    void CollectLight(class ULocalLightComponent* LightSource, class UObject* __WorldContext, FS_TorchData& TorchData);
    void SetupLight(FS_TorchData TorchData, TArray<class ULocalLightComponent*>& LightSources, class UObject* __WorldContext);
}; // Size: 0x28

#endif
