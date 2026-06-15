#ifndef UE4SS_SDK_Raven_AnimBP_Ambient_HPP
#define UE4SS_SDK_Raven_AnimBP_Ambient_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_140;                                                         // 0x0004 (size: 0x8)
    FName __NameProperty_141;                                                         // 0x000C (size: 0x8)
    int32 __IntProperty_142;                                                          // 0x0014 (size: 0x4)
    float __FloatProperty_143;                                                        // 0x0018 (size: 0x4)
    FName __NameProperty_144;                                                         // 0x001C (size: 0x8)
    int32 __IntProperty_145;                                                          // 0x0024 (size: 0x4)
    FName __NameProperty_146;                                                         // 0x0028 (size: 0x8)
    int32 __IntProperty_147;                                                          // 0x0030 (size: 0x4)
    FName __NameProperty_148;                                                         // 0x0034 (size: 0x8)
    int32 __IntProperty_149;                                                          // 0x003C (size: 0x4)
    bool __BoolProperty_150;                                                          // 0x0040 (size: 0x1)
    float __FloatProperty_151;                                                        // 0x0044 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_152;                               // 0x0048 (size: 0x2C)
    float __FloatProperty_153;                                                        // 0x0074 (size: 0x4)
    EAnimSyncMethod __EnumProperty_154;                                               // 0x0078 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_155;                             // 0x0079 (size: 0x1)
    FName __NameProperty_156;                                                         // 0x007C (size: 0x8)
    FName __NameProperty_157;                                                         // 0x0084 (size: 0x8)
    int32 __IntProperty_158;                                                          // 0x008C (size: 0x4)
    bool __BoolProperty_159;                                                          // 0x0090 (size: 0x1)
    FName __NameProperty_160;                                                         // 0x0094 (size: 0x8)
    FName __NameProperty_161;                                                         // 0x009C (size: 0x8)
    int32 __IntProperty_162;                                                          // 0x00A4 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_163;                                        // 0x00A8 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00C8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0148 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0160 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_12;    // 0x0190 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_11;    // 0x01C0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_10;    // 0x01F0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_9;     // 0x0220 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_8;     // 0x0250 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_7;     // 0x0280 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_6;     // 0x02B0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_5;     // 0x02E0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_4;     // 0x0310 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_3;     // 0x0340 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_2;     // 0x0370 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_1;     // 0x03A0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_3;       // 0x03D0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_5;          // 0x0400 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_2;       // 0x0430 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_4;          // 0x0460 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;       // 0x0490 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_3;          // 0x04C0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult;       // 0x04F0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_2;          // 0x0520 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x0550 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_1;          // 0x0580 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_RandomPlayer;           // 0x05B0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult;            // 0x05E0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine;           // 0x0610 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x0640 (size: 0x30)

}; // Size: 0x670

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)

}; // Size: 0x8

class URaven_AnimBP_Ambient_C : public UAmbientAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0380 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0388 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0390 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;                     // 0x03B0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;                     // 0x03D8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;                     // 0x0400 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;                      // 0x0428 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;                      // 0x0450 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x0478 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x04A0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x04C8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x04F0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0518 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0540 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0568 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0590 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x05D8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x05F8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x0640 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0660 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x06A8 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x06C8 (size: 0x28)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x06F0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0710 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0758 (size: 0x20)
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;                                // 0x0778 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x07F0 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0810 (size: 0xC8)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x08D8 (size: 0x48)
    bool StartFlying;                                                                 // 0x0920 (size: 0x1)
    double PlayRate;                                                                  // 0x0928 (size: 0x8)
    double InitialPlayrate;                                                           // 0x0930 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Raven_AnimBP_Ambient_AnimGraphNode_TransitionResult_FD6B8630439C56151E4B25B43A3F796F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Raven_AnimBP_Ambient_AnimGraphNode_TransitionResult_D18852F74E36223B47D6C8A327497E63();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Raven_AnimBP_Ambient_AnimGraphNode_TransitionResult_9AD0A04F41B18994635B5D9610055891();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Raven_AnimBP_Ambient_AnimGraphNode_TransitionResult_4E36E7354A7604012E177885476FD0EB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Raven_AnimBP_Ambient_AnimGraphNode_TransitionResult_0852D5F448993E6A82B2EC8EA963D452();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Raven_AnimBP_Ambient_AnimGraphNode_TransitionResult_B3B097C245C28D926C7E5495BE56876F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Raven_AnimBP_Ambient_AnimGraphNode_TransitionResult_674B8D174262094E1EF55194AF21CACC();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_StartFly();
    void ExecuteUbergraph_Raven_AnimBP_Ambient(int32 EntryPoint);
}; // Size: 0x938

#endif
