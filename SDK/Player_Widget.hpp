#ifndef UE4SS_SDK_Player_Widget_HPP
#define UE4SS_SDK_Player_Widget_HPP

class UPlayer_Widget_C : public UPlayerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05C8 (size: 0x8)
    class UWidgetAnimation* Anim_MarvinFadeOut;                                       // 0x05D0 (size: 0x8)
    class UWidgetAnimation* Anim_MarvinFadeIn;                                        // 0x05D8 (size: 0x8)
    class UWidgetAnimation* Anim_OxygenWarning;                                       // 0x05E0 (size: 0x8)
    class UWidgetAnimation* Anim_FlashDamage;                                         // 0x05E8 (size: 0x8)
    class UVerticalBox* Box_HealthManaBars;                                           // 0x05F0 (size: 0x8)
    class UCanvasPanel* Canvas_Interaction;                                           // 0x05F8 (size: 0x8)
    class UProgressBar* CastingBar;                                                   // 0x0600 (size: 0x8)
    class UTextBlock* HealthNumberLabel;                                              // 0x0608 (size: 0x8)
    class UHorizontalBox* HorizontalBox_217;                                          // 0x0610 (size: 0x8)
    class UImage* Image_Outline_2;                                                    // 0x0618 (size: 0x8)
    class UImage* Image_Shadow_2;                                                     // 0x0620 (size: 0x8)
    class UImage* Image_Vigniette;                                                    // 0x0628 (size: 0x8)
    class UOverlay* Overlay;                                                          // 0x0630 (size: 0x8)
    class UCommonActivatableWidgetStack* Stack_Map;                                   // 0x0638 (size: 0x8)
    class UTextBlock* Text_Marvin;                                                    // 0x0640 (size: 0x8)
    class UVerticalBox* VerticalBox_OxygenAndcasting;                                 // 0x0648 (size: 0x8)
    class UW_DemoTimer_C* W_DemoTimer;                                                // 0x0650 (size: 0x8)
    bool DoubleTapLShoulderButton;                                                    // 0x0658 (size: 0x1)
    FPlayer_Widget_CPW_OnClickRelease PW_OnClickRelease;                              // 0x0660 (size: 0x10)
    void PW_OnClickRelease(int32 ItemPos);
    bool IsLooting;                                                                   // 0x0670 (size: 0x1)
    class UW_PauseMenu_C* PauseMenu;                                                  // 0x0678 (size: 0x8)
    bool IsCasting;                                                                   // 0x0680 (size: 0x1)
    float Max Casting Time;                                                           // 0x0684 (size: 0x4)
    bool Hide Basic HUD Elements Requested;                                           // 0x0688 (size: 0x1)
    TSubclassOf<class UCommonActivatableWidget> PauseWidget;                          // 0x0690 (size: 0x8)
    TSubclassOf<class UCommonActivatableWidget> GameOverWidget;                       // 0x0698 (size: 0x8)
    FPlayer_Widget_CNewEventDispatcher NewEventDispatcher;                            // 0x06A0 (size: 0x10)
    void NewEventDispatcher();
    bool DemoMode;                                                                    // 0x06B0 (size: 0x1)
    FTimerHandle MarvinTimer;                                                         // 0x06B8 (size: 0x8)

    void TogglePauseMenu();
    void OnGameSaved();
    void OnPlayerDead_Implementation();
    void Show Save Tooltip();
    void ShowCannotSaveTooltip();
    void EndMarvinText();
    void UpdateInteractionWidgetPosition(FVector2D NewPos);
    void ToggleOxygenWarningAnimation(bool ShouldPlayWarningAnim);
    void EndCastSpell();
    void BeginCastSpell(float Max Casting Time);
    void Toggle Pause Menu();
    void UpdateOxygenWidgetVisibility();
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void InpActEvt_IA_Pause_Toggle_K2Node_EnhancedInputActionEvent_7(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void OnLoaded_9ECC0734499DB0E05E84159E09A9C394(UClass* Loaded);
    void InpActEvt_IA_OpenStatsUI_K2Node_EnhancedInputActionEvent_6(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_OpenInventoryUI_K2Node_EnhancedInputActionEvent_5(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_OpenQuestUI_K2Node_EnhancedInputActionEvent_4(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_OpenGlossaryUI_K2Node_EnhancedInputActionEvent_3(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_OpenMap_K2Node_EnhancedInputActionEvent_2(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_OpenInventoryAndMap_Xbox_K2Node_EnhancedInputActionEvent_1(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_OpenInventoryAndMap_Xbox_K2Node_EnhancedInputActionEvent_0(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void BP_OnCastSpellBegin(float maxCastingTime);
    void BP_OnCastSpellEnd();
    void BP_OnCastSpellCancelled();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BP_OnGameplayTagCountChanged(FGameplayTag GameplayTag, int32 Count);
    void BP_OnAbilitySystemComponentBecameAvailable();
    void OxygenBarWarningChanged(bool Started);
    void OnInitialized();
    void BndEvt__Player_Widget_W_DemoTimer_K2Node_ComponentBoundEvent_0_TimerExpiredEventBP__DelegateSignature();
    void BP_MarvinCompleted();
    void OnCannotSave_Event();
    void m_OnGameSaved_Event();
    void BP_Reset();
    void BP_GoBackToMainMenu(bool bRandomBackground);
    void ExecuteUbergraph_Player_Widget(int32 EntryPoint);
    void NewEventDispatcher__DelegateSignature();
    void PW_OnClickRelease__DelegateSignature(int32 ItemPos);
}; // Size: 0x6C0

#endif
