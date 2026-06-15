#ifndef UE4SS_SDK_BP_Orc_Brazier_Metalic_HPP
#define UE4SS_SDK_BP_Orc_Brazier_Metalic_HPP

class ABP_Orc_Brazier_Metalic_C : public ABP_BaseFlame_C
{
    class UCapsuleNavObstacleComponent* CapsuleNavObstacle;                           // 0x0F70 (size: 0x8)
    class UStaticMeshComponent* SM_Orc_Brazier_Metalic;                               // 0x0F78 (size: 0x8)
    class UMaterialInterface* OverrideMaterial;                                       // 0x0F80 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0xF88

#endif
