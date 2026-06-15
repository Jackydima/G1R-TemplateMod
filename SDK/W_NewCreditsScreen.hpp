#ifndef UE4SS_SDK_W_NewCreditsScreen_HPP
#define UE4SS_SDK_W_NewCreditsScreen_HPP

class UW_NewCreditsScreen_C : public UScriptCreditsScreenWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0438 (size: 0x8)
    class UWidgetAnimation* Anim_Scroll;                                              // 0x0440 (size: 0x8)
    class UWidgetAnimation* Anim_ShowPage;                                            // 0x0448 (size: 0x8)
    class UW_GenericButton_C* Button_Back;                                            // 0x0450 (size: 0x8)
    class UW_GenericButton_C* Button_Skip;                                            // 0x0458 (size: 0x8)
    class UCommonActivatableWidgetSwitcher* CommonActivatableWidgetSwitcher_157;      // 0x0460 (size: 0x8)
    class UImage* Image;                                                              // 0x0468 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0470 (size: 0x8)
    class UListView* Sections;                                                        // 0x0478 (size: 0x8)
    class USpacer* Spacer_EndCredits;                                                 // 0x0480 (size: 0x8)
    class UVerticalBox* VerticalBox_283;                                              // 0x0488 (size: 0x8)
    class UW_InputHint_C* W_InputHint;                                                // 0x0490 (size: 0x8)
    double CreditsScrollSpeed;                                                        // 0x0498 (size: 0x8)
    double VerticalBoxLength;                                                         // 0x04A0 (size: 0x8)
    bool IsOutsideMainMenu;                                                           // 0x04A8 (size: 0x1)

    bool BP_OnHandleBackAction();
    void SetIsOutsideMainMenu(bool IsOutsideMainMenu);
    void DeactivateCredits();
    void BndEvt__W_CreditsScreen_Button_Close_K2Node_ComponentBoundEvent_1_ClickedEventBP__DelegateSignature();
    void Construct();
    void BndEvt__W_CreditsScreen_W_InputHint_K2Node_ComponentBoundEvent_0_ActionEventBP__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__W_NewCreditsScreen_W_InputHint_K2Node_ComponentBoundEvent_3_ActionEventBP__DelegateSignature();
    void BndEvt__W_NewCreditsScreen_Button_Close_K2Node_ComponentBoundEvent_4_ClickedEventBP__DelegateSignature();
    void ExecuteUbergraph_W_NewCreditsScreen(int32 EntryPoint);
}; // Size: 0x4A9

#endif
