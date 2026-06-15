#ifndef UE4SS_SDK_W_Setting_KeyMapping_HPP
#define UE4SS_SDK_W_Setting_KeyMapping_HPP

class UW_Setting_KeyMapping_C : public USettingObjectWidget_KeyMapping
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)
    class UW_Setting_KeyMapping_KeySelector_C* KeySelector_Primary;                   // 0x0418 (size: 0x8)
    class UW_Setting_KeyMapping_KeySelector_C* KeySelector_Secondary;                 // 0x0420 (size: 0x8)
    TSoftObjectPtr<UFMODEvent> Click Sound;                                           // 0x0428 (size: 0x28)

    void Update Visuals();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__W_Setting_KeyMapping_KeySelector_Primary_K2Node_ComponentBoundEvent_2_On Key Selected__DelegateSignature(FKey Key);
    void BndEvt__W_Setting_KeyMapping_KeySelector_Secondary_K2Node_ComponentBoundEvent_3_On Key Selected__DelegateSignature(FKey Key);
    void OnValueChanged(EPlayerMappableKeySlot _Slot, FKey _NewValue);
    void ExecuteUbergraph_W_Setting_KeyMapping(int32 EntryPoint);
}; // Size: 0x450

#endif
