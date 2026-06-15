#ifndef UE4SS_SDK_W_Setting_Enum_HPP
#define UE4SS_SDK_W_Setting_Enum_HPP

class UW_Setting_Enum_C : public USettingObjectWidget_Enum
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UButton* Button_ArrowLeft;                                                  // 0x03D0 (size: 0x8)
    class UButton* Button_ArrowRight;                                                 // 0x03D8 (size: 0x8)
    class UButton* Button_Center;                                                     // 0x03E0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Indicators;                                   // 0x03E8 (size: 0x8)
    class UW_InputHint_C* InputHint_Left;                                             // 0x03F0 (size: 0x8)
    class UW_InputHint_C* InputHint_Right;                                            // 0x03F8 (size: 0x8)
    class UTextBlock* TextBlock_Value;                                                // 0x0400 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_Left;                                       // 0x0408 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_Right;                                      // 0x0410 (size: 0x8)
    TSoftObjectPtr<UFMODEvent> Click Sound;                                           // 0x0418 (size: 0x28)

    void OnInputTypeChanged(ECommonInputType _InputType);
    void Update Visuals();
    void OnValueChanged(int32 _NewValue);
    void Initialize Indicators();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__W_Setting_NamedInt_Button_ArrowRight_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Setting_NamedInt_Button_ArrowLeft_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Setting_Enum_Button_Center_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Setting_Enum_InputHint_Left_K2Node_ComponentBoundEvent_3_ActionEventBP__DelegateSignature();
    void BndEvt__W_Setting_Enum_InputHint_Right_K2Node_ComponentBoundEvent_4_ActionEventBP__DelegateSignature();
    void OnContentChanged();
    void ExecuteUbergraph_W_Setting_Enum(int32 EntryPoint);
}; // Size: 0x440

#endif
