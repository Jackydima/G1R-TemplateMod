#ifndef UE4SS_SDK_W_Inventory_ItemTooltip_HPP
#define UE4SS_SDK_W_Inventory_ItemTooltip_HPP

class UW_Inventory_ItemTooltip_C : public UInventoryItemTooltip
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_FlavourText;                            // 0x0380 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_ItemType;                               // 0x0388 (size: 0x8)
    class UAlkRichTextBlock* AlkRichTextBlock_StolenText;                             // 0x0390 (size: 0x8)
    class UBorder* Border_Equipped;                                                   // 0x0398 (size: 0x8)
    class UBorder* Border_Requirements;                                               // 0x03A0 (size: 0x8)
    class UBorder* Border_TooltipOutline;                                             // 0x03A8 (size: 0x8)
    class UW_Hotkey_C* Hotkey_Equipped;                                               // 0x03B0 (size: 0x8)
    class UImage* Image_BlackOverlay;                                                 // 0x03B8 (size: 0x8)
    class UImage* Image_Separator;                                                    // 0x03C0 (size: 0x8)
    class UImage* Image_Separator_1;                                                  // 0x03C8 (size: 0x8)
    class UImage* Image_TitleLine;                                                    // 0x03D0 (size: 0x8)
    class UW_InputHint_C* m_Input_Purchase;                                           // 0x03D8 (size: 0x8)
    class UTextBlock* Text_ItemName;                                                  // 0x03E0 (size: 0x8)
    class UTextBlock* Text_Title;                                                     // 0x03E8 (size: 0x8)
    class UTextBlock* TextBlock_ItemDescription;                                      // 0x03F0 (size: 0x8)
    class UVerticalBox* VerticalBox_EquippedStatsModified;                            // 0x03F8 (size: 0x8)
    class UVerticalBox* VerticalBox_InventoryInputs;                                  // 0x0400 (size: 0x8)
    class UVerticalBox* VerticalBox_ItemDescriptions;                                 // 0x0408 (size: 0x8)
    class UVerticalBox* VerticalBox_Requirements;                                     // 0x0410 (size: 0x8)
    class UVerticalBox* VerticalBox_SelectedStatsModified;                            // 0x0418 (size: 0x8)
    class UVerticalBox* VerticalBox_StatsRequired;                                    // 0x0420 (size: 0x8)
    class UW_ItemWeight_C* W_ItemWeight;                                              // 0x0428 (size: 0x8)
    ESlateVisibility ControlsVisibility;                                              // 0x0430 (size: 0x1)
    FW_Inventory_ItemTooltip_COnInputActionEquip OnInputActionEquip;                  // 0x0438 (size: 0x10)
    void OnInputActionEquip();
    FW_Inventory_ItemTooltip_COnInputActionDrop OnInputActionDrop;                    // 0x0448 (size: 0x10)
    void OnInputActionDrop(int32 Index);
    FW_Inventory_ItemTooltip_COnInputActionUnequip OnInputActionUnequip;              // 0x0458 (size: 0x10)
    void OnInputActionUnequip();
    FW_Inventory_ItemTooltip_COnInputActionUse OnInputActionUse;                      // 0x0468 (size: 0x10)
    void OnInputActionUse();
    ESlateVisibility EquippedTextVisibility;                                          // 0x0478 (size: 0x1)
    FW_Inventory_ItemTooltip_COnInputToggleWearableComparisonTooltip OnInputToggleWearableComparisonTooltip; // 0x0480 (size: 0x10)
    void OnInputToggleWearableComparisonTooltip(bool bStart);
    FW_Inventory_ItemTooltip_COnInputActionPurchase OnInputActionPurchase;            // 0x0490 (size: 0x10)
    void OnInputActionPurchase();
    TArray<FGameplayAttribute> ArmorAttributesToHide;                                 // 0x04A0 (size: 0x10)

    void UpdateTooltipInfoRecipe(FTooltipInfoRecipe Info Recipe);
    void UpdateVisualsForNoInfoTooltip();
    void IsStatHidden(FGameplayAttribute GameplayAttribute, bool& IsHidden);
    void SetRuneTooltipSlots(FRuneStats RuneStats, FGameplayTag ItemTypeTag, FText ItemDescription);
    void GetFromStatArray(FGameplayTag Stat, TArray<FSelectedItemStats>& StatArray, double& Value, bool& Found);
    void FindInStatArray(FGameplayTag Stat, TArray<FSelectedItemStats>& StatArray, int32& Index);
    void Is Stat Applied Overtime(FGameplayTag Stat, TArray<FSelectedItemStats>& StatArray, bool& Over time, double& OverTimeDuration);
    void Override Purchase Ratio(double Ratio);
    void AddNewAndChangedArmorStats(const TMap<FGameplayAttribute, float>& NewAttributes, const TMap<FGameplayAttribute, float>& OldAttributes, bool IsEquippied);
    void AddLostArmorStats(const TMap<FGameplayAttribute, float>& NewAttributes, const TMap<FGameplayAttribute, float>& OldAttributes, bool IsEquipped);
    void AddGameplayAttributes(FItemTooltipInfo NewParam);
    void AddStatFromAttribute(class UPanelWidget* Parent, FGameplayAttribute GameplayAttribute, double Value, double Value Equipped, bool IsEqupipped, bool LostItem);
    void CalculateItemStatsComparison(FItemTooltipInfo TooltipInfo);
    void CheckInputWearableTooltipButtonViaTags(FGameplayTag Item Type, FGameplayTagContainer Item Specs);
    void CheckInputEquippableViaTags(FGameplayTag Item Type, FGameplayTagContainer Item Specs, bool CanBeEquipped, bool IsPurchaseable, bool CanBeAfforded);
    void CheckInputUseViaTags(FGameplayTag Item Type, FGameplayTagContainer Item Specs);
    void CheckInputDropViaTags(FGameplayTag Item Type, FGameplayTagContainer Item Specs);
    void CheckInputActionsViaTags(FGameplayTag Item Type, FGameplayTagContainer Item Specs, bool CanBeEquipped, bool IsPurchaseable, bool CanBeAfforded);
    void SetControlsVisibility(int32 HotkeyNumber, bool IsEquipped);
    void Override Drop Ratio(double Ratio);
    void SetRequirementsVisuals(bool RequirementsMet);
    void UpdateStats(FItemTooltipInfo NewStats);
    void Update Tooltip(FItemTooltipInfo NewInfo, int32 NumberOfItems, bool Hide);
    void GetItemStatName(FGameplayTag GameplayTag, FText& Name);
    void PreConstruct(bool IsDesignTime);
    void SendInputActionUnequip();
    void SendInputActionDrop();
    void BndEvt__W_Inventory_ItemTooltip_m_Input_Equip_K2Node_ComponentBoundEvent_0_ActionEventBP__DelegateSignature();
    void BndEvt__W_Inventory_ItemTooltip_m_Input_Unequip_K2Node_ComponentBoundEvent_2_ActionEventBP__DelegateSignature();
    void UpdateTooltip(FItemTooltipInfo _ItemTooltipInfo, int32 _NumberOfItems, bool _Hide);
    void SendActionToggleWearableComparisonTooltip(bool _bStart);
    void BndEvt__W_Inventory_ItemTooltip_m_Input_Purchase_K2Node_ComponentBoundEvent_1_ActionEventBP__DelegateSignature();
    void SendInputActionUtilize();
    void ExecuteUbergraph_W_Inventory_ItemTooltip(int32 EntryPoint);
    void OnInputActionPurchase__DelegateSignature();
    void OnInputToggleWearableComparisonTooltip__DelegateSignature(bool bStart);
    void OnInputActionUse__DelegateSignature();
    void OnInputActionUnequip__DelegateSignature();
    void OnInputActionDrop__DelegateSignature(int32 Index);
    void OnInputActionEquip__DelegateSignature();
}; // Size: 0x4B0

#endif
