#ifndef UE4SS_SDK_BP_SleepDebuffEffectActor_HPP
#define UE4SS_SDK_BP_SleepDebuffEffectActor_HPP

class ABP_SleepDebuffEffectActor_C : public ASleepDebuffEffectActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)
    class UNiagaraComponent* P_Sleep_Enemy_Humanoid;                                  // 0x0300 (size: 0x8)
    class UPointLightComponent* HumanoidLight;                                        // 0x0308 (size: 0x8)
    float Timeline_0_point_light_8A1E9ADF4274E4A37197149A413161AD;                    // 0x0310 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_8A1E9ADF4274E4A37197149A413161AD; // 0x0314 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0318 (size: 0x8)
    float Timeline_point_light_5CEB4775469D70F0DFDA5E833092DF25;                      // 0x0320 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_5CEB4775469D70F0DFDA5E833092DF25; // 0x0324 (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x0328 (size: 0x8)
    class UParticleSystemComponent* FireStateParticle;                                // 0x0330 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0338 (size: 0x8)
    float UnburnLastUpdateValue;                                                      // 0x0340 (size: 0x4)
    class AGothicCharacter* TargetAsCharacter;                                        // 0x0348 (size: 0x8)
    bool Removed;                                                                     // 0x0350 (size: 0x1)
    bool RemovedByAttackOrDeath;                                                      // 0x0351 (size: 0x1)
    class UCueVisualConfig_Sleep* As Cue Visual Config Sleep;                         // 0x0358 (size: 0x8)
    bool AllowPlayOutMontage;                                                         // 0x0360 (size: 0x1)
    FVector TargetLocation;                                                           // 0x0368 (size: 0x18)
    FVector Mesh Relative Location;                                                   // 0x0380 (size: 0x18)
    float Capsule Radius;                                                             // 0x0398 (size: 0x4)
    float Capsule Half Height;                                                        // 0x039C (size: 0x4)
    bool WasTargetCapsuleReduced;                                                     // 0x03A0 (size: 0x1)
    FRotator BaseRotationOffset;                                                      // 0x03A8 (size: 0x18)
    FVector BaseTranslationOffset;                                                    // 0x03C0 (size: 0x18)
    FGameplayTag SleepFXTag;                                                          // 0x03D8 (size: 0x8)

    void RestoreTargetCapsule();
    void ReduceAndRelocateTargetCapsule();
    void StopAllTimelines();
    void RemoveInmediatelyEffect();
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void RemoveEffect();
    void RestartEffect();
    void TurnOnLight();
    void TurnOffLight();
    void OnPreDestroyDebuffActor();
    void OnPrematureRemoval();
    void OnAllowPlayOutMontageOnPrematureRemoval();
    void DeactivateEffect(const FGameplayEffectRemovalInfo& FGameplayEffectRemovalInfo);
    void ActivateEffect();
    void ApplyEffect();
    void ExecuteUbergraph_BP_SleepDebuffEffectActor(int32 EntryPoint);
}; // Size: 0x3E0

#endif
