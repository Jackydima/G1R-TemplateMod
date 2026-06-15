#ifndef UE4SS_SDK_W_ProfileSlot_HPP
#define UE4SS_SDK_W_ProfileSlot_HPP

class UW_ProfileSlot_C : public UViewItemWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWidgetAnimation* Anim_Select;                                              // 0x0428 (size: 0x8)
    class UWidgetAnimation* Anim_Hover;                                               // 0x0430 (size: 0x8)
    class UBorder* Border_Background;                                                 // 0x0438 (size: 0x8)
    class UBorder* Border_Outline;                                                    // 0x0440 (size: 0x8)
    class UBorder* Border_Outline_1;                                                  // 0x0448 (size: 0x8)
    class UBorder* Border_Outline_Hover;                                              // 0x0450 (size: 0x8)
    class UW_ProfileSlot_Row_C* Chapter;                                              // 0x0458 (size: 0x8)
    class UCommonTextBlock* CommonTextBlock_ProfileName;                              // 0x0460 (size: 0x8)
    class UW_ProfileSlot_Row_C* difficulty;                                           // 0x0468 (size: 0x8)
    class UImage* Image;                                                              // 0x0470 (size: 0x8)
    class UImage* Image_136;                                                          // 0x0478 (size: 0x8)
    class UImage* Image_206;                                                          // 0x0480 (size: 0x8)
    class UImage* Image_PermadeathMarkerGameOver;                                     // 0x0488 (size: 0x8)
    class UW_ProfileSlot_Row_C* LastSave;                                             // 0x0490 (size: 0x8)
    class UOverlay* Overlay_Skull;                                                    // 0x0498 (size: 0x8)
    class UW_ProfileSlot_Row_C* Permadeath;                                           // 0x04A0 (size: 0x8)
    class USizeBox* SizeBox_18;                                                       // 0x04A8 (size: 0x8)
    class USizeBox* SizeBox_Line;                                                     // 0x04B0 (size: 0x8)
    class UW_ProfileSlot_Row_C* Survival;                                             // 0x04B8 (size: 0x8)
    class UW_ProfileSlot_Row_C* TimePlayed;                                           // 0x04C0 (size: 0x8)
    class UVerticalBox* VerticalBox_78;                                               // 0x04C8 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_Content;                                    // 0x04D0 (size: 0x8)
    bool IsSelected;                                                                  // 0x04D8 (size: 0x1)
    bool IsEmpty;                                                                     // 0x04D9 (size: 0x1)
    FText ProfileTitle;                                                               // 0x04E0 (size: 0x10)

    void UpdatePermadeathSlot();
    void GetProfileName(FString SavedProfileName, FText& PorfileName);
    void SetInfo(class UProfileSlotInfo* NewInfo);
    void SetEmptySlot(bool IsEmpty);
    void SetSelected(bool Selected);
    void PreConstruct(bool IsDesignTime);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void OnHovered();
    void OnUnhovered();
    void OnClicked(EAlkMouseButton _MouseButton);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void ExecuteUbergraph_W_ProfileSlot(int32 EntryPoint);
}; // Size: 0x4F0

#endif
