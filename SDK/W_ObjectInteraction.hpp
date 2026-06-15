#ifndef UE4SS_SDK_W_ObjectInteraction_HPP
#define UE4SS_SDK_W_ObjectInteraction_HPP

class UW_ObjectInteraction_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Action1;                                      // 0x02E8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Action2;                                      // 0x02F0 (size: 0x8)
    class UImage* Image_Icon_1;                                                       // 0x02F8 (size: 0x8)
    class UImage* Image_Icon_2;                                                       // 0x0300 (size: 0x8)
    class UImage* Image_Outline_1;                                                    // 0x0308 (size: 0x8)
    class UImage* Image_Outline_2;                                                    // 0x0310 (size: 0x8)
    class USizeBox* SizeBox_Icon_Action1;                                             // 0x0318 (size: 0x8)
    class USizeBox* SizeBox_Icon_Action2;                                             // 0x0320 (size: 0x8)
    class UTextBlock* Text_CharacterName;                                             // 0x0328 (size: 0x8)
    class UW_InteractionKey_C* W_InteractionKey1;                                     // 0x0330 (size: 0x8)
    class UW_InteractionKey_C* W_InteractionKey2;                                     // 0x0338 (size: 0x8)
    TMap<class FGameplayTag, class UTexture2D*> ActionTagToSprite;                    // 0x0340 (size: 0x50)
    FGameplayTag MainTag;                                                             // 0x0390 (size: 0x8)
    FGameplayTag SecondTag;                                                           // 0x0398 (size: 0x8)
    bool IsInNPCHealthWidget;                                                         // 0x03A0 (size: 0x1)
    bool Force Collapse Second Interaction;                                           // 0x03A1 (size: 0x1)
    TSet<FGameplayTag> ForceShowTagNames;                                             // 0x03A8 (size: 0x50)

    void Set Interaction(FGameplayTag Interaction Tag, FGameplayTag Fail Tag, class UPanelWidget* Layout, class UPanelWidget* Icon Layout, class UImage* Icon Image, class UW_InteractionKey_C* Interaction Key);
    void CheckOverwriteInteractName(FGameplayTag MainInteract, FGameplayTag SecondaryInteract, FGameplayTag FailMainInteract, FGameplayTag FailSecondaryInteract);
    void SetIsInteractionACrime(bool IsACrime);
    void ForceHideSecondaryInteraction(bool ForceCollapseSecondInteraction);
    void UpdateMainInteractionsFunc(FGameplayTag MainInteract, FGameplayTag SecondaryInteract, FGameplayTag FailMainInteract, FGameplayTag FailSecondaryInteract);
    void UpdateMainInteractions(const FGameplayTag MainInteract, const FGameplayTag SecondInteract, const FGameplayTag FailMainInteract, const FGameplayTag FailSecondInteract, bool IsACrime);
    void DisplayName(const FText& Name);
    void ExecuteUbergraph_W_ObjectInteraction(int32 EntryPoint);
}; // Size: 0x3F8

#endif
