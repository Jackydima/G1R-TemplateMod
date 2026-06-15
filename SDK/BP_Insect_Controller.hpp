#ifndef UE4SS_SDK_BP_Insect_Controller_HPP
#define UE4SS_SDK_BP_Insect_Controller_HPP

class ABP_Insect_Controller_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    bool Is Night;                                                                    // 0x02A0 (size: 0x1)
    bool Is Rain;                                                                     // 0x02A1 (size: 0x1)
    TArray<class ABP_Insect_Flying_02_C*> Flying Insect Actors;                       // 0x02A8 (size: 0x10)
    TArray<class ABP_Insect_IdleFly_C*> Idle Insect Actors;                           // 0x02B8 (size: 0x10)

    void Call Rain or Night Change(class AActor* Insect Actor);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Register Insect Actor(class AActor* Insect Actor);
    void Unregister Insect Actor(class AActor* Insect Actor);
    void ExecuteUbergraph_BP_Insect_Controller(int32 EntryPoint);
}; // Size: 0x2C8

#endif
