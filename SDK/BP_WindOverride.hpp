#ifndef UE4SS_SDK_BP_WindOverride_HPP
#define UE4SS_SDK_BP_WindOverride_HPP

class ABP_WindOverride_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0298 (size: 0x8)
    class UArrowComponent* arrow;                                                     // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    double Wind Spawn Multiplier;                                                     // 0x02B8 (size: 0x8)
    bool Override Direction;                                                          // 0x02C0 (size: 0x1)
    class ABP_Wind_Particles_C* Wind BP;                                              // 0x02C8 (size: 0x8)
    int32 Priority;                                                                   // 0x02D0 (size: 0x4)
    bool Use Debris;                                                                  // 0x02D4 (size: 0x1)
    TEnumAsByte<WindParticleType::Type> Wind Type;                                    // 0x02D5 (size: 0x1)
    bool Enable Rain Override;                                                        // 0x02D6 (size: 0x1)

    void Get Wind BP(class ABP_Wind_Particles_C*& Wind BP);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_WindOverride(int32 EntryPoint);
}; // Size: 0x2D7

#endif
