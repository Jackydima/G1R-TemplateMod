#ifndef UE4SS_SDK_W_OverheadConversation_HPP
#define UE4SS_SDK_W_OverheadConversation_HPP

class UW_OverheadConversation_C : public UGothicTalkBalloonWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Anim_FadeIn;                                              // 0x02E8 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_Text;                                   // 0x02F0 (size: 0x8)
    class UImage* Image_43;                                                           // 0x02F8 (size: 0x8)
    class UTextBlock* SubtitleText;                                                   // 0x0300 (size: 0x8)
    bool FadeOutPlaying;                                                              // 0x0308 (size: 0x1)
    bool ShouldBeVisible;                                                             // 0x0309 (size: 0x1)

    void HideBalloon();
    void ShowBalloon();
    void Finished_F4BA9DE649A4818870925887E8B09480();
    void HandleCharacterFinishedSpeakingSentence();
    void FadeIn();
    void FadeOut();
    void HandleCharacterStartedSpeakingSentence(const FText& NewText, float EstimatedDurationSeconds, const class AGothicCharacter* TargetCharacter);
    void ExecuteUbergraph_W_OverheadConversation(int32 EntryPoint);
}; // Size: 0x30A

#endif
