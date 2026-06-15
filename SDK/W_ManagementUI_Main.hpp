#ifndef UE4SS_SDK_W_ManagementUI_Main_HPP
#define UE4SS_SDK_W_ManagementUI_Main_HPP

class UW_ManagementUI_Main_C : public UManagementMain
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F0 (size: 0x8)
    class UWidgetAnimation* Anim_Open;                                                // 0x04F8 (size: 0x8)
    class UW_ManagementUI_ButtonBox_C* ButtonBox_Bottom;                              // 0x0500 (size: 0x8)
    class UW_TabSelector_Horizontal_C* TabSelector_Horizontal;                        // 0x0508 (size: 0x8)
    class UTextBlock* TextBlock_GameTime;                                             // 0x0510 (size: 0x8)
    class UW_Glossary_Main_C* W_Glossary_Main;                                        // 0x0518 (size: 0x8)
    class UW_Quests_Main_C* W_Quests_Main;                                            // 0x0520 (size: 0x8)
    class UW_Stats_Main_C* W_Stats_Main;                                              // 0x0528 (size: 0x8)
    class UCommonActivatableWidgetSwitcher* WidgetSwitcher_Content;                   // 0x0530 (size: 0x8)
    FGameplayTag ButtonCloseTag;                                                      // 0x0538 (size: 0x8)
    class UPlayer_Widget_C* ParentPlayerWidget;                                       // 0x0540 (size: 0x8)
    bool MenuIsOpen;                                                                  // 0x0548 (size: 0x1)
    FW_ManagementUI_Main_COnHandleBackAction OnHandleBackAction;                      // 0x0550 (size: 0x10)
    void OnHandleBackAction();
    bool IsClosing;                                                                   // 0x0560 (size: 0x1)
    bool DemoMode;                                                                    // 0x0561 (size: 0x1)
    FText Text;                                                                       // 0x0568 (size: 0x10)

    void CheckDemoMode();
    void Handle Flip To Tab(FGameplayTag Tab Tag, FGameplayTag Filter Tag, class UObject* Item);
    void DisableWidget();
    void EnableWidget();
    void UpdateEnabledState();
    void UpdateInputs(bool Enable);
    void Update Button Visibilities();
    void On Tab Changed(int32 OldTabIndex, int32 NewTabIndex);
    bool BP_OnHandleBackAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void Finished_2CB49B6340C25FEC586F96AC98D95B43();
    void Finished_2CB49B6340C25FEC586F96ACA8596668();
    void BP_OnActivated();
    void EnableWidgetBP();
    void DisableWidgetBP();
    void BndEvt__W_ManagementUI_Main_TabSelector_Horizontal_K2Node_ComponentBoundEvent_0_TabChangedEventBP__DelegateSignature(int32 OldTabIndex, int32 NewTabIndex);
    void OnInitialized();
    void BndEvt__W_ManagementUI_Main_ButtonBox_Bottom_K2Node_ComponentBoundEvent_4_ButtonClickedEventBP__DelegateSignature(FGameplayTag GameplayTag);
    void BndEvt__W_ManagementUI_Main_WidgetSwitcher_Content_K2Node_ComponentBoundEvent_1_OnActiveIndexChangedDelegate__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveIndex);
    void BndEvt__W_ManagementUI_Main_W_Inventory_Main_K2Node_ComponentBoundEvent_2_ButtonRelevanceChangedDelegateBP__DelegateSignature();
    void BndEvt__W_ManagementUI_Main_W_Inventory_Main_K2Node_ComponentBoundEvent_3_IsTabChangeAllowedChangedDelegateBP__DelegateSignature();
    void OnButtonRelevanceChanged();
    void OnUnseenStateChanged(class UWidget* _ChildWidget, bool _IsUnseen);
    void ToggleTab(FGameplayTag _TabTag);
    void FlipToTab(FGameplayTag _TabTag, FGameplayTag _FilterTag, const class UObject* _Item);
    void OnDisabledInput();
    void OnEnabledInput();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_W_ManagementUI_Main(int32 EntryPoint);
    void OnHandleBackAction__DelegateSignature();
}; // Size: 0x578

#endif
