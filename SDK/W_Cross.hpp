#ifndef UE4SS_SDK_W_Cross_HPP
#define UE4SS_SDK_W_Cross_HPP

class UW_Cross_C : public UCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* Anim_PulseHint;                                           // 0x0438 (size: 0x8)
    class UImage* Image;                                                              // 0x0440 (size: 0x8)
    class UImage* Image_30;                                                           // 0x0448 (size: 0x8)
    class UImage* Image_CenterCircle;                                                 // 0x0450 (size: 0x8)
    class UOverlay* Overlay_Cross;                                                    // 0x0458 (size: 0x8)
    class UOverlay* Overlay_Slots;                                                    // 0x0460 (size: 0x8)
    class UW_Inventory_Slot_C* SlotDown;                                              // 0x0468 (size: 0x8)
    class UW_Inventory_Slot_C* SlotLeft;                                              // 0x0470 (size: 0x8)
    class UW_Inventory_Slot_C* SlotRight;                                             // 0x0478 (size: 0x8)
    class UW_Inventory_Slot_C* SlotUp;                                                // 0x0480 (size: 0x8)
    class UTexture2D* EmptyIcon_SlotLeft;                                             // 0x0488 (size: 0x8)
    class UTexture2D* EmptyIcon_SlotRight;                                            // 0x0490 (size: 0x8)
    class UTexture2D* EmptyIcon_SlotUp;                                               // 0x0498 (size: 0x8)
    class UTexture2D* EmptyIcon_SlotDown;                                             // 0x04A0 (size: 0x8)

    void GetSlots(TArray<class UW_Inventory_Slot_C*>& Slots);
    void StopDpadHotkeyPulse();
    void PlayDpadHotkeyPulse();
    class UWidget* BP_GetDesiredFocusTarget();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_W_Cross(int32 EntryPoint);
}; // Size: 0x4A8

#endif
