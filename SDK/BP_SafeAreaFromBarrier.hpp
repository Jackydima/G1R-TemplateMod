#ifndef UE4SS_SDK_BP_SafeAreaFromBarrier_HPP
#define UE4SS_SDK_BP_SafeAreaFromBarrier_HPP

class ABP_SafeAreaFromBarrier_C : public AActor
{
    class UStaticMeshComponent* BoundsVisualization;                                  // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)

    bool IsInside(FVector position);
}; // Size: 0x2A0

#endif
