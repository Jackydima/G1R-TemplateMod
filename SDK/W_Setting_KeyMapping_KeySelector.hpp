#ifndef UE4SS_SDK_W_Setting_KeyMapping_KeySelector_HPP
#define UE4SS_SDK_W_Setting_KeyMapping_KeySelector_HPP

class UW_Setting_KeyMapping_KeySelector_C : public UAlkUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0340 (size: 0x8)
    class UInputKeySelector* InputKeySelector;                                        // 0x0348 (size: 0x8)
    class UScaleBox* ScaleBox_Icon;                                                   // 0x0350 (size: 0x8)
    TMap<class FKey, class TSoftObjectPtr<UTexture2D>> Icons;                         // 0x0358 (size: 0x50)
    FW_Setting_KeyMapping_KeySelector_COn Key Selected On Key Selected;               // 0x03A8 (size: 0x10)
    void On Key Selected(FKey Key);
    TSoftObjectPtr<UFMODEvent> Click Sound;                                           // 0x03B8 (size: 0x28)

    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Update Visuals();
    void Get Selected Key(FKey& Key);
    void Set Selected Key(FKey Key);
    void BndEvt__W_Setting_KeyMapping_KeySelector_InputKeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void BndEvt__W_Setting_KeyMapping_KeySelector_InputKeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature();
    void ExecuteUbergraph_W_Setting_KeyMapping_KeySelector(int32 EntryPoint);
    void On Key Selected__DelegateSignature(FKey Key);
}; // Size: 0x3E0

#endif
