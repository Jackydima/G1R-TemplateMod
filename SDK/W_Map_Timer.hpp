#ifndef UE4SS_SDK_W_Map_Timer_HPP
#define UE4SS_SDK_W_Map_Timer_HPP

class UW_Map_Timer_C : public UUITimer
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UTextBlock* Text_GameTime;                                                  // 0x0350 (size: 0x8)
    FText DaysLoca;                                                                   // 0x0358 (size: 0x10)
    FText Text;                                                                       // 0x0368 (size: 0x10)

    void TimeAndDayInfo();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_Map_Timer(int32 EntryPoint);
}; // Size: 0x378

#endif
