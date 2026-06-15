#ifndef UE4SS_SDK_W_Crafting_Menu_HPP
#define UE4SS_SDK_W_Crafting_Menu_HPP

class UW_Crafting_Menu_C : public UCraftingMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D0 (size: 0x8)
    class UBorder* Border_MaterialCheckbox;                                           // 0x03D8 (size: 0x8)
    class UW_CheckBox_C* CheckBox_HaveMaterial;                                       // 0x03E0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_ProductTooltips;                              // 0x03E8 (size: 0x8)
    class UImage* Image_71;                                                           // 0x03F0 (size: 0x8)
    class UW_IngredientList_C* IngredientList;                                        // 0x03F8 (size: 0x8)
    class UW_Inventory_ItemTooltip_C* IngredientTooltip;                              // 0x0400 (size: 0x8)
    class UOverlay* Overlay_IngredientList;                                           // 0x0408 (size: 0x8)
    class UW_Inventory_ItemTooltip_C* ProductTooltip;                                 // 0x0410 (size: 0x8)
    class UW_Slider_C* Slider_CraftingQuantity;                                       // 0x0418 (size: 0x8)
    class UTextBlock* TextBlock_Title;                                                // 0x0420 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x0428 (size: 0x8)
    FW_Crafting_Menu_CCallItemClicked CallItemClicked;                                // 0x0430 (size: 0x10)
    void CallItemClicked();
    int32 Current Section;                                                            // 0x0440 (size: 0x4)
    int32 Ingredient Index Override;                                                  // 0x0444 (size: 0x4)
    class UCraftingRecipeUIData* Recipe Override;                                     // 0x0448 (size: 0x8)
    TArray<class UW_Inventory_ItemTooltip_C*> Product Tooltips;                       // 0x0450 (size: 0x10)
    FW_Crafting_Menu_CCraftingStationTypeChanged CraftingStationTypeChanged;          // 0x0460 (size: 0x10)
    void CraftingStationTypeChanged(FGameplayTag GameplayTag);

    void Set Current Section(int32 Section);
    void Update Tooltip Visibilities();
    void Update Ingredient Tooltip();
    void Update Product Tooltip();
    void Update Ingredient List();
    void Update Slider(bool Reset Value);
    void Update Recipe List();
    void Get Recipe UI Data(class UCraftingRecipeUIData*& NewParam);
    void Set Specific Visuals();
    void BndEvt__W_Crafting_Menu_DiscreteItemsView_Recipes_K2Node_ComponentBoundEvent_7_SelectionChangedEventBP__DelegateSignature(int32 _OldIndex, class UObject* _OldItem, int32 _NewIndex, class UObject* _NewItem);
    void BndEvt__W_Crafting_Menu_DiscreteItemsView_Recipes_K2Node_ComponentBoundEvent_0_ItemIsHoveredChangedEventBP__DelegateSignature(int32 _Index, class UObject* _Item, bool _IsHovered);
    void OnCraftingStationTypeChanged(const FGameplayTag& _GameplayTag);
    void BndEvt__W_Crafting_Menu_CheckBox_HaveMaterial_K2Node_ComponentBoundEvent_4_OnCheckedStateChangedEventBP__DelegateSignature(ECheckBoxState OldCheckedState, ECheckBoxState NewCheckedState);
    void OnCraftableAmountsChanged();
    void OnInputTypeChanged(ECommonInputType _InputType);
    void BndEvt__W_Crafting_Menu_IngredientList_K2Node_ComponentBoundEvent_5_On Item Selection Changed__DelegateSignature(int32 Index, class UCraftingIngredientUIData* Item, bool Is Selected);
    void BndEvt__W_Crafting_Menu_IngredientList_K2Node_ComponentBoundEvent_6_On Item Is Hovered Changed__DelegateSignature(int32 Index, class UCraftingIngredientUIData* Item, bool Is Hovered);
    void OnRecipesUpdated();
    void BndEvt__W_Crafting_Menu_IngredientList_K2Node_ComponentBoundEvent_3_On Interacted__DelegateSignature();
    void BndEvt__W_Crafting_Menu_DiscreteItemsView_Recipes_K2Node_ComponentBoundEvent_1_SimpleDelegate__DelegateSignature();
    void OnSectionUpTriggered();
    void OnSectionDownTriggered();
    void BndEvt__W_Crafting_Menu_Slider_CraftingQuantity_K2Node_ComponentBoundEvent_2_OnValueChangedEventBP__DelegateSignature(int32 OldValue, int32 NewValue);
    void Construct();
    void ExecuteUbergraph_W_Crafting_Menu(int32 EntryPoint);
    void CraftingStationTypeChanged__DelegateSignature(FGameplayTag GameplayTag);
    void CallItemClicked__DelegateSignature();
}; // Size: 0x470

#endif
