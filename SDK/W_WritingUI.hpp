#ifndef UE4SS_SDK_W_WritingUI_HPP
#define UE4SS_SDK_W_WritingUI_HPP

class UW_WritingUI_C : public UWritingUIWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0498 (size: 0x8)
    class UW_GenericButton_C* Button_Back;                                            // 0x04A0 (size: 0x8)
    class UW_Writing_C* W_Writing;                                                    // 0x04A8 (size: 0x8)
    bool IsClosing;                                                                   // 0x04B0 (size: 0x1)

    void Construct();
    void m_OnWritingInitialized_Event();
    void BndEvt__W_WritingUI_Button_Back_K2Node_ComponentBoundEvent_0_ClickedEventBP__DelegateSignature();
    void ExecuteUbergraph_W_WritingUI(int32 EntryPoint);
}; // Size: 0x4B1

#endif
