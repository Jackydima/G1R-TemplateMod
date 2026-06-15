#ifndef UE4SS_SDK_W_Setting_Bool_HPP
#define UE4SS_SDK_W_Setting_Bool_HPP

class UW_Setting_Bool_C : public USettingObjectWidget_Bool
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UButton* Button_Off;                                                        // 0x03D0 (size: 0x8)
    class UButton* Button_On;                                                         // 0x03D8 (size: 0x8)
    class UButton* Button_Toggle;                                                     // 0x03E0 (size: 0x8)
    class USlider* Slider_Value;                                                      // 0x03E8 (size: 0x8)
    class UTextBlock* TextBlock_OFF;                                                  // 0x03F0 (size: 0x8)
    class UTextBlock* TextBlock_On;                                                   // 0x03F8 (size: 0x8)
    TSoftObjectPtr<UFMODEvent> Click Sound;                                           // 0x0400 (size: 0x28)

    void OnValueChanged(bool _NewValue);
    void Update Visuals();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__W_Setting_Bool_Button_On_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Setting_Bool_Button_Off_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Setting_Bool_Button_Toggle_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_Setting_Bool(int32 EntryPoint);
}; // Size: 0x428

#endif
