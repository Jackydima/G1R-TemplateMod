#ifndef UE4SS_SDK_W_Hotbar_Controlled_HPP
#define UE4SS_SDK_W_Hotbar_Controlled_HPP

class UW_Hotbar_Controlled_C : public UQuickSlotControlledHotbar
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0558 (size: 0x8)
    class UWidgetAnimation* Anim_Show;                                                // 0x0560 (size: 0x8)
    class UCommonButtonBase_C* CommonButtonBase;                                      // 0x0568 (size: 0x8)
    class UHorizontalBox* HorizontalBox_QuickSlots;                                   // 0x0570 (size: 0x8)
    class UImage* Image_35;                                                           // 0x0578 (size: 0x8)
    class UW_Transformed_Slot_C* Slot_Untransform;                                    // 0x0580 (size: 0x8)
    FW_Hotbar_Controlled_COnClickRelease_Local OnClickRelease_Local;                  // 0x0588 (size: 0x10)
    void OnClickRelease_Local(int32 ItemPos, int32 ItemPosBar, EInventoryTypes ItemType);
    FW_Hotbar_Controlled_COnClickRelease OnClickRelease;                              // 0x0598 (size: 0x10)
    void OnClickRelease(int32 ItemHotbarPos);
    FTimerHandle HideAnimTimerHandle;                                                 // 0x05A8 (size: 0x8)
    class UAbilityTask_WaitDelay_Extended* NewVar;                                    // 0x05B0 (size: 0x8)
    class UTexture2D* AttackStanceTexture;                                            // 0x05B8 (size: 0x8)
    class UTexture2D* WalkStanceTexture;                                              // 0x05C0 (size: 0x8)

    void ShowHotbar();
    void PlaySlotEquipAnimation(int32 Pos);
    void InitializeSlotsState();
    void Finished_5EC2010D4F03B1D910CAB6B1FEB0FB71();
    void HotkeyPressedBP(int32 SlotId);
    void CloseWidget();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Initialization_BP();
    void ExecuteUbergraph_W_Hotbar_Controlled(int32 EntryPoint);
    void OnClickRelease__DelegateSignature(int32 ItemHotbarPos);
    void OnClickRelease_Local__DelegateSignature(int32 ItemPos, int32 ItemPosBar, EInventoryTypes ItemType);
}; // Size: 0x5C8

#endif
