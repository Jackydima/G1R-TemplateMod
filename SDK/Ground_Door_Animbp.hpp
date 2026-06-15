#ifndef UE4SS_SDK_Ground_Door_Animbp_HPP
#define UE4SS_SDK_Ground_Door_Animbp_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_86;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_87;                                                          // 0x000C (size: 0x8)
    int32 __IntProperty_88;                                                           // 0x0014 (size: 0x4)
    FName __NameProperty_89;                                                          // 0x0018 (size: 0x8)
    int32 __IntProperty_90;                                                           // 0x0020 (size: 0x4)
    float __FloatProperty_91;                                                         // 0x0024 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_92;                                // 0x0028 (size: 0x2C)
    float __FloatProperty_93;                                                         // 0x0054 (size: 0x4)
    bool __BoolProperty_94;                                                           // 0x0058 (size: 0x1)
    EAnimSyncMethod __EnumProperty_95;                                                // 0x0059 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_96;                              // 0x005A (size: 0x1)
    FName __NameProperty_97;                                                          // 0x005C (size: 0x8)
    FName __NameProperty_98;                                                          // 0x0064 (size: 0x8)
    int32 __IntProperty_99;                                                           // 0x006C (size: 0x4)
    FName __NameProperty_100;                                                         // 0x0070 (size: 0x8)
    FName __NameProperty_101;                                                         // 0x0078 (size: 0x8)
    int32 __IntProperty_102;                                                          // 0x0080 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_103;                                        // 0x0088 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00A8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0128 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0140 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_4;     // 0x0170 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_3;     // 0x01A0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_2;     // 0x01D0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_1;     // 0x0200 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult;       // 0x0230 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_2;       // 0x0260 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_3;          // 0x0290 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;       // 0x02C0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_2;          // 0x02F0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x0320 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_1;          // 0x0350 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult;            // 0x0380 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine;           // 0x03B0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x03E0 (size: 0x30)

}; // Size: 0x410

class UGround_Door_Animbp_C : public UDoorAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x03C8 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x03D0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03D8 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x03F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0420 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0448 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0470 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0498 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x04C0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0508 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0528 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0570 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0590 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x05D8 (size: 0x20)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x05F8 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0618 (size: 0xC8)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x06E0 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Ground_Door_Animbp_AnimGraphNode_TransitionResult_840706BF4180FB46B2F467B1DCEE6FE4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Ground_Door_Animbp_AnimGraphNode_TransitionResult_84E443954D6A5B3AA7943BB6E15483A0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Ground_Door_Animbp_AnimGraphNode_TransitionResult_788A23A54AE415D376E7D1ABE798BFDB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Ground_Door_Animbp_AnimGraphNode_TransitionResult_301E99F74D71B1168FCD77BF4A1E8AC9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Ground_Door_Animbp_AnimGraphNode_TransitionResult_A28070B5441FC85112D8888213A3B7AA();
    void AnimNotify_EndIdleEvent();
    void ExecuteUbergraph_Ground_Door_Animbp(int32 EntryPoint);
}; // Size: 0x728

#endif
