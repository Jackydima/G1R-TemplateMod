#include "Shared_Proxy.hpp"
#include "WeaponDefinition_Proxy.hpp"

using namespace RC;
using namespace RC::Unreal;

class USpellConfig : public UGothicBaseConfig
{
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

class USpellContainer : public UItemDefinition
{
    TSubclassOf<class USpellConfig> m_SpellConfig; // 0x0320 (size: 0x8)
}; // Size: 0x328

class URuneSpellContainer : public USpellContainer
{
    // TSoftClassPtr<UUserWidget> m_CrosshairWidget;                                     // 0x0328 (size: 0x28)
    char m_CrosshairWidget[0x28];
    bool m_IsTargetingIndicatorEnabled;                                // 0x0350 (size: 0x1)
    bool m_CanEquipAfterUse;                                           // 0x0351 (size: 0x1)
    int32 RequiredMagicCircleLevel;                                    // 0x0354 (size: 0x4)
    TArray<class TSubclassOf<UWeaponDefinition>> m_WeaponsDefinitions; // 0x0358 (size: 0x10)
}; // Size: 0x368