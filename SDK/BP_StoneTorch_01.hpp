#ifndef UE4SS_SDK_BP_StoneTorch_01_HPP
#define UE4SS_SDK_BP_StoneTorch_01_HPP

class ABP_StoneTorch_01_C : public ABP_BaseTorch_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0FA0 (size: 0x8)
    class UStaticMeshComponent* SM_GroundFireEmbers_06;                               // 0x0FA8 (size: 0x8)
    class UStaticMeshComponent* SM_GroundFireEmbers_05;                               // 0x0FB0 (size: 0x8)
    class UStaticMeshComponent* SM_GroundFireEmbers_04;                               // 0x0FB8 (size: 0x8)
    class UNiagaraComponent* Fire_Trigger;                                            // 0x0FC0 (size: 0x8)
    class UStaticMeshComponent* SM_GroundFireEmbers_03;                               // 0x0FC8 (size: 0x8)
    class UStaticMeshComponent* SM_GroundFireEmbers_02;                               // 0x0FD0 (size: 0x8)
    class UStaticMeshComponent* SM_GroundFireEmbers_01;                               // 0x0FD8 (size: 0x8)

    void GatherInteractables(TArray<class USceneComponent*>& Interactables);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_StoneTorch_01(int32 EntryPoint);
}; // Size: 0xFE0

#endif
