#ifndef UE4SS_SDK_W_Crafting_Main_HPP
#define UE4SS_SDK_W_Crafting_Main_HPP

class UW_Crafting_Main_C : public UCraftingMain
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UWidgetAnimation* Anim_Open;                                                // 0x0488 (size: 0x8)
    class UW_GenericButton_C* Button_Close;                                           // 0x0490 (size: 0x8)
    class UW_GenericButton_C* Button_Craft;                                           // 0x0498 (size: 0x8)
    class UW_GenericButton_C* Button_Section;                                         // 0x04A0 (size: 0x8)
    class UCommonActivatableWidgetStack* CommonActivatableWidgetStack_PopUps;         // 0x04A8 (size: 0x8)

    void SwitchProgressBarVisuals(FGameplayTag GameplayTag);
    void Reset();
    void Is Current Recipe Craftable(bool& Is Craftable);
    void Hide Preogress Bar();
    void Show Progress Bar(FGameplayTag NewParam);
    void Finished_8DF722B541E3FA5001ACD3B1392AF06A();
    void Construct();
    void BndEvt__W_Crafting_Main_Button_Close_K2Node_ComponentBoundEvent_3_ClickedEventBP__DelegateSignature();
    void BndEvt__W_Crafting_Main_W_GenericButton_K2Node_ComponentBoundEvent_4_ClickedEventBP__DelegateSignature();
    void OnCurrentRecipeCraftableChanged(bool IsItemCraftable);
    void OnSimpleCraftingActionCompleted();
    void ExecuteUbergraph_W_Crafting_Main(int32 EntryPoint);
}; // Size: 0x4B0

#endif
