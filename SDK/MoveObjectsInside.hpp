#ifndef UE4SS_SDK_MoveObjectsInside_HPP
#define UE4SS_SDK_MoveObjectsInside_HPP

class AMoveObjects : public AVolume
{
    FVector DeltaPosition;                                                            // 0x02C8 (size: 0x18)
    bool AddDataLayers;                                                               // 0x02E0 (size: 0x1)
    TArray<class UDataLayerAsset*> DataLayersToAdd;                                   // 0x02E8 (size: 0x10)

    void SelectObjects();
    void MoveObjects();
    void MoveFoliage();
}; // Size: 0x2F8

#endif
