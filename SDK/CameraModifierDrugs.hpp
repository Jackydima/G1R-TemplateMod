#ifndef UE4SS_SDK_CameraModifierDrugs_HPP
#define UE4SS_SDK_CameraModifierDrugs_HPP

class UCameraModifierDrugs_C : public UGothicCameraModifier
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0048 (size: 0x8)
    class UMaterialInstanceDynamic* MaterialInstance;                                 // 0x0050 (size: 0x8)
    float Weight;                                                                     // 0x0058 (size: 0x4)
    class UMaterialInterface* MaterialInstanceParent;                                 // 0x0060 (size: 0x8)
    double Effect Level Value;                                                        // 0x0068 (size: 0x8)

    void BlueprintModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, FPostProcessSettings& PostProcessSettings);
    void Initialize();
    void SetEffectLevelValue(double EffectLevelValue);
    void Deinitialize();
    void ExecuteUbergraph_CameraModifierDrugs(int32 EntryPoint);
}; // Size: 0x70

#endif
