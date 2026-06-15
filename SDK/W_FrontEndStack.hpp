#ifndef UE4SS_SDK_W_FrontEndStack_HPP
#define UE4SS_SDK_W_FrontEndStack_HPP

class UW_FrontEndStack_C : public UFrontEndStackWidget
{
    class UWidgetAnimation* Anim_DarkenBackground;                                    // 0x0448 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0450 (size: 0x8)
    class UImage* Image_Background;                                                   // 0x0458 (size: 0x8)
    bool OpenedFromPauseMenu;                                                         // 0x0460 (size: 0x1)
    EMainMenuState MenuState;                                                         // 0x0461 (size: 0x1)
    TSubclassOf<class UW_MainMenu_C> Main Menu Widget Class;                          // 0x0468 (size: 0x8)
    TSubclassOf<class UW_SavedGamesPage_C> Save Game Widget Class;                    // 0x0470 (size: 0x8)

    bool BP_OnHandleBackAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnMainMenuDeactivated();
    void OnMainMenuActivated();
    void OnSavedGamesPageBackAction();
    void UpdateOpenedFrom(EMainMenuState IsOpenedFromPauseMenu);
    void SetDesaturatedBackground(bool IsMainMenu);
}; // Size: 0x478

#endif
