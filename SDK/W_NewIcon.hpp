#ifndef UE4SS_SDK_W_NewIcon_HPP
#define UE4SS_SDK_W_NewIcon_HPP

class UW_NewIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Anim_Pulse;                                               // 0x02E8 (size: 0x8)
    double Duration;                                                                  // 0x02F0 (size: 0x8)
    double Last Time;                                                                 // 0x02F8 (size: 0x8)

    void Update Animation(FGeometry& NewParam);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_NewIcon(int32 EntryPoint);
}; // Size: 0x300

#endif
