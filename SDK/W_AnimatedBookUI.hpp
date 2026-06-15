#ifndef UE4SS_SDK_W_AnimatedBookUI_HPP
#define UE4SS_SDK_W_AnimatedBookUI_HPP

class UW_AnimatedBookUI_C : public UAnimatedBookUIWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0458 (size: 0x8)
    class UW_GenericButton_C* Button_Close;                                           // 0x0460 (size: 0x8)
    class UW_GenericButton_C* Button_MoveLeft;                                        // 0x0468 (size: 0x8)
    class UW_GenericButton_C* Button_MoveRight;                                       // 0x0470 (size: 0x8)
    class UHorizontalBox* HorizontalBox_46;                                           // 0x0478 (size: 0x8)
    class UImage* RenderTarget;                                                       // 0x0480 (size: 0x8)
    FLinearColor ButtonColorAndOpacity_Enabled;                                       // 0x0488 (size: 0x10)
    FLinearColor ButtonColorAndOpacity_Disabled;                                      // 0x0498 (size: 0x10)
    bool IsClosing;                                                                   // 0x04A8 (size: 0x1)

    void GetPositionInScreen(FVector2D& position);
    FLinearColor Get_Button_MoveLeft_ColorAndOpacity();
    FLinearColor Get_Button_MoveRight_ColorAndOpacity();
    void Construct();
    void BndEvt__W_AnimatedBookUI_Button_MoveLeft_K2Node_ComponentBoundEvent_0_ClickedEventBP__DelegateSignature();
    void BndEvt__W_AnimatedBookUI_Button_MoveRight_K2Node_ComponentBoundEvent_1_ClickedEventBP__DelegateSignature();
    void FadeOutAndClose();
    void BndEvt__W_AnimatedBookUI_Button_Close_K2Node_ComponentBoundEvent_3_ClickedEventBP__DelegateSignature();
    void ExecuteUbergraph_W_AnimatedBookUI(int32 EntryPoint);
}; // Size: 0x4A9

#endif
