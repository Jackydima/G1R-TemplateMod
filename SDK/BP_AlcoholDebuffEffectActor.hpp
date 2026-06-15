#ifndef UE4SS_SDK_BP_AlcoholDebuffEffectActor_HPP
#define UE4SS_SDK_BP_AlcoholDebuffEffectActor_HPP

class ABP_AlcoholDebuffEffectActor_C : public ABP_DrugsDebuffEffectActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)

    void UserConstructionScript();
    void ExecuteUbergraph_BP_AlcoholDebuffEffectActor(int32 EntryPoint);
}; // Size: 0x368

#endif
