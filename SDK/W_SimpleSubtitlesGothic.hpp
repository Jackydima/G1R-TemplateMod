#ifndef UE4SS_SDK_W_SimpleSubtitlesGothic_HPP
#define UE4SS_SDK_W_SimpleSubtitlesGothic_HPP

class UW_SimpleSubtitlesGothic_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UW_SimpleGothicText_C* Text_Dialogue;                                       // 0x02E8 (size: 0x8)
    FText SpeakerName;                                                                // 0x02F0 (size: 0x10)
    FText SpeakerText;                                                                // 0x0300 (size: 0x10)
    FW_SimpleSubtitlesGothic_CNewEventDispatcher NewEventDispatcher;                  // 0x0310 (size: 0x10)
    void NewEventDispatcher();
    double SecondsDisplayed;                                                          // 0x0320 (size: 0x8)

    void ShowTextTimerFinished();
    void UpdateText(class UConversationVoicelineData* ConversationVoicelineData);
    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void ExecuteUbergraph_W_SimpleSubtitlesGothic(int32 EntryPoint);
    void NewEventDispatcher__DelegateSignature();
}; // Size: 0x328

#endif
