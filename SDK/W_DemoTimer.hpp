#ifndef UE4SS_SDK_W_DemoTimer_HPP
#define UE4SS_SDK_W_DemoTimer_HPP

class UW_DemoTimer_C : public UDemoTimerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    class UWidgetAnimation* Expired;                                                  // 0x0388 (size: 0x8)
    class UWidgetAnimation* Flash;                                                    // 0x0390 (size: 0x8)
    class UTextBlock* TextBlock_Time;                                                 // 0x0398 (size: 0x8)

    void OnTimerExpired();
    void OnSpecialTimeReached(int32 _RemainingTime);
    void OnRemainingTimeChanged(int32 _RemainingTime);
    void ExecuteUbergraph_W_DemoTimer(int32 EntryPoint);
}; // Size: 0x3A0

#endif
