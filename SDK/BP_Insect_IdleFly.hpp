#ifndef UE4SS_SDK_BP_Insect_IdleFly_HPP
#define UE4SS_SDK_BP_Insect_IdleFly_HPP

class ABP_Insect_IdleFly_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UNiagaraComponent* Fireflies;                                               // 0x0298 (size: 0x8)
    class UBillboardComponent* Icon;                                                  // 0x02A0 (size: 0x8)
    class UNiagaraComponent* Insect;                                                  // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    FVector BoxSize;                                                                  // 0x02B8 (size: 0x18)
    int32 Amount of Insects;                                                          // 0x02D0 (size: 0x4)
    double Height Max;                                                                // 0x02D8 (size: 0x8)
    double Height Min;                                                                // 0x02E0 (size: 0x8)
    double Min Size;                                                                  // 0x02E8 (size: 0x8)
    double Max Size;                                                                  // 0x02F0 (size: 0x8)
    double Distance To Activate;                                                      // 0x02F8 (size: 0x8)
    double Distance To Player;                                                        // 0x0300 (size: 0x8)
    class UStaticMeshComponent* SM_BoxSize;                                           // 0x0308 (size: 0x8)
    bool BoxSize Visibility;                                                          // 0x0310 (size: 0x1)
    bool ReActivate;                                                                  // 0x0311 (size: 0x1)
    bool Rain / Night Interaction;                                                    // 0x0312 (size: 0x1)
    bool Fireflies at Night;                                                          // 0x0313 (size: 0x1)
    class ABP_Insect_Controller_C* Insect Controller;                                 // 0x0318 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Rain / Night Event(bool Is Rain, bool Is Night);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_Insect_IdleFly(int32 EntryPoint);
}; // Size: 0x320

#endif
