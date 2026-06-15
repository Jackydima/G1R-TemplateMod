#ifndef UE4SS_SDK_BP_Orc_Brazier_Metalic_Green_HPP
#define UE4SS_SDK_BP_Orc_Brazier_Metalic_Green_HPP

class ABP_Orc_Brazier_Metalic_Green_C : public ABP_BaseFlame_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0F70 (size: 0x8)
    class UCapsuleNavObstacleComponent* CapsuleNavObstacle;                           // 0x0F78 (size: 0x8)
    class UStaticMeshComponent* SM_Orc_Brazier_Metalic;                               // 0x0F80 (size: 0x8)
    class UNiagaraSystem* GreenOverflowVFX;                                           // 0x0F88 (size: 0x8)
    class UNiagaraSystem* GreenOverflowToBaseVFX;                                     // 0x0F90 (size: 0x8)
    class UNiagaraSystem* GreenHitVFX;                                                // 0x0F98 (size: 0x8)
    class UNiagaraSystem* GreenRecoverVFX;                                            // 0x0FA0 (size: 0x8)
    class UMaterialInterface* OverrideMaterial;                                       // 0x0FA8 (size: 0x8)

    void SetCurrentSoundLoopBasedOnCurrentSize();
    void CustomLazyInitialize();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Orc_Brazier_Metalic_Green(int32 EntryPoint);
}; // Size: 0xFB0

#endif
