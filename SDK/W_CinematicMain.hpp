#ifndef UE4SS_SDK_W_CinematicMain_HPP
#define UE4SS_SDK_W_CinematicMain_HPP

class UW_CinematicMain_C : public UCinematicMainWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    class UCommonListView* Voicelines;                                                // 0x0490 (size: 0x8)
    TArray<class UConversationVoicelineData*> VoicelinesData;                         // 0x0498 (size: 0x10)
    bool LastInputWasPressed;                                                         // 0x04A8 (size: 0x1)
    double SkipButtonHideTime;                                                        // 0x04B0 (size: 0x8)
    bool BlockPlayerInput;                                                            // 0x04B8 (size: 0x1)

    void CheckSpeakerActive(FText InSpeakerName, int32& Index);
    void BP_OnVoiceline(FVoicelineData VoicelineData);
    void m_OnSubtitleFinishedDisplay_Event(class UConversationVoicelineData* _Voiceline);
    void Destruct();
    void OnAnyInputEvent_Event(bool InputPressed);
    void EnableInputBP();
    void ExecuteUbergraph_W_CinematicMain(int32 EntryPoint);
}; // Size: 0x4B9

#endif
