
#pragma once

#include "GameplayAbilities_enums.hpp"
#include <Unreal/UObject.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/FieldPath.hpp>

using namespace RC::Unreal;

class UGameplayEffect;
class UGameplayEffectCustomApplicationRequirement;

struct FGameplayTag
{
    //RC::Unreal::FName TagName;                                                                    // 0x0000 (size: 0x8)
    char TagName[0x8];                                                                    // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FGameplayTagQuery
{
    RC::Unreal::int32 TokenStreamVersion;                                                         // 0x0000 (size: 0x4)
    RC::Unreal::TArray<FGameplayTag> TagDictionary;                                               // 0x0008 (size: 0x10)
    RC::Unreal::TArray<RC::Unreal::uint8> QueryTokenStream;                                                   // 0x0018 (size: 0x10)
    RC::Unreal::FString UserDescription;                                                          // 0x0028 (size: 0x10)
    RC::Unreal::FString AutoDescription;                                                          // 0x0038 (size: 0x10)
}; // Size: 0x48

struct FDataRegistryType
{
    RC::Unreal::FName Name;                                                                   // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FCurveTableRowHandle
{
    class UCurveTable* CurveTable;                                                    // 0x0000 (size: 0x8)
    //RC::Unreal::FName RowName;                                                                    // 0x0008 (size: 0x8)
    char RowName[0x8];

}; // Size: 0x10

struct FScalableFloat
{
    float Value;                                                                      // 0x0000 (size: 0x4)
    FCurveTableRowHandle Curve;                                                       // 0x0008 (size: 0x10)
    FDataRegistryType RegistryType;                                                   // 0x0018 (size: 0x8)
    char buffer[0x8];
}; // Size: 0x28

struct FGameplayTagContainer
{
    RC::Unreal::TArray<FGameplayTag> GameplayTags;                                                // 0x0000 (size: 0x10)
    RC::Unreal::TArray<FGameplayTag> ParentTags;                                                  // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FGameplayAttribute
{
    RC::Unreal::FString AttributeName;                                                            // 0x0000 (size: 0x10)
    RC::Unreal::TFieldPath<RC::Unreal::FProperty> Attribute;                                               // 0x0010 (size: 0x20)
    class UStruct* AttributeOwner;                                                    // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FGameplayEffectAttributeCaptureDefinition
{
    FGameplayAttribute AttributeToCapture;                                            // 0x0000 (size: 0x38)
    EGameplayEffectAttributeCaptureSource AttributeSource;                            // 0x0038 (size: 0x1)
    bool bSnapshot;                                                                   // 0x0039 (size: 0x1)

}; // Size: 0x40

struct FAttributeBasedFloat
{
    FScalableFloat Coefficient;                                                       // 0x0000 (size: 0x28)
    FScalableFloat PreMultiplyAdditiveValue;                                          // 0x0028 (size: 0x28)
    FScalableFloat PostMultiplyAdditiveValue;                                         // 0x0050 (size: 0x28)
    FGameplayEffectAttributeCaptureDefinition BackingAttribute;                       // 0x0078 (size: 0x40)
    FCurveTableRowHandle AttributeCurve;                                              // 0x00B8 (size: 0x10)
    EAttributeBasedFloatCalculationType AttributeCalculationType;                     // 0x00C8 (size: 0x1)
    EGameplayModEvaluationChannel FinalChannel;                                       // 0x00C9 (size: 0x1)
    FGameplayTagContainer SourceTagFilter;                                            // 0x00D0 (size: 0x20)
    FGameplayTagContainer TargetTagFilter;                                            // 0x00F0 (size: 0x20)

}; // Size: 0x110

struct FCustomCalculationBasedFloat
{
    RC::Unreal::TSubclassOf<class UGameplayModMagnitudeCalculation> CalculationClassMagnitude;    // 0x0000 (size: 0x8)
    FScalableFloat Coefficient;                                                       // 0x0008 (size: 0x28)
    FScalableFloat PreMultiplyAdditiveValue;                                          // 0x0030 (size: 0x28)
    FScalableFloat PostMultiplyAdditiveValue;                                         // 0x0058 (size: 0x28)
    FCurveTableRowHandle FinalLookupCurve;                                            // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FSetByCallerFloat
{
    //RC::Unreal::FName DataName;                                                                   // 0x0000 (size: 0x8)
    char DataName[0x8];
    FGameplayTag DataTag;                                                             // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FGameplayEffectModifierMagnitude
{
    EGameplayEffectMagnitudeCalculation MagnitudeCalculationType;                     // 0x0000 (size: 0x1)
    FScalableFloat ScalableFloatMagnitude;                                            // 0x0008 (size: 0x28)
    FAttributeBasedFloat AttributeBasedMagnitude;                                     // 0x0030 (size: 0x110)
    FCustomCalculationBasedFloat CustomMagnitude;                                     // 0x0140 (size: 0x90)
    FSetByCallerFloat SetByCallerMagnitude;                                           // 0x01D0 (size: 0x10)

}; // Size: 0x1E0

struct FGameplayModEvaluationChannelSettings
{
    EGameplayModEvaluationChannel Channel;                                            // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FGameplayTagRequirements
{
    FGameplayTagContainer RequireTags;                                                // 0x0000 (size: 0x20)
    FGameplayTagContainer IgnoreTags;                                                 // 0x0020 (size: 0x20)
    FGameplayTagQuery TagQuery;                                                       // 0x0040 (size: 0x48)

}; // Size: 0x88

struct FGameplayModifierInfo
{
    FGameplayAttribute Attribute;                                                     // 0x0000 (size: 0x38)
    RC::Unreal::TEnumAsByte<EGameplayModOp::Type> ModifierOp;                                     // 0x0038 (size: 0x1)
    FGameplayEffectModifierMagnitude ModifierMagnitude;                               // 0x0040 (size: 0x1E0)
    FGameplayModEvaluationChannelSettings EvaluationChannelSettings;                  // 0x0220 (size: 0x1)
    FGameplayTagRequirements SourceTags;                                              // 0x0228 (size: 0x88)
    FGameplayTagRequirements TargetTags;                                              // 0x02B0 (size: 0x88)

}; // Size: 0x338

struct FGameplayEffectCue
{
    FGameplayAttribute MagnitudeAttribute;                                            // 0x0000 (size: 0x38)
    float MinLevel;                                                                   // 0x0038 (size: 0x4)
    float MaxLevel;                                                                   // 0x003C (size: 0x4)
    FGameplayTagContainer GameplayCueTags;                                            // 0x0040 (size: 0x20)

}; // Size: 0x60

struct FInheritedTagContainer
{
    FGameplayTagContainer CombinedTags;                                               // 0x0000 (size: 0x20)
    FGameplayTagContainer Added;                                                      // 0x0020 (size: 0x20)
    FGameplayTagContainer Removed;                                                    // 0x0040 (size: 0x20)

}; // Size: 0x60

struct FGameplayEffectQuery
{
    //FGameplayEffectQueryCustomMatchDelegate_BP CustomMatchDelegate_BP;                // 0x0010 (size: 0x10)
    char buffer[0x10];
    //void ActiveGameplayEffectQueryCustomMatch_Dynamic(FActiveGameplayEffect Effect, bool& bMatches);
    FGameplayTagQuery OwningTagQuery;                                                 // 0x0020 (size: 0x48)
    FGameplayTagQuery EffectTagQuery;                                                 // 0x0068 (size: 0x48)
    FGameplayTagQuery SourceTagQuery;                                                 // 0x00B0 (size: 0x48)
    FGameplayTagQuery SourceAggregateTagQuery;                                        // 0x00F8 (size: 0x48)
    FGameplayAttribute ModifyingAttribute;                                            // 0x0140 (size: 0x38)
    class UObject* EffectSource;                                                      // 0x0178 (size: 0x8)
    RC::Unreal::TSubclassOf<class UGameplayEffect> EffectDefinition;                              // 0x0180 (size: 0x8)

}; // Size: 0x198

struct FGameplayAbilitySpecHandle
{
    RC::Unreal::int32 Handle;                                                                     // 0x0000 (size: 0x4)
}; // Size: 0x4

struct FGameplayAbilitySpecDef
{
    RC::Unreal::TSubclassOf<class UGameplayAbility> Ability;                                      // 0x0000 (size: 0x8)
    FScalableFloat LevelScalableFloat;                                                // 0x0008 (size: 0x28)
    RC::Unreal::int32 InputID;                                                                    // 0x0030 (size: 0x4)
    EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy;                          // 0x0034 (size: 0x1)
    RC::Unreal::TWeakObjectPtr<class RC::Unreal::UObject> SourceObject;                                       // 0x0038 (size: 0x8)
    FGameplayAbilitySpecHandle AssignedHandle;                                        // 0x0090 (size: 0x4)

}; // Size: 0x98

struct FGameplayEffectExecutionScopedModifierInfo
{
    FGameplayEffectAttributeCaptureDefinition CapturedAttribute;                      // 0x0000 (size: 0x40)
    FGameplayTag TransientAggregatorIdentifier;                                       // 0x0040 (size: 0x8)
    EGameplayEffectScopedModifierAggregatorType AggregatorType;                       // 0x0048 (size: 0x1)
    RC::Unreal::TEnumAsByte<EGameplayModOp::Type> ModifierOp;                                     // 0x0049 (size: 0x1)
    FGameplayEffectModifierMagnitude ModifierMagnitude;                               // 0x0050 (size: 0x1E0)
    FGameplayModEvaluationChannelSettings EvaluationChannelSettings;                  // 0x0230 (size: 0x1)
    FGameplayTagRequirements SourceTags;                                              // 0x0238 (size: 0x88)
    FGameplayTagRequirements TargetTags;                                              // 0x02C0 (size: 0x88)

}; // Size: 0x348

struct FConditionalGameplayEffect
{
    RC::Unreal::TSubclassOf<class UGameplayEffect> EffectClass;                                   // 0x0000 (size: 0x8)
    FGameplayTagContainer RequiredSourceTags;                                         // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FGameplayEffectExecutionDefinition
{
    RC::Unreal::TSubclassOf<class UGameplayEffectExecutionCalculation> CalculationClass;          // 0x0000 (size: 0x8)
    FGameplayTagContainer PassedInTags;                                               // 0x0008 (size: 0x20)
    RC::Unreal::TArray<FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;          // 0x0028 (size: 0x10)
    RC::Unreal::TArray<FConditionalGameplayEffect> ConditionalGameplayEffects;                    // 0x0038 (size: 0x10)

}; // Size: 0x48

class UGameplayEffect : public RC::Unreal::UObject
{
    public:
    
    EGameplayEffectDurationType DurationPolicy;                                       // 0x0030 (size: 0x1)
    FGameplayEffectModifierMagnitude DurationMagnitude;                               // 0x0038 (size: 0x1E0)
    FScalableFloat Period;                                                            // 0x0218 (size: 0x28)
    bool bExecutePeriodicEffectOnApplication;                                         // 0x0240 (size: 0x1)
    EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy;            // 0x0241 (size: 0x1)
    RC::Unreal::TArray<FGameplayModifierInfo> Modifiers;                                          // 0x0248 (size: 0x10)
    RC::Unreal::TArray<FGameplayEffectExecutionDefinition> Executions;                            // 0x0258 (size: 0x10)
    FScalableFloat ChanceToApplyToTarget;                                             // 0x0268 (size: 0x28)
    RC::Unreal::TArray<class RC::Unreal::TSubclassOf<UGameplayEffectCustomApplicationRequirement>> ApplicationRequirements; // 0x0290 (size: 0x10)
    RC::Unreal::TArray<FConditionalGameplayEffect> ConditionalGameplayEffects;                    // 0x02A0 (size: 0x10)
    RC::Unreal::TArray<class RC::Unreal::TSubclassOf<UGameplayEffect>> OverflowEffects;                       // 0x02B0 (size: 0x10)
    bool bDenyOverflowApplication;                                                    // 0x02C0 (size: 0x1)
    bool bClearStackOnOverflow;                                                       // 0x02C1 (size: 0x1)
    RC::Unreal::TArray<class RC::Unreal::TSubclassOf<UGameplayEffect>> PrematureExpirationEffectClasses;      // 0x02C8 (size: 0x10)
    RC::Unreal::TArray<class RC::Unreal::TSubclassOf<UGameplayEffect>> RoutineExpirationEffectClasses;        // 0x02D8 (size: 0x10)
    bool bRequireModifierSuccessToTriggerCues;                                        // 0x02E8 (size: 0x1)
    bool bSuppressStackingCues;                                                       // 0x02E9 (size: 0x1)
    RC::Unreal::TArray<FGameplayEffectCue> GameplayCues;                                          // 0x02F0 (size: 0x10)
    class UGameplayEffectUIData* UIData;                                              // 0x0300 (size: 0x8)
    FInheritedTagContainer InheritableGameplayEffectTags;                             // 0x0308 (size: 0x60)
    FInheritedTagContainer InheritableOwnedTagsContainer;                             // 0x0368 (size: 0x60)
    FInheritedTagContainer InheritableBlockedAbilityTagsContainer;                    // 0x03C8 (size: 0x60)
    FGameplayTagRequirements OngoingTagRequirements;                                  // 0x0428 (size: 0x88)
    FGameplayTagRequirements ApplicationTagRequirements;                              // 0x04B0 (size: 0x88)
    FGameplayTagRequirements RemovalTagRequirements;                                  // 0x0538 (size: 0x88)
    FInheritedTagContainer RemoveGameplayEffectsWithTags;                             // 0x05C0 (size: 0x60)
    FGameplayTagRequirements GrantedApplicationImmunityTags;                          // 0x0620 (size: 0x88)
    FGameplayEffectQuery GrantedApplicationImmunityQuery;                             // 0x06A8 (size: 0x198)
    FGameplayEffectQuery RemoveGameplayEffectQuery;                                   // 0x0848 (size: 0x198)
    EGameplayEffectStackingType StackingType;                                         // 0x09E1 (size: 0x1)
    RC::Unreal::int32 StackLimitCount;                                                            // 0x09E4 (size: 0x4)
    EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy;                 // 0x09E8 (size: 0x1)
    EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy;                       // 0x09E9 (size: 0x1)
    EGameplayEffectStackingExpirationPolicy StackExpirationPolicy;                    // 0x09EA (size: 0x1)
    RC::Unreal::TArray<FGameplayAbilitySpecDef> GrantedAbilities;                                 // 0x09F0 (size: 0x10)
    RC::Unreal::TArray<class UGameplayEffectComponent*> GEComponents;                             // 0x0A60 (size: 0x10)
}; // Size: 0xA70
