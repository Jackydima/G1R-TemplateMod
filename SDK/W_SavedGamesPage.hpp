#ifndef UE4SS_SDK_W_SavedGamesPage_HPP
#define UE4SS_SDK_W_SavedGamesPage_HPP

class UW_SavedGamesPage_C : public USavedGamesPageWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0490 (size: 0x8)
    class UAlkVerticalBox* AlkVerticalBox_0;                                          // 0x0498 (size: 0x8)
    class UW_GenericButton_C* Button_Back;                                            // 0x04A0 (size: 0x8)
    class UW_GenericButton_C* Button_Select;                                          // 0x04A8 (size: 0x8)
    class UW_GenericButton_C* ButtonDelete;                                           // 0x04B0 (size: 0x8)
    class UImage* Image_206;                                                          // 0x04B8 (size: 0x8)
    class UCommonActivatableWidgetStack* Stack_Modal;                                 // 0x04C0 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x04C8 (size: 0x8)
    class UW_SaveSlot_C* W_NewSaveSlot;                                               // 0x04D0 (size: 0x8)
    class UW_ProfileSlot_C* W_ProfileSlot;                                            // 0x04D8 (size: 0x8)
    class UW_SavedSlot_Details_C* W_SavedSlot_Details;                                // 0x04E0 (size: 0x8)
    FW_SavedGamesPage_CProfileWasSelected ProfileWasSelected;                         // 0x04E8 (size: 0x10)
    void ProfileWasSelected();
    int32 PrevIndex;                                                                  // 0x04F8 (size: 0x4)
    FText PageTitle;                                                                  // 0x0500 (size: 0x10)
    class UCommonActivatableWidgetStack* Stack_Parent;                                // 0x0510 (size: 0x8)
    FW_SavedGamesPage_COnBackAction OnBackAction;                                     // 0x0518 (size: 0x10)
    void OnBackAction();
    class USavedSlotInfo* EmptySlotInfo;                                              // 0x0528 (size: 0x8)
    bool DemoMode;                                                                    // 0x0530 (size: 0x1)
    bool SaveScreen;                                                                  // 0x0531 (size: 0x1)
    FString OverwriteSlot;                                                            // 0x0538 (size: 0x10)

    void OnSelectionChanged(int32 NewIndex);
    void OnOverwriteCancelSave();
    void UpdateInfoBP();
    void ShowOverwriteWindow();
    void ClearSelectedSlots();
    void OnCancelSaveName();
    void OnOverwriteSave();
    void OnSaveSelected();
    void OnTextDeactivated();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnDeleteSaveAccept();
    void OnSaveNameSuccessfull(FString SavegameName);
    void UpdateSaveGameMode(bool SaveGameMode);
    void DeleteAction();
    void Construct();
    void OnUpdatedSaveGameMode();
    void BndEvt__W_SavedGamesPage_Button_Back_K2Node_ComponentBoundEvent_6_ClickedEventBP__DelegateSignature();
    void BndEvt__W_SavedGamesPage_TileView_Saves_K2Node_ComponentBoundEvent_1_SelectionChangedEventBP__DelegateSignature(int32 _OldIndex, class UObject* _OldItem, int32 _NewIndex, class UObject* _NewItem);
    void WhenSlotSaved();
    void BndEvt__W_ProfileSelectionPage_ButtonDelete_K2Node_ComponentBoundEvent_5_ClickedEventBP__DelegateSignature();
    void BndEvt__W_SavedGamesPage_Button_Select_K2Node_ComponentBoundEvent_3_ClickedEventBP__DelegateSignature();
    void NewSaveSlot();
    void OnInputTypeChanged(ECommonInputType CurrentInput);
    void BndEvt__W_SavedGamesPage_TileView_Saves_K2Node_ComponentBoundEvent_0_ItemClickedEventBP__DelegateSignature(EAlkMouseButton _MouseButton, int32 _Index, class UObject* _Item);
    void ExecuteUbergraph_W_SavedGamesPage(int32 EntryPoint);
    void OnBackAction__DelegateSignature();
    void ProfileWasSelected__DelegateSignature();
}; // Size: 0x548

#endif
