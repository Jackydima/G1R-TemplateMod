#ifndef UE4SS_SDK_W_Hotbar_Transformed_HPP
#define UE4SS_SDK_W_Hotbar_Transformed_HPP

class UW_Hotbar_Transformed_C : public UQuickSlotTransformedHotbar
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0558 (size: 0x8)
    class UWidgetAnimation* Anim_Show;                                                // 0x0560 (size: 0x8)
    class UCommonButtonBase_C* CommonButtonBase;                                      // 0x0568 (size: 0x8)
    class UHorizontalBox* HorizontalBox_QuickSlots;                                   // 0x0570 (size: 0x8)
    class UW_Transformed_Slot_C* Slot_Melee;                                          // 0x0578 (size: 0x8)
    class UW_Transformed_Slot_C* Slot_Untransform;                                    // 0x0580 (size: 0x8)
    FW_Hotbar_Transformed_COnClickRelease_Local OnClickRelease_Local;                 // 0x0588 (size: 0x10)
    void OnClickRelease_Local(int32 ItemPos, int32 ItemPosBar, EInventoryTypes ItemType);
    FW_Hotbar_Transformed_COnClickRelease OnClickRelease;                             // 0x0598 (size: 0x10)
    void OnClickRelease(int32 ItemHotbarPos);
    FTimerHandle HideAnimTimerHandle;                                                 // 0x05A8 (size: 0x8)
    class UAbilityTask_WaitDelay_Extended* NewVar;                                    // 0x05B0 (size: 0x8)
    class UTexture2D* AttackStanceTexture;                                            // 0x05B8 (size: 0x8)
    class UTexture2D* WalkStanceTexture;                                              // 0x05C0 (size: 0x8)

    void IsAttackModeHidden(bool IsHidden);
    void BP_OnGameplayTagCountChanged(FGameplayTag GameplayTag, int32 Count);
    void UpdateSlotsState();
    void ShowHotbar();
    void PlaySlotEquipAnimation(int32 Pos);
    void InitializeSlotsState();
    void Finished_0407C91F48F8B78582A62C87BB819DFF();
    void HotkeyPressedBP(int32 SlotId);
    void CloseWidget();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Initialization_BP();
    void ExecuteUbergraph_W_Hotbar_Transformed(int32 EntryPoint);
    void OnClickRelease__DelegateSignature(int32 ItemHotbarPos);
    void OnClickRelease_Local__DelegateSignature(int32 ItemPos, int32 ItemPosBar, EInventoryTypes ItemType);
}; // Size: 0x5C8

#endif
