#ifndef UE4SS_SDK_W_Trading_Main_HPP
#define UE4SS_SDK_W_Trading_Main_HPP

class UW_Trading_Main_C : public UTradingMain
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A0 (size: 0x8)
    class UWidgetAnimation* Anim_Open2;                                               // 0x04A8 (size: 0x8)
    class UWidgetAnimation* Anim_Open;                                                // 0x04B0 (size: 0x8)
    class UW_GenericButton_C* Button_Close;                                           // 0x04B8 (size: 0x8)
    class UW_InputHint_C* InputHint_AddToQueue;                                       // 0x04C0 (size: 0x8)
    class UW_InputHint_C* InputHint_Section;                                          // 0x04C8 (size: 0x8)
    class UOverlay* Overlay_LeftSide;                                                 // 0x04D0 (size: 0x8)
    class UW_TabSelector_Horizontal_C* TabSelector_Horizontal;                        // 0x04D8 (size: 0x8)
    class UCommonActivatableWidgetSwitcher* WidgetSwitcher_Inventories;               // 0x04E0 (size: 0x8)
    TEnumAsByte<E_Trading_Focus_States::Type> CurrentFocus;                           // 0x04E8 (size: 0x1)

    void UpdateEnabledState();
    void ShiftFocus(bool ToRight);
    void ItemButtonClicked();
    void HideStatSection();
    void SetItemSlotSize();
    void HideTabIconsForPC();
    void Finished_5A2DD2BE48EAA7C11C7F2294D6AB0165();
    void Finished_AB04CCC14016939D4199A5A03EE977C3();
    void Construct();
    void OnInitialized();
    void On Trading Accepted_Event();
    void On Trading Close_Event();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void NewInventoryOre(int32 TraderOre, int32 PlayerOre);
    void BndEvt__W_Trading_Main_Button_Close_K2Node_ComponentBoundEvent_1_ClickedEventBP__DelegateSignature();
    void TabChangedEventBP_Event(int32 OldTabIndex, int32 NewTabIndex);
    void PreConstruct(bool IsDesignTime);
    void ShiftFocusLeft();
    void ShiftFocusRight();
    void UpdateEnabledStateOfWidget();
    void BndEvt__W_Trading_Main_W_TradingInventory_Sell_K2Node_ComponentBoundEvent_2_UnseenStateChangedDelegate__DelegateSignature(class UInventoryMain* _InventoryWidget, bool _HasUnseenChanges);
    void BndEvt__W_Trading_Main_WidgetSwitcher_Inventories_K2Node_ComponentBoundEvent_3_OnActiveIndexChangedDelegate__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveIndex);
    void BndEvt__W_Trading_Main_W_InputHint_K2Node_ComponentBoundEvent_4_ActionEventBP__DelegateSignature();
    void OnResetInput_Event();
    void ExecuteUbergraph_W_Trading_Main(int32 EntryPoint);
}; // Size: 0x4E9

#endif
