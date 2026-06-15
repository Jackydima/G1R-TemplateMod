#ifndef UE4SS_SDK_UDS_PlayerOcclusion_HPP
#define UE4SS_SDK_UDS_PlayerOcclusion_HPP

class UUDS_PlayerOcclusion_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    TEnumAsByte<UDS_Occlusion_Mode::Type> Occlusion Mode;                             // 0x00A8 (size: 0x1)
    FVector Occlusion Location;                                                       // 0x00B0 (size: 0x18)
    double Max Interior Occlusion Distance;                                           // 0x00C8 (size: 0x8)
    TEnumAsByte<ETraceTypeQuery> Occlusion Trace Channel;                             // 0x00D0 (size: 0x1)
    TArray<double> Target Occlusion Profile;                                          // 0x00D8 (size: 0x10)
    double Occlusion Update Period;                                                   // 0x00E8 (size: 0x8)
    TArray<double> Current Occlusion Profile;                                         // 0x00F0 (size: 0x10)
    FVector Rain Velocity;                                                            // 0x0100 (size: 0x18)
    bool Calculate Rain Occlusion;                                                    // 0x0118 (size: 0x1)
    bool Running;                                                                     // 0x0119 (size: 0x1)
    bool Acquire Camera Location;                                                     // 0x011A (size: 0x1)
    double Inverted Global Occlusion;                                                 // 0x0120 (size: 0x8)
    double Full Occluded Percent;                                                     // 0x0128 (size: 0x8)
    double Not Occluded Percent;                                                      // 0x0130 (size: 0x8)
    double Water Level;                                                               // 0x0138 (size: 0x8)
    bool Use Water Level;                                                             // 0x0140 (size: 0x1)
    bool Force Full Occlusion;                                                        // 0x0141 (size: 0x1)
    bool Weather;                                                                     // 0x0142 (size: 0x1)
    TEnumAsByte<EDrawDebugTrace::Type> Show Trace Debugs;                             // 0x0143 (size: 0x1)
    TArray<class AActor*> Actors to Ignore;                                           // 0x0148 (size: 0x10)
    TArray<FVector> TraceStarts;                                                      // 0x0158 (size: 0x10)
    TArray<FVector> TraceEnds;                                                        // 0x0168 (size: 0x10)
    TArray<double> NewOcclusionProfile;                                               // 0x0178 (size: 0x10)
    TMap<FVector, int32> TraceGroup;                                                  // 0x0188 (size: 0x50)
    int32 Group Id;                                                                   // 0x01D8 (size: 0x4)
    TMap<int32, int32> HitByGroup;                                                    // 0x01E0 (size: 0x50)
    int32 TotalHits;                                                                  // 0x0230 (size: 0x4)
    double Total Occlusion;                                                           // 0x0238 (size: 0x8)
    FVector RainVector;                                                               // 0x0240 (size: 0x18)
    bool DidRainHit;                                                                  // 0x0258 (size: 0x1)
    bool Finished;                                                                    // 0x0259 (size: 0x1)
    bool UpdateCurrentOcclusionProfile;                                               // 0x025A (size: 0x1)
    bool UseAsyncApproach;                                                            // 0x025B (size: 0x1)

    void Intermediate Get Starting Occlusion Profile();
    void Set Target Fully Unoccluded();
    void Set Target Fully Occluded();
    void Get Occlusion Location();
    void Get Starting Occlusion Profile();
    void Initialize();
    void Update Current Occlusion Profile();
    void Update Target Occlusion Profile();
    void ReceiveTick(float DeltaSeconds);
    void Update Target Occlusion Profile Async();
    void ExecuteUbergraph_UDS_PlayerOcclusion(int32 EntryPoint);
}; // Size: 0x25C

#endif
