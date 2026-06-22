#include "Shared_Proxy.hpp"
#include "WeaponDefinition_Proxy.hpp"

using namespace RC;
using namespace RC::Unreal;

class UGothicBaseConfig : public UObject // UObject is somehow only 1 Byte
{
    char buffer[0x30];
}; // Size: 0x30

class USpellConfig : public UGothicBaseConfig
{
public:
    class USpellItemAnimConfig *m_SpellItemAnimConfig; // 0x0030 (size: 0x8)
    ESpellTargetType m_SpellTargetType;                // 0x0038 (size: 0x1)
    ESpellManaUsage m_SpellManaUsage;                  // 0x0039 (size: 0x1)
    TArray<FSpellLevelRange> m_SpellLevels;            // 0x0040 (size: 0x10)
    float m_TimePercentageFromWhichCantCancelSpell;    // 0x0050 (size: 0x4)
    float m_AreaRange;                                 // 0x0054 (size: 0x4)
    float m_AreaAngle;                                 // 0x0058 (size: 0x4)
    FCameraBehaviour m_CameraBehaviour;                // 0x0060 (size: 0x60)
    FName m_SpawnLocationSocket;                       // 0x00C0 (size: 0x8)
    FGameplayTag m_SpellCategoryTag;                   // 0x00C8 (size: 0x8)
}; // Size: 0xD0
static_assert(sizeof(USpellConfig) == 0xD0, "USpellConfig Size Missmatch");

class USpellContainer : public UItemDefinition
{
public:
    TSubclassOf<class USpellConfig> m_SpellConfig; // 0x0320 (size: 0x8)
}; // Size: 0x328
static_assert(sizeof(USpellContainer) == 0x328, "USpellContainer Size Missmatch");

class URuneSpellContainer : public USpellContainer
{
public:
    // TSoftClassPtr<UUserWidget> m_CrosshairWidget;                                     // 0x0328 (size: 0x28)
    char m_CrosshairWidget[0x28];
    bool m_IsTargetingIndicatorEnabled;                                // 0x0350 (size: 0x1)
    bool m_CanEquipAfterUse;                                           // 0x0351 (size: 0x1)
    int32 RequiredMagicCircleLevel;                                    // 0x0354 (size: 0x4)
    TArray<class TSubclassOf<UWeaponDefinition>> m_WeaponsDefinitions; // 0x0358 (size: 0x10)
}; // Size: 0x368
static_assert(sizeof(URuneSpellContainer) == 0x368, "URuneSpellContainer Size Missmatch");

class UProjectileDefinition : public UWeaponDefinition
{
public:
    float m_Radius;                       // 0x0400 (size: 0x4)
    FGameplayTag m_MovementEffect;        // 0x0404 (size: 0x8)
    FAimingAssistance m_AimingAssistance; // 0x040C (size: 0x14)
    float m_ArcParam;                     // 0x0420 (size: 0x4)
    class AActor *m_CurrentTarget;        // 0x0428 (size: 0x8)
    char buffer[0x18];                    // 0x0430 (size: 0x18)
}; // Size: 0x448
static_assert(sizeof(UProjectileDefinition) == 0x448, "UProjectileDefinition Size Missmatch");

class USpellProjectileDefinition : public UProjectileDefinition
{
public:
    float m_DefaultTargetDistance;                                                    // 0x0448 (size: 0x4)
    float m_Speed;                                                                    // 0x044C (size: 0x4)
    float m_Gravity;                                                                  // 0x0450 (size: 0x4)
    float m_SteeringFactor;                                                           // 0x0454 (size: 0x4)
    float m_LifeTime;                                                                 // 0x0458 (size: 0x4)
    TSoftClassPtr<AActor> m_ExplosionPath;                                            // 0x0460 (size: 0x28)
    TMap<FGameplayTag, FDamageProgressionMagicCircle> m_DamageMagicCircleProgression; // 0x0488 (size: 0x50)
}; // Size: 0x4D8
static_assert(sizeof(USpellProjectileDefinition) == 0x4D8, "USpellProjectileDefinition Size Missmatch");

class UFireRainDefinition : public USpellProjectileDefinition
{
public:
    double m_StormHeight;            // 0x04D8 (size: 0x8)
    double m_StormRadius;            // 0x04E0 (size: 0x8)
    double m_PlayerProtectionRadius; // 0x04E8 (size: 0x8)
    bool m_Enabled;                  // 0x04F0 (size: 0x1)
    bool m_Forced;                   // 0x04F1 (size: 0x1)
    int32 m_Probability;             // 0x04F4 (size: 0x4)
    int32 m_Min;                     // 0x04F8 (size: 0x4)
    int32 m_Max;                     // 0x04FC (size: 0x4)
    int32 m_Key;                     // 0x0500 (size: 0x4)
    int32 m_Key2;                    // 0x0504 (size: 0x4)
    int32 m_XOffset;                 // 0x0508 (size: 0x4)
    int32 m_YOffset;                 // 0x050C (size: 0x4)
}; // Size: 0x510
static_assert(sizeof(UFireRainDefinition) == 0x510, "UFireRainDefinition Size Missmatch");