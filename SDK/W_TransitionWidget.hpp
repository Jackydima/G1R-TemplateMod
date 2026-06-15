#ifndef UE4SS_SDK_W_TransitionWidget_HPP
#define UE4SS_SDK_W_TransitionWidget_HPP

class UW_TransitionWidget_C : public UTransitionWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class UWidgetAnimation* Anim_FadeOutFromBlack;                                    // 0x0330 (size: 0x8)
    class UWidgetAnimation* Anim_FadeInToBlack;                                       // 0x0338 (size: 0x8)
    class UImage* BlackImage;                                                         // 0x0340 (size: 0x8)
    class UCanvasPanel* FadeInOut;                                                    // 0x0348 (size: 0x8)

    void BP_FadeInToBlack();
    void BP_FadeOutFromBlack();
    void OnFadeInFinished();
    void OnFadeOutFinished();
    void ExecuteUbergraph_W_TransitionWidget(int32 EntryPoint);
}; // Size: 0x350

#endif
