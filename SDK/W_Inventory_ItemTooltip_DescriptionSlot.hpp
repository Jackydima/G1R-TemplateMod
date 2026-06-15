#ifndef UE4SS_SDK_W_Inventory_ItemTooltip_DescriptionSlot_HPP
#define UE4SS_SDK_W_Inventory_ItemTooltip_DescriptionSlot_HPP

class UW_Inventory_ItemTooltip_DescriptionSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_ItemDescription;                        // 0x02E8 (size: 0x8)

    void SetDescriptionText(FText Description);
    void Construct();
    void ExecuteUbergraph_W_Inventory_ItemTooltip_DescriptionSlot(int32 EntryPoint);
}; // Size: 0x2F0

#endif
