#ifndef UE4SS_SDK_CR_Human_AddLookAt_Dialog_HPP
#define UE4SS_SDK_CR_Human_AddLookAt_Dialog_HPP

class UCR_Human_AddLookAt_Dialog_C : public UControlRig
{
    FVector LookAtLocation;                                                           // 0x0AA8 (size: 0x18)
    FRotator RotationVector;                                                          // 0x0AC0 (size: 0x18)
    double Enable_CR;                                                                 // 0x0AD8 (size: 0x8)
    bool ThresholdCross;                                                              // 0x0AE0 (size: 0x1)
    bool HasWeapon;                                                                   // 0x0AE1 (size: 0x1)
    bool isInDialog;                                                                  // 0x0AE2 (size: 0x1)
    bool ThresholdOn;                                                                 // 0x0AE3 (size: 0x1)
    bool EnableLookAt;                                                                // 0x0AE4 (size: 0x1)
    FQuat OriginalHeadRotation;                                                       // 0x0AF0 (size: 0x20)
    FQuat OriginalNeckRotation;                                                       // 0x0B10 (size: 0x20)
    FQuat OriginalSpineRotation;                                                      // 0x0B30 (size: 0x20)
    double HeadYawRotationAmount;                                                     // 0x0B50 (size: 0x8)
    double ChestYawRotationAmount;                                                    // 0x0B58 (size: 0x8)
    double NeckYawRotationAmount;                                                     // 0x0B60 (size: 0x8)
    double HeadPitchRotationAmount;                                                   // 0x0B68 (size: 0x8)
    double NeckPitchRotationAmount;                                                   // 0x0B70 (size: 0x8)
    double ChestPitchRotationAmount;                                                  // 0x0B78 (size: 0x8)
    bool IsBehind;                                                                    // 0x0B80 (size: 0x1)
    double EyeYawRotationAmount;                                                      // 0x0B88 (size: 0x8)
    double EyePitchRotationAmount;                                                    // 0x0B90 (size: 0x8)

}; // Size: 0xB98

#endif
