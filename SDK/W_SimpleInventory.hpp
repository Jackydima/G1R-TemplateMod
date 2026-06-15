#ifndef UE4SS_SDK_W_SimpleInventory_HPP
#define UE4SS_SDK_W_SimpleInventory_HPP

class UW_SimpleInventory_C : public USimpleInventoryWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B0 (size: 0x8)
    class UWidgetAnimation* Anim_Open;                                                // 0x03B8 (size: 0x8)
    class UWidgetAnimation* ShowWidgetAnimation;                                      // 0x03C0 (size: 0x8)
    class UW_GenericButton_C* Button_SwithHotkeyHint;                                 // 0x03C8 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Inventory;                                        // 0x03D0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Main;                                             // 0x03D8 (size: 0x8)
    class UHorizontalBox* HorizontalBox;                                              // 0x03E0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_56;                                           // 0x03E8 (size: 0x8)
    class UImage* Image_46;                                                           // 0x03F0 (size: 0x8)
    class UImage* Image_Background;                                                   // 0x03F8 (size: 0x8)
    class UImage* Image_DecoRight_1;                                                  // 0x0400 (size: 0x8)
    class UImage* Image_LeftDeco;                                                     // 0x0408 (size: 0x8)
    class UImage* Image_LeftLine;                                                     // 0x0410 (size: 0x8)
    class UImage* Image_LineRight;                                                    // 0x0418 (size: 0x8)
    class UImage* Image_Shadow;                                                       // 0x0420 (size: 0x8)
    class UImage* Image_TabsBg;                                                       // 0x0428 (size: 0x8)
    class UOverlay* Overlay_Tabs;                                                     // 0x0430 (size: 0x8)
    class USizeBox* SizeBox_Content;                                                  // 0x0438 (size: 0x8)
    class USizeBox* SizeBox_ToDisable;                                                // 0x0440 (size: 0x8)
    class UW_AuraEffect_C* W_AuraEffect;                                              // 0x0448 (size: 0x8)
    class UW_AuraEffect_C* W_AuraEffect_1;                                            // 0x0450 (size: 0x8)
    bool Gamepad;                                                                     // 0x0458 (size: 0x1)

    void ForceHide();
    ESlateVisibility Get_Button_AddToQueue_Visibility();
    ESlateVisibility Get_Button_Close_1_Visibility();
    double GetAnimationStartTime();
    void ConfigureInventories();
    void ConfigureTabs();
    void Finished_54C5AF96497EE36B1AA1FD99D54433CE();
    void Finished_C12566DD4C54B8FE63C05BB5318EF344();
    void OnInitialized();
    void PreConstruct(bool IsDesignTime);
    void AnimateShowWidget();
    void AnimateHideWidget();
    void BndEvt__W_SimpleInventory_Button_Close_1_K2Node_ComponentBoundEvent_1_ClickedEventBP__DelegateSignature();
    void EnableChildsBP(bool bInIsEnabled);
    void BndEvt__W_SimpleInventory_Button_Action_K2Node_ComponentBoundEvent_2_ClickedEventBP__DelegateSignature();
    void ExecuteUbergraph_W_SimpleInventory(int32 EntryPoint);
}; // Size: 0x459

#endif
