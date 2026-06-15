#ifndef UE4SS_SDK_BP_CustomWindInteractor_HPP
#define UE4SS_SDK_BP_CustomWindInteractor_HPP

class UBP_CustomWindInteractor_C : public UPrimaryDataAsset
{
    double Time;                                                                      // 0x0030 (size: 0x8)
    double Fade Contrast;                                                             // 0x0038 (size: 0x8)
    bool Use Single Direction;                                                        // 0x0040 (size: 0x1)

    void Apply Settings(class UMaterialInstanceDynamic* Sim Material);
}; // Size: 0x41

#endif
