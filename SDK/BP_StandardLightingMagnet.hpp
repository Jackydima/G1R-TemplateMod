#ifndef UE4SS_SDK_BP_StandardLightingMagnet_HPP
#define UE4SS_SDK_BP_StandardLightingMagnet_HPP

class ABP_StandardLightingMagnet_C : public AWeatherLightingMagnet_AS
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UNiagaraComponent* P_WeatherLightning_LongDistance;                         // 0x02E8 (size: 0x8)
    class UNiagaraComponent* P_WeatherLightning;                                      // 0x02F0 (size: 0x8)
    TArray<class AActor*> Actors;                                                     // 0x02F8 (size: 0x10)
    FFXSystemSpawnParameters Spawn Params;                                            // 0x0308 (size: 0x70)
    bool Enable Rock Debris;                                                          // 0x0378 (size: 0x1)
    bool Enable Tree Debris;                                                          // 0x0379 (size: 0x1)
    bool Enable Lightning Impact;                                                     // 0x037A (size: 0x1)
    bool Thick Long Distance Lightning;                                               // 0x037B (size: 0x1)
    FGameplayTag FXTag;                                                               // 0x037C (size: 0x8)
    class AUltra_Dynamic_Sky_C* UDS;                                                  // 0x0388 (size: 0x8)

    void SpawnLighting();
    void OnEndThunderStrikeFX();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_StandardLightingMagnet(int32 EntryPoint);
}; // Size: 0x390

#endif
