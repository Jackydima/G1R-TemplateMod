#ifndef UE4SS_SDK_BP_Orc_Brazier_Wood_HPP
#define UE4SS_SDK_BP_Orc_Brazier_Wood_HPP

class ABP_Orc_Brazier_Wood_C : public ABP_BaseFlame_C
{
    class UCapsuleNavObstacleComponent* CapsuleNavObstacle;                           // 0x0F70 (size: 0x8)
    class UStaticMeshComponent* SM_Orc_Brazier_Wood;                                  // 0x0F78 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0xF80

#endif
