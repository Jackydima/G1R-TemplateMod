
#pragma once

#include "Shared_Proxy.hpp"

using namespace RC::Unreal;

// Size is not correct yet (Modifiersis correct and is useable!)
class UGameplayEffect : UObject
{
public:
    EGameplayEffectDurationType DurationPolicy;                            // 0x0030 (size: 0x1)
    FGameplayEffectModifierMagnitude DurationMagnitude;                    // 0x0038 (size: 0x1E0)
    FScalableFloat Period;                                                 // 0x0218 (size: 0x28)
    bool bExecutePeriodicEffectOnApplication;                              // 0x0240 (size: 0x1)
    EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy; // 0x0241 (size: 0x1)
    RC::Unreal::TArray<FGameplayModifierInfo> Modifiers;                   // 0x0248 (size: 0x10)
    // TODO: FIX SIZES
    RC::Unreal::TArray<FGameplayEffectExecutionDefinition> Executions;                                                      // 0x0258 (size: 0x10)
    FScalableFloat ChanceToApplyToTarget;                                                                                   // 0x0268 (size: 0x28)
    RC::Unreal::TArray<class RC::Unreal::TSubclassOf<UGameplayEffectCustomApplicationRequirement>> ApplicationRequirements; // 0x0290 (size: 0x10)
    RC::Unreal::TArray<FConditionalGameplayEffect> ConditionalGameplayEffects;                                              // 0x02A0 (size: 0x10)
    RC::Unreal::TArray<class RC::Unreal::TSubclassOf<UGameplayEffect>> OverflowEffects;                                     // 0x02B0 (size: 0x10)
    bool bDenyOverflowApplication;                                                                                          // 0x02C0 (size: 0x1)
    bool bClearStackOnOverflow;                                                                                             // 0x02C1 (size: 0x1)
    RC::Unreal::TArray<class RC::Unreal::TSubclassOf<UGameplayEffect>> PrematureExpirationEffectClasses;                    // 0x02C8 (size: 0x10)
    RC::Unreal::TArray<class RC::Unreal::TSubclassOf<UGameplayEffect>> RoutineExpirationEffectClasses;                      // 0x02D8 (size: 0x10)
    bool bRequireModifierSuccessToTriggerCues;                                                                              // 0x02E8 (size: 0x1)
    bool bSuppressStackingCues;                                                                                             // 0x02E9 (size: 0x1)
    RC::Unreal::TArray<FGameplayEffectCue> GameplayCues;                                                                    // 0x02F0 (size: 0x10)
    class UGameplayEffectUIData *UIData;                                                                                    // 0x0300 (size: 0x8)
    FInheritedTagContainer InheritableGameplayEffectTags;                                                                   // 0x0308 (size: 0x60)
    FInheritedTagContainer InheritableOwnedTagsContainer;                                                                   // 0x0368 (size: 0x60)
    FInheritedTagContainer InheritableBlockedAbilityTagsContainer;                                                          // 0x03C8 (size: 0x60)
    FGameplayTagRequirements OngoingTagRequirements;                                                                        // 0x0428 (size: 0x88)
    FGameplayTagRequirements ApplicationTagRequirements;                                                                    // 0x04B0 (size: 0x88)
    FGameplayTagRequirements RemovalTagRequirements;                                                                        // 0x0538 (size: 0x88)
    FInheritedTagContainer RemoveGameplayEffectsWithTags;                                                                   // 0x05C0 (size: 0x60)
    FGameplayTagRequirements GrantedApplicationImmunityTags;                                                                // 0x0620 (size: 0x88)
    FGameplayEffectQuery GrantedApplicationImmunityQuery;                                                                   // 0x06A8 (size: 0x198)
    FGameplayEffectQuery RemoveGameplayEffectQuery;                                                                         // 0x0848 (size: 0x198)
    EGameplayEffectStackingType StackingType;                                                                               // 0x09E1 (size: 0x1)
    RC::Unreal::int32 StackLimitCount;                                                                                      // 0x09E4 (size: 0x4)
    EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy;                                                       // 0x09E8 (size: 0x1)
    EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy;                                                             // 0x09E9 (size: 0x1)
    EGameplayEffectStackingExpirationPolicy StackExpirationPolicy;                                                          // 0x09EA (size: 0x1)
    RC::Unreal::TArray<FGameplayAbilitySpecDef> GrantedAbilities;                                                           // 0x09F0 (size: 0x10)
    RC::Unreal::TArray<class UGameplayEffectComponent *> GEComponents;                                                      // 0x0A60 (size: 0x10)
}; // Size: 0xA70
