#ifndef UE4SS_SDK_W_ManagementUI_CategorySlot_HPP
#define UE4SS_SDK_W_ManagementUI_CategorySlot_HPP

class UW_ManagementUI_CategorySlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Anim_Hover;                                               // 0x02E8 (size: 0x8)
    class UWidgetAnimation* Anim_Select;                                              // 0x02F0 (size: 0x8)
    class UButton* Button_Category;                                                   // 0x02F8 (size: 0x8)
    class UImage* Image_Background;                                                   // 0x0300 (size: 0x8)
    class UImage* Image_Background_1;                                                 // 0x0308 (size: 0x8)
    class UImage* Image_Hover;                                                        // 0x0310 (size: 0x8)
    class UImage* Image_Select;                                                       // 0x0318 (size: 0x8)
    class UOverlay* Overlay_TextGlow;                                                 // 0x0320 (size: 0x8)
    class USizeBox* SizeBox_88;                                                       // 0x0328 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0330 (size: 0x8)
    class UTextBlock* TextBlock_35;                                                   // 0x0338 (size: 0x8)
    class UW_NewIcon_C* W_NewIcon;                                                    // 0x0340 (size: 0x8)
    FText ManagementMenuCategoryName;                                                 // 0x0348 (size: 0x10)
    int32 IndexNumber;                                                                // 0x0358 (size: 0x4)
    class UObject* ManagementUIPanel;                                                 // 0x0360 (size: 0x8)
    FW_ManagementUI_CategorySlot_COnClick OnClick;                                    // 0x0368 (size: 0x10)
    void OnClick(int32 OwnIndex);
    float In Width Override;                                                          // 0x0378 (size: 0x4)
    int32 TextSize;                                                                   // 0x037C (size: 0x4)

    void Set Unseen State(bool State);
    void SetSelected(bool IsSelected);
    void SetHovered(bool Hovered);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Category_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_W_ManagementUI_CategorySlot(int32 EntryPoint);
    void OnClick__DelegateSignature(int32 OwnIndex);
}; // Size: 0x380

#endif
