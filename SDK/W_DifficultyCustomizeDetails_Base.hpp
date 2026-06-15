#ifndef UE4SS_SDK_W_DifficultyCustomizeDetails_Base_HPP
#define UE4SS_SDK_W_DifficultyCustomizeDetails_Base_HPP

class UW_DifficultyCustomizeDetails_Base_C : public USettingsPageWidget_DifficultySettings
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A8 (size: 0x8)
    class UScrollBox* ScrollBox_Content;                                              // 0x04B0 (size: 0x8)
    class UW_SettingsRow_C* SettingsRow_Combat;                                       // 0x04B8 (size: 0x8)
    class UW_SettingsRow_C* SettingsRow_Permadeath;                                   // 0x04C0 (size: 0x8)
    class UW_SettingsRow_C* SettingsRow_Progression;                                  // 0x04C8 (size: 0x8)
    class UW_SettingsRow_C* SettingsRow_Resources;                                    // 0x04D0 (size: 0x8)
    class UW_SettingsRow_C* SettingsRow_SloppyCombos;                                 // 0x04D8 (size: 0x8)
    class UTextBlock* TextBlock_Description;                                          // 0x04E0 (size: 0x8)
    class UVerticalBox* VerticalBox_Content;                                          // 0x04E8 (size: 0x8)
    class UW_SettingsDetails_C* W_SettingsDetails;                                    // 0x04F0 (size: 0x8)

    class UWidget* BP_GetDesiredFocusTarget();
    void Update Scroll Visuals();
    void PreConstruct(bool IsDesignTime);
    void BP_OnActivated();
    void ExecuteUbergraph_W_DifficultyCustomizeDetails_Base(int32 EntryPoint);
}; // Size: 0x4F8

#endif
