#ifndef UE4SS_SDK_BP_UnconsciousDebuffEffectActor_HPP
#define UE4SS_SDK_BP_UnconsciousDebuffEffectActor_HPP

class ABP_UnconsciousDebuffEffectActor_C : public AUnconsciousDebuffEffectActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)
    class UNiagaraComponent* UnconsciousParticleEffect;                               // 0x0300 (size: 0x8)
    class UPointLightComponent* HumanPointLight;                                      // 0x0308 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0310 (size: 0x8)
    float Timeline_point_light_CC432620485525A9BE74268175A55A0B;                      // 0x0318 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_CC432620485525A9BE74268175A55A0B; // 0x031C (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x0320 (size: 0x8)
    class UParticleSystemComponent* FireStateParticle;                                // 0x0328 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0330 (size: 0x8)
    float UnburnLastUpdateValue;                                                      // 0x0338 (size: 0x4)
    class AGothicCharacter* TargetAsCharacter;                                        // 0x0340 (size: 0x8)
    bool Removed;                                                                     // 0x0348 (size: 0x1)
    bool RemovedByAttackOrDeath;                                                      // 0x0349 (size: 0x1)
    class UCueVisualConfig_Possessing* As Cue Visual Config Unconscious;              // 0x0350 (size: 0x8)

    void StopAllTimelines();
    void RemoveInmediatelyEffect();
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void RemoveEffect();
    void RestartEffect();
    void OnPreDestroyDebuffActor();
    void DeactivateEffect(const FGameplayEffectRemovalInfo& FGameplayEffectRemovalInfo);
    void ActivateEffect();
    void TurnOnLight();
    void TurnOffLight();
    void ApplyEffect();
    void ExecuteUbergraph_BP_UnconsciousDebuffEffectActor(int32 EntryPoint);
}; // Size: 0x358

#endif
