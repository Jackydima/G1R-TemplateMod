#ifndef UE4SS_SDK_BP_StaticMeshBloodActor_HPP
#define UE4SS_SDK_BP_StaticMeshBloodActor_HPP

class ABP_StaticMeshBloodActor_C : public ABP_BaseBloodActor_C
{
    class UStaticMeshComponent* StaticMesh;                                           // 0x02E8 (size: 0x8)
    class UStaticMesh* Mesh;                                                          // 0x02F0 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x2F8

#endif
