#ifndef UE4SS_SDK_W_CreditsScreen_Row_HPP
#define UE4SS_SDK_W_CreditsScreen_Row_HPP

class UW_CreditsScreen_Row_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class URichTextBlock* RichTextBlock_Name;                                         // 0x02E8 (size: 0x8)

    void Set Name(FText Name);
    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void ExecuteUbergraph_W_CreditsScreen_Row(int32 EntryPoint);
}; // Size: 0x2F0

#endif
