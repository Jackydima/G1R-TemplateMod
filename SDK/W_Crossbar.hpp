#ifndef UE4SS_SDK_W_Crossbar_HPP
#define UE4SS_SDK_W_Crossbar_HPP

class UW_Crossbar_C : public UQuickSlotCrossbar
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    class UWidgetAnimation* Anim_Hide;                                                // 0x04E8 (size: 0x8)
    class UWidgetAnimation* Anim_SwitchABShow;                                        // 0x04F0 (size: 0x8)
    class UWidgetAnimation* Anim_SwitchAB;                                            // 0x04F8 (size: 0x8)
    class UW_GenericButton_C* Button_Accept;                                          // 0x0500 (size: 0x8)
    class UW_GenericButton_C* Button_Cancel;                                          // 0x0508 (size: 0x8)
    class UW_GenericButton_C* Button_ShowTooltip;                                     // 0x0510 (size: 0x8)
    class UW_GenericButton_C* Button_Switch;                                          // 0x0518 (size: 0x8)
    class UW_Cross_C* CrossA_Equip;                                                   // 0x0520 (size: 0x8)
    class UW_Cross_C* CrossA_Show;                                                    // 0x0528 (size: 0x8)
    class UW_Cross_C* CrossB_Equip;                                                   // 0x0530 (size: 0x8)
    class UW_Cross_C* CrossB_Show;                                                    // 0x0538 (size: 0x8)
    class UImage* Image_BlackBg;                                                      // 0x0540 (size: 0x8)
    class UW_Inventory_ItemTooltip_C* W_Inventory_ItemTooltip_ItemInSlotToAssignTo;   // 0x0548 (size: 0x8)
    class UW_Inventory_ItemTooltip_C* W_Inventory_ItemTooltip_ItemToAssign;           // 0x0550 (size: 0x8)
    class UWrapBox* WrapBox_Hotkeys;                                                  // 0x0558 (size: 0x8)
    FW_Crossbar_CSetVisibilityWithTimer SetVisibilityWithTimer;                       // 0x0560 (size: 0x10)
    void SetVisibilityWithTimer();
    FTimerHandle VisibilityTimer;                                                     // 0x0570 (size: 0x8)
    double VisibleTime;                                                               // 0x0578 (size: 0x8)
    FW_Crossbar_CEvent_CrossChangeSetAB Event_CrossChangeSetAB;                       // 0x0580 (size: 0x10)
    void Event_CrossChangeSetAB(bool Input_CrossAB);
    FW_Crossbar_COnClickRelease_Local OnClickRelease_Local;                           // 0x0590 (size: 0x10)
    void OnClickRelease_Local(int32 ItemPos, int32 ItemPosBar, EInventoryTypes ItemType);
    FW_Crossbar_COnClickRelease OnClickRelease;                                       // 0x05A0 (size: 0x10)
    void OnClickRelease(int32 ItemCrossPos);
    FW_Crossbar_CCrossRestorePosition CrossRestorePosition;                           // 0x05B0 (size: 0x10)
    void CrossRestorePosition();
    bool SimulateOpenedFromInventory;                                                 // 0x05C0 (size: 0x1)
    TArray<class UWidget*> SlotsWidget;                                               // 0x05C8 (size: 0x10)
    TArray<class UWidget*> CrossSlots;                                                // 0x05D8 (size: 0x10)
    int32 CurrentSlotId;                                                              // 0x05E8 (size: 0x4)
    class UW_Cross_C* Target;                                                         // 0x05F0 (size: 0x8)
    FItemTooltipInfo ToolTipInfoBase;                                                 // 0x05F8 (size: 0x328)
    FItemTooltipInfo ToolTipInfoSlot;                                                 // 0x0920 (size: 0x328)
    bool ShowToolTips;                                                                // 0x0C48 (size: 0x1)

    void RefreshInventoryBP();
    void Update Tool Tips();
    void SetEquipCrossInFrontVisuals(bool BInFront);
    void SetShowCrossInFrontVisuals(bool BInFront);
    void ReceiveInventoryItemClickedBP(int32 SlotId);
    void SetCrossVisibility();
    void SwitchShowWheels(bool BCrossOnFront);
    void SwitchEquipWheels(bool BCrossOnFront);
    bool BP_OnHandleBackAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void PreConstruct(bool IsDesignTime);
    void SetCrossPosition(bool OpenedFromInventory);
    void UpdateSlotsState();
    void Finished_E265FC1D461FC9BE54180EB50496682D();
    void Finished_9F957BF24877BF20400FA2A061971248();
    void Finished_CE6340D44722458C351EAC81312D6620();
    void CloseWidget();
    void HotkeyPressedBP(int32 SlotId);
    void ChangeBCrossOnFrontBP();
    void Initialization_BP();
    void SelectSlot(int32 SlotId);
    void BndEvt__W_Crossbar_Button_Accept_K2Node_ComponentBoundEvent_0_ClickedEventBP__DelegateSignature();
    void BndEvt__W_Crossbar_Button_Cancel_K2Node_ComponentBoundEvent_1_ClickedEventBP__DelegateSignature();
    void PreSelectSlot();
    void OnShowUpdateBaseTooltip(const FItemTooltipInfo ItemTooltipInfo);
    void OnShowSlotTooltip(const FItemTooltipInfo ItemTooltipInfo);
    void BndEvt__W_Crossbar_Button_ShowTooltip_K2Node_ComponentBoundEvent_2_ClickedEventBP__DelegateSignature();
    void ExecuteUbergraph_W_Crossbar(int32 EntryPoint);
    void CrossRestorePosition__DelegateSignature();
    void OnClickRelease__DelegateSignature(int32 ItemCrossPos);
    void OnClickRelease_Local__DelegateSignature(int32 ItemPos, int32 ItemPosBar, EInventoryTypes ItemType);
    void Event_CrossChangeSetAB__DelegateSignature(bool Input_CrossAB);
    void SetVisibilityWithTimer__DelegateSignature();
}; // Size: 0xC49

#endif
