#ifndef UE4SS_SDK_W_DiscreteItemsView_HPP
#define UE4SS_SDK_W_DiscreteItemsView_HPP

class UW_DiscreteItemsView_C : public UDiscreteItemViewWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UImage* Image_BottomArrow;                                                  // 0x0588 (size: 0x8)
    class UImage* Image_BottomLine;                                                   // 0x0590 (size: 0x8)
    class UImage* Image_TopArrow;                                                     // 0x0598 (size: 0x8)
    class UImage* Image_TopLine;                                                      // 0x05A0 (size: 0x8)
    class UOverlay* Overlay_87;                                                       // 0x05A8 (size: 0x8)
    class USizeBox* SizeBox_BottomArrow;                                              // 0x05B0 (size: 0x8)
    class USizeBox* SizeBox_TopArrow;                                                 // 0x05B8 (size: 0x8)
    class UTextBlock* TextBlock_CurrentItemNumber;                                    // 0x05C0 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_InputHints;                                 // 0x05C8 (size: 0x8)
    int32 IndexOverride;                                                              // 0x05D0 (size: 0x4)
    TSoftObjectPtr<UFMODEvent> Clicked Sound;                                         // 0x05D8 (size: 0x28)
    TSoftObjectPtr<UFMODEvent> Hovered Sound;                                         // 0x0600 (size: 0x28)
    float ArrowWidth;                                                                 // 0x0628 (size: 0x4)
    bool IsNotScrollable;                                                             // 0x062C (size: 0x1)
    bool Show Item Number;                                                            // 0x062D (size: 0x1)

    void SetIsNotScrollableVisuals(bool NotScrollable);
    void UpdateArrowSize();
    void OnItemIsHoveredChanged(int32 _Index, class UObject* _Item, bool _IsHovered);
    void OnSelectionChanged(int32 _OldIndex, class UObject* _OldItem, int32 _NewIndex, class UObject* _NewItem);
    void Update Number();
    void Update Visibilities();
    void Construct();
    void OnScrollOffsetRowsChanged(int32 _OldScrollOffset, int32 _NewScrollOffset);
    void OnNumItemsChanged(int32 _OldNum, int32 _NewNum);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__W_DiscreteItemsView_TileView_Grid_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
    void ExecuteUbergraph_W_DiscreteItemsView(int32 EntryPoint);
}; // Size: 0x62E

#endif
