#ifndef UE4SS_SDK_BPC_ActivablePostProcessComponent_HPP
#define UE4SS_SDK_BPC_ActivablePostProcessComponent_HPP

class UBPC_ActivablePostProcessComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    class APostProcessVolume* Post Process Volume;                                    // 0x00A8 (size: 0x8)
    class AStaticMeshActor* Box;                                                      // 0x00B0 (size: 0x8)
    TSet<AActor*> ActorsInRange;                                                      // 0x00B8 (size: 0x50)
    bool IsRegistered;                                                                // 0x0108 (size: 0x1)

    int32 GetPriority();
    void ReceiveBeginPlay();
    void BP_Disable();
    void BP_Activate();
    void On Begin Actor Overlap(class AActor* OverlappedActor, class AActor* OtherActor);
    void On End Actor Overlap(class AActor* OverlappedActor, class AActor* OtherActor);
    void Evaluate Player();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnPlayerPawnChanged_Event(class APawn* Pawn);
    void ExecuteUbergraph_BPC_ActivablePostProcessComponent(int32 EntryPoint);
}; // Size: 0x109

#endif
