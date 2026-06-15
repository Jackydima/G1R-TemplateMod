#ifndef UE4SS_SDK_W_IngredientList_HPP
#define UE4SS_SDK_W_IngredientList_HPP

class UW_IngredientList_C : public UAlkUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UAlkListView* AlkListView_Content;                                          // 0x0340 (size: 0x8)
    class UW_InputHint_C* InputHint_Left;                                             // 0x0348 (size: 0x8)
    class UW_InputHint_C* InputHint_Right;                                            // 0x0350 (size: 0x8)
    class USizeBox* SizeBox_List;                                                     // 0x0358 (size: 0x8)
    FW_IngredientList_COn Item Selection Changed On Item Selection Changed;           // 0x0360 (size: 0x10)
    void On Item Selection Changed(int32 Index, class UCraftingIngredientUIData* Item, bool Is Selected);
    FW_IngredientList_COn Item Is Hovered Changed On Item Is Hovered Changed;         // 0x0370 (size: 0x10)
    void On Item Is Hovered Changed(int32 Index, class UCraftingIngredientUIData* Item, bool Is Hovered);
    int32 Max Width in Items;                                                         // 0x0380 (size: 0x4)
    int32 Preview Items;                                                              // 0x0384 (size: 0x4)
    TSoftObjectPtr<UFMODEvent> Clicked Sound;                                         // 0x0388 (size: 0x28)
    TSoftObjectPtr<UFMODEvent> Hovered Sound;                                         // 0x03B0 (size: 0x28)
    FW_IngredientList_COn Interacted On Interacted;                                   // 0x03D8 (size: 0x10)
    void On Interacted();

    void SetControlsVisibility();
    void Get Selected Index(int32& Index);
    void Set Controller Focus(bool Has Focus);
    void Update Scroll Offset(int32 Index);
    void Set Crafting Amount(int32 New Amount);
    void Set Selected Index(int32 Index);
    void Set Data(TArray<class UCraftingIngredientUIData*>& UI Data);
    void BndEvt__W_IngredientList_InputHint_Right_K2Node_ComponentBoundEvent_1_ActionEventBP__DelegateSignature();
    void BndEvt__W_IngredientList_InputHint_Left_K2Node_ComponentBoundEvent_4_ActionEventBP__DelegateSignature();
    void BndEvt__W_IngredientList_InputHint_Right_K2Node_ComponentBoundEvent_5_ActionEventBP__DelegateSignature();
    void BndEvt__W_IngredientList_InputHint_Left_K2Node_ComponentBoundEvent_0_ActionEventBP__DelegateSignature();
    void BndEvt__W_IngredientList_AlkListView_Content_K2Node_ComponentBoundEvent_7_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
    void BndEvt__W_IngredientList_AlkListView_Content_K2Node_ComponentBoundEvent_8_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
    void BndEvt__W_IngredientList_AlkListView_Content_K2Node_ComponentBoundEvent_9_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
    void ExecuteUbergraph_W_IngredientList(int32 EntryPoint);
    void On Interacted__DelegateSignature();
    void On Item Is Hovered Changed__DelegateSignature(int32 Index, class UCraftingIngredientUIData* Item, bool Is Hovered);
    void On Item Selection Changed__DelegateSignature(int32 Index, class UCraftingIngredientUIData* Item, bool Is Selected);
}; // Size: 0x3E8

#endif
