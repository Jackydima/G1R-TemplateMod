#ifndef UE4SS_SDK_W_ArmorCustomization_Main_HPP
#define UE4SS_SDK_W_ArmorCustomization_Main_HPP

class UW_ArmorCustomization_Main_C : public UArmorCustomization_Main
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0468 (size: 0x8)
    class UWidgetAnimation* Anim_Open2;                                               // 0x0470 (size: 0x8)
    class UWidgetAnimation* Anim_Open;                                                // 0x0478 (size: 0x8)
    class UW_GenericButton_C* Button_Close;                                           // 0x0480 (size: 0x8)

    void Finished_65126EC14195E2FA6F9F8D978851CE85();
    void BP_OnDeactivated();
    void BndEvt__W_ArmorCustomization_Main_Button_Close_K2Node_ComponentBoundEvent_0_ClickedEventBP__DelegateSignature();
    void Construct();
    void BndEvt__W_ArmorCustomization_Main_m_ContentWidget_K2Node_ComponentBoundEvent_2_OnButtonContextChanged__DelegateSignature(bool ShowPurchaseButton, bool ShowEquipButton);
    void ExecuteUbergraph_W_ArmorCustomization_Main(int32 EntryPoint);
}; // Size: 0x488

#endif
