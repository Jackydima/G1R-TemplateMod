#ifndef UE4SS_SDK_BP_Orc_Brazier_Rocks_HPP
#define UE4SS_SDK_BP_Orc_Brazier_Rocks_HPP

class ABP_Orc_Brazier_Rocks_C : public ABP_BaseFlame_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0F70 (size: 0x8)
    class UCapsuleNavObstacleComponent* CapsuleNavObstacle;                           // 0x0F78 (size: 0x8)
    class UStaticMeshComponent* SM_Orc_Brazier_Rocks;                                 // 0x0F80 (size: 0x8)
    class UNiagaraSystem* BigOverflowVFX;                                             // 0x0F88 (size: 0x8)
    class UNiagaraSystem* BigOverflowToBaseVFX;                                       // 0x0F90 (size: 0x8)

    void CustomLazyInitialize();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Orc_Brazier_Rocks(int32 EntryPoint);
}; // Size: 0xF98

#endif
