#ifndef UE4SS_SDK_W_LockPickUI_HPP
#define UE4SS_SDK_W_LockPickUI_HPP

class UW_LockPickUI_C : public ULockPickUIWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C8 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x04D0 (size: 0x8)
    class UW_GenericButton_C* Button_MoveDown;                                        // 0x04D8 (size: 0x8)
    class UW_GenericButton_C* Button_MoveLeft;                                        // 0x04E0 (size: 0x8)
    class UW_GenericButton_C* Button_MoveRight;                                       // 0x04E8 (size: 0x8)
    class UW_GenericButton_C* Button_MoveUp;                                          // 0x04F0 (size: 0x8)
    class UImage* difficulty_1;                                                       // 0x04F8 (size: 0x8)
    class UImage* difficulty_2;                                                       // 0x0500 (size: 0x8)
    class UImage* difficulty_3;                                                       // 0x0508 (size: 0x8)
    class UImage* difficulty_4;                                                       // 0x0510 (size: 0x8)
    class UHorizontalBox* HorizontalBox_46;                                           // 0x0518 (size: 0x8)
    class UHorizontalBox* HorizontalBox_99;                                           // 0x0520 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Difficulty;                                   // 0x0528 (size: 0x8)
    class UImage* Image_Line;                                                         // 0x0530 (size: 0x8)
    class UImage* Image_Overlay;                                                      // 0x0538 (size: 0x8)
    class UImage* RenderTarget;                                                       // 0x0540 (size: 0x8)
    class UTextBlock* TextBlock_CategoryName;                                         // 0x0548 (size: 0x8)
    class UTextBlock* TextBlock_LockpickRequired;                                     // 0x0550 (size: 0x8)
    class UW_InputHint_C* W_InputHint_Cancel;                                         // 0x0558 (size: 0x8)
    class UW_InputHint_C* W_InputHint_Reset;                                          // 0x0560 (size: 0x8)
    class UW_Inventory_Slot_C* W_Inventory_Slot;                                      // 0x0568 (size: 0x8)
    bool Is Fading Out;                                                               // 0x0570 (size: 0x1)
    class UInventorySlotData* SlotData;                                               // 0x0578 (size: 0x8)
    bool IsMissingLockpickingSkills;                                                  // 0x0580 (size: 0x1)
    class UImage* NewVar;                                                             // 0x0588 (size: 0x8)

    void SetLockDifficulty();
    FText Get_TextBlock_LockpickRequired_Text();
    void HandleInventoryItemConsumed();
    FText Get_TextBlock_CategoryName_Text();
    void SetLockpickToolRequiredMessageVisible(bool Invisible);
    void Finished_3A8171BD4D79EEBDA244F3A4DEFAD520();
    void Construct();
    void FadeOutAndRemoveFromParent();
    void BndEvt__W_LockPickUI_W_InputHint_Cancel_K2Node_ComponentBoundEvent_0_ActionEventBP__DelegateSignature();
    void BndEvt__W_LockPickUI_Button_XAxis_1_K2Node_ComponentBoundEvent_1_ClickedEventBP__DelegateSignature();
    void BndEvt__W_LockPickUI_Button_MoveRight_K2Node_ComponentBoundEvent_2_ClickedEventBP__DelegateSignature();
    void BndEvt__W_LockPickUI_Button_MoveUp_K2Node_ComponentBoundEvent_3_ClickedEventBP__DelegateSignature();
    void BndEvt__W_LockPickUI_Button_MoveDown_K2Node_ComponentBoundEvent_4_ClickedEventBP__DelegateSignature();
    void OnInventoryItemConsumed();
    void BndEvt__W_LockPickUI_W_InputHint_Reset_K2Node_ComponentBoundEvent_5_ActionEventBP__DelegateSignature();
    void ExecuteUbergraph_W_LockPickUI(int32 EntryPoint);
}; // Size: 0x590

#endif
