#ifndef UE4SS_SDK_CommonButtonBase_HPP
#define UE4SS_SDK_CommonButtonBase_HPP

class UCommonButtonBase_C : public UCommonButtonBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x15A0 (size: 0x8)
    FCommonButtonBase_CDeselect Deselect;                                             // 0x15A8 (size: 0x10)
    void Deselect();
    FCommonButtonBase_CSelect Select;                                                 // 0x15B8 (size: 0x10)
    void Select();

    void BP_OnDeselected();
    void BP_OnSelected();
    void ExecuteUbergraph_CommonButtonBase(int32 EntryPoint);
    void Select__DelegateSignature();
    void Deselect__DelegateSignature();
}; // Size: 0x15C8

#endif
