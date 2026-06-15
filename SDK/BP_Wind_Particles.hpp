#ifndef UE4SS_SDK_BP_Wind_Particles_HPP
#define UE4SS_SDK_BP_Wind_Particles_HPP

class ABP_Wind_Particles_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UNiagaraComponent* P_Wind;                                                  // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    double Water Height;                                                              // 0x02A8 (size: 0x8)
    double Disabled Water Value;                                                      // 0x02B0 (size: 0x8)
    TArray<class ABP_WindOverride_C*> Override BPs;                                   // 0x02B8 (size: 0x10)
    int32 Current Priority;                                                           // 0x02C8 (size: 0x4)
    class ABP_WindOverride_C* Current Override BP;                                    // 0x02D0 (size: 0x8)
    class UCurveFloat* WindCurve;                                                     // 0x02D8 (size: 0x8)

    void Get Normalized Wind(double& Normalized Wind);
    void Set Particle Parameters();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Update Biome(TEnumAsByte<E_Biome::Type> New Biome);
    void Register Wind Override(class ABP_WindOverride_C* Override BP);
    void Unregister Wind Override(class ABP_WindOverride_C* Override BP);
    void ExecuteUbergraph_BP_Wind_Particles(int32 EntryPoint);
}; // Size: 0x2E0

#endif
