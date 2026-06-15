#ifndef UE4SS_SDK_W_SaveSlot_HPP
#define UE4SS_SDK_W_SaveSlot_HPP

class UW_SaveSlot_C : public UViewItemWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWidgetAnimation* Anim_Hover;                                               // 0x0428 (size: 0x8)
    class UWidgetAnimation* Anim_Select;                                              // 0x0430 (size: 0x8)
    class UHorizontalBox* Box_SaveTypeAndTime;                                        // 0x0438 (size: 0x8)
    class UImage* Image_Frame;                                                        // 0x0440 (size: 0x8)
    class UImage* Image_Frame_1;                                                      // 0x0448 (size: 0x8)
    class UImage* Image_Frame_Highlighted;                                            // 0x0450 (size: 0x8)
    class UImage* Image_Frame_Highlighted_1;                                          // 0x0458 (size: 0x8)
    class UScaleBox* ScaleBox;                                                        // 0x0460 (size: 0x8)
    class UScaleBox* ScaleBox_96;                                                     // 0x0468 (size: 0x8)
    class USizeBox* SizeBox;                                                          // 0x0470 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x0478 (size: 0x8)
    class UTextBlock* TextBlock_PlayTime;                                             // 0x0480 (size: 0x8)
    class UTextBlock* TextBlock_Savename;                                             // 0x0488 (size: 0x8)
    class UTextBlock* TextBlock_Savename_1;                                           // 0x0490 (size: 0x8)
    class UTextBlock* TextBlock_SaveType;                                             // 0x0498 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_SlotVisuals;                                // 0x04A0 (size: 0x8)
    bool IsSelected;                                                                  // 0x04A8 (size: 0x1)

    void EmptySaveSlot();
    void UpdateTimePlayed(double SecondsPlayed);
    void SetSelected(bool Selected);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void OnUnhovered();
    void OnHovered();
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnClicked(EAlkMouseButton _MouseButton);
    void PreConstruct(bool IsDesignTime);
    void BP_OnEntryReleased();
    void ExecuteUbergraph_W_SaveSlot(int32 EntryPoint);
}; // Size: 0x4A9

#endif
