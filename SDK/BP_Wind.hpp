#ifndef UE4SS_SDK_BP_Wind_HPP
#define UE4SS_SDK_BP_Wind_HPP

class ABP_Wind_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UArrowComponent* arrow;                                                     // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    double WindStrength;                                                              // 0x02A8 (size: 0x8)
    double Level_1_Max;                                                               // 0x02B0 (size: 0x8)
    double Level_2_Max;                                                               // 0x02B8 (size: 0x8)
    bool Level1;                                                                      // 0x02C0 (size: 0x1)
    bool Level2;                                                                      // 0x02C1 (size: 0x1)
    bool Level3;                                                                      // 0x02C2 (size: 0x1)
    int32 CurrentWindLevel;                                                           // 0x02C4 (size: 0x4)
    double Target1;                                                                   // 0x02C8 (size: 0x8)
    double WindStrengthReductionFactor;                                               // 0x02D0 (size: 0x8)
    class AWindDirectionalSource* WindReference;                                      // 0x02D8 (size: 0x8)
    bool ActivateWind;                                                                // 0x02E0 (size: 0x1)
    bool ConstantTestWind;                                                            // 0x02E1 (size: 0x1)

    void CheckWind();
    void Wind Strength();
    void UserConstructionScript();
    void CheckLevel();
    void ReceiveBeginPlay();
    void WindStrengthEvent();
    void SetDirection();
    void ExecuteUbergraph_BP_Wind(int32 EntryPoint);
}; // Size: 0x2E2

#endif
