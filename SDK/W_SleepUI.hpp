#ifndef UE4SS_SDK_W_SleepUI_HPP
#define UE4SS_SDK_W_SleepUI_HPP

class UW_SleepUI_C : public USleepUIWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0470 (size: 0x8)
    class UWidgetAnimation* Anim_MoveArrow;                                           // 0x0478 (size: 0x8)
    class UWidgetAnimation* Anim_Fill;                                                // 0x0480 (size: 0x8)
    class UW_GenericButton_C* Button_Select;                                          // 0x0488 (size: 0x8)
    class UImage* Image_Fill;                                                         // 0x0490 (size: 0x8)
    class UImage* Image_FillMaxRest;                                                  // 0x0498 (size: 0x8)
    class UImage* Image_Glow;                                                         // 0x04A0 (size: 0x8)
    class UImage* Image_OuterCircle;                                                  // 0x04A8 (size: 0x8)
    class UImage* Image_Overlay;                                                      // 0x04B0 (size: 0x8)
    class UOverlay* Overlay_OuterCircle;                                              // 0x04B8 (size: 0x8)
    class UW_SleepUI_ArrowSelection_C* W_SleepUI_ArrowSelection;                      // 0x04C0 (size: 0x8)
    class UW_SleepUI_CurrentHourLine_C* W_SleepUI_CurrentHourLine;                    // 0x04C8 (size: 0x8)
    class UW_SleepUI_HoursCircle_C* W_SleepUI_HoursCircle;                            // 0x04D0 (size: 0x8)
    class UW_SleepUI_MidSection_C* W_SleepUI_MidSection;                              // 0x04D8 (size: 0x8)
    class UW_SleepUI_TimeOfDayIcon_C* W_SleepUI_TimeOfDayIcon;                        // 0x04E0 (size: 0x8)
    class UW_SleepUI_TimeOfDayIcon_C* W_SleepUI_TimeOfDayIcon_1;                      // 0x04E8 (size: 0x8)
    class UW_SleepUI_TimeOfDayIcon_C* W_SleepUI_TimeOfDayIcon_2;                      // 0x04F0 (size: 0x8)
    class UW_SleepUI_TimeOfDayIcon_C* W_SleepUI_TimeOfDayIcon_3;                      // 0x04F8 (size: 0x8)
    int32 CurrentHour;                                                                // 0x0500 (size: 0x4)

    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void SetWaitingForPartnerVisuals(bool IsWaiting);
    void RefreshHoursToSleep();
    void RefreshConfirmButtonVisibility();
    void RefreshCurrentHourPinVisibility();
    void SetFillImageStartingAngle();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BP_InitializeSleepUI();
    void Construct();
    void BndEvt__W_SleepUI_W_SleepUI_MidSection_K2Node_ComponentBoundEvent_2_HoursChanged__DelegateSignature(int32 Hours);
    void BP_ShowWaitingForPartner(bool Show);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_SleepUI(int32 EntryPoint);
}; // Size: 0x504

#endif
