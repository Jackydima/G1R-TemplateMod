#ifndef UE4SS_SDK_BP_Insect_Area_Bound_02_HPP
#define UE4SS_SDK_BP_Insect_Area_Bound_02_HPP

class ABP_Insect_Area_Bound_02_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UBillboardComponent* Icon;                                                  // 0x0298 (size: 0x8)
    class UNiagaraComponent* Insect;                                                  // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    double Distance To Activate;                                                      // 0x02B0 (size: 0x8)
    FVector BoxSize;                                                                  // 0x02B8 (size: 0x18)
    FVector BoxBounds;                                                                // 0x02D0 (size: 0x18)
    bool BoxSize Visibility;                                                          // 0x02E8 (size: 0x1)
    bool ReActivate;                                                                  // 0x02E9 (size: 0x1)
    bool BoxBounds Visibility;                                                        // 0x02EA (size: 0x1)
    int32 Amount of Insects;                                                          // 0x02EC (size: 0x4)
    double Speed Limit;                                                               // 0x02F0 (size: 0x8)
    double OffsetGround;                                                              // 0x02F8 (size: 0x8)
    double Min Vel;                                                                   // 0x0300 (size: 0x8)
    double Max Vel;                                                                   // 0x0308 (size: 0x8)
    double Min Size;                                                                  // 0x0310 (size: 0x8)
    double Max Size;                                                                  // 0x0318 (size: 0x8)
    double RepelStrength;                                                             // 0x0320 (size: 0x8)
    double RepelRadius;                                                               // 0x0328 (size: 0x8)
    double RepelInsectDistance;                                                       // 0x0330 (size: 0x8)
    double RepelInsectStrength;                                                       // 0x0338 (size: 0x8)
    class UStaticMeshComponent* SM_BoxSize;                                           // 0x0340 (size: 0x8)
    class UStaticMeshComponent* SM_BoxBounds;                                         // 0x0348 (size: 0x8)

    void Parameters();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Insect_Area_Bound_02(int32 EntryPoint);
}; // Size: 0x350

#endif
