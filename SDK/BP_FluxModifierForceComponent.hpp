#ifndef UE4SS_SDK_BP_FluxModifierForceComponent_HPP
#define UE4SS_SDK_BP_FluxModifierForceComponent_HPP

class UBP_FluxModifierForceComponent_C : public UBP_FluxModifierComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UMaterialInstanceDynamic* MaterialInstance;                                 // 0x0280 (size: 0x8)
    double Intensity;                                                                 // 0x0288 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x0290 (size: 0x8)
    double MinVelocity;                                                               // 0x0298 (size: 0x8)

    void GetActiveMaterials(TArray<class UMaterialInstanceDynamic*>& MaterialInstance);
    void InitializeModifier();
    void RenderModifier(class UCanvas* Canvas, class AActor* Simulation);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_FluxModifierForceComponent(int32 EntryPoint);
}; // Size: 0x2A0

#endif
