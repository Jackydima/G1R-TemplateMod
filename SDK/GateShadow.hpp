#ifndef UE4SS_SDK_GateShadow_HPP
#define UE4SS_SDK_GateShadow_HPP

struct FGExpression
{
    FName ExpressionName;                                                             // 0x0000 (size: 0x8)
    int32 NumJoints;                                                                  // 0x0008 (size: 0x4)
    int32 FlatJointStartIndex;                                                        // 0x000C (size: 0x4)
    int32 FlatJointEqualToNeutralStartIndex;                                          // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FGJoint
{
    double tX;                                                                        // 0x0000 (size: 0x8)
    double tY;                                                                        // 0x0008 (size: 0x8)
    double tZ;                                                                        // 0x0010 (size: 0x8)
    double rX;                                                                        // 0x0018 (size: 0x8)
    double rY;                                                                        // 0x0020 (size: 0x8)
    double rZ;                                                                        // 0x0028 (size: 0x8)
    double sX;                                                                        // 0x0030 (size: 0x8)
    double sY;                                                                        // 0x0038 (size: 0x8)
    double sZ;                                                                        // 0x0040 (size: 0x8)

}; // Size: 0x48

struct FGateShadowAnimNode : public FAnimNode_Base
{
    bool bDebug;                                                                      // 0x0010 (size: 0x1)
    FPoseLink BasePose;                                                               // 0x0018 (size: 0x10)
    class UFggto* Data;                                                               // 0x0028 (size: 0x8)
    bool ReloadData;                                                                  // 0x0030 (size: 0x1)
    TMap<int32, int32> CustomBonesRemapping;                                          // 0x0038 (size: 0x50)
    double CurveValueFilter_LOD0;                                                     // 0x0088 (size: 0x8)
    double CurveValueFilter_LOD1;                                                     // 0x0090 (size: 0x8)
    double CurveValueFilter_LOD2;                                                     // 0x0098 (size: 0x8)
    double CurveValueFilter_LOD3;                                                     // 0x00A0 (size: 0x8)
    double CurveValueFilter_LOD4;                                                     // 0x00A8 (size: 0x8)
    double CurveValueFilter_LOD5;                                                     // 0x00B0 (size: 0x8)
    double CurveValueFilter_LOD6;                                                     // 0x00B8 (size: 0x8)
    bool bDisabledByLOD_LOD0;                                                         // 0x00C0 (size: 0x1)
    bool bDisabledByLOD_LOD1;                                                         // 0x00C1 (size: 0x1)
    bool bDisabledByLOD_LOD2;                                                         // 0x00C2 (size: 0x1)
    bool bDisabledByLOD_LOD3;                                                         // 0x00C3 (size: 0x1)
    bool bDisabledByLOD_LOD4;                                                         // 0x00C4 (size: 0x1)
    bool bDisabledByLOD_LOD5;                                                         // 0x00C5 (size: 0x1)
    bool bDisabledByLOD_LOD6;                                                         // 0x00C6 (size: 0x1)

}; // Size: 0x198

struct FJointExpressionRotations
{
    TArray<FQuat> ExpressionRotations;                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FJointExpressionRotations_Packed
{
    int32 m_IndexStart;                                                               // 0x0000 (size: 0x4)
    int32 m_IndexCount;                                                               // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FTranslate
{
    double tX;                                                                        // 0x0000 (size: 0x8)
    double tY;                                                                        // 0x0008 (size: 0x8)
    double tZ;                                                                        // 0x0010 (size: 0x8)

}; // Size: 0x18

class UFggto : public UDataAsset
{
    int32 NumExpressions;                                                             // 0x0030 (size: 0x4)
    int32 NumJoints;                                                                  // 0x0034 (size: 0x4)
    FFilePath RigPathGto;                                                             // 0x0038 (size: 0x10)
    class USkeleton* Skeleton;                                                        // 0x0048 (size: 0x8)
    FGExpression NeutralExpression;                                                   // 0x0068 (size: 0x14)
    TArray<FName> Curves;                                                             // 0x0080 (size: 0x10)
    TMap<class FName, class FGExpression> ExpressionsMap;                             // 0x0090 (size: 0x50)
    TMap<uint32, uint32> JointsMap;                                                   // 0x00E0 (size: 0x50)
    TArray<FName> Joints;                                                             // 0x0130 (size: 0x10)
    TArray<FQuat> QuatNeutralRotationInverted;                                        // 0x0140 (size: 0x10)
    TArray<FJointExpressionRotations> QuatExpressionRotation;                         // 0x0150 (size: 0x10)
    TArray<FJointExpressionRotations_Packed> QuatExpressionRotation_Packed;           // 0x0160 (size: 0x10)

}; // Size: 0x290

#endif
