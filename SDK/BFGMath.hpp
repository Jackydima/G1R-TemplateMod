#ifndef UE4SS_SDK_BFGMath_HPP
#define UE4SS_SDK_BFGMath_HPP

struct FBFGAngleDamper
{
    float m_fSmoothTime;                                                              // 0x0008 (size: 0x4)
    float m_fMaxSpeed;                                                                // 0x000C (size: 0x4)

}; // Size: 0x18

struct FBFGBox2
{
}; // Size: 0x20

struct FBFGConcaveHull2D
{
}; // Size: 0x1

struct FBFGLine2
{
}; // Size: 0x20

struct FBFGPolyLine2
{
}; // Size: 0x18

struct FBFGPolygon2 : public FBFGPolyLine2
{
}; // Size: 0x28

struct FBFGSegment2 : public FBFGLine2
{
}; // Size: 0x20

struct FBFGVectorDamper
{
    float m_fSmoothTime;                                                              // 0x0000 (size: 0x4)
    float m_fMaxSpeed;                                                                // 0x0004 (size: 0x4)

}; // Size: 0x38

#endif
