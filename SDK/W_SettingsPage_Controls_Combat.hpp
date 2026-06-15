#ifndef UE4SS_SDK_W_SettingsPage_Controls_Combat_HPP
#define UE4SS_SDK_W_SettingsPage_Controls_Combat_HPP

class UW_SettingsPage_Controls_Combat_C : public UAlkUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UImage* Image_Arrow_Bottom;                                                 // 0x0340 (size: 0x8)
    class UImage* Image_Arrow_Top;                                                    // 0x0348 (size: 0x8)
    class UScrollBox* ScrollBox_Content;                                              // 0x0350 (size: 0x8)
    class UW_SettingsDetails_C* SettingsDetails;                                      // 0x0358 (size: 0x8)
    class UVerticalBox* VerticalBox_Content;                                          // 0x0360 (size: 0x8)
    class UCommonActivatableWidgetSwitcher* WidgetSwitcher_Content;                   // 0x0368 (size: 0x8)

    void Update Switcher Index();
    void Construct();
    void OnInputTypeChanged(ECommonInputType _InputType);
    void ExecuteUbergraph_W_SettingsPage_Controls_Combat(int32 EntryPoint);
}; // Size: 0x370

#endif
