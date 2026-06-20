#pragma once

#include <Unreal/UObject.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/FieldPath.hpp>

#include "GameplayAbilities_enums.hpp"
#include "G1R_enums.hpp"

class UGameplayEffect;
class UGameplayEffectCustomApplicationRequirement;

// TODO: FIX Sizes
struct FGameplayTag
{
    RC::Unreal::FName TagName; // 0x0000 (size: 0x8)
    // RC::Unreal::FString TagName;

    bool operator==(const FGameplayTag &Other) const
    {
        return TagName == Other.TagName;
    }
}; // Size: 0x8

inline int GetTypeHash(const FGameplayTag &Tag)
{
    return GetTypeHash(Tag.TagName);
}

struct FHitCueData
{
    FGameplayTag m_DefaultHitData; // 0x0000 (size: 0x8)
    // TMap<FGameplayTag, FGameplayTag> m_HitCueDataBySpecie;                // 0x0008 (size: 0x50)
    char buffer[0x50];

}; // Size: 0x58

struct FGameplayTagQuery
{
    RC::Unreal::int32 TokenStreamVersion;                   // 0x0000 (size: 0x4)
    RC::Unreal::TArray<FGameplayTag> TagDictionary;         // 0x0008 (size: 0x10)
    RC::Unreal::TArray<RC::Unreal::uint8> QueryTokenStream; // 0x0018 (size: 0x10)
    RC::Unreal::FString UserDescription;                    // 0x0028 (size: 0x10)
    RC::Unreal::FString AutoDescription;                    // 0x0038 (size: 0x10)
}; // Size: 0x48

struct FDataRegistryType
{
    // RC::Unreal::FName Name;                                                                   // 0x0000 (size: 0x8)
    char Name[0x8];

}; // Size: 0x8

struct FCurveTableRowHandle
{
    class UCurveTable *CurveTable; // 0x0000 (size: 0x8)
    // RC::Unreal::FName RowName;                                                                    // 0x0008 (size: 0x8)
    char RowName[0x8];

}; // Size: 0x10

struct FScalableFloat
{
    float Value;                    // 0x0000 (size: 0x4)
    FCurveTableRowHandle Curve;     // 0x0008 (size: 0x10)
    FDataRegistryType RegistryType; // 0x0018 (size: 0x8)
    char buffer[0x8];
}; // Size: 0x28

struct FGameplayTagContainer
{
    RC::Unreal::TArray<FGameplayTag> GameplayTags; // 0x0000 (size: 0x10)
    RC::Unreal::TArray<FGameplayTag> ParentTags;   // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FGameplayAttribute
{
    RC::Unreal::FString AttributeName;                       // 0x0000 (size: 0x10)
    RC::Unreal::TFieldPath<RC::Unreal::FProperty> Attribute; // 0x0010 (size: 0x20)
    class UStruct *AttributeOwner;                           // 0x0030 (size: 0x8)

    bool operator==(const FGameplayAttribute &Other) const
    {
        return AttributeName == Other.AttributeName;
    }
}; // Size: 0x38

inline int GetTypeHash(const FGameplayAttribute &GameplayAttribute)
{
    return GetTypeHash(GameplayAttribute.AttributeName);
}

struct FGameplayEffectAttributeCaptureDefinition
{
    FGameplayAttribute AttributeToCapture;                 // 0x0000 (size: 0x38)
    EGameplayEffectAttributeCaptureSource AttributeSource; // 0x0038 (size: 0x1)
    bool bSnapshot;                                        // 0x0039 (size: 0x1)

}; // Size: 0x40

struct FAttributeBasedFloat
{
    FScalableFloat Coefficient;                                   // 0x0000 (size: 0x28)
    FScalableFloat PreMultiplyAdditiveValue;                      // 0x0028 (size: 0x28)
    FScalableFloat PostMultiplyAdditiveValue;                     // 0x0050 (size: 0x28)
    FGameplayEffectAttributeCaptureDefinition BackingAttribute;   // 0x0078 (size: 0x40)
    FCurveTableRowHandle AttributeCurve;                          // 0x00B8 (size: 0x10)
    EAttributeBasedFloatCalculationType AttributeCalculationType; // 0x00C8 (size: 0x1)
    EGameplayModEvaluationChannel FinalChannel;                   // 0x00C9 (size: 0x1)
    FGameplayTagContainer SourceTagFilter;                        // 0x00D0 (size: 0x20)
    FGameplayTagContainer TargetTagFilter;                        // 0x00F0 (size: 0x20)

}; // Size: 0x110

struct FCustomCalculationBasedFloat
{
    RC::Unreal::TSubclassOf<class UGameplayModMagnitudeCalculation> CalculationClassMagnitude; // 0x0000 (size: 0x8)
    FScalableFloat Coefficient;                                                                // 0x0008 (size: 0x28)
    FScalableFloat PreMultiplyAdditiveValue;                                                   // 0x0030 (size: 0x28)
    FScalableFloat PostMultiplyAdditiveValue;                                                  // 0x0058 (size: 0x28)
    FCurveTableRowHandle FinalLookupCurve;                                                     // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FSetByCallerFloat
{
    // RC::Unreal::FName DataName;                                                                   // 0x0000 (size: 0x8)
    char DataName[0x8];
    FGameplayTag DataTag; // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FGameplayEffectModifierMagnitude
{
    EGameplayEffectMagnitudeCalculation MagnitudeCalculationType; // 0x0000 (size: 0x1)
    FScalableFloat ScalableFloatMagnitude;                        // 0x0008 (size: 0x28)
    FAttributeBasedFloat AttributeBasedMagnitude;                 // 0x0030 (size: 0x110)
    FCustomCalculationBasedFloat CustomMagnitude;                 // 0x0140 (size: 0x90)
    FSetByCallerFloat SetByCallerMagnitude;                       // 0x01D0 (size: 0x10)

}; // Size: 0x1E0

struct FGameplayModEvaluationChannelSettings
{
    EGameplayModEvaluationChannel Channel; // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FGameplayTagRequirements
{
    FGameplayTagContainer RequireTags; // 0x0000 (size: 0x20)
    FGameplayTagContainer IgnoreTags;  // 0x0020 (size: 0x20)
    FGameplayTagQuery TagQuery;        // 0x0040 (size: 0x48)

}; // Size: 0x88

struct FGameplayModifierInfo
{
    FGameplayAttribute Attribute;                                    // 0x0000 (size: 0x38)
    RC::Unreal::TEnumAsByte<EGameplayModOp::Type> ModifierOp;        // 0x0038 (size: 0x1)
    FGameplayEffectModifierMagnitude ModifierMagnitude;              // 0x0040 (size: 0x1E0)
    FGameplayModEvaluationChannelSettings EvaluationChannelSettings; // 0x0220 (size: 0x1)
    FGameplayTagRequirements SourceTags;                             // 0x0228 (size: 0x88)
    FGameplayTagRequirements TargetTags;                             // 0x02B0 (size: 0x88)

}; // Size: 0x338

struct FGameplayEffectCue
{
    FGameplayAttribute MagnitudeAttribute; // 0x0000 (size: 0x38)
    float MinLevel;                        // 0x0038 (size: 0x4)
    float MaxLevel;                        // 0x003C (size: 0x4)
    FGameplayTagContainer GameplayCueTags; // 0x0040 (size: 0x20)

}; // Size: 0x60

struct FInheritedTagContainer
{
    FGameplayTagContainer CombinedTags; // 0x0000 (size: 0x20)
    FGameplayTagContainer Added;        // 0x0020 (size: 0x20)
    FGameplayTagContainer Removed;      // 0x0040 (size: 0x20)

}; // Size: 0x60

struct FGameplayEffectQuery
{
    // FGameplayEffectQueryCustomMatchDelegate_BP CustomMatchDelegate_BP;                // 0x0010 (size: 0x10)
    char buffer[0x10];
    // void ActiveGameplayEffectQueryCustomMatch_Dynamic(FActiveGameplayEffect Effect, bool& bMatches);
    FGameplayTagQuery OwningTagQuery;                                // 0x0020 (size: 0x48)
    FGameplayTagQuery EffectTagQuery;                                // 0x0068 (size: 0x48)
    FGameplayTagQuery SourceTagQuery;                                // 0x00B0 (size: 0x48)
    FGameplayTagQuery SourceAggregateTagQuery;                       // 0x00F8 (size: 0x48)
    FGameplayAttribute ModifyingAttribute;                           // 0x0140 (size: 0x38)
    RC::Unreal::UObject *EffectSource;                               // 0x0178 (size: 0x8)
    RC::Unreal::TSubclassOf<class UGameplayEffect> EffectDefinition; // 0x0180 (size: 0x8)

}; // Size: 0x198

struct FGameplayAbilitySpecHandle
{
    RC::Unreal::int32 Handle; // 0x0000 (size: 0x4)
}; // Size: 0x4

struct FGameplayAbilitySpecDef
{
    RC::Unreal::TSubclassOf<class UGameplayAbility> Ability;            // 0x0000 (size: 0x8)
    FScalableFloat LevelScalableFloat;                                  // 0x0008 (size: 0x28)
    RC::Unreal::int32 InputID;                                          // 0x0030 (size: 0x4)
    EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy;            // 0x0034 (size: 0x1)
    RC::Unreal::TWeakObjectPtr<class RC::Unreal::UObject> SourceObject; // 0x0038 (size: 0x8)
    FGameplayAbilitySpecHandle AssignedHandle;                          // 0x0090 (size: 0x4)

}; // Size: 0x98

struct FGameplayEffectExecutionScopedModifierInfo
{
    FGameplayEffectAttributeCaptureDefinition CapturedAttribute;     // 0x0000 (size: 0x40)
    FGameplayTag TransientAggregatorIdentifier;                      // 0x0040 (size: 0x8)
    EGameplayEffectScopedModifierAggregatorType AggregatorType;      // 0x0048 (size: 0x1)
    RC::Unreal::TEnumAsByte<EGameplayModOp::Type> ModifierOp;        // 0x0049 (size: 0x1)
    FGameplayEffectModifierMagnitude ModifierMagnitude;              // 0x0050 (size: 0x1E0)
    FGameplayModEvaluationChannelSettings EvaluationChannelSettings; // 0x0230 (size: 0x1)
    FGameplayTagRequirements SourceTags;                             // 0x0238 (size: 0x88)
    FGameplayTagRequirements TargetTags;                             // 0x02C0 (size: 0x88)

}; // Size: 0x348

struct FConditionalGameplayEffect
{
    RC::Unreal::TSubclassOf<class UGameplayEffect> EffectClass; // 0x0000 (size: 0x8)
    FGameplayTagContainer RequiredSourceTags;                   // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FGameplayEffectExecutionDefinition
{
    RC::Unreal::TSubclassOf<class UGameplayEffectExecutionCalculation> CalculationClass; // 0x0000 (size: 0x8)
    FGameplayTagContainer PassedInTags;                                                  // 0x0008 (size: 0x20)
    RC::Unreal::TArray<FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers; // 0x0028 (size: 0x10)
    RC::Unreal::TArray<FConditionalGameplayEffect> ConditionalGameplayEffects;           // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FSpellLevelRange
{
    float CastTime;                                                                   // 0x0000 (size: 0x4)
    float CastManaCost;                                                               // 0x0004 (size: 0x4)
    float ManaCostSc;                                                                 // 0x0008 (size: 0x4)
    //TSubclassOf<class UScriptGameplayAbility> m_SpellClass;                           // 0x0010 (size: 0x8)
    void* m_SpellClass;
    //TSubclassOf<class USpellConfigLevelData> m_SpellConfigLevelData;                  // 0x0018 (size: 0x8)
    void* m_SpellConfigLevelData;

}; // Size: 0x20

struct FCameraBehaviour
{
    RC::Unreal::FVector m_SocketOffset;                                                           // 0x0000 (size: 0x18)
    RC::Unreal::FVector m_SocketMinCombatOffset;                                                  // 0x0018 (size: 0x18)
    float m_ArmLength;                                                                // 0x0030 (size: 0x4)
    float m_Fov;                                                                      // 0x0034 (size: 0x4)
    float m_LagSpeed;                                                                 // 0x0038 (size: 0x4)
    float m_RotationLagSpeed;                                                         // 0x003C (size: 0x4)
    float m_RotationLagSpeedPitch;                                                    // 0x0040 (size: 0x4)
    float m_LagMaxDistance;                                                           // 0x0044 (size: 0x4)
    ECamConditions m_Condition;                                                       // 0x0048 (size: 0x1)
    bool m_IsActive;                                                                  // 0x0049 (size: 0x1)
    bool m_IsAim;                                                                     // 0x004A (size: 0x1)
    float m_SpellPitchLimit;                                                          // 0x004C (size: 0x4)
    float m_SpellYawLimit;                                                            // 0x0050 (size: 0x4)
    RC::Unreal::int32 m_CameraPitchId;                                                            // 0x0054 (size: 0x4)
    float m_PitchLimit;                                                               // 0x0058 (size: 0x4)
    float m_YawLimit;                                                                 // 0x005C (size: 0x4)

}; // Size: 0x60