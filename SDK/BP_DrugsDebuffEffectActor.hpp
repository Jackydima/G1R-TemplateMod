#ifndef UE4SS_SDK_BP_DrugsDebuffEffectActor_HPP
#define UE4SS_SDK_BP_DrugsDebuffEffectActor_HPP

class ABP_DrugsDebuffEffectActor_C : public ADrugsDebuffEffectActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)
    float DepletionTimeline_DepletionValue_CC1D9768413653E702C60ABBAEC6277B;          // 0x0300 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DepletionTimeline__Direction_CC1D9768413653E702C60ABBAEC6277B; // 0x0304 (size: 0x1)
    class UTimelineComponent* DepletionTimeline;                                      // 0x0308 (size: 0x8)
    float IncreaseTimeline_IncreaseValue_7EE59EA44EA722F40E18CC9A11D28396;            // 0x0310 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> IncreaseTimeline__Direction_7EE59EA44EA722F40E18CC9A11D28396; // 0x0314 (size: 0x1)
    class UTimelineComponent* IncreaseTimeline;                                       // 0x0318 (size: 0x8)
    class ACharacter* TargetAsCharacter;                                              // 0x0320 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0328 (size: 0x8)
    bool Removed;                                                                     // 0x0330 (size: 0x1)
    bool RemovedByAttackOrDeath;                                                      // 0x0331 (size: 0x1)
    int32 CurrentLevel;                                                               // 0x0334 (size: 0x4)
    double CurrentPercentage;                                                         // 0x0338 (size: 0x8)
    class UCameraModifierDrugs_C* CameraModifier;                                     // 0x0340 (size: 0x8)
    FBP_DrugsDebuffEffectActor_COnDepletionCompleted OnDepletionCompleted;            // 0x0348 (size: 0x10)
    void OnDepletionCompleted();
    TSubclassOf<class UCameraModifier> Camera Modifier Class;                         // 0x0358 (size: 0x8)

    void CanApplyPostProcess(bool& Valid);
    void DoBodyOnFire();
    void RemoveInmediatelyEffect();
    void IncreaseTimeline__FinishedFunc();
    void IncreaseTimeline__UpdateFunc();
    void DepletionTimeline__FinishedFunc();
    void DepletionTimeline__UpdateFunc();
    void ActivateEffect();
    void DeactivateEffect(const FGameplayEffectRemovalInfo& FGameplayEffectRemovalInfo);
    void OnPreDestroyDebuffActor();
    void ApplyEffect();
    void RemoveEffect();
    void RemoveVisualPostProcessing();
    void RestartEffect();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnApplyThresholdEffect(int32 ThresholdLevel);
    void ActivateVisualPostprocessing();
    void IncreaseVisual(double ThresholdValue, int32 LevelsToIncrease);
    void DecreaseVisual(double ThresholdValue, int32 LevelsToReduce);
    void UpdateCameraModifier();
    void CustomEvent();
    void CustomEvent_0(class APawn* OldPawn, class APawn* NewPawn);
    void ExecuteUbergraph_BP_DrugsDebuffEffectActor(int32 EntryPoint);
    void OnDepletionCompleted__DelegateSignature();
}; // Size: 0x360

#endif
