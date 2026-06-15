#ifndef UE4SS_SDK_W_ArmorCustomization_Content_HPP
#define UE4SS_SDK_W_ArmorCustomization_Content_HPP

class UW_ArmorCustomization_Content_C : public UArmorCustomization
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0468 (size: 0x8)
    class UW_Inventory_Stats_Slot_C* BluntRes;                                        // 0x0470 (size: 0x8)
    class UW_Inventory_Stats_Slot_C* EdgeRes;                                         // 0x0478 (size: 0x8)
    class UW_Inventory_Stats_Slot_C* Energy;                                          // 0x0480 (size: 0x8)
    class UW_Inventory_Stats_Slot_C* FireRes;                                         // 0x0488 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Cost;                                         // 0x0490 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Stat;                                         // 0x0498 (size: 0x8)
    class UW_Inventory_Stats_Slot_C* Ice;                                             // 0x04A0 (size: 0x8)
    class UImage* Image_44;                                                           // 0x04A8 (size: 0x8)
    class UImage* Image_71;                                                           // 0x04B0 (size: 0x8)
    class UImage* Image_Line;                                                         // 0x04B8 (size: 0x8)
    class UW_InputHint_C* InputHint_Left;                                             // 0x04C0 (size: 0x8)
    class UW_InputHint_C* InputHint_Right;                                            // 0x04C8 (size: 0x8)
    class UW_Inventory_ItemTooltip_C* ModificationTooltip;                            // 0x04D0 (size: 0x8)
    class UW_Inventory_Stats_Slot_C* PointRes;                                        // 0x04D8 (size: 0x8)
    class USizeBox* SizeBox_Content;                                                  // 0x04E0 (size: 0x8)
    class UHorizontalBox* SlotSelectionBox;                                           // 0x04E8 (size: 0x8)
    class UW_ArmorCustomization_Slot_C* TabLegsSlot;                                  // 0x04F0 (size: 0x8)
    class UW_ArmorCustomization_Slot_C* TabTorsoSlot;                                 // 0x04F8 (size: 0x8)
    class UW_ArmorCustomization_Slot_C* TabWaistSlot;                                 // 0x0500 (size: 0x8)
    class UTextBlock* Text_ValueOre;                                                  // 0x0508 (size: 0x8)
    class UTextBlock* TextBlock_CategoryName;                                         // 0x0510 (size: 0x8)
    class UTextBlock* TextBlock_CategoryName_1;                                       // 0x0518 (size: 0x8)
    class UW_ItemWeight_C* W_ItemWeight;                                              // 0x0520 (size: 0x8)
    class UW_Inventory_Stats_Slot_C* Wind;                                            // 0x0528 (size: 0x8)
    class UWrapBox* WrapBox_Stats;                                                    // 0x0530 (size: 0x8)
    bool SlotSelectionMode;                                                           // 0x0538 (size: 0x1)
    FW_ArmorCustomization_Content_COnButtonContextChanged OnButtonContextChanged;     // 0x0540 (size: 0x10)
    void OnButtonContextChanged(bool ShowPurchaseButton, bool ShowEquipButton);

    void CleanSlotTabAnimationsOnConstruction();
    void SetupForSlotSelection();
    void SetupForModification();
    void DoPurchase();
    void PostPurchase();
    void ItemTooltip_OnUnEquip();
    void ItemTooltip_OnEquip();
    void UpdateTooltip();
    void OnItemChanged(bool _bEquip);
    void ShowInputHintsSlotSelection(bool bShow);
    void UpdateButtonsInMain();
    void SetupSlots();
    class UPanelWidget* GetWidgetContainer();
    void UpdateOre();
    void UpdateStats();
    void UpdateSlotSelection(int32 _Index, bool Clear);
    void SecondTabSelected();
    void ThirdTabSelected();
    void FirstTabSelected();
    void PreConstruct(bool IsDesignTime);
    void HandleSelectModificationSection();
    void HandleSelectSlotSection();
    void SetFocusedWidget(int32 _Index);
    void OnCurrentWidgetIndexChanged(int32 _OldIndex, int32 _NewIndex);
    void BndEvt__W_ArmorCustomization_Content_TileView_Items_K2Node_ComponentBoundEvent_0_ItemClickedEventBP__DelegateSignature(EAlkMouseButton _MouseButton, int32 _Index, class UObject* _Item);
    void OnEquippedModificationChanged();
    void BndEvt__W_ArmorCustomization_Content_TileView_Items_K2Node_ComponentBoundEvent_1_NumItemsChangedEventBP__DelegateSignature(int32 _OldNum, int32 _NewNum);
    void OnItemPurchased();
    void OnButtonAcceptPushed();
    void Construct();
    void OnLoadDone();
    void BndEvt__W_ArmorCustomization_Content_TileView_Items_K2Node_ComponentBoundEvent_3_SelectionChangedEventBP__DelegateSignature(int32 _OldIndex, class UObject* _OldItem, int32 _NewIndex, class UObject* _NewItem);
    void BndEvt__W_ArmorCustomization_Content_TileView_Items_K2Node_ComponentBoundEvent_4_ItemIsHoveredChangedEventBP__DelegateSignature(int32 _Index, class UObject* _Item, bool _IsHovered);
    void BndEvt__W_ArmorCustomization_Content_TileView_Items_K2Node_ComponentBoundEvent_2_ItemClickedEventBP__DelegateSignature(EAlkMouseButton _MouseButton, int32 _Index, class UObject* _Item);
    void BndEvt__W_ArmorCustomization_Content_TileView_Items_K2Node_ComponentBoundEvent_5_ItemLongClickProgressChangedEventBP__DelegateSignature(EAlkMouseButton _MouseButton, int32 _Index, class UObject* _Item, double _Progress);
    void BndEvt__W_ArmorCustomization_Content_TileView_Items_K2Node_ComponentBoundEvent_6_ItemClickedEventBP__DelegateSignature(EAlkMouseButton _MouseButton, int32 _Index, class UObject* _Item);
    void OnInitialized();
    void BndEvt__W_ArmorCustomization_Content_TabTorsoSlot_K2Node_ComponentBoundEvent_7_HoveredChangedEventBP__DelegateSignature(bool _IsHovered);
    void BndEvt__W_ArmorCustomization_Content_TabWaistSlot_K2Node_ComponentBoundEvent_8_HoveredChangedEventBP__DelegateSignature(bool _IsHovered);
    void BndEvt__W_ArmorCustomization_Content_TabWaistSlot_K2Node_ComponentBoundEvent_9_IsSelected__DelegateSignature();
    void BndEvt__W_ArmorCustomization_Content_TabTorsoSlot_K2Node_ComponentBoundEvent_10_IsSelected__DelegateSignature();
    void BndEvt__W_ArmorCustomization_Content_TabLegsSlot_K2Node_ComponentBoundEvent_11_IsSelected__DelegateSignature();
    void BndEvt__W_ArmorCustomization_Content_TabLegsSlot_K2Node_ComponentBoundEvent_12_HoveredChangedEventBP__DelegateSignature(bool _IsHovered);
    void ExecuteUbergraph_W_ArmorCustomization_Content(int32 EntryPoint);
    void OnButtonContextChanged__DelegateSignature(bool ShowPurchaseButton, bool ShowEquipButton);
}; // Size: 0x550

#endif
