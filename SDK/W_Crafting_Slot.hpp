#ifndef UE4SS_SDK_W_Crafting_Slot_HPP
#define UE4SS_SDK_W_Crafting_Slot_HPP

class UW_Crafting_Slot_C : public UViewItemWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWidgetAnimation* Anim_Hover;                                               // 0x0428 (size: 0x8)
    class UWidgetAnimation* Anim_Select;                                              // 0x0430 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0438 (size: 0x8)
    class UW_NewIcon_C* NewIcon;                                                      // 0x0440 (size: 0x8)
    class UOverlay* Overlay_Hovered;                                                  // 0x0448 (size: 0x8)
    class UOverlay* Overlay_Icon_Hovered;                                             // 0x0450 (size: 0x8)
    class UOverlay* Overlay_Icon_Selected;                                            // 0x0458 (size: 0x8)
    class UOverlay* Overlay_Quantity;                                                 // 0x0460 (size: 0x8)
    class UOverlay* Overlay_Selected;                                                 // 0x0468 (size: 0x8)
    class UTextBlock* TextBlock_Amount;                                               // 0x0470 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x0478 (size: 0x8)
    class UTextBlock* TextBlock_Name_Hovered;                                         // 0x0480 (size: 0x8)
    class UTextBlock* TextBlock_Name_Selected;                                        // 0x0488 (size: 0x8)

    void SetRecipeIsNew(bool IsNew);
    void Reset();
    void Update Craftable Amount(int32 Amount);
    void Update List Item(class UCraftingRecipeUIData* Recipe UI Data);
    void OnLoaded_91F055424E48DF72EEF333A271D0522B(class UObject* Loaded);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void OnHovered();
    void OnUnhovered();
    void BP_OnEntryReleased();
    void OnCraftableAmountChanged(int32 _NewAmount);
    void OnUnseenStateChanged(bool HasUnseenChanges);
    void ExecuteUbergraph_W_Crafting_Slot(int32 EntryPoint);
}; // Size: 0x490

#endif
