#ifndef UE4SS_SDK_W_Disclaimer_2_de_HPP
#define UE4SS_SDK_W_Disclaimer_2_de_HPP

class UW_Disclaimer_2_de_C : public UCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* Anim_Show;                                                // 0x0438 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_52;                                     // 0x0440 (size: 0x8)
    class UW_GenericButton_C* Button_Continue;                                        // 0x0448 (size: 0x8)
    class UImage* Image;                                                              // 0x0450 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0458 (size: 0x8)
    class UImage* Image_24;                                                           // 0x0460 (size: 0x8)
    FW_Disclaimer_2_de_CContinueWasClicked ContinueWasClicked;                        // 0x0468 (size: 0x10)
    void ContinueWasClicked();

    bool BP_OnHandleBackAction();
    void BP_OnActivated();
    void BndEvt__W_Disclaimer_2_de_Button_Continue_K2Node_ComponentBoundEvent_0_ClickedEventBP__DelegateSignature();
    void ExecuteUbergraph_W_Disclaimer_2_de(int32 EntryPoint);
    void ContinueWasClicked__DelegateSignature();
}; // Size: 0x478

#endif
