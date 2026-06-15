#ifndef UE4SS_SDK_GothicModLoader_HPP
#define UE4SS_SDK_GothicModLoader_HPP

#include "GothicModLoader_enums.hpp"

struct FGothicModDependency
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString RequiredVersion;                                                          // 0x0010 (size: 0x10)
    EGothicModVersionComparison VersionComparison;                                    // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FGothicModDesc
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString title;                                                                    // 0x0010 (size: 0x10)
    FString Author;                                                                   // 0x0020 (size: 0x10)
    FString ProjectWebsiteURL;                                                        // 0x0030 (size: 0x10)
    FString Description;                                                              // 0x0040 (size: 0x10)
    TArray<FGothicModDependency> Dependencies;                                        // 0x0050 (size: 0x10)
    FString ModVersion;                                                               // 0x0060 (size: 0x10)
    EGothicModLoadOrder LoadOrder;                                                    // 0x0070 (size: 0x4)
    TArray<FString> ScriptPreprocessorDefines;                                        // 0x0078 (size: 0x10)
    TMap<class FString, class FString> PakMountPoints;                                // 0x0088 (size: 0x50)
    bool bAlwaysEnabled;                                                              // 0x00D8 (size: 0x1)

}; // Size: 0xE0

class UGothicModPlugin : public UObject
{
}; // Size: 0x28

#endif
