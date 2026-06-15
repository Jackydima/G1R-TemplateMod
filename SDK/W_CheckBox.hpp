#ifndef UE4SS_SDK_W_CheckBox_HPP
#define UE4SS_SDK_W_CheckBox_HPP

class UW_CheckBox_C : public UCheckBoxWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    class UButton* Button;                                                            // 0x0388 (size: 0x8)
    class UImage* Image_CheckBox;                                                     // 0x0390 (size: 0x8)
    class UTextBlock* TextBlock_Label;                                                // 0x0398 (size: 0x8)
    FText Label Text;                                                                 // 0x03A0 (size: 0x10)
    bool IsPressed;                                                                   // 0x03B0 (size: 0x1)
    FSlateBrush Unchecked Brush;                                                      // 0x03C0 (size: 0xD0)
    FSlateBrush Unchecked Hovered Brush;                                              // 0x0490 (size: 0xD0)
    FSlateBrush Unchecked Pressed Brush;                                              // 0x0560 (size: 0xD0)
    FSlateBrush Checked Brush;                                                        // 0x0630 (size: 0xD0)
    FSlateBrush Checked Hovered Brush;                                                // 0x0700 (size: 0xD0)
    FSlateBrush Checked Pressed Brush;                                                // 0x07D0 (size: 0xD0)
    FSlateBrush Undetermined Brush;                                                   // 0x08A0 (size: 0xD0)
    FSlateBrush Undetermined Hovered Brush;                                           // 0x0970 (size: 0xD0)
    FSlateBrush Undetermined Pressed Brush;                                           // 0x0A40 (size: 0xD0)
    bool IsCurrentlyHovered;                                                          // 0x0B10 (size: 0x1)
    TSoftObjectPtr<UFMODEvent> Checked Sound;                                         // 0x0B18 (size: 0x28)
    TSoftObjectPtr<UFMODEvent> Unchecked Sound;                                       // 0x0B40 (size: 0x28)
    TSoftObjectPtr<UFMODEvent> Hovered Sound;                                         // 0x0B68 (size: 0x28)
    float In Font Info Size;                                                          // 0x0B90 (size: 0x4)
    FSlateColor Text Color;                                                           // 0x0B94 (size: 0x14)
    FName FontWeight;                                                                 // 0x0BA8 (size: 0x8)
    FFontOutlineSettings Text Outline;                                                // 0x0BB0 (size: 0x20)

    void SetLabelText(const FText& _NewLabelText);
    void UpdateVisuals();
    void PreConstruct(bool IsDesignTime);
    void OnCheckedStateChanged(ECheckBoxState _OldCheckedState, ECheckBoxState _NewCheckedState, bool _IsInitial);
    void BndEvt__W_CheckBox_Button_71_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_CheckBox_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__W_CheckBox_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__W_CheckBox_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__W_CheckBox_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_W_CheckBox(int32 EntryPoint);
}; // Size: 0xBD0

#endif
