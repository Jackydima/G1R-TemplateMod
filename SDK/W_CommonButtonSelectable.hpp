#ifndef UE4SS_SDK_W_CommonButtonSelectable_HPP
#define UE4SS_SDK_W_CommonButtonSelectable_HPP

class UW_CommonButtonSelectable_C : public UCommonButtonBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x15C8 (size: 0x8)
    class UWidgetAnimation* Anim_Selected;                                            // 0x15D0 (size: 0x8)
    class UWidgetAnimation* Anim_Hover;                                               // 0x15D8 (size: 0x8)
    class UTextBlock* ButtonText;                                                     // 0x15E0 (size: 0x8)
    bool Hovered;                                                                     // 0x15E8 (size: 0x1)
    bool Selected;                                                                    // 0x15E9 (size: 0x1)
    FText Text;                                                                       // 0x15F0 (size: 0x10)

    void SetSelected(bool Selected);
    void PreConstruct(bool IsDesignTime);
    void BP_OnSelected();
    void BP_OnDeselected();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_W_CommonButtonSelectable(int32 EntryPoint);
}; // Size: 0x1600

#endif
