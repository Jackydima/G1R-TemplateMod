#ifndef UE4SS_SDK_BP_SwampweedDebuffEffectActor_HPP
#define UE4SS_SDK_BP_SwampweedDebuffEffectActor_HPP

class ABP_SwampweedDebuffEffectActor_C : public ABP_DrugsDebuffEffectActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)

    void UserConstructionScript();
    void ExecuteUbergraph_BP_SwampweedDebuffEffectActor(int32 EntryPoint);
}; // Size: 0x368

#endif
