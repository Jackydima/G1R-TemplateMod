#ifndef UE4SS_SDK_BP_Rain_Spline_HPP
#define UE4SS_SDK_BP_Rain_Spline_HPP

class ABP_Rain_Spline_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UNiagaraComponent* Particle System;                                         // 0x0298 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    double Water Drop - Spawn Mult;                                                   // 0x02B0 (size: 0x8)
    double Splash - Spawn Mult;                                                       // 0x02B8 (size: 0x8)
    double Drip Emitters - Spawn Mult;                                                // 0x02C0 (size: 0x8)
    double Water Dripping - Spawn Mult;                                               // 0x02C8 (size: 0x8)
    bool Preview Niagara System;                                                      // 0x02D0 (size: 0x1)
    class AGothic_Ultra_Dynamic_Controller_C* Gothic Ultra Dynamic Sky;               // 0x02D8 (size: 0x8)
    double Particle System Height Offset;                                             // 0x02E0 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_Rain_Spline(int32 EntryPoint);
}; // Size: 0x2E8

#endif
