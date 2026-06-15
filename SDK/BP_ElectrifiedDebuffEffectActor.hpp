#ifndef UE4SS_SDK_BP_ElectrifiedDebuffEffectActor_HPP
#define UE4SS_SDK_BP_ElectrifiedDebuffEffectActor_HPP

class ABP_ElectrifiedDebuffEffectActor_C : public AElectrifiedDebuffEffectActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)
    float StopElectrifiedShineTimeline_RemoveElectrifiedShineSpellCurve_08E4AA114B41892CDA73AC86BE5173FD; // 0x0300 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> StopElectrifiedShineTimeline__Direction_08E4AA114B41892CDA73AC86BE5173FD; // 0x0304 (size: 0x1)
    class UTimelineComponent* StopElectrifiedShineTimeline;                           // 0x0308 (size: 0x8)
    float StartElectrifiedShineTimeline_ElectrifiedShineSpellCurve_858DFCEA45A6267491095FB8539E2668; // 0x0310 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> StartElectrifiedShineTimeline__Direction_858DFCEA45A6267491095FB8539E2668; // 0x0314 (size: 0x1)
    class UTimelineComponent* StartElectrifiedShineTimeline;                          // 0x0318 (size: 0x8)
    class AGothicCharacter* TargetAsGothicChar;                                       // 0x0320 (size: 0x8)
    bool RemovedByAttackOrDeath;                                                      // 0x0328 (size: 0x1)
    bool Removed;                                                                     // 0x0329 (size: 0x1)
    class UNiagaraComponent* LightningAloneParticleSystem;                            // 0x0330 (size: 0x8)
    float RemoveElectrifiedLastValue;                                                 // 0x0338 (size: 0x4)
    class USkeletalMeshComponent* Mesh;                                               // 0x0340 (size: 0x8)
    class UCueVisualConfig_Electrified* As Cue Visual Config Electrified;             // 0x0348 (size: 0x8)
    bool Executed Montage;                                                            // 0x0350 (size: 0x1)
    bool AllowPlayOutMontage;                                                         // 0x0351 (size: 0x1)
    TArray<class UMeshComponent*> CharacterMeshes;                                    // 0x0358 (size: 0x10)
    FGameplayEffectRemovalInfo FGameplay Effect Removal Info;                         // 0x0368 (size: 0x28)
    bool PrematureRemoval;                                                            // 0x0390 (size: 0x1)
    FGameplayTag SFXElectrified;                                                      // 0x0394 (size: 0x8)
    FGothicFXInstanceHandle SFXElectrified Handle;                                    // 0x039C (size: 0x8)

    void GetCharacterMeshes(class USkeletalMeshComponent* Character Mesh);
    void IsChainLightningCaster(bool& IsChainLightningCaster);
    void PlayElectrifiedMontage(bool& ExecutedMontage);
    void StopElectrifiedMontage();
    void RemovedByRemovalEffect(bool& RemovedByRemovalEffect);
    void StopTimeline(class UTimelineComponent* Timeline);
    void DoElectrifiedRemoval();
    void StopAllTimelines();
    void RemoveInmediatelyEffect();
    void CheckCharacterDeath(const class UAbilitySystemComponent* AbilitySystem, bool& IsDead);
    void StartElectrifiedShineTimeline__FinishedFunc();
    void StartElectrifiedShineTimeline__UpdateFunc();
    void StopElectrifiedShineTimeline__FinishedFunc();
    void StopElectrifiedShineTimeline__UpdateFunc();
    void ApplyEffect();
    void ActivateEffect();
    void ModifyMeshMaterialValues(class UMeshComponent* Mesh, double ParameterValue);
    void DeactivateEffect(const FGameplayEffectRemovalInfo& FGameplayEffectRemovalInfo);
    void OnPreDestroyDebuffActor();
    void StartElectrifiedShine(class USkeletalMeshComponent* Mesh);
    void StopElectrified(class USkeletalMeshComponent* Mesh);
    void RestartEffect();
    void OnPrematureRemoval();
    void OnAllowPlayOutMontageOnPrematureRemoval();
    void ExecuteUbergraph_BP_ElectrifiedDebuffEffectActor(int32 EntryPoint);
}; // Size: 0x3A4

#endif
