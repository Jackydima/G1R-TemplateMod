#ifndef UE4SS_SDK_BP_CharmDebuffEffectActor_HPP
#define UE4SS_SDK_BP_CharmDebuffEffectActor_HPP

class ABP_CharmDebuffEffectActor_C : public ACharmDebuffEffectActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)
    class UNiagaraComponent* P_Charm_Enemy_Humanoid;                                  // 0x0300 (size: 0x8)
    class UPointLightComponent* HumanPointLight;                                      // 0x0308 (size: 0x8)
    float Timeline_0_point_light_E2012E9E4C8DB2E9731DDDA87114FB57;                    // 0x0310 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_E2012E9E4C8DB2E9731DDDA87114FB57; // 0x0314 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0318 (size: 0x8)
    float Timeline_point_light_C331B82E4BE53940BE3ABFAB40E61C8A;                      // 0x0320 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_C331B82E4BE53940BE3ABFAB40E61C8A; // 0x0324 (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x0328 (size: 0x8)
    class UParticleSystemComponent* FireStateParticle;                                // 0x0330 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0338 (size: 0x8)
    float UnburnLastUpdateValue;                                                      // 0x0340 (size: 0x4)
    class AGothicCharacter* TargetAsCharacter;                                        // 0x0348 (size: 0x8)
    bool Removed;                                                                     // 0x0350 (size: 0x1)
    bool RemovedByAttackOrDeath;                                                      // 0x0351 (size: 0x1)
    class UCueVisualConfig_Charm* As Cue Visual Config Charm;                         // 0x0358 (size: 0x8)
    FGameplayTag SFXCharm;                                                            // 0x0360 (size: 0x8)

    void StopAllTimelines();
    void RemoveInmediatelyEffect();
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ApplyEffect();
    void RemoveEffect();
    void RestartEffect();
    void OnPreDestroyDebuffActor();
    void TurnOnLight();
    void TurnOffLight();
    void DeactivateEffect(const FGameplayEffectRemovalInfo& FGameplayEffectRemovalInfo);
    void ActivateEffect();
    void ExecuteUbergraph_BP_CharmDebuffEffectActor(int32 EntryPoint);
}; // Size: 0x368

#endif
