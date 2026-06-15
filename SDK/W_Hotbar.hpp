#ifndef UE4SS_SDK_W_Hotbar_HPP
#define UE4SS_SDK_W_Hotbar_HPP

class UW_Hotbar_C : public UQuickSlotHotbar
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D0 (size: 0x8)
    class UWidgetAnimation* Anim_Show;                                                // 0x04D8 (size: 0x8)
    class UCommonButtonBase_C* CommonButtonBase;                                      // 0x04E0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_QuickSlots;                                   // 0x04E8 (size: 0x8)
    class UImage* Image_BlackBg;                                                      // 0x04F0 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Equipable0;                                       // 0x04F8 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Equipable1;                                       // 0x0500 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Equipable2;                                       // 0x0508 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Equipable3;                                       // 0x0510 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Equipable4;                                       // 0x0518 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Equipable5;                                       // 0x0520 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Equipable6;                                       // 0x0528 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Equipable7;                                       // 0x0530 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Melee;                                            // 0x0538 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Ranged;                                           // 0x0540 (size: 0x8)
    class UVerticalBox* VerticalBox_Hotbar;                                           // 0x0548 (size: 0x8)
    class UW_Inventory_ItemTooltip_C* W_Inventory_ItemTooltip_ItemInSlotToAssignTo;   // 0x0550 (size: 0x8)
    class UW_Inventory_ItemTooltip_C* W_Inventory_ItemTooltip_ItemToAssign;           // 0x0558 (size: 0x8)
    FW_Hotbar_COnClickRelease_Local OnClickRelease_Local;                             // 0x0560 (size: 0x10)
    void OnClickRelease_Local(int32 ItemPos, int32 ItemPosBar, EInventoryTypes ItemType);
    FW_Hotbar_COnClickRelease OnClickRelease;                                         // 0x0570 (size: 0x10)
    void OnClickRelease(int32 ItemHotbarPos);
    FTimerHandle HideAnimTimerHandle;                                                 // 0x0580 (size: 0x8)
    bool ShowToolTips;                                                                // 0x0588 (size: 0x1)
    FItemTooltipInfo ToolTipInfoBase;                                                 // 0x0590 (size: 0x328)
    FItemTooltipInfo ToolTipInfoSlot;                                                 // 0x08B8 (size: 0x328)

    void RefreshInventoryBP();
    void ShowHotbar();
    void PlaySlotEquipAnimation(int32 Pos);
    void OnHoveredStateChanged(bool IsHovered, int32 Pos);
    void UpdateToolTipOnSlot(int32 Pos, bool Show);
    void Update Tool Tips();
    void ReceiveInventoryItemClickedBP(int32 SlotId);
    void Initialization_BP();
    void UpdateSlotsState();
    void Finished_2BC8A19C411A179CA82A6CA1DAFB3651();
    void HotkeyPressedBP(int32 SlotId);
    void SlotClickedBP(int32 Pos);
    void BndEvt__W_Hotbar_CommonButtonBase_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void CloseWidget();
    void CloseWidgetHandling();
    void OnShowSlotTooltip(const FItemTooltipInfo ItemTooltipInfo);
    void OnShowUpdateBaseTooltip(const FItemTooltipInfo ItemTooltipInfo);
    void OnEquipInSlot(int32 _Slot);
    void ExecuteUbergraph_W_Hotbar(int32 EntryPoint);
    void OnClickRelease__DelegateSignature(int32 ItemHotbarPos);
    void OnClickRelease_Local__DelegateSignature(int32 ItemPos, int32 ItemPosBar, EInventoryTypes ItemType);
}; // Size: 0xBE0

#endif
