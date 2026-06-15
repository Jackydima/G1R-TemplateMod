#ifndef UE4SS_SDK_W_QuickWheel_DEPRECATED_HPP
#define UE4SS_SDK_W_QuickWheel_DEPRECATED_HPP

class UW_QuickWheel_DEPRECATED_C : public UQuickSlotWheel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F8 (size: 0x8)
    class UWidgetAnimation* Anim_Show;                                                // 0x0500 (size: 0x8)
    class UW_GenericButton_C* Button_Cancel;                                          // 0x0508 (size: 0x8)
    class UCanvasPanel* CanvasPanel_QuickSlots;                                       // 0x0510 (size: 0x8)
    class UW_InputHint_C* Hint_Accept;                                                // 0x0518 (size: 0x8)
    class UImage* Image_AreaSelection;                                                // 0x0520 (size: 0x8)
    class UImage* Image_CenterCircle;                                                 // 0x0528 (size: 0x8)
    class UImage* Image_Main;                                                         // 0x0530 (size: 0x8)
    class UImage* Image_Overlay;                                                      // 0x0538 (size: 0x8)
    class UOverlay* Overlay_QuickWheel;                                               // 0x0540 (size: 0x8)
    class UOverlay* Overlay_Wearables;                                                // 0x0548 (size: 0x8)
    class UOverlay* Overlay_WereablesSlots;                                           // 0x0550 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Armor;                                            // 0x0558 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Equipable1;                                       // 0x0560 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Equipable2;                                       // 0x0568 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Equipable3;                                       // 0x0570 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Equipable4;                                       // 0x0578 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Equipable5;                                       // 0x0580 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Equipable6;                                       // 0x0588 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Melee;                                            // 0x0590 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Ranged;                                           // 0x0598 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Ring1;                                            // 0x05A0 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Ring2;                                            // 0x05A8 (size: 0x8)
    class UW_Inventory_Slot_C* Slot_Talisman;                                         // 0x05B0 (size: 0x8)
    class UTextBlock* TextBlock_ItemName;                                             // 0x05B8 (size: 0x8)
    FW_QuickWheel_DEPRECATED_COnClickRelease OnClickRelease;                          // 0x05C0 (size: 0x10)
    void OnClickRelease(int32 ItemWheelPos);
    TArray<class UW_Inventory_Slot_C*> QuickSlots;                                    // 0x05D0 (size: 0x10)
    double AngleOfFirstWidget;                                                        // 0x05E0 (size: 0x8)
    int32 NumWidgets;                                                                 // 0x05E8 (size: 0x4)
    FVector InitialRotationAxis;                                                      // 0x05F0 (size: 0x18)
    double Radius;                                                                    // 0x0608 (size: 0x8)
    bool RotateWidgets;                                                               // 0x0610 (size: 0x1)
    double BaseWidgetRotation;                                                        // 0x0618 (size: 0x8)
    double ActualAngle;                                                               // 0x0620 (size: 0x8)
    uint8 InventoryFilterActivated;                                                   // 0x0628 (size: 0x1)
    double SetStartAngle;                                                             // 0x0630 (size: 0x8)
    bool UsingGamepad;                                                                // 0x0638 (size: 0x1)
    int32 Pos;                                                                        // 0x063C (size: 0x4)
    FW_QuickWheel_DEPRECATED_COnClickedRelease_Local OnClickedRelease_Local;          // 0x0640 (size: 0x10)
    void OnClickedRelease_Local(int32 ItemPos, int32 ItemPosWheel, EInventoryTypes ItemType);
    int32 SectorSize;                                                                 // 0x0650 (size: 0x4)
    TArray<int32> SectorMinBounds;                                                    // 0x0658 (size: 0x10)
    TArray<int32> SectorMaxBounds;                                                    // 0x0668 (size: 0x10)
    double CurrentRotation;                                                           // 0x0678 (size: 0x8)
    bool OutOfDeadzone;                                                               // 0x0680 (size: 0x1)
    double ActivationMaxRadius;                                                       // 0x0688 (size: 0x8)
    double ActivationMinRadius;                                                       // 0x0690 (size: 0x8)

    void RefreshInventoryBP();
    void UpdateSlotsState();
    void ReceiveInventoryItemClickedBP(int32 SlotId);
    void BP_OnDeactivated();
    void BP_OnActivated();
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void GamepadAccept();
    void GetRightStickValueBP();
    void Initialization_BP();
    bool BP_OnHandleBackAction();
    void SelectEmptyIcon(class UW_Inventory_Slot_C* InventorySlot, FString EmptyIconName, int32 ArrayIndex);
    void GamepadDeadzone(double XAxis, double YAxis);
    void MouseDeadzone();
    void SetWereablesSlotVisibility(bool AreVisible);
    void InitializeIcons();
    void SetSlotState(bool Inactive, class UW_Inventory_Slot_C* Slot);
    void ActivateAreaHighlight(class UW_Inventory_Slot_C* InventorySlot);
    void GetScreenPosition(double& MouseDistanceFromCenter);
    void SetActualAngleGamepad(double XAxis, double YAxis);
    void SetActualAngleMouse();
    void Finished_5D0AEC5341C4C8C676FE478F1ED71D72();
    void ShowAnimation();
    void BndEvt__W_QuickWheel_Button_Cancel_K2Node_ComponentBoundEvent_0_ClickedEventBP__DelegateSignature();
    void CloseWidget();
    void ExecuteUbergraph_W_QuickWheel_DEPRECATED(int32 EntryPoint);
    void OnClickedRelease_Local__DelegateSignature(int32 ItemPos, int32 ItemPosWheel, EInventoryTypes ItemType);
    void OnClickRelease__DelegateSignature(int32 ItemWheelPos);
}; // Size: 0x698

#endif
