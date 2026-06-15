#ifndef UE4SS_SDK_BP_BurnDebuffEffectActor_HPP
#define UE4SS_SDK_BP_BurnDebuffEffectActor_HPP

class ABP_BurnDebuffEffectActor_C : public ABurnDebuffEffectActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)
    class UNiagaraComponent* BodyOnFireParticlesSystemComponent;                      // 0x0300 (size: 0x8)
    float BurnTimeline_BurnedValue_C14D95FD4D1C27C253C84AA38A9C1FFC;                  // 0x0308 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> BurnTimeline__Direction_C14D95FD4D1C27C253C84AA38A9C1FFC; // 0x030C (size: 0x1)
    class UTimelineComponent* BurnTimeline;                                           // 0x0310 (size: 0x8)
    float UnBurnTimeline_UnburnedValue_D3B87D094D6025CA3347EEAA4A918E06;              // 0x0318 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> UnBurnTimeline__Direction_D3B87D094D6025CA3347EEAA4A918E06; // 0x031C (size: 0x1)
    class UTimelineComponent* UnBurnTimeline;                                         // 0x0320 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0328 (size: 0x8)
    float UnburnLastUpdateValue;                                                      // 0x0330 (size: 0x4)
    class AGothicCharacter* TargetAsCharacter;                                        // 0x0338 (size: 0x8)
    bool Removed;                                                                     // 0x0340 (size: 0x1)
    bool RemovedByAttackOrDeath;                                                      // 0x0341 (size: 0x1)
    class UNiagaraComponent* NiagaraParticle;                                         // 0x0348 (size: 0x8)
    FGameplayTag SFXBurn;                                                             // 0x0350 (size: 0x8)
    FGothicFXInstanceHandle SFXBurnHandle;                                            // 0x0358 (size: 0x8)
    TArray<class UMeshComponent*> CharacterMeshes;                                    // 0x0360 (size: 0x10)

    void GetCharacterMeshes(class USkeletalMeshComponent* Character Mesh);
    void DoBodyOnFire();
    void RemoveInmediatelyEffect();
    void BurnTimeline__FinishedFunc();
    void BurnTimeline__UpdateFunc();
    void UnBurnTimeline__FinishedFunc();
    void UnBurnTimeline__UpdateFunc();
    void ActivateEffect();
    void DeactivateEffect(const FGameplayEffectRemovalInfo& FGameplayEffectRemovalInfo);
    void OnPreDestroyDebuffActor();
    void ApplyEffect();
    void DoBurn();
    void RemoveEffect();
    void DoUnburn();
    void RestartEffect();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_BurnDebuffEffectActor(int32 EntryPoint);
}; // Size: 0x370

#endif
