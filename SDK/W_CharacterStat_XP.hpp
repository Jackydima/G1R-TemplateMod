#ifndef UE4SS_SDK_W_CharacterStat_XP_HPP
#define UE4SS_SDK_W_CharacterStat_XP_HPP

class UW_CharacterStat_XP_C : public UStatLevelWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UProgressBar* ProgressBar_XP;                                               // 0x0340 (size: 0x8)
    class UW_CharacterStatEntry_C* StatEntry_Experience;                              // 0x0348 (size: 0x8)
    class UTextBlock* TextBlock_Level;                                                // 0x0350 (size: 0x8)
    class UTextBlock* TextBlock_Subclass;                                             // 0x0358 (size: 0x8)
    FText StatName;                                                                   // 0x0360 (size: 0x10)
    class UTexture2D* Icon;                                                           // 0x0370 (size: 0x8)
    FGameplayAttribute Attribute;                                                     // 0x0378 (size: 0x38)
    double NextLevelXP;                                                               // 0x03B0 (size: 0x8)
    double StartingXP;                                                                // 0x03B8 (size: 0x8)
    double CurrentXP;                                                                 // 0x03C0 (size: 0x8)
    TMap<class FGameplayTag, class UTexture2D*> GuildToIcons;                         // 0x03C8 (size: 0x50)

    void SetCampClass(bool HasSubclass, FText ClassName);
    void SetStatValues();
    void Update();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_CharacterStat_XP(int32 EntryPoint);
}; // Size: 0x418

#endif
