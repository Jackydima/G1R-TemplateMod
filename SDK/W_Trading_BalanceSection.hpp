#ifndef UE4SS_SDK_W_Trading_BalanceSection_HPP
#define UE4SS_SDK_W_Trading_BalanceSection_HPP

class UW_Trading_BalanceSection_C : public UTradingBalanceInventory
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UImage* Image_Background;                                                   // 0x03B0 (size: 0x8)
    class UTextBlock* TextBlock_Title;                                                // 0x03B8 (size: 0x8)
    FWidgetTransform BackgroundOrientation;                                           // 0x03C0 (size: 0x38)
    FText TitleText;                                                                  // 0x03F8 (size: 0x10)
    int32 Balance;                                                                    // 0x0408 (size: 0x4)
    FW_Trading_BalanceSection_COn Calculate Balance On Calculate Balance;             // 0x0410 (size: 0x10)
    void On Calculate Balance(int32 NewBalance);
    int32 LastItemID;                                                                 // 0x0420 (size: 0x4)
    int32 LastAmount;                                                                 // 0x0424 (size: 0x4)
    bool GetItemsBack;                                                                // 0x0428 (size: 0x1)
    EInventoryTypes LastInventoryType;                                                // 0x0429 (size: 0x1)
    FW_Trading_BalanceSection_COnResetInput OnResetInput;                             // 0x0430 (size: 0x10)
    void OnResetInput();

    void Is Empty(bool& Is Empty);
    void UpdateInventoryWidget();
    void CalculateBalance();
    void PreConstruct(bool IsDesignTime);
    void TradingInventoryClickedBP(int32 ItemId, EInventoryTypes InventoryType, int32 ItemMaxAmount);
    void OnAmountSelected_Event(int32 AmountSelected);
    void OnItemClicked(int32 ItemId, EInventoryTypes _InventoryType, int32 ItemAmount);
    void UpdateWidgetBP();
    void OnCancel_Event();
    void OnInputTypeChanged(ECommonInputType _InputType);
    void ExecuteUbergraph_W_Trading_BalanceSection(int32 EntryPoint);
    void OnResetInput__DelegateSignature();
    void On Calculate Balance__DelegateSignature(int32 NewBalance);
}; // Size: 0x440

#endif
