#ifndef UE4SS_SDK_W_SimpleTextMessage_HPP
#define UE4SS_SDK_W_SimpleTextMessage_HPP

class UW_SimpleTextMessage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* ShowTextAnimation;                                        // 0x02E8 (size: 0x8)
    class UTextBlock* TextBlock_Message;                                              // 0x02F0 (size: 0x8)

    void Construct();
    void ShowSimpleTextMessage(const FText& Message);
    void ExecuteUbergraph_W_SimpleTextMessage(int32 EntryPoint);
}; // Size: 0x2F8

#endif
