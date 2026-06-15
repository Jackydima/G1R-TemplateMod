#ifndef UE4SS_SDK_W_SpinBox_HPP
#define UE4SS_SDK_W_SpinBox_HPP

class UW_SpinBox_C : public UIntegerPickerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    class UButton* Button_Decrease;                                                   // 0x03E8 (size: 0x8)
    class UButton* Button_Increase;                                                   // 0x03F0 (size: 0x8)
    class UW_InputHint_C* InputHint_Decrement;                                        // 0x03F8 (size: 0x8)
    class UW_InputHint_C* InputHint_Increment;                                        // 0x0400 (size: 0x8)
    class USizeBox* SizeBox_Number;                                                   // 0x0408 (size: 0x8)
    class UTextBlock* TextBlock_Number;                                               // 0x0410 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_Decrease;                                   // 0x0418 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_Increase;                                   // 0x0420 (size: 0x8)
    TSoftObjectPtr<UFMODEvent> Clicked Sound;                                         // 0x0428 (size: 0x28)
    TSoftObjectPtr<UFMODEvent> Hovered Sound;                                         // 0x0450 (size: 0x28)
    FText Prefix;                                                                     // 0x0478 (size: 0x10)
    FText Suffix;                                                                     // 0x0488 (size: 0x10)
    double Min text width;                                                            // 0x0498 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnInputTypeChanged(ECommonInputType _InputType);
    void OnRangeChanged(int32 _OldMinValue, int32 _OldMaxValue, int32 _NewMinValue, int32 _NewMaxValue, bool _IsInitial);
    void OnValueChanged(int32 _OldValue, int32 _NewValue, bool _IsInitial);
    void UpdateButtons();
    void BndEvt__W_Crafting_QuantitySlider_Button_Decrease_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__W_Crafting_QuantitySlider_Button_Increase_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__W_Crafting_QuantitySlider_Button_Increase_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__W_Crafting_QuantitySlider_Button_Decrease_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__W_Slider_Button_Decrease_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__W_Slider_Button_Increase_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__W_SpinBox_InputHint_Decrement_K2Node_ComponentBoundEvent_2_ActionEventBP__DelegateSignature();
    void BndEvt__W_SpinBox_InputHint_Decrement_K2Node_ComponentBoundEvent_3_ActionEventBP__DelegateSignature();
    void BndEvt__W_SpinBox_InputHint_Increment_K2Node_ComponentBoundEvent_4_ActionEventBP__DelegateSignature();
    void BndEvt__W_SpinBox_InputHint_Increment_K2Node_ComponentBoundEvent_9_ActionEventBP__DelegateSignature();
    void ExecuteUbergraph_W_SpinBox(int32 EntryPoint);
}; // Size: 0x4A0

#endif
