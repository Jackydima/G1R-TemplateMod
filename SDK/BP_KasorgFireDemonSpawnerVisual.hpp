#ifndef UE4SS_SDK_BP_KasorgFireDemonSpawnerVisual_HPP
#define UE4SS_SDK_BP_KasorgFireDemonSpawnerVisual_HPP

class ABP_KasorgFireDemonSpawnerVisual_C : public AKasorgFireDemonSpawnerVisual
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)
    class USceneComponent* DefaultSpawnDirection2;                                    // 0x0338 (size: 0x8)
    class AGothicNPCState* Character State2;                                          // 0x0340 (size: 0x8)

    void GetCloserPlayerLocation(FVector& CloserDistance);
    void OnCharacterSpawned2(class AGothicNPCState* CharacterState, class AGothicCharacter* Character);
    void ExecuteUbergraph_BP_KasorgFireDemonSpawnerVisual(int32 EntryPoint);
}; // Size: 0x348

#endif
