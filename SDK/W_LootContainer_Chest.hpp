#ifndef UE4SS_SDK_W_LootContainer_Chest_HPP
#define UE4SS_SDK_W_LootContainer_Chest_HPP

class UW_LootContainer_Chest_C : public UInventoryLootContainer
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F0 (size: 0x8)
    class UWidgetAnimation* ShowInventoryQuantity;                                    // 0x04F8 (size: 0x8)
    class UWidgetAnimation* ShowChestQuantity;                                        // 0x0500 (size: 0x8)
    class UWidgetAnimation* Anim_Show;                                                // 0x0508 (size: 0x8)
    class UW_GenericButton_C* Button_Close;                                           // 0x0510 (size: 0x8)
    class UW_GenericButton_C* Button_OpenInventory;                                   // 0x0518 (size: 0x8)
    class UW_GenericButton_C* Button_TakeAll;                                         // 0x0520 (size: 0x8)
    class UW_GenericButton_C* Button_TakeSingle;                                      // 0x0528 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0530 (size: 0x8)
    class UCanvasPanel* CanvasPanel_LootContainer;                                    // 0x0538 (size: 0x8)
    class UImage* Image_60;                                                           // 0x0540 (size: 0x8)
    class UImage* Image_DecoRight;                                                    // 0x0548 (size: 0x8)
    class UImage* Image_LeftDeco;                                                     // 0x0550 (size: 0x8)
    class UImage* Image_Line;                                                         // 0x0558 (size: 0x8)
    class UW_Inventory_ItemTooltip_C* ItemTooltip;                                    // 0x0560 (size: 0x8)
    class USafeZone* SafeZone_Guide;                                                  // 0x0568 (size: 0x8)
    class USizeBox* SizeBox_ToDisable;                                                // 0x0570 (size: 0x8)
    class UTextBlock* TextBlock_CategoryTitle;                                        // 0x0578 (size: 0x8)
    class UW_GenericButton_C* W_GenericButton;                                        // 0x0580 (size: 0x8)
    class UW_QuantitySelector_C* W_QuantitySelector;                                  // 0x0588 (size: 0x8)
    class UWidgetAnimation* LastPlayedShowAnimation;                                  // 0x0590 (size: 0x8)
    bool AdaptHeightToItemNumber;                                                     // 0x0598 (size: 0x1)
    bool IsClosing;                                                                   // 0x0599 (size: 0x1)

    void TakeAll();
    void SetListResizingFunctionality();
    void HideTakeButtonsIfEmpty();
    void EnableChestButtons(bool bEnables);
    void SelectFirst();
    FText Get_TextBlock_CategoryTitle_Text();
    ESlateVisibility Get_Button_OpenInventory_Visibility();
    class UWidget* BP_GetDesiredFocusTarget();
    bool BP_OnHandleBackAction();
    void Finished_766E685146D5A62F0605C395A41ED636();
    void Finished_A0F225884287554B644727A0C6CAEC2E();
    void Finished_975051984197051918D609AFE898BDF2();
    void Finished_05BD47564F2EBD20493DF38D9548DEFB();
    void OnInitialized();
    void BP_OnDeactivated();
    void BP_OnActivated();
    void OnItemIsHoveredChangedInfo(const FItemTooltipInfo ItemTooltipInfo);
    void BndEvt__W_LootContainer_Chest_Button_Close_K2Node_ComponentBoundEvent_2_ClickedEventBP__DelegateSignature();
    void BndEvt__W_LootContainer_Chest_Button_TakeAll_K2Node_ComponentBoundEvent_3_ClickedEventBP__DelegateSignature();
    void BndEvt__W_LootContainer_Chest_Button_OpenInventory_K2Node_ComponentBoundEvent_0_ClickedEventBP__DelegateSignature();
    void BndEvt__W_LootContainer_Chest_TileView_Items_K2Node_ComponentBoundEvent_1_NumItemsChangedEventBP__DelegateSignature(int32 _OldNum, int32 _NewNum);
    void BndEvt__W_LootContainer_Chest_W_GenericButton_K2Node_ComponentBoundEvent_4_ClickedEventBP__DelegateSignature();
    void Construct();
    void BndEvt__W_LootContainer_Chest_W_SimpleInventory_K2Node_ComponentBoundEvent_5_TabAddedEventBP__DelegateSignature(int32 _Index, class UInventoryMain* _Item);
    void OnInventoryFocused();
    void OnLootContainerFocused();
    void RequestAmount(bool _bForLootContainer, int32 _MaxAmount);
    void BndEvt__W_LootContainer_Chest_W_QuantitySelector_K2Node_ComponentBoundEvent_6_OnClose__DelegateSignature();
    void BndEvt__W_LootContainer_Chest_W_QuantitySelector_K2Node_ComponentBoundEvent_7_OnAmountSelected__DelegateSignature(int32 Amount Selected);
    void RequestClose();
    void m_OnActionClicked_Event();
    void BndEvt__W_LootContainer_Chest_Button_TakeSingle_K2Node_ComponentBoundEvent_8_ClickedEventBP__DelegateSignature();
    void InitializationBP();
    void ExecuteUbergraph_W_LootContainer_Chest(int32 EntryPoint);
}; // Size: 0x59A

#endif
