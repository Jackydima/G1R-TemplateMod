#ifndef UE4SS_SDK_BP_FreezeDebuffEffectActor_HPP
#define UE4SS_SDK_BP_FreezeDebuffEffectActor_HPP

class ABP_FreezeDebuffEffectActor_C : public AFreezeDebuffEffectActor_AS
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    float StopCustomAnimRatioTimeline_StopSlowmo_FEF2CFCA4D919319202CD0B89EB3D26F;    // 0x0308 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> StopCustomAnimRatioTimeline__Direction_FEF2CFCA4D919319202CD0B89EB3D26F; // 0x030C (size: 0x1)
    class UTimelineComponent* StopCustomAnimRatioTimeline;                            // 0x0310 (size: 0x8)
    float StartCustomAnimRatioTimeline_StartSlowmo_FAC3BF084EBF7D0C164CA7B4F13B30CC;  // 0x0318 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> StartCustomAnimRatioTimeline__Direction_FAC3BF084EBF7D0C164CA7B4F13B30CC; // 0x031C (size: 0x1)
    class UTimelineComponent* StartCustomAnimRatioTimeline;                           // 0x0320 (size: 0x8)
    float StartFreezeCreateMeshTimeline_FreezeSpellCurve_3_DBB862F5407D56D61EEBA68F6ACC9D16; // 0x0328 (size: 0x4)
    float StartFreezeCreateMeshTimeline_FreezeSpellCurve_2_DBB862F5407D56D61EEBA68F6ACC9D16; // 0x032C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> StartFreezeCreateMeshTimeline__Direction_DBB862F5407D56D61EEBA68F6ACC9D16; // 0x0330 (size: 0x1)
    class UTimelineComponent* StartFreezeCreateMeshTimeline;                          // 0x0338 (size: 0x8)
    float StopFreezeCreateMeshTimeline_FreezeSpellCurve_4_2951F7CF47822251905BE19BAC534ECB; // 0x0340 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> StopFreezeCreateMeshTimeline__Direction_2951F7CF47822251905BE19BAC534ECB; // 0x0344 (size: 0x1)
    class UTimelineComponent* StopFreezeCreateMeshTimeline;                           // 0x0348 (size: 0x8)
    class AGothicCharacter* TargetAsGothicChar;                                       // 0x0350 (size: 0x8)
    bool RemovedByAttackOrDeath;                                                      // 0x0358 (size: 0x1)
    bool Removed;                                                                     // 0x0359 (size: 0x1)
    class UMaterialInterface* FXOverrider Material;                                   // 0x0360 (size: 0x8)
    float UnfreezeProceduralMeshLastValue;                                            // 0x0368 (size: 0x4)
    class UFreezeDebuffEffectComponent* OwnerAsFreezeDebuffEffectComponent;           // 0x0370 (size: 0x8)
    float StopCustomAnimRatioLastValue;                                               // 0x0378 (size: 0x4)
    bool AllowPlayOutMontage;                                                         // 0x037C (size: 0x1)
    FGameplayTag SFXFreeze;                                                           // 0x0380 (size: 0x8)
    FGothicFXInstanceHandle SFXFreezeHandle;                                          // 0x0388 (size: 0x8)
    TArray<class UMeshComponent*> CharacterMeshes;                                    // 0x0390 (size: 0x10)
    bool PrematureRemoval;                                                            // 0x03A0 (size: 0x1)

    void GetCharacterMeshes(class USkeletalMeshComponent* Character Mesh);
    void StopTimelines();
    void ModifyTargetCustomAnimRatioOld(double ParameterValue);
    void DoUnfreeze();
    void RemoveInmediatelyEffect();
    void CheckCharacterDeath(const class UAbilitySystemComponent* AbilitySystem, bool& IsDead);
    void StartFreezeCreateMeshTimeline__FinishedFunc();
    void StartFreezeCreateMeshTimeline__UpdateFunc();
    void StopFreezeCreateMeshTimeline__FinishedFunc();
    void StopFreezeCreateMeshTimeline__UpdateFunc();
    void StartCustomAnimRatioTimeline__FinishedFunc();
    void StartCustomAnimRatioTimeline__UpdateFunc();
    void StopCustomAnimRatioTimeline__FinishedFunc();
    void StopCustomAnimRatioTimeline__UpdateFunc();
    void StartFreeze_CreateProceduralMesh(class UGothicSkeletalMeshComponent* Mesh);
    void StopFreeze_CreateProceduralMesh(class USkeletalMeshComponent* Mesh);
    void ApplyEffect();
    void ActivateEffect();
    void ModifyMeshMaterialValues(class UMeshComponent* Mesh, double ParameterValue);
    void DeactivateEffect(const FGameplayEffectRemovalInfo& FGameplayEffectRemovalInfo);
    void OnPreDestroyDebuffActor();
    void RestartEffect();
    void StartCustomAnimRatio(class USkeletalMeshComponent* Mesh);
    void StopCustomAnimRatio(class USkeletalMeshComponent* Mesh);
    void ModifyTargetCustomAnimRatio(double ParameterValue);
    void OnPrematureRemoval();
    void OnAllowPlayOutMontageOnPrematureRemoval();
    void ExecuteUbergraph_BP_FreezeDebuffEffectActor(int32 EntryPoint);
}; // Size: 0x3A1

#endif
