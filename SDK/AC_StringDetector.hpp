#ifndef UE4SS_SDK_AC_StringDetector_HPP
#define UE4SS_SDK_AC_StringDetector_HPP

class UAC_StringDetector_C : public UActorComponent
{
    double Detection Distance;                                                        // 0x00A0 (size: 0x8)

    void GetClosestStringData(class AStaticMeshActor*& String, double& Distance, FVector4& ClosestVertexColor);
}; // Size: 0xA8

#endif
