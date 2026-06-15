#ifndef UE4SS_SDK_W_SettingsMessage_HPP
#define UE4SS_SDK_W_SettingsMessage_HPP

class UW_SettingsMessage_C : public USettingsMessageWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0380 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0388 (size: 0x8)
    class UTextBlock* TextBlock_Message;                                              // 0x0390 (size: 0x8)

    void Finished_6750015F4330D8F00D0145A9B5B050F4();
    void Finished_EA6E0828401C095E87C6B490F1D45ADD();
    void OnShowMessage(const FText& _Message);
    void OnHideMessage();
    void Construct();
    void ExecuteUbergraph_W_SettingsMessage(int32 EntryPoint);
}; // Size: 0x398

#endif
