#ifndef UE4SS_SDK_W_ArmorCustomization_Slot_HPP
#define UE4SS_SDK_W_ArmorCustomization_Slot_HPP

class UW_ArmorCustomization_Slot_C : public UViewItemWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWidgetAnimation* Anim_Reset;                                               // 0x0428 (size: 0x8)
    class UWidgetAnimation* Anim_Hover_Empty;                                         // 0x0430 (size: 0x8)
    class UWidgetAnimation* Anim_Selected;                                            // 0x0438 (size: 0x8)
    class UWidgetAnimation* Anim_Equip;                                               // 0x0440 (size: 0x8)
    class UWidgetAnimation* Anim_Unlock;                                              // 0x0448 (size: 0x8)
    class UWidgetAnimation* Anim_Hover;                                               // 0x0450 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Cost;                                         // 0x0458 (size: 0x8)
    class UImage* Image_Background_Hovered;                                           // 0x0460 (size: 0x8)
    class UImage* Image_Equipped;                                                     // 0x0468 (size: 0x8)
    class UImage* Image_Frame;                                                        // 0x0470 (size: 0x8)
    class UImage* Image_Frame_Hovered;                                                // 0x0478 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0480 (size: 0x8)
    class UImage* Image_Icon_Unlock;                                                  // 0x0488 (size: 0x8)
    class UImage* Image_Ore;                                                          // 0x0490 (size: 0x8)
    class UImage* Image_Selected;                                                     // 0x0498 (size: 0x8)
    class UOverlay* Overlay_Hovered;                                                  // 0x04A0 (size: 0x8)
    class UOverlay* Overlay_Locked;                                                   // 0x04A8 (size: 0x8)
    class UOverlay* Overlay_SlotContent;                                              // 0x04B0 (size: 0x8)
    class UTextBlock* Text_Value;                                                     // 0x04B8 (size: 0x8)
    class UW_NewIcon_C* W_NewIcon;                                                    // 0x04C0 (size: 0x8)
    FLinearColor Insufficient Color;                                                  // 0x04C8 (size: 0x10)
    bool Is Selected;                                                                 // 0x04D8 (size: 0x1)
    bool Is Animation Played;                                                         // 0x04D9 (size: 0x1)
    bool Has Controller Focus;                                                        // 0x04DA (size: 0x1)
    class UArmorCustomizationSlotData* Data;                                          // 0x04E0 (size: 0x8)
    TSoftObjectPtr<UTexture2D> DefaultFallbackIcon;                                   // 0x04E8 (size: 0x28)
    FW_ArmorCustomization_Slot_CIsSelected IsSelected;                                // 0x0510 (size: 0x10)
    void IsSelected();
    bool ShowSelectedIcon;                                                            // 0x0520 (size: 0x1)
    bool Is Hovered;                                                                  // 0x0521 (size: 0x1)
    bool Is Empty Animation;                                                          // 0x0522 (size: 0x1)

    void ResetItem();
    void ResetAnimation(class UWidgetAnimation* AnimationToReset);
    void PlayHoverAnimation();
    void ResetNotEmptyIconHover();
    void ResetEmptyIconHover();
    void PlayUnlockAnimation();
    void Setup(class UObject* Object);
    void SetSelected(bool bSelected);
    void UpdateSlotVisuals();
    TSoftObjectPtr<UTexture2D> GetIconByData(class UArmorCustomizationSlotData* Data);
    void SetLockedVisuals(bool IsLocked);
    void SetCanAfford(bool CanAfford);
    void Set Controller Focus(bool Has Focus);
    void Reset Animations(bool ForcedEmptyReset);
    void OnLoaded_CB8EBAF74AB7CED73DC1019536C49E7D(class UObject* Loaded);
    void OnHovered();
    void OnUnhovered();
    void Construct();
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnInputTypeChanged(ECommonInputType _InputType);
    void BP_OnEntryReleased();
    void OnListItemObjectSet(class UObject* ListItemObject);
    void OnSyncIcon();
    void OnClicked(EAlkMouseButton _MouseButton);
    void ExecuteUbergraph_W_ArmorCustomization_Slot(int32 EntryPoint);
    void IsSelected__DelegateSignature();
}; // Size: 0x523

#endif
