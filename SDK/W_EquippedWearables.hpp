#ifndef UE4SS_SDK_W_EquippedWearables_HPP
#define UE4SS_SDK_W_EquippedWearables_HPP

class UW_EquippedWearables_C : public UEquippedWearablesBar
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D8 (size: 0x8)
    class UW_Inventory_Slot_C* AmuletSlot2;                                           // 0x04E0 (size: 0x8)
    class UW_Inventory_Slot_C* ArmourSlot;                                            // 0x04E8 (size: 0x8)
    class UUniformGridPanel* EquppedItemSlots;                                        // 0x04F0 (size: 0x8)
    class UW_InputHint_C* InputHint_Left;                                             // 0x04F8 (size: 0x8)
    class UW_InputHint_C* InputHint_Right;                                            // 0x0500 (size: 0x8)
    class UW_Inventory_Slot_C* RingSlot1;                                             // 0x0508 (size: 0x8)
    class UW_Inventory_Slot_C* RingSlot2;                                             // 0x0510 (size: 0x8)
    FW_EquippedWearables_COnClickRelease_Local OnClickRelease_Local;                  // 0x0518 (size: 0x10)
    void OnClickRelease_Local(int32 ItemPos, int32 ItemPosBar, EInventoryTypes ItemType);
    FW_EquippedWearables_COnClickRelease OnClickRelease;                              // 0x0528 (size: 0x10)
    void OnClickRelease(int32 ItemHotbarPos);
    FTimerHandle HideAnimTimerHandle;                                                 // 0x0538 (size: 0x8)
    bool ShowToolTips;                                                                // 0x0540 (size: 0x1)
    FItemTooltipInfo ToolTipInfoBase;                                                 // 0x0548 (size: 0x328)
    FItemTooltipInfo ToolTipInfoSlot;                                                 // 0x0870 (size: 0x328)
    FW_EquippedWearables_COnEquipFinished OnEquipFinished;                            // 0x0B98 (size: 0x10)
    void OnEquipFinished(int32 ItemPos);
    int32 CurrentToolTipPos;                                                          // 0x0BA8 (size: 0x4)

    void LoseFocus();
    void GainFocus();
    void UpdateSelection(int32 SlotId, bool Clear);
    class UPanelWidget* GetWidgetContainer();
    void PlaySlotEquipAnimation(int32 Pos);
    void OnHoveredStateChanged(bool IsHovered, int32 Pos);
    void UpdateToolTipOnSlot(int32 Pos, bool Show);
    void Update Tool Tips();
    void ReceiveInventoryItemClickedBP(int32 SlotId);
    void Initialization_BP();
    void UpdateSlotsState();
    void HotkeyPressedBP(int32 SlotId);
    void SlotClickedBP(int32 Pos);
    void CloseWidget();
    void CloseWidgetHandling();
    void EventAutoClose();
    void OnShowSlotTooltip(const FItemTooltipInfo ItemTooltipInfo);
    void OnShowUpdateBaseTooltip(const FItemTooltipInfo ItemTooltipInfo);
    void RefreshInventoryBP();
    void SetFocusedWidget(int32 _Index);
    void BndEvt__W_EquippedWearables_ArmourSlot_K2Node_ComponentBoundEvent_0_ClickedEventBP__DelegateSignature(EAlkMouseButton _MouseButton);
    void BndEvt__W_EquippedWearables_RingSlot1_K2Node_ComponentBoundEvent_1_ClickedEventBP__DelegateSignature(EAlkMouseButton _MouseButton);
    void BndEvt__W_EquippedWearables_RingSlot2_K2Node_ComponentBoundEvent_2_ClickedEventBP__DelegateSignature(EAlkMouseButton _MouseButton);
    void BndEvt__W_EquippedWearables_AmuletSlot2_K2Node_ComponentBoundEvent_3_ClickedEventBP__DelegateSignature(EAlkMouseButton _MouseButton);
    void Construct();
    void ExecuteUbergraph_W_EquippedWearables(int32 EntryPoint);
    void OnEquipFinished__DelegateSignature(int32 ItemPos);
    void OnClickRelease__DelegateSignature(int32 ItemHotbarPos);
    void OnClickRelease_Local__DelegateSignature(int32 ItemPos, int32 ItemPosBar, EInventoryTypes ItemType);
}; // Size: 0xBAC

#endif
