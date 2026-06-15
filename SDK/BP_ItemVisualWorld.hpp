#ifndef UE4SS_SDK_BP_ItemVisualWorld_HPP
#define UE4SS_SDK_BP_ItemVisualWorld_HPP

class ABP_ItemVisualWorld_C : public AItemVisualWorld
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AD0 (size: 0x8)

    void IsInsideWater();
    void BP_OnOverlapWith(class AActor* Actor);
    void ExecuteUbergraph_BP_ItemVisualWorld(int32 EntryPoint);
}; // Size: 0xAD8

#endif
