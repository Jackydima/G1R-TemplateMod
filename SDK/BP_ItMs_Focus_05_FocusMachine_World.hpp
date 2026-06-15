#ifndef UE4SS_SDK_BP_ItMs_Focus_05_FocusMachine_World_HPP
#define UE4SS_SDK_BP_ItMs_Focus_05_FocusMachine_World_HPP

class ABP_ItMs_Focus_05_FocusMachine_World_C : public ABP_ItemVisualWorld_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AD8 (size: 0x8)
    class UNiagaraComponent* P_FocusStone_Idle_Burst;                                 // 0x0AE0 (size: 0x8)
    class UNiagaraComponent* P_FocusStone_Idle;                                       // 0x0AE8 (size: 0x8)
    FGothicFXInstanceHandle SFXLevitatingLoopHandle;                                  // 0x0AF0 (size: 0x8)

    void ReceiveBeginPlay();
    void PlayLevitatingLoopSFX();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BP_PlayActionOnPicked(class AGothicCharacterState* CharacterState);
    void ExecuteUbergraph_BP_ItMs_Focus_05_FocusMachine_World(int32 EntryPoint);
}; // Size: 0xAF8

#endif
