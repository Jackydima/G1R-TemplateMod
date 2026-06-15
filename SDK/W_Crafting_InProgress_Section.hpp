#ifndef UE4SS_SDK_W_Crafting_InProgress_Section_HPP
#define UE4SS_SDK_W_Crafting_InProgress_Section_HPP

class UW_Crafting_InProgress_Section_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Anim_Progress;                                            // 0x02E8 (size: 0x8)
    class UProgressBar* ProgressBar_61;                                               // 0x02F0 (size: 0x8)
    double Speed Modifier;                                                            // 0x02F8 (size: 0x8)
    FW_Crafting_InProgress_Section_CSectionHasFinished SectionHasFinished;            // 0x0300 (size: 0x10)
    void SectionHasFinished();
    FSlateBrush Background;                                                           // 0x0310 (size: 0xD0)
    FSlateBrush Fill;                                                                 // 0x03E0 (size: 0xD0)

    void Reset Animation();
    void Start Animation();
    void Finished_CCFE531747496E40CF326FA75D79AB9D();
    void Finish Animation();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_W_Crafting_InProgress_Section(int32 EntryPoint);
    void SectionHasFinished__DelegateSignature();
}; // Size: 0x4B0

#endif
