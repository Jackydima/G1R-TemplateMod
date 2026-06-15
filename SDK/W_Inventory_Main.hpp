#ifndef UE4SS_SDK_W_Inventory_Main_HPP
#define UE4SS_SDK_W_Inventory_Main_HPP

class UW_Inventory_Main_C : public UInventoryMain
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0678 (size: 0x8)
    class UW_EquippedWearables_C* EquippedWearables;                                  // 0x0680 (size: 0x8)
    class UHorizontalBox* HorizontalBox_OreCount;                                     // 0x0688 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Player;                                       // 0x0690 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Seller;                                       // 0x0698 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Stats;                                        // 0x06A0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Tooltips;                                     // 0x06A8 (size: 0x8)
    class UImage* Image_71;                                                           // 0x06B0 (size: 0x8)
    class UW_Inventory_ItemTooltip_C* ItemTooltip;                                    // 0x06B8 (size: 0x8)
    class USpacer* Spacer;                                                            // 0x06C0 (size: 0x8)
    class USpacer* Spacer_1;                                                          // 0x06C8 (size: 0x8)
    class USpacer* Spacer_2;                                                          // 0x06D0 (size: 0x8)
    class USpacer* Spacer_60;                                                         // 0x06D8 (size: 0x8)
    class UTextBlock* Text_Trader;                                                    // 0x06E0 (size: 0x8)
    class UTextBlock* Text_Value;                                                     // 0x06E8 (size: 0x8)
    class UTextBlock* Text_Value_1;                                                   // 0x06F0 (size: 0x8)
    class UTextBlock* Text_Value_Ore;                                                 // 0x06F8 (size: 0x8)
    class UTextBlock* Text_Value_Seller;                                              // 0x0700 (size: 0x8)
    class UTextBlock* TextBlock_CategoryName;                                         // 0x0708 (size: 0x8)
    class UW_Inventory_ItemTooltip_C* W_Inventory_ItemTooltip_ItemInSlotToAssignTo_1_Compare; // 0x0710 (size: 0x8)
    class UW_Inventory_ItemTooltip_C* W_Inventory_ItemTooltip_ItemInSlotToAssignTo_Compare; // 0x0718 (size: 0x8)
    class UW_Inventory_ItemTooltip_C* W_Inventory_ItemTooltip_ItemInSlotToAssignTo_Wearable; // 0x0720 (size: 0x8)
    class UW_Inventory_ItemTooltip_C* W_Inventory_ItemTooltip_ItemToAssign;           // 0x0728 (size: 0x8)
    class UW_Inventory_Stats_Slot_C* W_Inventory_Stats_Dexterity;                     // 0x0730 (size: 0x8)
    class UW_Inventory_Stats_Slot_C* W_Inventory_Stats_Health;                        // 0x0738 (size: 0x8)
    class UW_Inventory_Stats_Slot_C* W_Inventory_Stats_MagicCircle;                   // 0x0740 (size: 0x8)
    class UW_Inventory_Stats_Slot_C* W_Inventory_Stats_Mana;                          // 0x0748 (size: 0x8)
    class UW_Inventory_Stats_Slot_C* W_Inventory_Stats_SkillPoints;                   // 0x0750 (size: 0x8)
    class UW_Inventory_Stats_Slot_C* W_Inventory_Stats_Strength;                      // 0x0758 (size: 0x8)
    class UW_Inventory_Stats_Slot_C* W_Inventory_Stats_Toughness;                     // 0x0760 (size: 0x8)
    class UW_ItemWeight_C* W_ItemWeight;                                              // 0x0768 (size: 0x8)
    FW_Inventory_Main_CDispatcherSetLooting DispatcherSetLooting;                     // 0x0770 (size: 0x10)
    void DispatcherSetLooting(bool IsLooting);
    FW_Inventory_Main_CPWOnClickedRelease PWOnClickedRelease;                         // 0x0780 (size: 0x10)
    void PWOnClickedRelease(int32 ItemToBeEquippedPos, EInventoryTypes InventoryType);
    int32 PlayerInventoryOre;                                                         // 0x0790 (size: 0x4)
    int32 InventoryOre;                                                               // 0x0794 (size: 0x4)
    bool ItemListIsEmpty;                                                             // 0x0798 (size: 0x1)
    FW_Inventory_Main_CUpdateOtherInputs UpdateOtherInputs;                           // 0x07A0 (size: 0x10)
    void UpdateOtherInputs(bool Enable);
    FItemTooltipInfo TooltipInfo;                                                     // 0x07B0 (size: 0x328)
    TArray<FItemTooltipInfo> WearableTooltipArray;                                    // 0x0AD8 (size: 0x10)
    bool ShouldShowWearableCompare;                                                   // 0x0AE8 (size: 0x1)
    int32 ScrollOffset;                                                               // 0x0AEC (size: 0x4)

    void Allow Tooltips(bool Allow);
    ESlateVisibility GetVisibility_3();
    void DoToggleWearableComparisonTooltip(bool Condition);
    void UpdateWearableTooltip(const TArray<FItemTooltipInfo>& TargetArray);
    ESlateVisibility GetVisibility_2();
    bool IsTabChangeAllowed();
    ESlateVisibility GetVisibility_1();
    ESlateVisibility GetVisibility_0();
    void SetWearablesStateForGamepadBP(bool WearablesFocusMode, bool IgnoreType);
    FGameplayTagContainer GetRelevantButtonTags();
    void ReleaseEditMode();
    void OnPopupCanceled();
    void OnPopupAmountSelected(int32 AmountSelected);
    void ShowQuantityWidget(int32 MaxQuantity);
    void ItemTooltip_OnEquip();
    void Initialization BP Function();
    void SetInventoryOre(int32 NewOreOwner, int32 NewOrePlayer);
    void ShowItemCost();
    class UWidget* BP_GetDesiredFocusTarget();
    void Initialization_BP();
    void OnInitialized();
    void SelectedItemIsNotEquippable();
    void OnItemIsHoveredChangedInfo(const FItemTooltipInfo ItemTooltipInfo);
    void RefreshInventoryBP();
    void BndEvt__W_Inventory_Main_TileView_Items_K2Node_ComponentBoundEvent_0_ItemClickedEventBP__DelegateSignature(EAlkMouseButton _MouseButton, int32 _Index, class UObject* _Item);
    void BndEvt__W_Inventory_Main_TileView_Items_K2Node_ComponentBoundEvent_1_ItemClickedEventBP__DelegateSignature(EAlkMouseButton _MouseButton, int32 _Index, class UObject* _Item);
    void BndEvt__W_Inventory_Main_TileView_Items_K2Node_ComponentBoundEvent_2_ItemLongClickProgressChangedEventBP__DelegateSignature(EAlkMouseButton _MouseButton, int32 _Index, class UObject* _Item, double _Progress);
    void DisableInputBP();
    void StartWearableEquip_BP(int32 _ItemID, EInventoryTypes _InventoryType);
    void StopWearableEquip_BP();
    void BndEvt__W_Inventory_Main_W_EquippedWearables_K2Node_ComponentBoundEvent_3_OnEquipFinished__DelegateSignature(int32 ItemPos);
    void OnRelevantButtonClicked(const FGameplayTag& _GameplayTag);
    void HandleSelectInventorySection();
    void HandleSelectWearableSection();
    void HandleInputTypeChangedBP(ECommonInputType _InputType);
    void OnUpdateWearableItemTooltips(const TArray<FItemTooltipInfo>& ItemTooltipInfo);
    void BndEvt__W_Inventory_Main_GenericFilter_K2Node_ComponentBoundEvent_5_SelectionChangedEventBP__DelegateSignature(FGameplayTag _FilterTag, const FText& _DisplayName, const FText& _Description);
    void PreConstruct(bool IsDesignTime);
    void SetSelection(FGameplayTag _FilterTag, const class UObject* _Item);
    void OnShown();
    void ExecuteUbergraph_W_Inventory_Main(int32 EntryPoint);
    void UpdateOtherInputs__DelegateSignature(bool Enable);
    void PWOnClickedRelease__DelegateSignature(int32 ItemToBeEquippedPos, EInventoryTypes InventoryType);
    void DispatcherSetLooting__DelegateSignature(bool IsLooting);
}; // Size: 0xAF0

#endif
