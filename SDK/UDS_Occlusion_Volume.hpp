#ifndef UE4SS_SDK_UDS_Occlusion_Volume_HPP
#define UE4SS_SDK_UDS_Occlusion_Volume_HPP

class AUDS_Occlusion_Volume_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0290 (size: 0x8)
    TEnumAsByte<UDS_OcclusionShape::Type> Collision Shape;                            // 0x0298 (size: 0x1)
    FVector Box Extent;                                                               // 0x02A0 (size: 0x18)
    double Sphere Radius;                                                             // 0x02B8 (size: 0x8)
    bool Affect Occlusion on Ultra Dynamic Sky;                                       // 0x02C0 (size: 0x1)
    bool Affect Occlusion on Ultra Dynamic Weather;                                   // 0x02C1 (size: 0x1)
    bool Block Weather Particles;                                                     // 0x02C2 (size: 0x1)
    class UPrimitiveComponent* Collision Component;                                   // 0x02C8 (size: 0x8)
    float Capsule Half Height;                                                        // 0x02D0 (size: 0x4)

    void Get Occlusion Result(bool Weather, bool& Occluded);
    void UserConstructionScript();
}; // Size: 0x2D4

#endif
