#ifndef UE4SS_SDK_W_SleepUI_MidSection_HPP
#define UE4SS_SDK_W_SleepUI_MidSection_HPP

class UW_SleepUI_MidSection_C : public USleepUIMidsectionWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Health;                                       // 0x02F8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Mana;                                         // 0x0300 (size: 0x8)
    class UW_SpinBox_C* SpinBox_Hours;                                                // 0x0308 (size: 0x8)
    class UTextBlock* Text_Coop;                                                      // 0x0310 (size: 0x8)
    class UTextBlock* Text_CurrentTime;                                               // 0x0318 (size: 0x8)
    class UTextBlock* Text_LifeAdded;                                                 // 0x0320 (size: 0x8)
    class UTextBlock* Text_ManaAdded;                                                 // 0x0328 (size: 0x8)
    class UTextBlock* Text_NoBonus;                                                   // 0x0330 (size: 0x8)
    class UTextBlock* Text_SelectedTime;                                              // 0x0338 (size: 0x8)
    class UTextBlock* TextBlock_CategoryName;                                         // 0x0340 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_Gained;                                     // 0x0348 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_MidSection;                                 // 0x0350 (size: 0x8)
    FText HoursText;                                                                  // 0x0358 (size: 0x10)
    FW_SleepUI_MidSection_CHoursChanged HoursChanged;                                 // 0x0368 (size: 0x10)
    void HoursChanged(int32 Hours);

    void GetGainText(double Gain, bool IsMax, FText& GainText);
    void Reset Hours(double MaxHoursToSleep);
    void Get Hours(int32& Hours);
    void Set Wait For Partner(bool Wait);
    void Update gains texts(int32 HoursToSleep);
    void Update Texts(int32 HoursToSleep);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__W_SleepUI_MidSection_SpinBox_Hours_K2Node_ComponentBoundEvent_2_ValueChangedEventBP__DelegateSignature(int32 OldValue, int32 NewValue);
    void ExecuteUbergraph_W_SleepUI_MidSection(int32 EntryPoint);
    void HoursChanged__DelegateSignature(int32 Hours);
}; // Size: 0x378

#endif
