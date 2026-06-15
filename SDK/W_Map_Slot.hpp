#ifndef UE4SS_SDK_W_Map_Slot_HPP
#define UE4SS_SDK_W_Map_Slot_HPP

class UW_Map_Slot_C : public UButtonWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UWidgetAnimation* Anim_Hover;                                               // 0x03E0 (size: 0x8)
    class UBorder* Border_Box;                                                        // 0x03E8 (size: 0x8)
    class UBorder* Border_Underline;                                                  // 0x03F0 (size: 0x8)
    class UOverlay* Overlay_InteractArea;                                             // 0x03F8 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x0400 (size: 0x8)
    bool Hovered;                                                                     // 0x0408 (size: 0x1)
    bool Selected;                                                                    // 0x0409 (size: 0x1)
    FText MapName;                                                                    // 0x0410 (size: 0x10)
    FW_Map_Slot_CButtonWasClicked ButtonWasClicked;                                   // 0x0420 (size: 0x10)
    void ButtonWasClicked();
    FVector2D TextPosition;                                                           // 0x0430 (size: 0x10)

    void CustomizeContentAndAlignments();
    void PlaySelectedAnimation(bool Selected);
    void PreConstruct(bool IsDesignTime);
    void OnHovered();
    void OnUnhovered();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_W_Map_Slot(int32 EntryPoint);
    void ButtonWasClicked__DelegateSignature();
}; // Size: 0x440

#endif
