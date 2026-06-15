#ifndef UE4SS_SDK_Weather_Mask_Brush_HPP
#define UE4SS_SDK_Weather_Mask_Brush_HPP

class AWeather_Mask_Brush_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0298 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02A0 (size: 0x8)
    TEnumAsByte<UDS_Weather_Mask_Brush::Type> Brush;                                  // 0x02A8 (size: 0x1)
    double Mask Wetness;                                                              // 0x02B0 (size: 0x8)
    double Mask Snow/Dust;                                                            // 0x02B8 (size: 0x8)
    class AUltra_Dynamic_Weather_C* UDW;                                              // 0x02C0 (size: 0x8)
    TArray<FVector2D> Corners;                                                        // 0x02C8 (size: 0x10)
    double Yaw;                                                                       // 0x02D8 (size: 0x8)
    FVector2D Brush Scale;                                                            // 0x02E0 (size: 0x10)
    class UTexture2D* Brush Texture;                                                  // 0x02F0 (size: 0x8)
    FLinearColor Brush Color;                                                         // 0x02F8 (size: 0x10)
    FVector2D Brush Location;                                                         // 0x0308 (size: 0x10)
    bool Cancel Masks Above;                                                          // 0x0318 (size: 0x1)
    FVector2D Center Location;                                                        // 0x0320 (size: 0x10)
    double Max Distance;                                                              // 0x0330 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_Weather_Mask_Brush(int32 EntryPoint);
}; // Size: 0x338

#endif
