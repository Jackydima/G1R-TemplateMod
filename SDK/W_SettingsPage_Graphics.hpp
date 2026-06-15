#ifndef UE4SS_SDK_W_SettingsPage_Graphics_HPP
#define UE4SS_SDK_W_SettingsPage_Graphics_HPP

class UW_SettingsPage_Graphics_C : public USettingsPageWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A0 (size: 0x8)
    class UImage* Image_Arrow_Bottom;                                                 // 0x04A8 (size: 0x8)
    class UImage* Image_Arrow_Top;                                                    // 0x04B0 (size: 0x8)
    class UScrollBox* ScrollBox_Content;                                              // 0x04B8 (size: 0x8)
    class UW_SettingsRow_C* SettingsRow_FGDLSS;                                       // 0x04C0 (size: 0x8)
    class UW_SettingsRow_C* SettingsRow_FGFSR;                                        // 0x04C8 (size: 0x8)
    class UW_SettingsRow_C* SettingsRow_SharpeningIntensity;                          // 0x04D0 (size: 0x8)
    class UW_SettingsRow_C* SettingsRow_Upscaler;                                     // 0x04D8 (size: 0x8)
    class UW_SettingsRow_C* SettingsRow_UpscalingQuality;                             // 0x04E0 (size: 0x8)
    class UVerticalBox* VerticalBox_Content;                                          // 0x04E8 (size: 0x8)
    class UW_SettingsDetails_C* W_SettingsDetails;                                    // 0x04F0 (size: 0x8)
    bool IsSettingsPageActivated;                                                     // 0x04F8 (size: 0x1)

    class UWidget* BP_GetDesiredFocusTarget();
    void Update Scroll Visuals();
    void BndEvt__W_SettingsPage_Audio_ScrollBox_34_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
    void BP_OnActivated();
    void BndEvt__W_SettingsPage_Graphics_SettingsRow_UpscalingQuality_K2Node_ComponentBoundEvent_3_SelectionChangedDelegateBP__DelegateSignature(class USettingsRowWidget* _SettingsRowWidget, bool _IsSelected);
    void BndEvt__W_SettingsPage_Graphics_SettingsRow_Upscaler_K2Node_ComponentBoundEvent_4_ValueChangedDelegateBP__DelegateSignature(class USettingsRowWidget* _SettingsRowWidget);
    void BP_OnDeactivated();
    void ExecuteUbergraph_W_SettingsPage_Graphics(int32 EntryPoint);
}; // Size: 0x4F9

#endif
