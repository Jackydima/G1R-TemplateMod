#ifndef UE4SS_SDK_W_Inventory_ItemTooltip_RuneStatSlot_HPP
#define UE4SS_SDK_W_Inventory_ItemTooltip_RuneStatSlot_HPP

class UW_Inventory_ItemTooltip_RuneStatSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_Duration;                               // 0x02E8 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_Level;                                  // 0x02F0 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_StatName;                               // 0x02F8 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_Value;                                  // 0x0300 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Value;                                        // 0x0308 (size: 0x8)
    class UImage* Image_63;                                                           // 0x0310 (size: 0x8)
    FString NewVar;                                                                   // 0x0318 (size: 0x10)

    void UpdateLevelText(bool Show);
    void SetTargetValueCost(FText Name, double Value);
    void SetContinuousValueCost(FText Name, double Value);
    void SetNormalValueCost(FText Name, double Value);
    void SetValueByLevels(FText Name, TArray<double>& Values, bool FibonacciCalculation);
    void SetDurationSeconds();
    void UpdateTotalValue(double Duration, double Value);
    void UpdateDurationText(bool Show);
    void UpdateStatValueByAttribute(FGameplayAttribute GameplayAttribute, double Value);
    void SetRedRow();
    void UpdateStatValue(FGameplayTag GameplayTag, double Value);
    void SetRequirementsVisuals(bool RequirementsMet);
    void Construct();
    void ExecuteUbergraph_W_Inventory_ItemTooltip_RuneStatSlot(int32 EntryPoint);
}; // Size: 0x328

#endif
