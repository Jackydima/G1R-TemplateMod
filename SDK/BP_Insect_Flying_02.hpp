#ifndef UE4SS_SDK_BP_Insect_Flying_02_HPP
#define UE4SS_SDK_BP_Insect_Flying_02_HPP

class ABP_Insect_Flying_02_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UNiagaraComponent* Fireflies;                                               // 0x0298 (size: 0x8)
    class UBillboardComponent* Icon;                                                  // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh_BoxBounds;                                 // 0x02A8 (size: 0x8)
    class UNiagaraComponent* Insect;                                                  // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh_BoxSize;                                   // 0x02B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C0 (size: 0x8)
    int32 Amounts of Insects;                                                         // 0x02C8 (size: 0x4)
    double SpeedLimit;                                                                // 0x02D0 (size: 0x8)
    double Min Vel;                                                                   // 0x02D8 (size: 0x8)
    double Max Vel;                                                                   // 0x02E0 (size: 0x8)
    double Min Size;                                                                  // 0x02E8 (size: 0x8)
    double Max Size;                                                                  // 0x02F0 (size: 0x8)
    double RepelInsectDistance;                                                       // 0x02F8 (size: 0x8)
    double RepelInsectStrength;                                                       // 0x0300 (size: 0x8)
    double RepelRadius;                                                               // 0x0308 (size: 0x8)
    double RepelStrength;                                                             // 0x0310 (size: 0x8)
    double Distance To Activate;                                                      // 0x0318 (size: 0x8)
    FVector BoxSize;                                                                  // 0x0320 (size: 0x18)
    FVector BoxBounds;                                                                // 0x0338 (size: 0x18)
    bool BoxSize Visibility;                                                          // 0x0350 (size: 0x1)
    bool BoxBounds Visibility;                                                        // 0x0351 (size: 0x1)
    bool ReActivate;                                                                  // 0x0352 (size: 0x1)
    bool OverrideParameters;                                                          // 0x0353 (size: 0x1)
    bool Rain / Night Interaction;                                                    // 0x0354 (size: 0x1)
    bool Fireflies at Night;                                                          // 0x0355 (size: 0x1)
    class ABP_Insect_Controller_C* Insect Controller;                                 // 0x0358 (size: 0x8)

    void Parameters();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Rain / Night Event(bool Is Rain, bool Is Night);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_Insect_Flying_02(int32 EntryPoint);
}; // Size: 0x360

#endif
