#ifndef UE4SS_SDK_W_MapMarkers_PopUp_HPP
#define UE4SS_SDK_W_MapMarkers_PopUp_HPP

class UW_MapMarkers_PopUp_C : public UCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* Anim_Show;                                                // 0x0438 (size: 0x8)
    class UBorder* Border_General;                                                    // 0x0440 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Pins;                                         // 0x0448 (size: 0x8)
    class UW_MapMarker_Chest_C* W_MapMarker_Chest;                                    // 0x0450 (size: 0x8)
    class UW_MapMarker_Enemy_C* W_MapMarker_Enemy;                                    // 0x0458 (size: 0x8)
    class UW_MapMarker_Generic_C* W_MapMarker_Generic;                                // 0x0460 (size: 0x8)
    class UW_MapMarker_Shop_C* W_MapMarker_Shop;                                      // 0x0468 (size: 0x8)
    FW_MapMarkers_PopUp_COnSelectMarkerType OnSelectMarkerType;                       // 0x0470 (size: 0x10)
    void OnSelectMarkerType(FGameplayTag Marker Type);

    void MapMarkers_OnClick(FGameplayTag Marker Tag);
    void Finished_FBBB840E4BC64B93D99A69BAB0714BFF();
    void Finished_DA4FA46A43C6CFA2936F588692C73DCE();
    void Construct();
    void OnInitialized();
    void CloseWidget();
    void ExecuteUbergraph_W_MapMarkers_PopUp(int32 EntryPoint);
    void OnSelectMarkerType__DelegateSignature(FGameplayTag Marker Type);
}; // Size: 0x480

#endif
