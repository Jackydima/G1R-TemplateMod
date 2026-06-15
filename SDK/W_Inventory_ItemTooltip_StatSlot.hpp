#ifndef UE4SS_SDK_W_Inventory_ItemTooltip_StatSlot_HPP
#define UE4SS_SDK_W_Inventory_ItemTooltip_StatSlot_HPP

class UW_Inventory_ItemTooltip_StatSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_StatName;                               // 0x02E8 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_Unit;                                   // 0x02F0 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_Value;                                  // 0x02F8 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0300 (size: 0x8)
    class USizeBox* SizeBox_ComparisonValue;                                          // 0x0308 (size: 0x8)
    class USizeBox* SizeBox_Unit;                                                     // 0x0310 (size: 0x8)
    class UTextBlock* Text_StatValueBonus;                                            // 0x0318 (size: 0x8)

    void SetDurationSeconds();
    void UpdateTotalValue(double Duration, double Value);
    void UpdateDurationText(bool Show);
    void UpdateStatValueByAttribute(FGameplayAttribute GameplayAttribute, double Value);
    void SetRedRow();
    void UpdateBonusValue(double Value, bool Show Comparison);
    void UpdateStatValue(FGameplayTag GameplayTag, double Value);
    void SetRequirementsVisuals(bool RequirementsMet);
    void Construct();
    void ExecuteUbergraph_W_Inventory_ItemTooltip_StatSlot(int32 EntryPoint);
}; // Size: 0x320

#endif
