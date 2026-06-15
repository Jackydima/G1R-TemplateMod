#ifndef UE4SS_SDK_AngelscriptGAS_HPP
#define UE4SS_SDK_AngelscriptGAS_HPP

struct FAngelscriptAttributeChangedData
{
}; // Size: 0x48

struct FAngelscriptGameplayAttributeData : public FGameplayAttributeData
{
    FName AttributeName;                                                              // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FAngelscriptInputBindData
{
    FName ConfirmTargetCommand;                                                       // 0x0000 (size: 0x8)
    FName CancelTargetCommand;                                                        // 0x0008 (size: 0x8)
    FTopLevelAssetPath EnumName;                                                      // 0x0010 (size: 0x10)
    int32 ConfirmTargetInputID;                                                       // 0x0020 (size: 0x4)
    int32 CancelTargetInputID;                                                        // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FAngelscriptModifiedAttribute
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    float OldValue;                                                                   // 0x0008 (size: 0x4)
    float NewValue;                                                                   // 0x000C (size: 0x4)

}; // Size: 0x10

struct FAngelscriptTagContainerAggregator
{
    FGameplayTagContainer CapturedActorTags;                                          // 0x0000 (size: 0x20)
    FGameplayTagContainer CapturedSpecTags;                                           // 0x0020 (size: 0x20)
    FGameplayTagContainer AggregatedTags;                                             // 0x0040 (size: 0x20)

}; // Size: 0x60

struct FGameplayEffectExecutionParameters
{
}; // Size: 0x68

class AAngelscriptGASActor : public AActor
{
    class UAngelscriptAbilitySystemComponent* AbilitySystem;                          // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class AAngelscriptGASCharacter : public ACharacter
{
    class UAngelscriptAbilitySystemComponent* AbilitySystem;                          // 0x0678 (size: 0x8)

    void SetupCharacterInput(class UInputComponent* PlayerInputComponent);
}; // Size: 0x680

class AAngelscriptGASPawn : public APawn
{
    class UAngelscriptAbilitySystemComponent* AbilitySystem;                          // 0x0320 (size: 0x8)

    void SetupPawnInput(class UInputComponent* PlayerInputComponent);
}; // Size: 0x328

class UAbilityAsyncMixinLibrary : public UObject
{

    void Activate(class UAbilityAsync* Async);
}; // Size: 0x28

class UAbilitySystemComponentMixinLibrary : public UObject
{

    void SetReplicatedLooseGameplayTagCount(class UAbilitySystemComponent* AbilitySystemComponent, const FGameplayTag& GameplayTag, int32 NewCount);
    void SetLooseGameplayTagCount(class UAbilitySystemComponent* AbilitySystemComponent, const FGameplayTag& GameplayTag, const int32 NewCount);
    void SendGameplayEvent(class UAbilitySystemComponent* AbilitySystemComponent, const FGameplayTag EventTag, const FGameplayEventData& Payload);
    void RemoveSpawnedAttribute(class UAbilitySystemComponent* AbilitySystemComponent, class UAttributeSet* Attribute);
    void RemoveReplicatedLooseGameplayTags(class UAbilitySystemComponent* AbilitySystemComponent, const FGameplayTagContainer& GameplayTags);
    void RemoveReplicatedLooseGameplayTag(class UAbilitySystemComponent* AbilitySystemComponent, const FGameplayTag& GameplayTag);
    void RemoveLooseGameplayTags(class UAbilitySystemComponent* AbilitySystemComponent, const FGameplayTagContainer& GameplayTags, const int32 Count);
    void RemoveLooseGameplayTag(class UAbilitySystemComponent* AbilitySystemComponent, const FGameplayTag& GameplayTag, const int32 Count);
    void RemoveGameplayCue(class UAbilitySystemComponent* AbilitySystemComponent, const FGameplayTag GameplayCueTag);
    void RemoveAllSpawnedAttributes(class UAbilitySystemComponent* AbilitySystemComponent);
    void RemoveAllGameplayCues(class UAbilitySystemComponent* AbilitySystemComponent);
    void MarkAbilitySpecDirty(class UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpec& Spec, const bool bWasAddOrRemove);
    void InitDefaultGameplayCueParameters(class UAbilitySystemComponent* AbilitySystemComponent, FGameplayCueParameters& Parameters);
    FGameplayAbilitySpecHandle GiveAbilityAndActivateOnceWithEventData(class UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpec& Spec, const FGameplayEventData& EventData);
    FGameplayAbilitySpecHandle GiveAbilityAndActivateOnce(class UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpec& Spec);
    FGameplayAbilitySpecHandle GiveAbility(class UAbilitySystemComponent* AbilitySystemComponent, const FGameplayAbilitySpec& Spec);
    TArray<class UAttributeSet*> GetSpawnedAttributes(const class UAbilitySystemComponent* AbilitySystemComponent);
    void GetOwnedGameplayTags(const class UAbilitySystemComponent* AbilitySystemComponent, FGameplayTagContainer& TagContainer);
    bool FindAbilitySpecFromInputID(class UAbilitySystemComponent* AbilitySystemComponent, const int32 InputID, FGameplayAbilitySpec& OutSpec);
    bool FindAbilitySpecFromHandle(class UAbilitySystemComponent* AbilitySystemComponent, const FGameplayAbilitySpecHandle Handle, FGameplayAbilitySpec& OutSpec);
    bool FindAbilitySpecFromGEHandle(class UAbilitySystemComponent* AbilitySystemComponent, const FActiveGameplayEffectHandle Handle, FGameplayAbilitySpec& OutSpec);
    bool FindAbilitySpecFromClass(class UAbilitySystemComponent* AbilitySystemComponent, const TSubclassOf<class UGameplayAbility> InAbilityClass, FGameplayAbilitySpec& OutSpec);
    void ExecuteGameplayCueWithParameters(class UAbilitySystemComponent* AbilitySystemComponent, const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);
    void ExecuteGameplayCueWithEffectContext(class UAbilitySystemComponent* AbilitySystemComponent, const FGameplayTag GameplayCueTag, const FGameplayEffectContextHandle& EffectContext);
    bool AreAbilityTagsBlocked(const class UAbilitySystemComponent* AbilitySystemComponent, const FGameplayTagContainer& Tags);
    void AddSpawnedAttribute(class UAbilitySystemComponent* AbilitySystemComponent, class UAttributeSet* Attribute);
    void AddReplicatedLooseGameplayTags(class UAbilitySystemComponent* AbilitySystemComponent, const FGameplayTagContainer& GameplayTags);
    void AddReplicatedLooseGameplayTag(class UAbilitySystemComponent* AbilitySystemComponent, const FGameplayTag& GameplayTag);
    void AddLooseGameplayTags(class UAbilitySystemComponent* AbilitySystemComponent, const FGameplayTagContainer& GameplayTags, const int32 Count);
    void AddLooseGameplayTag(class UAbilitySystemComponent* AbilitySystemComponent, const FGameplayTag& GameplayTag, const int32 Count);
    void AddGameplayCueWithParameters(class UAbilitySystemComponent* AbilitySystemComponent, const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);
    void AddGameplayCueWithEffectContext(class UAbilitySystemComponent* AbilitySystemComponent, const FGameplayTag GameplayCueTag, const FGameplayEffectContextHandle& EffectContext);
}; // Size: 0x28

class UAngelscriptAbilityAsyncLibrary : public UBlueprintFunctionLibrary
{

    class UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(class AActor* TargetActor, const FGameplayTag Tag, const bool bTriggerOnce);
    class UAbilityAsync_WaitGameplayTagQuery* WaitGameplayTagQueryOnActor(class AActor* TargetActor, const FGameplayTagQuery& Query, const EWaitGameplayTagQueryTriggerCondition TriggerCondition, const bool bTriggerOnce);
    class UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(class AActor* TargetActor, const FGameplayTag Tag, const bool bTriggerOnce);
    class UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(class AActor* TargetActor, const FGameplayTag Tag, const bool bTriggerOnce, const bool bMatchExact);
    class UAbilityAsync_WaitAttributeChanged* WaitForAttributeChanged(class AActor* TargetActor, const FGameplayAttribute& Attribute, const bool bTriggerOnce);
}; // Size: 0x28

class UAngelscriptAbilitySystemComponent : public UAbilitySystemComponent
{
    FAngelscriptAbilitySystemComponentOnInitAbilityActorInfo OnInitAbilityActorInfo;  // 0x1248 (size: 0x10)
    void InitAbilityActorInfoDelegate(class AActor* InOwnerActor, class AActor* InAvatarActor);
    FAngelscriptAbilitySystemComponentOnAbilityGiven OnAbilityGiven;                  // 0x1258 (size: 0x10)
    void AbilityGivenDelegate(FGameplayAbilitySpec AbilitySpec);
    FAngelscriptAbilitySystemComponentOnAbilityRemoved OnAbilityRemoved;              // 0x1268 (size: 0x10)
    void AbilityRemovedDelegate(FGameplayAbilitySpec AbilitySpec);
    FAngelscriptAbilitySystemComponentOnAttributeChanged OnAttributeChanged;          // 0x1278 (size: 0x10)
    void AttributeChangedDelegate(const FAngelscriptModifiedAttribute& AttributeChangeData);
    FAngelscriptAbilitySystemComponentOnOwnedTagUpdated OnOwnedTagUpdated;            // 0x1288 (size: 0x10)
    void OwnedTagUpdatedDelegate(const FGameplayTag& Tag, bool TagExists);

    bool TrySetAttributeBaseValue(TSubclassOf<class UAngelscriptAttributeSet> AttributeSetClass, FName AttributeName, float NewBaseValue);
    bool TryGetAttributeCurrentValue(TSubclassOf<class UAngelscriptAttributeSet> AttributeSetClass, FName AttributeName, float& OutCurrentValue);
    bool TryGetAttributeBaseValue(TSubclassOf<class UAngelscriptAttributeSet> AttributeSetClass, FName AttributeName, float& OutBaseValue);
    bool TryActivateAbilitySpec(const FGameplayAbilitySpecHandle& Handle, bool bAllowRemoteActivation);
    void SetAttributeBaseValue(TSubclassOf<class UAngelscriptAttributeSet> AttributeSetClass, FName AttributeName, float NewBaseValue);
    void SetAbilitySpecSourceObject(FGameplayAbilitySpecHandle AbilitySpecHandle, class UObject* NewSourceObject);
    void RegisterCallbackForAttribute(TSubclassOf<class UAngelscriptAttributeSet> AttributeSetClass, FName AttributeName);
    class UAngelscriptAttributeSet* RegisterAttributeSet(TSubclassOf<class UAngelscriptAttributeSet> AttributeSetClass);
    void RegisterAttributeChangedCallback(TSubclassOf<class UAngelscriptAttributeSet> AttributeSetClass, FName AttributeName, class UObject* CallbackObject, FName CallbackFunctionName_FAngelscriptAttributeChangedData);
    void OnAttributeSetRegistered(class UObject* InObject, FName InFunctionName);
    void ModAttributeUnsafe(FGameplayAttribute GameplayAttribute, TEnumAsByte<EGameplayModOp::Type> ModifierOp, float ModifierMagnitude);
    bool IsAbilityActive(TSubclassOf<class UGameplayAbility> InAbilityClass);
    bool HasGameplayTag(FGameplayTag TagToCheck);
    bool HasAnyGameplayTags(const FGameplayTagContainer& TagContainer);
    bool HasAllGameplayTags(const FGameplayTagContainer& TagContainer);
    bool HasActiveGameplayEffectByHandle(const FActiveGameplayEffectHandle& Handle);
    bool HasAbility(TSubclassOf<class UGameplayAbility> InAbilityClass);
    class APlayerController* GetPlayerController();
    float GetCooldownTimeRemaining(TSubclassOf<class UGameplayAbility> InAbilityClass);
    class AActor* GetAvatar();
    float GetAttributeCurrentValueChecked(TSubclassOf<class UAngelscriptAttributeSet> AttributeSetClass, FName AttributeName);
    float GetAttributeCurrentValue(TSubclassOf<class UAngelscriptAttributeSet> AttributeSetClass, FName AttributeName, float DefaultValue);
    float GetAttributeBaseValueChecked(TSubclassOf<class UAngelscriptAttributeSet> AttributeSetClass, FName AttributeName);
    float GetAttributeBaseValue(TSubclassOf<class UAngelscriptAttributeSet> AttributeSetClass, FName AttributeName, float DefaultValue);
    void GetAndRegisterCallbackForAttribute(TSubclassOf<class UAngelscriptAttributeSet> AttributeSetClass, FName AttributeName, float& OutCurrentValue);
    void GetAndRegisterAttributeChangedCallback(TSubclassOf<class UAngelscriptAttributeSet> AttributeSetClass, FName AttributeName, class UObject* CallbackObject, FName CallbackFunctionName_FAngelscriptAttributeChangedData, float& OutCurrentValue);
    void GetAllChildTags(FGameplayTag TagToCheck, TArray<FGameplayTag>& Container);
    void GetActiveAbilitiesWithTags(const FGameplayTagContainer& GameplayTagContainer, TArray<class UGameplayAbility*>& ActiveAbilities);
    class UObject* GetAbilitySpecSourceObject(FGameplayAbilitySpecHandle AbilitySpecHandle);
    FGameplayAbilityActorInfo GetAbilityActorInfo();
    void FindStackableActiveGameplayEffect(FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffect& OutActiveGameplayEffect);
    void CancelAbilityByHandle(const FGameplayAbilitySpecHandle& AbilityHandle);
    void CancelAbility(TSubclassOf<class UGameplayAbility> InAbilityClass);
    void CancelAbilitiesByTags(const FGameplayTagContainer& WithTags, const FGameplayTagContainer& WithoutTags, class UGameplayAbility* Ignore);
    bool CanActivateAbilitySpec(FGameplayAbilitySpecHandle AbilitySpecHandle);
    bool CanActivateAbilityByTag(const FGameplayTagContainer& GameplayTagContainer);
    bool CanActivateAbilityByClass(TSubclassOf<class UGameplayAbility> InAbilityToActivate);
    void BP_SetRemoveAbilityOnEnd(FGameplayAbilitySpecHandle AbilitySpecHandle);
    void BP_InitAbilityActorInfo(class AActor* InOwnerActor, class AActor* InAvatarActor);
    FGameplayAbilitySpecHandle BP_GiveAbilityAndActivateOnce(TSubclassOf<class UGameplayAbility> InAbilityClass, int32 Level, int32 OptionalInputID, class UObject* OptionalSourceObject);
    FGameplayAbilitySpecHandle BP_GiveAbility(TSubclassOf<class UGameplayAbility> InAbilityClass, int32 Level, int32 OptionalInputID, class UObject* OptionalSourceObject);
    void BindInput(class UInputComponent* InputComponent, FAngelscriptInputBindData BindData);
    bool ActivateAbilitiesUsingTags(const FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);
}; // Size: 0x12A8

class UAngelscriptAbilityTask : public UAbilityTask
{

    void SetIsTickingTask(bool bNewState);
    void SetIsSimulatedTask(bool bNewState);
    void SetIsPausable(bool bNewState);
    bool GetIsTickingTask();
    bool GetIsSimulating();
    bool GetIsSimulatedTask();
    bool GetIsPausable();
    class UGameplayAbility* GetAbility();
    class UAngelscriptAbilityTask* CreateAbilityTaskAndRunIt(TSubclassOf<class UAngelscriptAbilityTask> TaskType, class UGameplayAbility* ThisAbility, FName NewInstanceName);
    class UAngelscriptAbilityTask* CreateAbilityTask(TSubclassOf<class UAngelscriptAbilityTask> TaskType, class UGameplayAbility* ThisAbility, FName NewInstanceName, class UObject* Outer);
    void BP_TickTask(float DeltaTimeSecs);
    bool BP_ShouldBroadcastAbilityTaskDelegates();
    void BP_SetWaitingOnRemotePlayerData();
    void BP_SetWaitingOnAvatar();
    void BP_SetAbilitySystemComponent(class UAbilitySystemComponent* InAbilitySystemComponent);
    void BP_OnDestroy(bool bInOwnerFinished);
    bool BP_IsWaitingOnRemotePlayerdata();
    bool BP_IsWaitingOnAvatar();
    bool BP_IsPredictingClient();
    bool BP_IsLocallyControlled();
    bool BP_IsForRemoteClient();
    void BP_InitSimulatedTask(class UGameplayTasksComponent* InGameplayTasksComponent);
    class UAbilitySystemComponent* BP_GetAbilitySystemComponent();
    FGameplayAbilitySpecHandle BP_GetAbilitySpecHandle(bool bInOwnerFinished);
    class UGameplayAbility* BP_GetAbility(bool bInOwnerFinished);
    void BP_ClearWaitingOnRemotePlayerData();
    void BP_ClearWaitingOnAvatar();
    void BP_Activate();
}; // Size: 0x80

class UAngelscriptAbilityTaskLibrary : public UBlueprintFunctionLibrary
{

    class UAbilityTask_WaitVelocityChange* WaitVelocityChange(class UGameplayAbility* OwningAbility, const FVector& Direction, const float MinimumMagnitude);
    class UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, const FName TaskInstanceName, const TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor);
    class UAbilityTask_WaitTargetData* WaitTargetData(class UGameplayAbility* OwningAbility, const FName TaskInstanceName, const TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType, const TSubclassOf<class AGameplayAbilityTargetActor> TargetClass);
    class UAbilityTask_NetworkSyncPoint* WaitNetSync(class UGameplayAbility* OwningAbility, const EAbilityTaskNetSyncType SyncType);
    class UAbilityTask_WaitMovementModeChange* WaitMovementModeChange(class UGameplayAbility* OwningAbility, const TEnumAsByte<EMovementMode> NewMode);
    class UAbilityTask_WaitInputRelease* WaitInputRelease(class UGameplayAbility* OwningAbility, const bool bTestAlreadyReleased);
    class UAbilityTask_WaitInputPress* WaitInputPress(class UGameplayAbility* OwningAbility, const bool bTestAlreadyPressed);
    class UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const FGameplayTag Tag, class AActor* ExternalTarget, const bool bTriggerOnce);
    class UAbilityTask_WaitGameplayTagQuery* WaitGameplayTagQuery(class UGameplayAbility* OwningAbility, const FGameplayTagQuery& Query, const class AActor* ExternalTarget, const EWaitGameplayTagQueryTriggerCondition TriggerCondition, const bool bTriggerOnce);
    class UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const FGameplayTag Tag, class AActor* ExternalTarget, const bool bTriggerOnce);
    class UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(class UGameplayAbility* OwningAbility, const FGameplayTag Tag, class AActor* ExternalTarget, const bool bTriggerOnce, const bool bMatchExact);
    class UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, const FGameplayTagRequirements& SourceTagRequirements, const FGameplayTagRequirements& TargetTagRequirements, class AActor* ExternalTarget, const bool bTriggerOnce);
    class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTargetQuery(class UGameplayAbility* OwningAbility, const FGameplayTargetDataFilterHandle& Filter, const FGameplayTagQuery& SourceTagQuery, const FGameplayTagQuery& TargetTagQuery, const bool bTriggerOnce, class AActor* ExternalOwner, const bool bListenForPeriodicEffect);
    class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, const FGameplayTargetDataFilterHandle& Filter, const FGameplayTagRequirements& SourceTagRequirements, const FGameplayTagRequirements& TargetTagRequirements, const bool bTriggerOnce, class AActor* ExternalOwner, const bool bListenForPeriodicEffect);
    class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelfQuery(class UGameplayAbility* OwningAbility, const FGameplayTargetDataFilterHandle& Filter, const FGameplayTagQuery& SourceTagQuery, const FGameplayTagQuery& TargetTagQuery, const bool bTriggerOnce, class AActor* ExternalOwner, const bool bListenForPeriodicEffect);
    class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, const FGameplayTargetDataFilterHandle& Filter, const FGameplayTagRequirements& SourceTagRequirements, const FGameplayTagRequirements& TargetTagRequirements, const bool bTriggerOnce, class AActor* ExternalOwner, const bool bListenForPeriodicEffect);
    class UAbilityTask_WaitOverlap* WaitForOverlap(class UGameplayAbility* OwningAbility);
    class UAbilityTask_WaitAbilityCommit* WaitForNewAbilityCommitQuery(class UGameplayAbility* OwningAbility, const FGameplayTagQuery& Query, const bool bTriggerOnce);
    class UAbilityTask_WaitAbilityCommit* WaitForNewAbilityCommit(class UGameplayAbility* OwningAbility, const FGameplayTag WithTag, const FGameplayTag WithoutTag, const bool bTriggerOnce);
    class UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, const FActiveGameplayEffectHandle Handle);
    class UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, const FActiveGameplayEffectHandle Handle);
    class UAbilityTask_WaitConfirm* WaitForConfirmInput(class UGameplayAbility* OwningAbility);
    class UAbilityTask_WaitCancel* WaitForCancelInput(class UGameplayAbility* OwningAbility);
    class UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, const FGameplayAttribute& Attribute, const FGameplayTag WithTag, const FGameplayTag WithoutTag, const TEnumAsByte<EWaitAttributeChangeComparison::Type> ComparisonType, const float ComparisonValue, const bool bTriggerOnce, class AActor* ExternalOwner);
    class UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, const FGameplayAttribute& Attribute, const TEnumAsByte<EWaitAttributeChangeComparison::Type> ComparisonType, const float ComparisonValue, const bool bTriggerOnce, class AActor* ExternalOwner);
    class UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, const FGameplayAttribute& AttributeNumerator, const FGameplayAttribute& AttributeDenominator, const TEnumAsByte<EWaitAttributeChangeComparison::Type> ComparisonType, const float ComparisonValue, const bool bTriggerOnce, class AActor* ExternalOwner);
    class UAbilityTask_WaitAttributeChange* WaitForAttributeChange(class UGameplayAbility* OwningAbility, const FGameplayAttribute& Attribute, const FGameplayTag WithTag, const FGameplayTag WithoutTag, const bool bTriggerOnce, class AActor* ExternalOwner);
    class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, const FGameplayTagRequirements& TagRequirements, const bool bIncludeTriggeredAbilities, const bool bTriggerOnce);
    class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateQuery(class UGameplayAbility* OwningAbility, const FGameplayTagQuery& Query, const bool bIncludeTriggeredAbilities, const bool bTriggerOnce);
    class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(class UGameplayAbility* OwningAbility, const FGameplayTag WithTag, const FGameplayTag WithoutTag, const bool bIncludeTriggeredAbilities, const bool bTriggerOnce);
    class UAbilityTask_WaitDelay* WaitDelay(class UGameplayAbility* OwningAbility, const float Time);
    class UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(class UGameplayAbility* OwningAbility);
    class UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, const FName TaskInstanceName, const float Duration);
    class UAbilityTask_VisualizeTargeting* VisualizeTargeting(class UGameplayAbility* OwningAbility, const TSubclassOf<class AGameplayAbilityTargetActor> TargetClass, const FName TaskInstanceName, const float Duration);
    class UAbilityTask_StartAbilityState* StartAbilityState(class UGameplayAbility* OwningAbility, const FName StateName, const bool bEndCurrentState);
    class UAbilityTask_SpawnActor* SpawnActor(class UGameplayAbility* OwningAbility, const FGameplayAbilityTargetDataHandle& TargetData, const TSubclassOf<class AActor> Class);
    class UAbilityTask_Repeat* RepeatAction(class UGameplayAbility* OwningAbility, const float TimeBetweenActions, const int32 TotalActionCount);
    class UAbilityTask_PlayMontageAndWait* PlayMontageAndWait(class UGameplayAbility* OwningAbility, const FName TaskInstanceName, class UAnimMontage* MontageToPlay, const float Rate, const FName StartSection, const bool bStopWhenAbilityEnds, const float AnimRootMotionTranslationScale, const float StartTimeSeconds);
    class UAbilityTask_MoveToLocation* MoveToLocation(class UGameplayAbility* OwningAbility, const FName TaskInstanceName, const FVector& Location, const float Duration, class UCurveFloat* InterpolationCurve, class UCurveVector* VectorInterpolationCurve);
    class UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, const FName TaskInstanceName, const FVector& Location, class AActor* LocationActor, const float Strength, const float Duration, const float Radius, const bool bIsPush, const bool bIsAdditive, const bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, const bool bUseFixedWorldDirection, const FRotator& FixedWorldDirection, const ERootMotionFinishVelocityMode VelocityOnFinishMode, const FVector& SetVelocityOnFinish, const float ClampVelocityOnFinish);
    class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, const FName TaskInstanceName, const FGameplayAbilityTargetDataHandle& TargetDataHandle, const int32 TargetDataIndex, const int32 TargetActorIndex, const FVector& TargetLocationOffset, const ERootMotionMoveToActorTargetOffsetType OffsetAlignment, const float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, const bool bSetNewMovementMode, const TEnumAsByte<EMovementMode> MovementMode, const bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, const ERootMotionFinishVelocityMode VelocityOnFinishMode, const FVector& SetVelocityOnFinish, const float ClampVelocityOnFinish, const bool bDisableDestinationReachedInterrupt);
    class UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, const FName TaskInstanceName, const FVector& TargetLocation, const float Duration, const bool bSetNewMovementMode, const TEnumAsByte<EMovementMode> MovementMode, const bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, const ERootMotionFinishVelocityMode VelocityOnFinishMode, const FVector& SetVelocityOnFinish, const float ClampVelocityOnFinish);
    class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, const FName TaskInstanceName, class AActor* TargetActor, const FVector& TargetLocationOffset, const ERootMotionMoveToActorTargetOffsetType OffsetAlignment, const float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, const bool bSetNewMovementMode, const TEnumAsByte<EMovementMode> MovementMode, const bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, const ERootMotionFinishVelocityMode VelocityOnFinishMode, const FVector& SetVelocityOnFinish, const float ClampVelocityOnFinish, const bool bDisableDestinationReachedInterrupt);
    class UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, const FName TaskInstanceName, const FRotator& Rotation, const float Distance, const float Height, const float Duration, const float MinimumLandedTriggerTime, const bool bFinishOnLanded, const ERootMotionFinishVelocityMode VelocityOnFinishMode, const FVector& SetVelocityOnFinish, const float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve);
    class UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, const FName TaskInstanceName, const FVector& WorldDirection, const float Strength, const float Duration, const bool bIsAdditive, class UCurveFloat* StrengthOverTime, const ERootMotionFinishVelocityMode VelocityOnFinishMode, const FVector& SetVelocityOnFinish, const float ClampVelocityOnFinish, const bool bEnableGravity);
}; // Size: 0x28

class UAngelscriptAttributeChangedDataMixinLibrary : public UObject
{

    class UAbilitySystemComponent* GetTargetAbilitySystemComponent(const FAngelscriptAttributeChangedData& Data);
    float GetOldValue(const FAngelscriptAttributeChangedData& Data);
    float GetNewValue(const FAngelscriptAttributeChangedData& Data);
    FGameplayModifierEvaluatedData GetGameplayModifierEvaluatedData(const FAngelscriptAttributeChangedData& Data, bool& bIsValid);
    FGameplayAttribute GetGameplayAttribute(const FAngelscriptAttributeChangedData& Data);
    FGameplayEffectSpec GetEffectSpec(const FAngelscriptAttributeChangedData& Data, bool& bIsValid);
}; // Size: 0x28

class UAngelscriptAttributeSet : public UAttributeSet
{
    TArray<FName> ReplicatedAttributeBlackList;                                       // 0x0030 (size: 0x10)

    bool TrySetAttributeBaseValue(FName AttributeName, float NewBaseValue);
    bool TryGetGameplayAttribute(TSubclassOf<class UAngelscriptAttributeSet> AttributeSetClass, FName AttributeName, FGameplayAttribute& OutGameplayAttribute);
    bool TryGetAttributeCurrentValue(FName AttributeName, float& OutCurrentValue);
    bool TryGetAttributeBaseValue(FName AttributeName, float& OutBaseValue);
    void OnRep_Attribute(FAngelscriptGameplayAttributeData& OldAttributeData);
    void InitFromMetaDataTable(const class UDataTable* DataTable);
    FGameplayAttribute GetGameplayAttribute(TSubclassOf<class UAngelscriptAttributeSet> AttributeSetClass, FName AttributeName);
    bool CompareGameplayAttributes(const FGameplayAttribute& First, const FGameplayAttribute& Second);
    bool BP_PreGameplayEffectExecute(const FGameplayEffectSpec& EffectSpec, FGameplayModifierEvaluatedData& EvaluatedData, class UAngelscriptAbilitySystemComponent* AbilitySystemComponent);
    void BP_PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue);
    void BP_PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue);
    void BP_PostGameplayEffectExecute(const FGameplayEffectSpec& EffectSpec, FGameplayModifierEvaluatedData& EvaluatedData, class UAngelscriptAbilitySystemComponent* AbilitySystemComponent);
    void BP_PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue);
    void BP_PostAttributeBaseChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue);
    bool BP_OnInitFromMetaDataTable(const class UDataTable* DataTable);
    class AActor* BP_GetOwningActor();
    class UAngelscriptAbilitySystemComponent* BP_GetOwningAbilitySystemComponent();
    FGameplayAbilityActorInfo BP_GetActorInfo();
}; // Size: 0x40

class UAngelscriptGASAbility : public UGameplayAbility
{

    void K2_RemoveGameplayCue_Static(TSubclassOf<class UGameplayCueNotify_Static> GameplayCue);
    void K2_RemoveGameplayCue_Actor(TSubclassOf<class AGameplayCueNotify_Actor> GameplayCue);
    void K2_ExecuteGameplayCueWithParams_Static(TSubclassOf<class UGameplayCueNotify_Static> GameplayCue, const FGameplayCueParameters& GameplayCueParameters);
    void K2_ExecuteGameplayCueWithParams_Actor(TSubclassOf<class AGameplayCueNotify_Actor> GameplayCue, const FGameplayCueParameters& GameplayCueParameters);
    void K2_ExecuteGameplayCue_Static(TSubclassOf<class UGameplayCueNotify_Static> GameplayCue, FGameplayEffectContextHandle Context);
    void K2_ExecuteGameplayCue_Actor(TSubclassOf<class AGameplayCueNotify_Actor> GameplayCue, FGameplayEffectContextHandle Context);
    void K2_AddGameplayCueWithParams_Static(TSubclassOf<class UGameplayCueNotify_Static> GameplayCue, const FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);
    void K2_AddGameplayCueWithParams_Actor(TSubclassOf<class AGameplayCueNotify_Actor> GameplayCue, const FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);
    void K2_AddGameplayCue_Static(TSubclassOf<class UGameplayCueNotify_Static> GameplayCue, FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd);
    void K2_AddGameplayCue_Actor(TSubclassOf<class AGameplayCueNotify_Actor> GameplayCue, FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd);
}; // Size: 0x3B0

class UAngelscriptGameplayAttributeDataMixinLibrary : public UObject
{

    void SetCurrentValue(FAngelscriptGameplayAttributeData& Data, float NewValue);
    void SetBaseValue(FAngelscriptGameplayAttributeData& Data, float NewValue);
    void Initialize(FAngelscriptGameplayAttributeData& Data, float InitialData);
    float GetCurrentValue(const FAngelscriptGameplayAttributeData& Data);
    float GetBaseValue(const FAngelscriptGameplayAttributeData& Data);
}; // Size: 0x28

class UAngelscriptGameplayCueUtils : public UBlueprintFunctionLibrary
{

    void RemoveLocalGameplayCue(class AActor* TargetActor, FGameplayTag GameplayCueTag, const FGameplayCueParameters& Parameters);
    void ExecuteLocalGameplayCue(class AActor* TargetActor, FGameplayTag GameplayCueTag, const FGameplayCueParameters& Parameters);
    void AddLocalGameplayCue(class AActor* TargetActor, FGameplayTag GameplayCueTag, const FGameplayCueParameters& Parameters);
}; // Size: 0x28

class UAngelscriptGameplayEffectUtils : public UBlueprintFunctionLibrary
{

    FGameplayModifierEvaluatedData MakeGameplayModifierEvaluationData(const FGameplayAttribute& InAttribute, TEnumAsByte<EGameplayModOp::Type> InModOp, float InMagnitude);
    FGameplayEffectExecutionScopedModifierInfo MakeGameplayEffectExecutionScopedModifierInfo(const FGameplayEffectAttributeCaptureDefinition& InCaptureDef);
    FGameplayEffectAttributeCaptureDefinition CaptureGameplayAttribute(class UStruct* AttributeSetType, FName AttributeName, EGameplayEffectAttributeCaptureSource InSource, bool bIsSnapshot);
}; // Size: 0x28

class UGameplayAbilityActorInfoMixinLibrary : public UObject
{

    void SetSkeletalMeshComponent(FGameplayAbilityActorInfo& Info, class USkeletalMeshComponent* Component);
    void SetPlayerController(FGameplayAbilityActorInfo& Info, class APlayerController* Controller);
    void SetOwnerActor(FGameplayAbilityActorInfo& Info, class AActor* Actor);
    void SetMovementComponent(FGameplayAbilityActorInfo& Info, class UMovementComponent* Instance);
    void SetAvatarActor(FGameplayAbilityActorInfo& Info, class AActor* Actor);
    void SetAnimInstance(FGameplayAbilityActorInfo& Info, class UAnimInstance* Instance);
    void SetAffectedAnimInstanceTag(FGameplayAbilityActorInfo& Info, FName Name);
    void SetAbilitySystemComponent(FGameplayAbilityActorInfo& Info, class UAbilitySystemComponent* Component);
    bool IsNetAuthority(const FGameplayAbilityActorInfo& Info);
    bool IsLocallyControlledPlayer(const FGameplayAbilityActorInfo& Info);
    bool IsLocallyControlled(const FGameplayAbilityActorInfo& Info);
    void InitFromActor(FGameplayAbilityActorInfo& Info, class AActor* OwnerActor, class AActor* AvatarActor, class UAbilitySystemComponent* InAbilitySystemComponent);
    class USkeletalMeshComponent* GetSkeletalMeshComponent(const FGameplayAbilityActorInfo& Info);
    class APlayerController* GetPlayerController(const FGameplayAbilityActorInfo& Info);
    class AActor* GetOwnerActor(const FGameplayAbilityActorInfo& Info);
    class UMovementComponent* GetMovementComponent(const FGameplayAbilityActorInfo& Info);
    class AActor* GetAvatarActor(const FGameplayAbilityActorInfo& Info);
    class UAnimInstance* GetAnimInstanceFromSkeletalMesh(const FGameplayAbilityActorInfo& Info);
    class UAnimInstance* GetAnimInstance(const FGameplayAbilityActorInfo& Info);
    FName GetAffectedAnimInstanceTag(const FGameplayAbilityActorInfo& Info);
    class UAbilitySystemComponent* GetAbilitySystemComponent(const FGameplayAbilityActorInfo& Info);
    void ClearActorInfo(FGameplayAbilityActorInfo& Info);
}; // Size: 0x28

class UGameplayAbilityMixinLibrary : public UObject
{

    class UObject* GetSourceObject(const class UGameplayAbility* Ability, FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo);
}; // Size: 0x28

class UGameplayCueParametersMixinLibrary : public UObject
{

    void SetTargetAttachComponent(FGameplayCueParameters& GameplayCueParams, class USceneComponent* TargetAttachComponent);
    void SetSourceObject(FGameplayCueParameters& GameplayCueParams, const class UObject* SourceObject);
    void SetPhysicalMaterial(FGameplayCueParameters& GameplayCueParams, const class UPhysicalMaterial* PhysicalMaterial);
    void SetInstigator(FGameplayCueParameters& GameplayCueParams, class AActor* Instigator);
    void SetEffectCauser(FGameplayCueParameters& GameplayCueParams, class AActor* EffectCauser);
    class USceneComponent* GetTargetAttachComponent(const FGameplayCueParameters& GameplayCueParams);
    class UObject* GetSourceObject(const FGameplayCueParameters& GameplayCueParams);
    class UPhysicalMaterial* GetPhysicalMaterial(const FGameplayCueParameters& GameplayCueParams);
    class AActor* GetInstigator(const FGameplayCueParameters& GameplayCueParams);
    class AActor* GetEffectCauser(const FGameplayCueParameters& GameplayCueParams);
}; // Size: 0x28

class UGameplayEffectContextHandleMixinLibrary : public UObject
{

    void SetEffectCauser(FGameplayEffectContextHandle& Handle, class AActor* NewEffectCauser);
    void SetAbility(FGameplayEffectContextHandle& Handle, const class UGameplayAbility* InGameplayAbility);
    bool IsValid(const FGameplayEffectContextHandle& Handle);
    bool IsLocallyControlledPlayer(const FGameplayEffectContextHandle& Handle);
    bool IsLocallyControlled(const FGameplayEffectContextHandle& Handle);
    bool HasOrigin(const FGameplayEffectContextHandle& Handle);
    class UObject* GetSourceObject(const FGameplayEffectContextHandle& Handle);
    void GetOwnedGameplayTags(const FGameplayEffectContextHandle& Handle, FGameplayTagContainer& ActorTagContainer, FGameplayTagContainer& SpecTagContainer);
    class UAbilitySystemComponent* GetOriginalInstigatorAbilitySystemComponent(const FGameplayEffectContextHandle& Handle);
    class AActor* GetOriginalInstigator(const FGameplayEffectContextHandle& Handle);
    FVector GetOrigin(const FGameplayEffectContextHandle& Handle);
    class AActor* GetInstigator(const FGameplayEffectContextHandle& Handle);
    bool GetHitResult(const FGameplayEffectContextHandle& Handle, FHitResult& OutHitResult);
    class AActor* GetEffectCauser(const FGameplayEffectContextHandle& Handle);
    TArray<class AActor*> GetActors(FGameplayEffectContextHandle& Handle);
    int32 GetAbilityLevel(const FGameplayEffectContextHandle& Handle);
    class UGameplayAbility* GetAbility(const FGameplayEffectContextHandle& Handle);
    void Clear(FGameplayEffectContextHandle& Handle);
    void AddSourceObject(FGameplayEffectContextHandle& Handle, class UObject* NewSourceObject);
    void AddOrigin(FGameplayEffectContextHandle& Handle, FVector InOrigin);
    void AddInstigator(FGameplayEffectContextHandle& Handle, class AActor* InInstigator, class AActor* InEffectCauser);
    void AddHitResult(FGameplayEffectContextHandle& Handle, const FHitResult& InHitResult, bool bReset);
    void AddActors(FGameplayEffectContextHandle& Handle, const TArray<class AActor*>& InActors, bool bReset);
}; // Size: 0x28

class UGameplayEffectCustomExecutionOutputMixinLibrary : public UObject
{

    bool ShouldTriggerConditionalGameplayEffects(FGameplayEffectCustomExecutionOutput& CustomExecutionOutput);
    void MarkStackCountHandledManually(FGameplayEffectCustomExecutionOutput& CustomExecutionOutput);
    void MarkGameplayCuesHandledManually(FGameplayEffectCustomExecutionOutput& CustomExecutionOutput);
    void MarkConditionalGameplayEffectsToTrigger(FGameplayEffectCustomExecutionOutput& CustomExecutionOutput);
    bool IsStackCountHandledManually(FGameplayEffectCustomExecutionOutput& CustomExecutionOutput);
    TArray<FGameplayModifierEvaluatedData> GetOutputModifiersRef(FGameplayEffectCustomExecutionOutput& CustomExecutionOutput);
    TArray<FGameplayModifierEvaluatedData> GetOutputModifiers(FGameplayEffectCustomExecutionOutput& CustomExecutionOutput);
    bool AreGameplayCuesHandledManually(FGameplayEffectCustomExecutionOutput& CustomExecutionOutput);
    void AddOutputModifier(FGameplayEffectCustomExecutionOutput& CustomExecutionOutput, const FGameplayModifierEvaluatedData& InOutputMod);
}; // Size: 0x28

class UGameplayEffectCustomExecutionParametersMixinLibrary : public UObject
{

    class UAbilitySystemComponent* GetTargetAbilitySystemComponent(const FGameplayEffectCustomExecutionParameters& CustomExecutionParameters);
    class UAbilitySystemComponent* GetSourceAbilitySystemComponent(const FGameplayEffectCustomExecutionParameters& CustomExecutionParameters);
    FPredictionKey GetPredictionKey(const FGameplayEffectCustomExecutionParameters& CustomExecutionParameters);
    FGameplayTagContainer GetPassedInTags(const FGameplayEffectCustomExecutionParameters& CustomExecutionParameters);
    FGameplayEffectSpec GetOwningSpecForPreExecuteMod(const FGameplayEffectCustomExecutionParameters& CustomExecutionParameters);
    FGameplayEffectSpec GetOwningSpec(const FGameplayEffectCustomExecutionParameters& CustomExecutionParameters);
    TArray<FActiveGameplayEffectHandle> GetIgnoreHandles(const FGameplayEffectCustomExecutionParameters& CustomExecutionParameters);
    void AttemptCalculateTransientAggregatorMagnitude(const FGameplayEffectCustomExecutionParameters& ExecutionParameters, const FGameplayTag& InAggregatorIdentifier, const FGameplayEffectExecutionParameters& InParams, float& OutMagnitude);
    bool AttemptCalculateCapturedAttributeMagnitudeWithBase(const FGameplayEffectCustomExecutionParameters& CustomExecutionParameters, const FGameplayEffectAttributeCaptureDefinition& InCaptureDef, const FGameplayEffectExecutionParameters& InParams, float InBaseValue, float& OutMagnitude);
    bool AttemptCalculateCapturedAttributeMagnitude(const FGameplayEffectCustomExecutionParameters& CustomExecutionParameters, const FGameplayEffectAttributeCaptureDefinition& InCaptureDef, const FGameplayEffectExecutionParameters& InParams, float& OutMagnitude);
    bool AttemptCalculateCapturedAttributeBonusMagnitude(const FGameplayEffectCustomExecutionParameters& CustomExecutionParameters, const FGameplayEffectAttributeCaptureDefinition& InCaptureDef, const FGameplayEffectExecutionParameters& InParams, float& OutBonusMagnitude);
    bool AttemptCalculateCapturedAttributeBaseValue(const FGameplayEffectCustomExecutionParameters& CustomExecutionParameters, const FGameplayEffectAttributeCaptureDefinition& InCaptureDef, float& OutBaseValue);
}; // Size: 0x28

class UGameplayEffectExecutionDefinitionMixinLibrary : public UObject
{

    void SetPassedInTags(FGameplayEffectExecutionDefinition& Def, const FGameplayTagContainer& PassedInTags);
    void SetConditionalGameplayEffects(FGameplayEffectExecutionDefinition& Def, const TArray<FConditionalGameplayEffect>& ConditionalGameplayEffects);
    void SetCalculationModifiers(FGameplayEffectExecutionDefinition& Def, const TArray<FGameplayEffectExecutionScopedModifierInfo>& CalculationModifiers);
    void SetCalculationClass(FGameplayEffectExecutionDefinition& Def, const TSubclassOf<class UGameplayEffectExecutionCalculation>& CalculationClass);
    FGameplayTagContainer GetPassedInTags(FGameplayEffectExecutionDefinition& Def);
    TArray<FConditionalGameplayEffect> GetConditionalGameplayEffects(FGameplayEffectExecutionDefinition& Def);
    TArray<FGameplayEffectExecutionScopedModifierInfo> GetCalculationModifiers(FGameplayEffectExecutionDefinition& Def);
    TSubclassOf<class UGameplayEffectExecutionCalculation> GetCalculationClass(FGameplayEffectExecutionDefinition& Def);
    void AddConditionalGameplayEffect(FGameplayEffectExecutionDefinition& Def, const FConditionalGameplayEffect& ConditionalGameplayEffect);
    void AddCalculationModifier(FGameplayEffectExecutionDefinition& Def, const FGameplayEffectExecutionScopedModifierInfo& CalculationModifier);
}; // Size: 0x28

class UGameplayEffectExecutionParametersMixinLibrary : public UObject
{

    void SetIncludePredictiveMods(FGameplayEffectExecutionParameters& Data, bool bShouldIncludePredictiveMods);
    void SetCapturedSourceTagsFromSpec(FGameplayEffectExecutionParameters& Data, FGameplayEffectSpec& Spec);
    bool GetIncludePredictiveMods(const FGameplayEffectExecutionParameters& Data);
    TArray<FActiveGameplayEffectHandle> GetIgnoreHandles(FGameplayEffectExecutionParameters& Data);
    FGameplayTagContainer GetAppliedTargetTagFilter(FGameplayEffectExecutionParameters& Data);
    FGameplayTagContainer GetAppliedSourceTagFilter(FGameplayEffectExecutionParameters& Data);
}; // Size: 0x28

class UGameplayEffectExecutionScopedModifierInfoMixinLibrary : public UObject
{

    FGameplayTag GetTransientAggregatorIdentifier(FGameplayEffectExecutionScopedModifierInfo& Handle);
    FGameplayEffectAttributeCaptureDefinition GetCapturedAttribute(FGameplayEffectExecutionScopedModifierInfo& Handle);
    EGameplayEffectScopedModifierAggregatorType GetAggregatorType(FGameplayEffectExecutionScopedModifierInfo& Handle);
}; // Size: 0x28

class UGameplayEffectSpecHandleMixinLibrary : public UObject
{

    bool IsValid(FGameplayEffectSpecHandle& Handle);
    FGameplayEffectSpec GetSpec(FGameplayEffectSpecHandle& Handle);
}; // Size: 0x28

class UGameplayEffectSpecMixinLibrary : public UObject
{

    FString ToSimpleString(const FGameplayEffectSpec& Spec);
    void SetupAttributeCaptureDefinitions(FGameplayEffectSpec& Spec);
    void SetLevel(FGameplayEffectSpec& Spec, float InLevel);
    void SetContext(FGameplayEffectSpec& Spec, FGameplayEffectContextHandle NewEffectContextHandle);
    void SetByCallerMagnitude(FGameplayEffectSpec& Spec, FGameplayTag DataTag, float Magnitude);
    void RecaptureSourceActorTags(FGameplayEffectSpec& Spec);
    void RecaptureAttributeDataForClone(FGameplayEffectSpec& Spec, class UAbilitySystemComponent* OriginalASC, class UAbilitySystemComponent* NewASC);
    void PrintAll(const FGameplayEffectSpec& Spec);
    int32 GetStackCount(const FGameplayEffectSpec& Spec);
    float GetSetByCallerMagnitude(const FGameplayEffectSpec& Spec, FGameplayTag DataTag, bool bWarnIfNotFound, float DefaultIfNotFound);
    float GetPeriod(const FGameplayEffectSpec& Spec);
    float GetModifierMagnitude(const FGameplayEffectSpec& Spec, int32 ModifierIdx, bool bFactorInStackCount);
    float GetModifiedAttributeMagnitude(FGameplayEffectSpec& Spec, const FGameplayAttribute& Attribute);
    float GetLevel(const FGameplayEffectSpec& Spec);
    TArray<FGameplayAbilitySpecDef> GetGrantedAbilitySpecs(const FGameplayEffectSpec& Spec);
    FGameplayTagContainer GetDynamicGrantedTags(const FGameplayEffectSpec& Spec);
    FGameplayTagContainer GetDynamicAssetTags(const FGameplayEffectSpec& Spec);
    int32 GetDurationLocked(const FGameplayEffectSpec& Spec);
    float GetDuration(const FGameplayEffectSpec& Spec);
    FGameplayEffectContextHandle GetContext(const FGameplayEffectSpec& Spec);
    int32 GetCompletedTargetAttributeCapture(const FGameplayEffectSpec& Spec);
    int32 GetCompletedSourceAttributeCapture(const FGameplayEffectSpec& Spec);
    float GetChanceToApplyToTarget(const FGameplayEffectSpec& Spec);
    FAngelscriptTagContainerAggregator GetCapturedTargetTags(const FGameplayEffectSpec& Spec);
    FAngelscriptTagContainerAggregator GetCapturedSourceTags(const FGameplayEffectSpec& Spec);
    FGameplayTagContainer GetAllGrantedTags(const FGameplayEffectSpec& Spec);
    FGameplayTagContainer GetAllAssetTags(const FGameplayEffectSpec& Spec);
    void CaptureAttributeDataFromTarget(FGameplayEffectSpec& Spec, class UAbilitySystemComponent* TargetAbilitySystemComponent);
    void CalculateModifierMagnitudes(FGameplayEffectSpec& Spec);
    float CalculateModifiedDuration(FGameplayEffectSpec& Spec);
    void ApplyExecutorModifiersForDefinition(FGameplayEffectSpec& Spec, UClass* CalculationClass, const FGameplayEffectAttributeCaptureDefinition& InCaptureDef, float& ValueToModify);
    void AppendDynamicAssetTags(FGameplayEffectSpec& Spec, const FGameplayTagContainer& ContainerToAdd);
    void AddDynamicAssetTag(FGameplayEffectSpec& Spec, const FGameplayTag& TagToAdd);
}; // Size: 0x28

class UGameplayModifierEvaluatedDataMixinLibrary : public UObject
{

    FString ToSimpleString(const FGameplayModifierEvaluatedData& Data);
    void SetModifierOp(FGameplayModifierEvaluatedData& Data, TEnumAsByte<EGameplayModOp::Type> NewValue);
    void SetMagnitude(FGameplayModifierEvaluatedData& Data, float NewValue);
    void SetIsValid(FGameplayModifierEvaluatedData& Data, bool NewValue);
    void SetHandle(FGameplayModifierEvaluatedData& Data, FActiveGameplayEffectHandle NewValue);
    void SetAttribute(FGameplayModifierEvaluatedData& Data, const FGameplayAttribute& NewValue);
    TEnumAsByte<EGameplayModOp::Type> GetModifierOp(const FGameplayModifierEvaluatedData& Data);
    float GetMagnitude(const FGameplayModifierEvaluatedData& Data);
    bool GetIsValid(const FGameplayModifierEvaluatedData& Data);
    FActiveGameplayEffectHandle GetHandle(const FGameplayModifierEvaluatedData& Data);
    FGameplayAttribute GetAttribute(const FGameplayModifierEvaluatedData& Data);
}; // Size: 0x28

class UGameplayTaskMixinLibrary : public UObject
{

    void ReadyForActivation(class UGameplayTask* Task);
}; // Size: 0x28

class UInheritedTagContainerMixinLibrary : public UObject
{

    void RemoveTag(FInheritedTagContainer& Container, const FGameplayTag& TagToRemove);
    void AddTag(FInheritedTagContainer& Container, const FGameplayTag& TagToAdd);
}; // Size: 0x28

#endif
