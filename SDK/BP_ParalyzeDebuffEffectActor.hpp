#ifndef UE4SS_SDK_BP_ParalyzeDebuffEffectActor_HPP
#define UE4SS_SDK_BP_ParalyzeDebuffEffectActor_HPP

class ABP_ParalyzeDebuffEffectActor_C : public AParalyzeDebuffEffectActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)
    float StopParalysisTimeline_StopSlowmo_0D1363924C6EE1DA16312BAFA4EC3506;          // 0x0300 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> StopParalysisTimeline__Direction_0D1363924C6EE1DA16312BAFA4EC3506; // 0x0304 (size: 0x1)
    class UTimelineComponent* StopParalysisTimeline;                                  // 0x0308 (size: 0x8)
    float StartParalysisTimeline_StartSlowmo_C646E37C4B72AB348463F4B702C7E2E7;        // 0x0310 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> StartParalysisTimeline__Direction_C646E37C4B72AB348463F4B702C7E2E7; // 0x0314 (size: 0x1)
    class UTimelineComponent* StartParalysisTimeline;                                 // 0x0318 (size: 0x8)
    class AGothicCharacter* TargetAsGothicChar;                                       // 0x0320 (size: 0x8)
    bool RemovedByAttackOrDeath;                                                      // 0x0328 (size: 0x1)
    bool Removed;                                                                     // 0x0329 (size: 0x1)
    class UParalyzeDebuffEffectComponent* OwnerCompAsParalyzeComponent;               // 0x0330 (size: 0x8)
    float StopParalyzeLastValue;                                                      // 0x0338 (size: 0x4)
    bool AllowPlayOutMontage;                                                         // 0x033C (size: 0x1)
    bool IgnorePlayRate;                                                              // 0x033D (size: 0x1)
    bool PrematureRemoval;                                                            // 0x033E (size: 0x1)

    void CheckDeathBeforeActivate(bool& DeathBeforeActivate);
    void RemovedByRemovalEffect(bool& RemovedByRemovalEffect);
    void StopTimeline(class UTimelineComponent* Timeline);
    void DoParalyzedRemoval();
    void StopAllTimelines();
    void RemoveInmediatelyEffect();
    void CheckCharacterDeath(const class UAbilitySystemComponent* AbilitySystem, bool& IsDead);
    void StartParalysisTimeline__FinishedFunc();
    void StartParalysisTimeline__UpdateFunc();
    void StopParalysisTimeline__FinishedFunc();
    void StopParalysisTimeline__UpdateFunc();
    void ModifyTargetCustomAnimRatio(double ParameterValue);
    void DeactivateEffect(const FGameplayEffectRemovalInfo& FGameplayEffectRemovalInfo);
    void OnPreDestroyDebuffActor();
    void StartParalyzed(class USkeletalMeshComponent* Mesh);
    void StopParalyzed(class USkeletalMeshComponent* Mesh);
    void ApplyEffect();
    void RestartEffect();
    void OnPrematureRemoval();
    void OnAllowPlayOutMontageOnPrematureRemoval();
    void ActivateEffect();
    void OnDecreasedStack();
    void ExecuteUbergraph_BP_ParalyzeDebuffEffectActor(int32 EntryPoint);
}; // Size: 0x33F

#endif
