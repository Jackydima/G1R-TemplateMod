#ifndef UE4SS_SDK_PDA_FluxSurfacePreset_HPP
#define UE4SS_SDK_PDA_FluxSurfacePreset_HPP

class UPDA_FluxSurfacePreset_C : public UPrimaryDataAsset
{
    TSoftObjectPtr<UObject> ApplyTarget;                                              // 0x0030 (size: 0x28)
    double Clarity;                                                                   // 0x0058 (size: 0x8)
    FLinearColor Scattering;                                                          // 0x0060 (size: 0x10)
    FLinearColor Absorption;                                                          // 0x0070 (size: 0x10)
    FLinearColor Overlay;                                                             // 0x0080 (size: 0x10)
    FLinearColor Behind;                                                              // 0x0090 (size: 0x10)
    double PhaseG;                                                                    // 0x00A0 (size: 0x8)

    void SetEditorOwner(class AActor* Input);
    void SetSurfaceColor(TArray<class UMaterialInstanceDynamic*>& Materials, FString Postfix);
    void LoadFromMaterial(class UMaterialInstanceDynamic* Source);
    void ApplyToSurfaceMaterials();
    void ApplyMaterial(TArray<class UMaterialInstanceDynamic*>& MaterialInstances, FString Postfix);
}; // Size: 0xA8

#endif
