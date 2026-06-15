#ifndef UE4SS_SDK_W_Trading_Balance_HPP
#define UE4SS_SDK_W_Trading_Balance_HPP

class UW_Trading_Balance_C : public UTradingBalance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UWidgetAnimation* Anim_TradeComplete;                                       // 0x0378 (size: 0x8)
    class UBorder* Border_TradeComplete;                                              // 0x0380 (size: 0x8)
    class UW_GenericButton_C* Button_Accept;                                          // 0x0388 (size: 0x8)
    class UW_GenericButton_C* Button_Cancel;                                          // 0x0390 (size: 0x8)
    class UW_GenericButton_C* Button_Close;                                           // 0x0398 (size: 0x8)
    class UW_GenericButton_C* Button_Remove;                                          // 0x03A0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Content;                                      // 0x03A8 (size: 0x8)
    class UW_Inventory_ItemTooltip_C* ItemTooltip;                                    // 0x03B0 (size: 0x8)
    class UScaleBox* ScaleBox_NotEnoughOre;                                           // 0x03B8 (size: 0x8)
    class UTextBlock* TextBlock_Balance;                                              // 0x03C0 (size: 0x8)
    class UTextBlock* TextBlock_BalanceValue;                                         // 0x03C8 (size: 0x8)
    class UTextBlock* TextBlock_Colon;                                                // 0x03D0 (size: 0x8)
    class UTextBlock* TextBlock_NotEnoughOre;                                         // 0x03D8 (size: 0x8)
    FW_Trading_Balance_COn Trading Accepted On Trading Accepted;                      // 0x03E0 (size: 0x10)
    void On Trading Accepted();
    FW_Trading_Balance_COn Trading Close On Trading Close;                            // 0x03F0 (size: 0x10)
    void On Trading Close();
    int32 SectionBuyBalance;                                                          // 0x0400 (size: 0x4)
    int32 SectionSellBalance;                                                         // 0x0404 (size: 0x4)
    int32 TraderOre;                                                                  // 0x0408 (size: 0x4)
    int32 PlayerOre;                                                                  // 0x040C (size: 0x4)
    int32 Trader Deficit;                                                             // 0x0410 (size: 0x4)
    bool Is Empty;                                                                    // 0x0414 (size: 0x1)
    bool IsItemTooltipValid;                                                          // 0x0415 (size: 0x1)

    void Update Tooltip Visibility();
    void Reset Widget();
    void Enable Balance Lists(bool EnableBuy, bool EnableSell);
    void Update Balance();
    void Construct();
    void OnInitialized();
    void On Calculate Balance Buy_Event(int32 NewBalance);
    void On Calculate Balance Sell_Event(int32 NewBalance);
    void BndEvt__W_Trading_Balance_Button_Accept_K2Node_ComponentBoundEvent_1_ClickedEventBP__DelegateSignature();
    void BndEvt__W_Trading_Balance_Button_Cancel_K2Node_ComponentBoundEvent_3_ClickedEventBP__DelegateSignature();
    void EnableLists(bool _EnableBuy, bool _EnableSell);
    void BndEvt__W_Trading_Balance_Button_Accept_1_K2Node_ComponentBoundEvent_0_ClickedEventBP__DelegateSignature();
    void m_OnItemTooltipChanged_Event(const FItemTooltipInfo& ItemTooltipInfo);
    void BndEvt__W_Trading_Balance_Button_Close_K2Node_ComponentBoundEvent_2_ClickedEventBP__DelegateSignature();
    void OnAccept_Event();
    void ExecuteUbergraph_W_Trading_Balance(int32 EntryPoint);
    void On Trading Close__DelegateSignature();
    void On Trading Accepted__DelegateSignature();
}; // Size: 0x416

#endif
