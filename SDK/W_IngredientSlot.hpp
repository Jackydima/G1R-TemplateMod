#ifndef UE4SS_SDK_W_IngredientSlot_HPP
#define UE4SS_SDK_W_IngredientSlot_HPP

class UW_IngredientSlot_C : public UViewItemWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWidgetAnimation* Anim_Hover;                                               // 0x0428 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0430 (size: 0x8)
    class UOverlay* Overlay_Hovered;                                                  // 0x0438 (size: 0x8)
    class UTextBlock* Text_ItemsAvailable;                                            // 0x0440 (size: 0x8)
    class UTextBlock* Text_ItemsRequired;                                             // 0x0448 (size: 0x8)
    FLinearColor Insufficient Color;                                                  // 0x0450 (size: 0x10)
    bool Is Selected;                                                                 // 0x0460 (size: 0x1)
    bool Is Animation Played;                                                         // 0x0461 (size: 0x1)
    bool Has Controller Focus;                                                        // 0x0462 (size: 0x1)
    int32 Available Amount;                                                           // 0x0464 (size: 0x4)
    int32 Crafting Amount;                                                            // 0x0468 (size: 0x4)
    int32 Required Amount;                                                            // 0x046C (size: 0x4)

    void Play Animation(bool Forward);
    void Set Controller Focus(bool Has Focus);
    void Set Available Amount(int32 New Value);
    void Set Required Amount(int32 New Amount);
    void Set Crafting Amount(int32 New Amount);
    void Update Visuals();
    void Update List Item(class UCraftingIngredientUIData* Ingredient UI Data);
    void Reset Animations();
    void Reset();
    void OnLoaded_1E7E784D4AF4666D3A8DF08B83DA3368(class UObject* Loaded);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void OnHovered();
    void OnUnhovered();
    void Construct();
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnInputTypeChanged(ECommonInputType _InputType);
    void OnAvailableAmountChanged(int32 _NewAmount);
    void BP_OnEntryReleased();
    void OnCraftingAmountChanged(int32 _NewAmount);
    void ExecuteUbergraph_W_IngredientSlot(int32 EntryPoint);
}; // Size: 0x470

#endif
