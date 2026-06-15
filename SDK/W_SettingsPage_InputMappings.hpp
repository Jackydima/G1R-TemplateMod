#ifndef UE4SS_SDK_W_SettingsPage_InputMappings_HPP
#define UE4SS_SDK_W_SettingsPage_InputMappings_HPP

class UW_SettingsPage_InputMappings_C : public USettingsPageWidget_InputMapping
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F0 (size: 0x8)
    class UW_CommonButtonSelectable_C* CommonButton_Combat;                           // 0x04F8 (size: 0x8)
    class UW_CommonButtonSelectable_C* CommonButton_Exploration;                      // 0x0500 (size: 0x8)
    class UW_InputHint_C* InputHint_Left;                                             // 0x0508 (size: 0x8)
    class UW_InputHint_C* InputHint_Right;                                            // 0x0510 (size: 0x8)
    class USizeBox* SizeBox_Header;                                                   // 0x0518 (size: 0x8)
    class UCommonActivatableWidgetSwitcher* WidgetSwitcher_Content;                   // 0x0520 (size: 0x8)

    void Update Input Method(ECommonInputType Input Type);
    void Update Index(int32 Index);
    void Construct();
    void BndEvt__W_SettingsPage_InputMappings_InputHint_Left_K2Node_ComponentBoundEvent_0_ActionEventBP__DelegateSignature();
    void BndEvt__W_SettingsPage_InputMappings_CommonButton_Exploration_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__W_SettingsPage_InputMappings_InputHint_Right_K2Node_ComponentBoundEvent_2_ActionEventBP__DelegateSignature();
    void BndEvt__W_SettingsPage_InputMappings_CommonButton_Combat_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Event On Input Method Changed(ECommonInputType bNewInputType);
    void ExecuteUbergraph_W_SettingsPage_InputMappings(int32 EntryPoint);
}; // Size: 0x528

#endif
