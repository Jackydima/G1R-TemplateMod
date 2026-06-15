#ifndef UE4SS_SDK_W_Setting_Int_HPP
#define UE4SS_SDK_W_Setting_Int_HPP

class UW_Setting_Int_C : public USettingObjectWidget_Int
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class USlider* Slider;                                                            // 0x03D0 (size: 0x8)
    class UTextBlock* TextBlock_Value;                                                // 0x03D8 (size: 0x8)
    TSoftObjectPtr<UFMODEvent> Click Sound;                                           // 0x03E0 (size: 0x28)
    bool Has Mouse Capture;                                                           // 0x0408 (size: 0x1)
    bool Is Initializing;                                                             // 0x0409 (size: 0x1)

    void OnValueChanged(int32 _NewValue);
    void Update Visuals();
    void Update Range();
    void BndEvt__W_Setting_Float_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__W_Setting_Int_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__W_Setting_Int_Slider_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature();
    void OnInputTypeChanged(ECommonInputType _InputType);
    void PreConstruct(bool IsDesignTime);
    void OnContentChanged();
    void ExecuteUbergraph_W_Setting_Int(int32 EntryPoint);
}; // Size: 0x40A

#endif
