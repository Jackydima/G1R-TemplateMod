#ifndef UE4SS_SDK_PDA_FluxWaveProfile_HPP
#define UE4SS_SDK_PDA_FluxWaveProfile_HPP

class UPDA_FluxWaveProfile_C : public UPrimaryDataAsset
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0030 (size: 0x8)
    class UTexture* WaveProfileForwardMap;                                            // 0x0038 (size: 0x8)
    class UTexture* WaveProfileInverseMap;                                            // 0x0040 (size: 0x8)
    FLinearColor WaveProfileDecode;                                                   // 0x0048 (size: 0x10)
    int32 Frames;                                                                     // 0x0058 (size: 0x4)
    int32 WaveHeight;                                                                 // 0x005C (size: 0x4)

    void GetExternalReferences(TArray<class UTexture*>& Objects);
    void CopyPropertiesToObject(class UObject* Destination, bool& Done);
    void ApplyWaveProfileNiagaraData(class UNiagaraComponent* NiagaraSystem);
    void ApplyWaveProfileMaterialData(TArray<class UMaterialInstanceDynamic*>& Materials);
    void SetWaveProfileData(class UTexture* WaveProfilesForward, class UTexture* WaveProfilesInverse, FLinearColor WaveProfileDecode, int32 Frames, int32 WaveWidth, int32 WaveHeight);
    void ClearExternalReferences();
    void ExecuteUbergraph_PDA_FluxWaveProfile(int32 EntryPoint);
}; // Size: 0x60

#endif
