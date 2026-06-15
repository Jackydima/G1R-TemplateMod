#ifndef UE4SS_SDK_W_Inventory_Slot_HPP
#define UE4SS_SDK_W_Inventory_Slot_HPP

class UW_Inventory_Slot_C : public UViewItemWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWidgetAnimation* Anim_PriceChange;                                         // 0x0428 (size: 0x8)
    class UWidgetAnimation* Anim_NullClick;                                           // 0x0430 (size: 0x8)
    class UWidgetAnimation* Anim_Equip;                                               // 0x0438 (size: 0x8)
    class UWidgetAnimation* Anim_Click;                                               // 0x0440 (size: 0x8)
    class UWidgetAnimation* Anim_Hover;                                               // 0x0448 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Cost;                                         // 0x0450 (size: 0x8)
    class UHorizontalBox* HorizontalBox_CraftingCost;                                 // 0x0458 (size: 0x8)
    class UImage* Image;                                                              // 0x0460 (size: 0x8)
    class UImage* Image_44;                                                           // 0x0468 (size: 0x8)
    class UImage* Image_122;                                                          // 0x0470 (size: 0x8)
    class UImage* Image_DefaultBg;                                                    // 0x0478 (size: 0x8)
    class UImage* Image_EmptyIcon;                                                    // 0x0480 (size: 0x8)
    class UImage* Image_Frame;                                                        // 0x0488 (size: 0x8)
    class UImage* Image_Frame_Hovered;                                                // 0x0490 (size: 0x8)
    class UImage* Image_HoveredBackground;                                            // 0x0498 (size: 0x8)
    class UImage* Image_HoveredBackground_ClickAnim;                                  // 0x04A0 (size: 0x8)
    class UImage* Image_Picture;                                                      // 0x04A8 (size: 0x8)
    class UImage* Image_Stolen;                                                       // 0x04B0 (size: 0x8)
    class UOverlay* Overlay_Quantity;                                                 // 0x04B8 (size: 0x8)
    class UOverlay* Overlay_SlotContent;                                              // 0x04C0 (size: 0x8)
    class USizeBox* SizeBox_EmptyIcon;                                                // 0x04C8 (size: 0x8)
    class UTextBlock* Text_ItemAmount;                                                // 0x04D0 (size: 0x8)
    class UTextBlock* Text_Value;                                                     // 0x04D8 (size: 0x8)
    class UW_Hotkey_C* W_Hotkey;                                                      // 0x04E0 (size: 0x8)
    class UW_NewIcon_C* W_NewIcon;                                                    // 0x04E8 (size: 0x8)
    bool Hovered;                                                                     // 0x04F0 (size: 0x1)
    class UObject* Item;                                                              // 0x04F8 (size: 0x8)
    bool Is Selected;                                                                 // 0x0500 (size: 0x1)
    class UObject* ToolTip;                                                           // 0x0508 (size: 0x8)
    ESlateVisibility CostVisibility;                                                  // 0x0510 (size: 0x1)
    ESlateVisibility QuantityVisibility;                                              // 0x0511 (size: 0x1)
    ESlateVisibility HotkeyVisibility;                                                // 0x0512 (size: 0x1)
    int32 ItemPos;                                                                    // 0x0514 (size: 0x4)
    int32 ItemValue;                                                                  // 0x0518 (size: 0x4)
    FW_Inventory_Slot_CDispatcherOnClickedRelease DispatcherOnClickedRelease;         // 0x0520 (size: 0x10)
    void DispatcherOnClickedRelease(int32 Pos);
    class UTexture2D* EmptyIconImage;                                                 // 0x0530 (size: 0x8)
    int32 Amount;                                                                     // 0x0538 (size: 0x4)
    FString Hotkey;                                                                   // 0x0540 (size: 0x10)
    FText Text_Name;                                                                  // 0x0550 (size: 0x10)
    class UInventorySlotData* Inventory Slot Data;                                    // 0x0560 (size: 0x8)
    FW_Inventory_Slot_CSlotInitialize SlotInitialize;                                 // 0x0568 (size: 0x10)
    void SlotInitialize(class UInventorySlotData* Data);
    bool SlotActive;                                                                  // 0x0578 (size: 0x1)
    bool UseCanBeUsedByPlayerFlag;                                                    // 0x0579 (size: 0x1)
    FW_Inventory_Slot_CDispatcherOnHovered DispatcherOnHovered;                       // 0x0580 (size: 0x10)
    void DispatcherOnHovered(bool IsHovered, int32 Pos);
    int32 MinimunAmountToShow;                                                        // 0x0590 (size: 0x4)
    bool IsWearableSlot;                                                              // 0x0594 (size: 0x1)
    FText ValueAbbreviation;                                                          // 0x0598 (size: 0x10)
    bool ShowingHotkey;                                                               // 0x05A8 (size: 0x1)
    int32 ItemOldValue;                                                               // 0x05AC (size: 0x4)
    ESlateVisibility EmptyIconVisibility;                                             // 0x05B0 (size: 0x1)

    void ToggleShowHotkey(bool State);
    void Clean();
    void HandleHover(bool ShouldBeHovered);
    void ResetSelection();
    void SetAmount(int32 Amount);
    void ShowValue(bool ShowValue);
    void IsSlotActive(bool& SlotActive);
    void SetSlotActive(bool IsActive);
    void SetCannotAfford(bool IsAffordable);
    void ItemQuantityUpdateVisibility(ESlateVisibility NewVisibility);
    void SetEmptyIcon();
    void UpdateItemIcon(class UTexture2D* ItemIcon);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void SetItemIsNew(bool IsNew);
    void PlayEquipAnimation();
    void SetCanBeUsed(bool CanBeUsed);
    void PlayClickedAnimation(bool IsClicked);
    void OnLoaded_4553A86C4915205FB1C9D5AD9CC1DD16(class UObject* Loaded);
    void OnAreaUnhovered();
    void OnListItemObjectSet(class UObject* ListItemObject);
    void SlotInitialize_Event(class UInventorySlotData* Data);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void BP_OnEntryReleased();
    void OnHovered();
    void OnUnhovered();
    void PreConstruct(bool IsDesignTime);
    void OnClicked(EAlkMouseButton _MouseButton);
    void m_OnUnseenStateChanged_Event(bool HasUnseenChanges);
    void ExecuteUbergraph_W_Inventory_Slot(int32 EntryPoint);
    void DispatcherOnHovered__DelegateSignature(bool IsHovered, int32 Pos);
    void SlotInitialize__DelegateSignature(class UInventorySlotData* Data);
    void DispatcherOnClickedRelease__DelegateSignature(int32 Pos);
}; // Size: 0x5B1

#endif
