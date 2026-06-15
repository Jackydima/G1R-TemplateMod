#ifndef UE4SS_SDK_BP_PostProcessFeaturesComponent_HPP
#define UE4SS_SDK_BP_PostProcessFeaturesComponent_HPP

class UBP_PostProcessFeaturesComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    TArray<FWeightedBlendable> PostProcesses;                                         // 0x00A8 (size: 0x10)
    class APostProcessVolume* Volume;                                                 // 0x00B8 (size: 0x8)

    void UpdatePostProcesses();
    void ReceiveBeginPlay();
    void OnAnyStateChanged(bool IsActive);
    void ExecuteUbergraph_BP_PostProcessFeaturesComponent(int32 EntryPoint);
}; // Size: 0xC0

#endif
