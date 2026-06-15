#ifndef UE4SS_SDK_GothicPlayerControllerBaseBP_HPP
#define UE4SS_SDK_GothicPlayerControllerBaseBP_HPP

class AGothicPlayerControllerBaseBP_C : public AGothicPlayerControllerBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B48 (size: 0x8)

    void BPI_Get_DebugInfo(class ACharacter*& DebugFocusCharacter, bool& DebugView, bool& ShowHUD, bool& ShowTraces, bool& ShowDebugShapes, bool& ShowLayerColors, bool& Slomo, bool& ShowCharacterInfo);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_GothicPlayerControllerBaseBP(int32 EntryPoint);
}; // Size: 0xB50

#endif
