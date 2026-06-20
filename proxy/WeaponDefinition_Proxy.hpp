#pragma once

#include "Shared_Proxy.hpp"

using namespace RC;
using namespace RC::Unreal;

class UItemEffectDefinition : public UObject
{
    TSubclassOf<class UGameplayEffect> m_Effect; // 0x0028 (size: 0x8)
    TMap<FGameplayTag, float> m_Magnitudes;      // 0x0030 (size: 0x50)
    // char buffer[0x50];
}; // Size: 0x80
// static_assert(sizeof(UItemEffectDefinition) == 0x80, "UItemEffectDefinition Size Missmatch");

class UGothicObjectDefinition
{
    char buffer[0x80];
    /*class FText m_Name;                                                                     // 0x0030 (size: 0x10)
    TSoftObjectPtr<UTexture2D> m_Icon;                                                // 0x0040 (size: 0x28)
    FText m_Description;                                                              // 0x0068 (size: 0x10)
    FName m_UniqueName;*/
    // 0x0078 (size: 0x8)

}; // Size: 0x80

class UItemDefinition : public UGothicObjectDefinition
{
    int32 m_Value;    // 0x0080 (size: 0x4)
    int32 m_MaxStack; // 0x0084 (size: 0x4)
    float m_Buoyancy; // 0x0088 (size: 0x4)
    float m_Weight;   // 0x008C (size: 0x4)
    float m_Mass;     // 0x0090 (size: 0x4)
    char buffer1[0x150];
    /*TSoftClassPtr<AItemVisual> m_ItemVisual;                                          // 0x0098 (size: 0x28)
    TSoftClassPtr<AItemVisualWorld> m_ItemVisualWorld;                                // 0x00C0 (size: 0x28)
    TSoftClassPtr<AItemVisualWorld> m_ItemVisualWorldDrop;                            // 0x00E8 (size: 0x28)
    TSoftClassPtr<AActor> m_ItemGeneric;                                              // 0x0110 (size: 0x28)
    TSoftClassPtr<AActor> m_ItemEmptyVisual;                                          // 0x0138 (size: 0x28)
    FGameplayTagContainer m_EquipBlockingTags;                                        // 0x01C8 (size: 0x20)
    */
    TSubclassOf<class UScriptGameplayEffect> m_OnEquipEffect; // 0x01E8 (size: 0x8)
    /*TArray<class TSubclassOf<UItemRecipeDefinition>> m_LearnRecipes;                  // 0x01F0 (size: 0x10)
    FGameplayTagContainer m_RequiredTagsToLearn;                                      // 0x0200 (size: 0x20)
    */
    char buffer2[0x30];
    TArray<class UItemEffectDefinition *> m_OnConsumeEffects; // 0x0220 (size: 0x10)
    // TSubclassOf<class UInteractiveObjectDefinition> m_ForcedInteraction;              // 0x0230 (size: 0x8)
    char m_ForcedInteraction[0x8];
    TMap<FGameplayAttribute, float> m_RequiredStats; // 0x0238 (size: 0x50)
    // char m_RequiredStats[0x50];
    /*EInventoryTypes m_TryToStoreFirst;                                                // 0x0288 (size: 0x1)
    TArray<class TSubclassOf<UActionKeywords>> m_ActionsKeywords;                     // 0x0290 (size: 0x10)
    TArray<FGameplayTag> m_ItemStatsTags;                                             // 0x02A0 (size: 0x10)
    EHoldsterLocation m_HoldsterLocation;                                             // 0x02B0 (size: 0x1)
    FGameplayTag m_ParticlesWhenPickUp;                                               // 0x02B4 (size: 0x8)
    FGameplayTag m_EventWhenPickUp;                                                   // 0x02BC (size: 0x8)
    TSubclassOf<class UItemDefinition> m_RequiredToPick;                              // 0x02C8 (size: 0x8)
    FOwnershipSettings m_Ownership;                                                   // 0x02D0 (size: 0x38)
    TSubclassOf<class UItemDefinition> m_ReplaceBy;                                   // 0x0308 (size: 0x8)
    bool m_AutoTarget;                                                                // 0x0310 (size: 0x1)
    TSubclassOf<class UTargetConfigBase> m_TargetConfigClass;                         // 0x0318 (size: 0x8)
    */
    char buffer3[0x98];
}; // Size: 0x320
static_assert(sizeof(UItemDefinition) == 0x320, "UItemDefinition Size Missmatch");

class UWeaponDefinition : public UItemDefinition
{
    // TMap<FString, float> m_DamageBase;                                           // 0x0320 (size: 0x50)
    TMap<FGameplayTag, float> m_DamageBase;
    float m_SuperArmorDamageBase;                   // 0x0370 (size: 0x4)
    TSubclassOf<class UGameplayEffect> m_HitEffect; // 0x0378 (size: 0x8)
    // FGameplayTagContainer m_CriticalWeakSpotsTags;                                    // 0x0380 (size: 0x20)
    char buffer1[0x20];
    float m_CriticalMultiplier;                       // 0x03A0 (size: 0x4)
    TSubclassOf<class UGameplayEffect> m_DeathEffect; // 0x03A8 (size: 0x8)
    // TMap<FGameplayTag, FHitCueData> m_HitCueDataByDamageType;             // 0x03B0 (size: 0x50)
    char m_HitCueDataByDamageType[0x50];
}; // Size: 0x400
static_assert(sizeof(UWeaponDefinition) == 0x400, "UWeaponDefinition Size Missmatch");