#ifndef UE4SS_SDK_W_Slider_HPP
#define UE4SS_SDK_W_Slider_HPP

class UW_Slider_C : public UIntegerPickerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    class UButton* Button_Decrease;                                                   // 0x03E8 (size: 0x8)
    class UButton* Button_Increase;                                                   // 0x03F0 (size: 0x8)
    class UW_InputHint_C* InputHint_Decrement;                                        // 0x03F8 (size: 0x8)
    class UW_InputHint_C* InputHint_Increment;                                        // 0x0400 (size: 0x8)
    class UW_InputHint_C* InputHint_SetToMax;                                         // 0x0408 (size: 0x8)
    class UW_InputHint_C* InputHint_SetToMin;                                         // 0x0410 (size: 0x8)
    class USlider* Slider_Quantity;                                                   // 0x0418 (size: 0x8)
    class UTextBlock* TextBlock_Label;                                                // 0x0420 (size: 0x8)
    class UTextBlock* TextBlock_Max;                                                  // 0x0428 (size: 0x8)
    class UTextBlock* TextBlock_Min;                                                  // 0x0430 (size: 0x8)
    class UTextBlock* TextBlock_Quantity;                                             // 0x0438 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_Decrease;                                   // 0x0440 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_Increase;                                   // 0x0448 (size: 0x8)
    bool IsSliderInUse;                                                               // 0x0450 (size: 0x1)
    FText Label Text;                                                                 // 0x0458 (size: 0x10)
    TSoftObjectPtr<UFMODEvent> Clicked Sound;                                         // 0x0468 (size: 0x28)
    TSoftObjectPtr<UFMODEvent> Hovered Sound;                                         // 0x0490 (size: 0x28)

    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnInputTypeChanged(ECommonInputType _InputType);
    void PreConstruct(bool IsDesignTime);
    void OnStepSizeChanged(int32 _OldStepSize, int32 _NewStepSize, bool _IsInitial);
    void OnRangeChanged(int32 _OldMinValue, int32 _OldMaxValue, int32 _NewMinValue, int32 _NewMaxValue, bool _IsInitial);
    void OnValueChanged(int32 _OldValue, int32 _NewValue, bool _IsInitial);
    void UpdateButtons();
    void BndEvt__W_Crafting_QuantitySlider_Slider_Quantity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__W_Crafting_QuantitySlider_Button_Decrease_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__W_Crafting_QuantitySlider_Button_Decrease_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__W_Crafting_QuantitySlider_Button_Increase_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__W_Crafting_QuantitySlider_Button_Increase_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__W_Crafting_QuantitySlider_Slider_Quantity_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__W_Crafting_QuantitySlider_Slider_Quantity_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature();
    void BndEvt__W_Slider_InputHint_SetToMin_K2Node_ComponentBoundEvent_9_ActionEventBP__DelegateSignature();
    void BndEvt__W_Slider_InputHint_Decrement_K2Node_ComponentBoundEvent_10_ActionEventBP__DelegateSignature();
    void BndEvt__W_Slider_InputHint_Decrement_K2Node_ComponentBoundEvent_11_ActionEventBP__DelegateSignature();
    void BndEvt__W_Slider_InputHint_Increment_K2Node_ComponentBoundEvent_12_ActionEventBP__DelegateSignature();
    void BndEvt__W_Slider_InputHint_Increment_K2Node_ComponentBoundEvent_13_ActionEventBP__DelegateSignature();
    void BndEvt__W_Slider_InputHint_SetToMax_K2Node_ComponentBoundEvent_14_ActionEventBP__DelegateSignature();
    void BndEvt__W_Slider_Button_Decrease_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__W_Slider_Button_Increase_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_W_Slider(int32 EntryPoint);
}; // Size: 0x4B8

#endif
