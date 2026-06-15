#ifndef UE4SS_SDK_W_Setting_EnumDropDown_HPP
#define UE4SS_SDK_W_Setting_EnumDropDown_HPP

class UW_Setting_EnumDropDown_C : public USettingObjectWidget_Enum
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UComboBoxKey* ComboBox_Options;                                             // 0x03D0 (size: 0x8)
    TSoftObjectPtr<UFMODEvent> Click Sound;                                           // 0x03D8 (size: 0x28)
    TArray<FName> Option Names;                                                       // 0x0400 (size: 0x10)
    bool Is Initializing;                                                             // 0x0410 (size: 0x1)

    class UWidget* OnGenerateItemWidget(FName Item);
    class UWidget* OnGenerateContentWidget(FName Item);
    void OnValueChanged(int32 _NewValue);
    void Update Visuals();
    void Initialize Options();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__W_Setting_EnumDropDown_ComboBox_Options_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FName SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void OnContentChanged();
    void ExecuteUbergraph_W_Setting_EnumDropDown(int32 EntryPoint);
}; // Size: 0x411

#endif
