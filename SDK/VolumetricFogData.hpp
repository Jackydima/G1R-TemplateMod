#ifndef UE4SS_SDK_VolumetricFogData_HPP
#define UE4SS_SDK_VolumetricFogData_HPP

class UVolumetricFogData_C : public UPrimaryDataAsset
{
    TEnumAsByte<Enum_Layer2::Type> Second Layer;                                      // 0x0030 (size: 0x1)
    double Second Layer Amount;                                                       // 0x0038 (size: 0x8)
    bool Use Distance Field?;                                                         // 0x0040 (size: 0x1)
    double DF - Height;                                                               // 0x0048 (size: 0x8)
    double DF - Multiply;                                                             // 0x0050 (size: 0x8)
    double DF - Power;                                                                // 0x0058 (size: 0x8)
    double Opacity;                                                                   // 0x0060 (size: 0x8)
    bool Use Time of Day Interaction?;                                                // 0x0068 (size: 0x1)
    bool Use Weather Interaction?;                                                    // 0x0069 (size: 0x1)
    double Opacity - Rain 1;                                                          // 0x0070 (size: 0x8)
    double Opacity - Rain 2;                                                          // 0x0078 (size: 0x8)
    double Opacity - Rain 3;                                                          // 0x0080 (size: 0x8)
    double Opacity - Snow/Dust 1;                                                     // 0x0088 (size: 0x8)
    double Opacity - Snow/Dust 2;                                                     // 0x0090 (size: 0x8)
    double Opacity - Snow/Dust 3;                                                     // 0x0098 (size: 0x8)
    double Self Shadow Amount;                                                        // 0x00A0 (size: 0x8)
    FVector Noise Size;                                                               // 0x00A8 (size: 0x18)
    double Noise - Power;                                                             // 0x00C0 (size: 0x8)
    double Noise - Multiply;                                                          // 0x00C8 (size: 0x8)
    FLinearColor Color;                                                               // 0x00D0 (size: 0x10)
    double Panning Speed - X;                                                         // 0x00E0 (size: 0x8)
    double Panning Speed - Y;                                                         // 0x00E8 (size: 0x8)
    double Panning Speed - Z;                                                         // 0x00F0 (size: 0x8)
    double Far Fade Distance;                                                         // 0x00F8 (size: 0x8)
    double Near Fade Distance;                                                        // 0x0100 (size: 0x8)
    bool Use Third Person Near Fade?;                                                 // 0x0108 (size: 0x1)

}; // Size: 0x109

#endif
