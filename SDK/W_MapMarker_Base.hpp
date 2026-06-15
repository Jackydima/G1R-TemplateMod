#ifndef UE4SS_SDK_W_MapMarker_Base_HPP
#define UE4SS_SDK_W_MapMarker_Base_HPP

class UW_MapMarker_Base_C : public UMapCustomMarkerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class UWidgetAnimation* Anim_Hover_NotMap;                                        // 0x0328 (size: 0x8)
    class UWidgetAnimation* Anim_Hover_Map;                                           // 0x0330 (size: 0x8)
    class UWidgetAnimation* Anim_PlacePin;                                            // 0x0338 (size: 0x8)
    class UImage* Image_Hover;                                                        // 0x0340 (size: 0x8)
    class UImage* Image_Pin;                                                          // 0x0348 (size: 0x8)
    FW_MapMarker_Base_COnClick OnClick;                                               // 0x0350 (size: 0x10)
    void OnClick(FGameplayTag Marker Tag);

    void IsMarkerOnMap(bool& IsOnMap);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void InitializationBP(bool ShowAddAnimation);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Finished_2C3380BB4FE551311E930A804E210A4F();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void StartRemovingMarker();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_W_MapMarker_Base(int32 EntryPoint);
    void OnClick__DelegateSignature(FGameplayTag Marker Tag);
}; // Size: 0x360

#endif
