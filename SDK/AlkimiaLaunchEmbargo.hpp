#ifndef UE4SS_SDK_AlkimiaLaunchEmbargo_HPP
#define UE4SS_SDK_AlkimiaLaunchEmbargo_HPP

#include "AlkimiaLaunchEmbargo_enums.hpp"

class UAlkimiaLaunchEmbargoSettings : public UDeveloperSettings
{
    bool IsSystemEnabled;                                                             // 0x0038 (size: 0x1)
    double RequestCooldownSeconds;                                                    // 0x0040 (size: 0x8)
    EAlkimiaLaunchEmbargo_FileSource FileSource;                                      // 0x0048 (size: 0x1)
    FString EmbargoFilePath;                                                          // 0x0050 (size: 0x10)
    bool CheckUserNameCaseSensitive;                                                  // 0x0060 (size: 0x1)

    class UAlkimiaLaunchEmbargoSettings* GetMutable();
}; // Size: 0x68

class UAlkimiaLaunchEmbargoSystem : public UGameInstanceSubsystem
{
    FAlkimiaLaunchEmbargoSystem_OnEmbargoStateUpdateCompleteBP m_OnEmbargoStateUpdateCompleteBP; // 0x0048 (size: 0x10)
    void EmbargoStateUpdateCompleteDelegateBP(EAlkimiaLaunchEmbargoState EmbargoState, bool IsEmbargoLifted);

    void StartUpdateEmbargoState();
    void GetLaunchEmbargoState_BPLatent(class UObject* _WorldContextObject, FLatentActionInfo _LatentInfo, EAlkimiaLaunchEmbargoState& _EmbargoState, bool& _IsEmbargoLifted);
    EAlkimiaLaunchEmbargoState GetCachedEmbargoState(bool& _IsLifted);
    void EmbargoStateUpdateCompleteDelegateBP__DelegateSignature(EAlkimiaLaunchEmbargoState EmbargoState, bool IsEmbargoLifted);
}; // Size: 0xA0

#endif
