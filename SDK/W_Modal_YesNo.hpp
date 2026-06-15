#ifndef UE4SS_SDK_W_Modal_YesNo_HPP
#define UE4SS_SDK_W_Modal_YesNo_HPP

class UW_Modal_YesNo_C : public UCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* Anim_Show;                                                // 0x0438 (size: 0x8)
    class UW_GenericButton_C* Button_No;                                              // 0x0440 (size: 0x8)
    class UW_GenericButton_C* Button_Yes;                                             // 0x0448 (size: 0x8)
    class UImage* Image_60;                                                           // 0x0450 (size: 0x8)
    class UImage* Image_80;                                                           // 0x0458 (size: 0x8)
    class UImage* Image_403;                                                          // 0x0460 (size: 0x8)
    class UOverlay* Overlay_26;                                                       // 0x0468 (size: 0x8)
    class UTextBlock* TextBlock_33;                                                   // 0x0470 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x0478 (size: 0x8)
    FW_Modal_YesNo_COnClickedYes OnClickedYes;                                        // 0x0480 (size: 0x10)
    void OnClickedYes();
    FW_Modal_YesNo_COnClickedNo OnClickedNo;                                          // 0x0490 (size: 0x10)
    void OnClickedNo();

    void SetText(FText BodyText, FText TitleText);
    void BackAction();
    bool BP_OnHandleBackAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void PlayShowAnimation();
    void Construct();
    void BndEvt__W_Modal_YesNo_Button_No_K2Node_ComponentBoundEvent_1_ClickedEventBP__DelegateSignature();
    void BndEvt__W_Modal_YesNo_Button_Yes_K2Node_ComponentBoundEvent_3_ClickedEventBP__DelegateSignature();
    void ExecuteUbergraph_W_Modal_YesNo(int32 EntryPoint);
    void OnClickedNo__DelegateSignature();
    void OnClickedYes__DelegateSignature();
}; // Size: 0x4A0

#endif
