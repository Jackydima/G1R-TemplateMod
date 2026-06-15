#ifndef UE4SS_SDK_W_Map_Main_HPP
#define UE4SS_SDK_W_Map_Main_HPP

class UW_Map_Main_C : public UMapMain
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0518 (size: 0x8)
    class UWidgetAnimation* Anim_Hide;                                                // 0x0520 (size: 0x8)
    class UWidgetAnimation* Anim_Show;                                                // 0x0528 (size: 0x8)
    class UW_GenericButton_C* Button_Back;                                            // 0x0530 (size: 0x8)
    class UW_GenericButton_C* Button_Back_1;                                          // 0x0538 (size: 0x8)
    class UW_GenericButton_C* Button_Close;                                           // 0x0540 (size: 0x8)
    class UW_GenericButton_C* Button_Close_1;                                         // 0x0548 (size: 0x8)
    class UW_GenericButton_C* Button_CloseM;                                          // 0x0550 (size: 0x8)
    class UW_GenericButton_C* Button_Filters;                                         // 0x0558 (size: 0x8)
    class UW_GenericButton_C* Button_Marker;                                          // 0x0560 (size: 0x8)
    class UW_Map_Slot_C* Button_NewCamp;                                              // 0x0568 (size: 0x8)
    class UW_Map_Slot_C* Button_OldCamp;                                              // 0x0570 (size: 0x8)
    class UW_Map_Slot_C* Button_OrcCamp;                                              // 0x0578 (size: 0x8)
    class UW_Map_Slot_C* Button_SleepersTemple;                                       // 0x0580 (size: 0x8)
    class UW_Map_Slot_C* Button_SwampCamp;                                            // 0x0588 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0590 (size: 0x8)
    class UCanvasPanel* CanvasPanel_CampsNames;                                       // 0x0598 (size: 0x8)
    class UImage* Image_85;                                                           // 0x05A0 (size: 0x8)
    class UOverlay* Overlay_AreaMap;                                                  // 0x05A8 (size: 0x8)
    class UOverlay* Overlay_Content;                                                  // 0x05B0 (size: 0x8)
    class UTextBlock* TextBlock_MapName;                                              // 0x05B8 (size: 0x8)
    class UW_Map_Timer_C* W_Map_Timer;                                                // 0x05C0 (size: 0x8)
    TArray<class UW_Map_Slot_C*> AreaButtons;                                         // 0x05C8 (size: 0x10)
    FW_Map_Main_CCloseButtonClicked CloseButtonClicked;                               // 0x05D8 (size: 0x10)
    void CloseButtonClicked();
    bool DebugMode;                                                                   // 0x05E8 (size: 0x1)
    bool Closing;                                                                     // 0x05E9 (size: 0x1)
    bool MainMapIsEmpty;                                                              // 0x05EA (size: 0x1)

    void OpenAreaMapBP();
    void ResetFilterList();
    void CheckAreaButtons();
    void Finished_8E9C2E5B41F58A6220B565A368C47382();
    void BndEvt__W_Map_Main_Button_Close_K2Node_ComponentBoundEvent_2_ClickedEventBP__DelegateSignature();
    void BP_OnActivated();
    void BndEvt__W_Map_Main_Button_Back_K2Node_ComponentBoundEvent_1_ClickedEventBP__DelegateSignature();
    void CloseWidgetBP();
    void BndEvt__W_Map_Main_Button_OldCamp_K2Node_ComponentBoundEvent_0_ClickedEventBP__DelegateSignature();
    void BndEvt__W_Map_Main_Button_NewCamp_K2Node_ComponentBoundEvent_4_ClickedEventBP__DelegateSignature();
    void ToggleDebugModeBP();
    void BndEvt__W_Map_Main_Button_SwampCamp_K2Node_ComponentBoundEvent_5_ClickedEventBP__DelegateSignature();
    void BndEvt__W_Map_Main_Button_OrcCamp_K2Node_ComponentBoundEvent_6_ClickedEventBP__DelegateSignature();
    void BndEvt__W_Map_Main_Button_SleepersTemple_K2Node_ComponentBoundEvent_9_ClickedEventBP__DelegateSignature();
    void BndEvt__W_Map_Main_Button_Close_1_K2Node_ComponentBoundEvent_6_ClickedEventBP__DelegateSignature();
    void BndEvt__W_Map_Main_Button_Back_1_K2Node_ComponentBoundEvent_8_ClickedEventBP__DelegateSignature();
    void BndEvt__W_Map_Main_Button_Marker_1_K2Node_ComponentBoundEvent_10_ClickedEventBP__DelegateSignature();
    void Construct();
    void OnInitialized();
    void OnMarkerSelectorVisibilityChanged_Event(bool IsVisible);
    void BndEvt__W_Map_Main_Button_CloseM_K2Node_ComponentBoundEvent_3_ClickedEventBP__DelegateSignature();
    void BndEvt__W_Map_Main_InputHint_Marker_RemoveAll_K2Node_ComponentBoundEvent_13_ActionEventBP__DelegateSignature();
    void OpenBlankMainMapBP();
    void ExecuteUbergraph_W_Map_Main(int32 EntryPoint);
    void CloseButtonClicked__DelegateSignature();
}; // Size: 0x5EB

#endif
