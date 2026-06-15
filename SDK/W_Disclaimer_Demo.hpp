#ifndef UE4SS_SDK_W_Disclaimer_Demo_HPP
#define UE4SS_SDK_W_Disclaimer_Demo_HPP

class UW_Disclaimer_Demo_C : public UCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* Anim_Show;                                                // 0x0438 (size: 0x8)
    class UW_GenericButton_C* Button_Continue;                                        // 0x0440 (size: 0x8)
    class UImage* Image;                                                              // 0x0448 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0450 (size: 0x8)
    class UImage* Image_24;                                                           // 0x0458 (size: 0x8)
    class UImage* Image_BlackBgFull;                                                  // 0x0460 (size: 0x8)
    FW_Disclaimer_Demo_CContinueWasClicked ContinueWasClicked;                        // 0x0468 (size: 0x10)
    void ContinueWasClicked();

    bool BP_OnHandleBackAction();
    void BndEvt__W_Disclaimer_Demo_Button_Continue_K2Node_ComponentBoundEvent_0_ClickedEventBP__DelegateSignature();
    void BP_OnActivated();
    void ExecuteUbergraph_W_Disclaimer_Demo(int32 EntryPoint);
    void ContinueWasClicked__DelegateSignature();
}; // Size: 0x478

#endif
