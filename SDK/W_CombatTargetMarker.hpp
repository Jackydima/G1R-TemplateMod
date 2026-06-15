#ifndef UE4SS_SDK_W_CombatTargetMarker_HPP
#define UE4SS_SDK_W_CombatTargetMarker_HPP

class UW_CombatTargetMarker_C : public UCombatTargetMarkerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x02F8 (size: 0x8)
    class UImage* Image_19;                                                           // 0x0300 (size: 0x8)

    void UpdatePositionBP(FVector2D NewPos);
    void ExecuteUbergraph_W_CombatTargetMarker(int32 EntryPoint);
}; // Size: 0x308

#endif
