#ifndef UE4SS_SDK_W_SettingsPage_Display_HPP
#define UE4SS_SDK_W_SettingsPage_Display_HPP

class UW_SettingsPage_Display_C : public USettingsPageWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A0 (size: 0x8)
    class UImage* Image_Arrow_Bottom;                                                 // 0x04A8 (size: 0x8)
    class UImage* Image_Arrow_Top;                                                    // 0x04B0 (size: 0x8)
    class UScrollBox* ScrollBox_Content;                                              // 0x04B8 (size: 0x8)
    class UW_SettingsRow_C* SettingsRow_Display;                                      // 0x04C0 (size: 0x8)
    class UW_SettingsRow_C* SettingsRow_Resolution;                                   // 0x04C8 (size: 0x8)
    class UVerticalBox* VerticalBox_Content;                                          // 0x04D0 (size: 0x8)
    class UW_SettingsDetails_C* W_SettingsDetails;                                    // 0x04D8 (size: 0x8)
    FW_SettingsPage_Display_COnResolutionChanged OnResolutionChanged;                 // 0x04E0 (size: 0x10)
    void OnResolutionChanged();

    class UWidget* BP_GetDesiredFocusTarget();
    void Update Scroll Visuals();
    void BndEvt__W_SettingsPage_Audio_ScrollBox_34_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
    void BP_OnActivated();
    void OnAccept_Event();
    void OnCancel_Event();
    void CustomEvent(class USettingsRowWidget* _SettingsRowWidget);
    void ExecuteUbergraph_W_SettingsPage_Display(int32 EntryPoint);
    void OnResolutionChanged__DelegateSignature();
}; // Size: 0x4F0

#endif
