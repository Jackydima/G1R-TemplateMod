#ifndef UE4SS_SDK_W_SimpleGothicText_HPP
#define UE4SS_SDK_W_SimpleGothicText_HPP

class UW_SimpleGothicText_C : public UGothicCommonActivatableWidget
{
    class URichTextBlock* RichTextBlock_Dialogue;                                     // 0x0448 (size: 0x8)

    void SetText(FText TalkerName, FText TalkerText);
}; // Size: 0x450

#endif
