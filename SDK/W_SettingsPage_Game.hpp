#ifndef UE4SS_SDK_W_SettingsPage_Game_HPP
#define UE4SS_SDK_W_SettingsPage_Game_HPP

class UW_SettingsPage_Game_C : public USettingsPageWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A0 (size: 0x8)
    class UImage* Image_Arrow_Bottom;                                                 // 0x04A8 (size: 0x8)
    class UImage* Image_Arrow_Top;                                                    // 0x04B0 (size: 0x8)
    class UScrollBox* ScrollBox_Content;                                              // 0x04B8 (size: 0x8)
    class UVerticalBox* VerticalBox_Content;                                          // 0x04C0 (size: 0x8)
    class UW_SettingsDetails_C* W_SettingsDetails;                                    // 0x04C8 (size: 0x8)

    class UWidget* BP_GetDesiredFocusTarget();
    void Update Scroll Visuals();
    void BndEvt__W_SettingsPage_Audio_ScrollBox_34_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
    void BP_OnActivated();
    void ExecuteUbergraph_W_SettingsPage_Game(int32 EntryPoint);
}; // Size: 0x4D0

#endif
