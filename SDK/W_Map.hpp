#ifndef UE4SS_SDK_W_Map_HPP
#define UE4SS_SDK_W_Map_HPP

class UW_Map_C : public UMapWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UWidgetAnimation* ShowFilters;                                              // 0x0588 (size: 0x8)
    class UCanvasPanel* CanvasPanel_General;                                          // 0x0590 (size: 0x8)
    class UImage* Image_Outer;                                                        // 0x0598 (size: 0x8)
    class UImage* Image_Outer_1;                                                      // 0x05A0 (size: 0x8)
    class UImage* Image_Outer_3;                                                      // 0x05A8 (size: 0x8)
    class UImage* Image_Outer_4;                                                      // 0x05B0 (size: 0x8)
    class UImage* Image_Outer_5;                                                      // 0x05B8 (size: 0x8)
    class UImage* ImageMap_Empty;                                                     // 0x05C0 (size: 0x8)
    class UCanvasPanel* Overlay_Drawings;                                             // 0x05C8 (size: 0x8)
    class UOverlay* OverlayMarker_Corrected;                                          // 0x05D0 (size: 0x8)
    class UOverlay* OverlayMarker_Debug_Corrected;                                    // 0x05D8 (size: 0x8)
    class UOverlay* OverlayMarker_Debug_Original;                                     // 0x05E0 (size: 0x8)
    class UW_Map_FilterList_C* W_Map_FilterList;                                      // 0x05E8 (size: 0x8)
    class UW_MapLayer_FocusStones_C* W_MapLayer_FocusStones;                          // 0x05F0 (size: 0x8)
    class UW_MapOverlay_Path_C* W_MapOverlay_Path;                                    // 0x05F8 (size: 0x8)
    class UW_MapOverlay_X_C* W_MapOverlay_X;                                          // 0x0600 (size: 0x8)
    class UW_MapOverlay_X_C* W_MapOverlay_X_1;                                        // 0x0608 (size: 0x8)
    bool DebugMode;                                                                   // 0x0610 (size: 0x1)
    bool IsBackground;                                                                // 0x0611 (size: 0x1)
    class UW_MapMarkers_PopUp_C* MapPins_PopUp;                                       // 0x0618 (size: 0x8)
    bool FilterVisibilityAnimationFinished;                                           // 0x0620 (size: 0x1)
    FW_Map_CFiltersAreEmpty FiltersAreEmpty;                                          // 0x0628 (size: 0x10)
    void FiltersAreEmpty();

    void SetMapMarkerPopUpPosition(FVector2D NewPosition, class UCanvasPanelSlot* Widget);
    void SetIsBackgroundMap(bool IsBackground);
    void HideMarkerSelectorBP();
    void ShowMarkerSelectorBP(FVector2D WidgetPos);
    void UpdateMarkersVisibility();
    void UpdateMarkerPositionBP();
    void UpdateMapInfoBP();
    void Finished_E82039FE4A32024F9F3476A51623F7A4();
    void Construct();
    void BP_OnActivated();
    void BP_OnDeactivated();
    void ToggleFilterListVisibility();
    void ExecuteUbergraph_W_Map(int32 EntryPoint);
    void FiltersAreEmpty__DelegateSignature();
}; // Size: 0x638

#endif
