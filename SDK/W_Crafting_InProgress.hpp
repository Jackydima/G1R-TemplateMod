#ifndef UE4SS_SDK_W_Crafting_InProgress_HPP
#define UE4SS_SDK_W_Crafting_InProgress_HPP

class UW_Crafting_InProgress_C : public UCraftingInProgress
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    class UWidgetAnimation* Anim_ThirdSection;                                        // 0x0468 (size: 0x8)
    class UWidgetAnimation* Anim_SecondSection;                                       // 0x0470 (size: 0x8)
    class UWidgetAnimation* Anim_FirstSection;                                        // 0x0478 (size: 0x8)
    class UWidgetAnimation* Anim_UpdateInstruction;                                   // 0x0480 (size: 0x8)
    class UWidgetAnimation* Anim_Show;                                                // 0x0488 (size: 0x8)
    class UImage* Image;                                                              // 0x0490 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0498 (size: 0x8)
    class UImage* Image_68;                                                           // 0x04A0 (size: 0x8)
    class UImage* Image_73;                                                           // 0x04A8 (size: 0x8)
    class UImage* Image_Line;                                                         // 0x04B0 (size: 0x8)
    class UW_InputHint_C* InputHint_Scrap;                                            // 0x04B8 (size: 0x8)
    class USafeZone* SafeZone_68;                                                     // 0x04C0 (size: 0x8)
    class UW_Crafting_InProgress_Section_C* Section1_Forge;                           // 0x04C8 (size: 0x8)
    class UW_Crafting_InProgress_Section_C* Section2_Anvil;                           // 0x04D0 (size: 0x8)
    class UW_Crafting_InProgress_Section_C* Section3_Barrel;                          // 0x04D8 (size: 0x8)
    class UTextBlock* TextBlock_Instructions;                                         // 0x04E0 (size: 0x8)
    class UTextBlock* TextBlock_RecipeName;                                           // 0x04E8 (size: 0x8)

    void Update Input Hint(EUICraftingStates State);
    void Update Sections(EUICraftingStates State);
    void Update Instructions(EUICraftingStates State);
    void Finished_6B3B6D7D46B67BCB5D035BA3F5E66F15();
    void Construct();
    void BndEvt__W_Crafting_InProgress_W_InputHint_K2Node_ComponentBoundEvent_0_ActionEventBP__DelegateSignature();
    void UpdateCraftingState(EUICraftingStates UICraftingState);
    void UpdateRecipeName(const FText& RecipeName);
    void OnIntermediateStepAnimationFinished();
    void Hide();
    void BndEvt__W_Crafting_InProgress_Section1_Forge_K2Node_ComponentBoundEvent_1_SectionHasFinished__DelegateSignature();
    void BndEvt__W_Crafting_InProgress_Section2_Anvil_K2Node_ComponentBoundEvent_2_SectionHasFinished__DelegateSignature();
    void BndEvt__W_Crafting_InProgress_Section3_Barrel_K2Node_ComponentBoundEvent_3_SectionHasFinished__DelegateSignature();
    void ExecuteUbergraph_W_Crafting_InProgress(int32 EntryPoint);
}; // Size: 0x4F0

#endif
