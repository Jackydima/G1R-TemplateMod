#ifndef UE4SS_SDK_W_SimpleGothicText_CinematicTop_HPP
#define UE4SS_SDK_W_SimpleGothicText_CinematicTop_HPP

class UW_SimpleGothicText_CinematicTop_C : public UGothicCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class URichTextBlock* RichTextBlock_Dialogue;                                     // 0x0450 (size: 0x8)

    void SetText(FText TalkerName, FText TalkerText);
    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void ExecuteUbergraph_W_SimpleGothicText_CinematicTop(int32 EntryPoint);
}; // Size: 0x458

#endif
