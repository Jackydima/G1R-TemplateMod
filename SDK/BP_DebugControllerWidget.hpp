#ifndef UE4SS_SDK_BP_DebugControllerWidget_HPP
#define UE4SS_SDK_BP_DebugControllerWidget_HPP

class UBP_DebugControllerWidget_C : public UDebugControlWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UImage* ButtonAImage;                                                       // 0x0380 (size: 0x8)
    class UImage* ButtonAltOn;                                                        // 0x0388 (size: 0x8)
    class UImage* ButtonAOn;                                                          // 0x0390 (size: 0x8)
    class UImage* ButtonBImage;                                                       // 0x0398 (size: 0x8)
    class UImage* ButtonBottomDPadImage;                                              // 0x03A0 (size: 0x8)
    class UImage* ButtonDOn;                                                          // 0x03A8 (size: 0x8)
    class UImage* ButtonEOn;                                                          // 0x03B0 (size: 0x8)
    class UImage* ButtonFOn;                                                          // 0x03B8 (size: 0x8)
    class UImage* ButtonLBImage;                                                      // 0x03C0 (size: 0x8)
    class UImage* ButtonLeftDPadImage;                                                // 0x03C8 (size: 0x8)
    class UImage* ButtonLTImage;                                                      // 0x03D0 (size: 0x8)
    class UImage* ButtonQOn;                                                          // 0x03D8 (size: 0x8)
    class UImage* ButtonRBImage;                                                      // 0x03E0 (size: 0x8)
    class UImage* ButtonRightDPadImage;                                               // 0x03E8 (size: 0x8)
    class UImage* ButtonRTImage;                                                      // 0x03F0 (size: 0x8)
    class UImage* ButtonShiftOn;                                                      // 0x03F8 (size: 0x8)
    class UImage* ButtonSOn;                                                          // 0x0400 (size: 0x8)
    class UImage* ButtonSpaceOn;                                                      // 0x0408 (size: 0x8)
    class UImage* ButtonUpDPadImage;                                                  // 0x0410 (size: 0x8)
    class UImage* ButtonWOn;                                                          // 0x0418 (size: 0x8)
    class UImage* ButtonXImage;                                                       // 0x0420 (size: 0x8)
    class UImage* ButtonYImage;                                                       // 0x0428 (size: 0x8)
    class UImage* ControllerBaseImage;                                                // 0x0430 (size: 0x8)
    class UImage* m_JoysticLeftButton;                                                // 0x0438 (size: 0x8)
    class UImage* m_JoysticRightBackground;                                           // 0x0440 (size: 0x8)
    class UImage* m_JoysticRightButton;                                               // 0x0448 (size: 0x8)
    class UImage* MouseLeftButton;                                                    // 0x0450 (size: 0x8)
    class UImage* MouseMidButton;                                                     // 0x0458 (size: 0x8)
    class UImage* MouseMidDirectionDown;                                              // 0x0460 (size: 0x8)
    class UImage* MouseMidDirectionUp;                                                // 0x0468 (size: 0x8)
    class UImage* MouseRightButton;                                                   // 0x0470 (size: 0x8)

    void AddToButtonMap(FKey Key, class UWidget* Button);
    void Construct();
    void ExecuteUbergraph_BP_DebugControllerWidget(int32 EntryPoint);
}; // Size: 0x478

#endif
