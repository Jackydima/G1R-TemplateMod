#ifndef UE4SS_SDK_ProceduralAnimationTKRuntime_HPP
#define UE4SS_SDK_ProceduralAnimationTKRuntime_HPP

struct FAN_PA_LookAt : public FAnimNode_SkeletalControlBase
{
    float EnableLookAt;                                                               // 0x00C8 (size: 0x4)
    FVector LookAtTargetLocation;                                                     // 0x00D0 (size: 0x18)
    FLookAtConfig LookAtConfig;                                                       // 0x00E8 (size: 0x30)
    bool bResetStateOnNextUpdate;                                                     // 0x0118 (size: 0x1)
    TArray<FBoneLookAtSettings> Bones;                                                // 0x0120 (size: 0x10)
    TArray<FEyeLookAtSettings> Eyes;                                                  // 0x0130 (size: 0x10)
    float MaxLookAtAngleDegrees;                                                      // 0x0140 (size: 0x4)
    float FadeAngleDegrees;                                                           // 0x0144 (size: 0x4)
    float LookAtTargetSmoothSpeed;                                                    // 0x0148 (size: 0x4)
    bool bUseChainRootAngleBlend;                                                     // 0x014C (size: 0x1)
    bool bUseDeviationInfluence;                                                      // 0x014D (size: 0x1)
    float DeviationInfluenceExponent;                                                 // 0x0150 (size: 0x4)
    bool bSmoothInComponentSpace;                                                     // 0x0154 (size: 0x1)
    bool bUseSphericalInterpolation;                                                  // 0x0155 (size: 0x1)
    bool bUseEyeOffset;                                                               // 0x0156 (size: 0x1)

}; // Size: 0x198

struct FAN_PA_ProfileEnd : public FAnimNode_Base
{
    FPoseLink SourcePose;                                                             // 0x0010 (size: 0x10)
    FName SectionName;                                                                // 0x0020 (size: 0x8)
    bool bEnabled;                                                                    // 0x0028 (size: 0x1)

}; // Size: 0x38

struct FAN_PA_ProfileStart : public FAnimNode_Base
{
    FPoseLink SourcePose;                                                             // 0x0010 (size: 0x10)
    FName SectionName;                                                                // 0x0020 (size: 0x8)
    bool bEnabled;                                                                    // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FBoneLookAtSettings
{
    FBoneReference bone;                                                              // 0x0000 (size: 0x10)
    FVector BoneForwardAxis;                                                          // 0x0010 (size: 0x18)
    FVector BoneUpAxis;                                                               // 0x0028 (size: 0x18)
    FRotator ForwardAxisOffsetRotation;                                               // 0x0040 (size: 0x18)
    bool bConeAlongBoneUp;                                                            // 0x0058 (size: 0x1)
    float Swing1LimitDegrees;                                                         // 0x005C (size: 0x4)
    float Swing2LimitDegrees;                                                         // 0x0060 (size: 0x4)
    float TwistLimitDegrees;                                                          // 0x0064 (size: 0x4)
    FRotator ConstraintFrameRotation;                                                 // 0x0068 (size: 0x18)
    float MaxAngularSpeedDeg;                                                         // 0x0080 (size: 0x4)
    float LookAtBlendWeight;                                                          // 0x0084 (size: 0x4)
    float BlendDampingSpeed;                                                          // 0x0088 (size: 0x4)
    FVector EyeOffset;                                                                // 0x0090 (size: 0x18)

}; // Size: 0x110

struct FEyeLookAtSettings
{
    FBoneReference EyeBone;                                                           // 0x0000 (size: 0x10)
    FVector EyeForwardAxis;                                                           // 0x0010 (size: 0x18)
    FVector EyeUpAxis;                                                                // 0x0028 (size: 0x18)
    FFloatInterval PitchConstraints;                                                  // 0x0040 (size: 0x8)
    FFloatInterval YawConstraints;                                                    // 0x0048 (size: 0x8)
    float MaxAngularSpeedDeg;                                                         // 0x0050 (size: 0x4)
    float LookAtBlendWeight;                                                          // 0x0054 (size: 0x4)
    float BlendDampingSpeed;                                                          // 0x0058 (size: 0x4)

}; // Size: 0xB0

struct FLookAtBoneConfig
{
    FBoneReference bone;                                                              // 0x0000 (size: 0x10)
    FVector BoneForwardAxis;                                                          // 0x0010 (size: 0x18)
    FVector BoneUpAxis;                                                               // 0x0028 (size: 0x18)
    FRotator ForwardAxisOffsetRotation;                                               // 0x0040 (size: 0x18)
    bool bConeAlongBoneUp;                                                            // 0x0058 (size: 0x1)
    float Swing1LimitDegrees;                                                         // 0x005C (size: 0x4)
    float Swing2LimitDegrees;                                                         // 0x0060 (size: 0x4)
    float TwistLimitDegrees;                                                          // 0x0064 (size: 0x4)
    FRotator ConstraintFrameRotation;                                                 // 0x0068 (size: 0x18)
    float MaxAngularSpeedDeg;                                                         // 0x0080 (size: 0x4)
    float LookAtBlendWeight;                                                          // 0x0084 (size: 0x4)
    float BlendDampingSpeed;                                                          // 0x0088 (size: 0x4)
    FVector EyeOffset;                                                                // 0x0090 (size: 0x18)
    FName ControlCurve;                                                               // 0x00A8 (size: 0x8)

}; // Size: 0xB0

struct FLookAtConfig
{
    TArray<FLookAtBoneConfig> Bones;                                                  // 0x0000 (size: 0x10)
    TArray<FLookAtEyeConfig> Eyes;                                                    // 0x0010 (size: 0x10)
    float MaxLookAtAngleDegrees;                                                      // 0x0020 (size: 0x4)
    float FadeAngleDegrees;                                                           // 0x0024 (size: 0x4)
    float LookAtTargetSmoothSpeed;                                                    // 0x0028 (size: 0x4)
    float ConfigBlendSpeed;                                                           // 0x002C (size: 0x4)

}; // Size: 0x30

struct FLookAtEyeConfig
{
    FBoneReference EyeBone;                                                           // 0x0000 (size: 0x10)
    FVector EyeForwardAxis;                                                           // 0x0010 (size: 0x18)
    FVector EyeUpAxis;                                                                // 0x0028 (size: 0x18)
    FFloatInterval PitchConstraints;                                                  // 0x0040 (size: 0x8)
    FFloatInterval YawConstraints;                                                    // 0x0048 (size: 0x8)
    float MaxAngularSpeedDeg;                                                         // 0x0050 (size: 0x4)
    float LookAtBlendWeight;                                                          // 0x0054 (size: 0x4)
    float BlendDampingSpeed;                                                          // 0x0058 (size: 0x4)
    FName ControlCurve;                                                               // 0x005C (size: 0x8)

}; // Size: 0x68

#endif
