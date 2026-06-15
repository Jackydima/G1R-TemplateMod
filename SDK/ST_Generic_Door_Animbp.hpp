#ifndef UE4SS_SDK_ST_Generic_Door_Animbp_HPP
#define UE4SS_SDK_ST_Generic_Door_Animbp_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_116;                                                         // 0x0004 (size: 0x8)
    FName __NameProperty_117;                                                         // 0x000C (size: 0x8)
    int32 __IntProperty_118;                                                          // 0x0014 (size: 0x4)
    FName __NameProperty_119;                                                         // 0x0018 (size: 0x8)
    int32 __IntProperty_120;                                                          // 0x0020 (size: 0x4)
    FName __NameProperty_121;                                                         // 0x0024 (size: 0x8)
    int32 __IntProperty_122;                                                          // 0x002C (size: 0x4)
    float __FloatProperty_123;                                                        // 0x0030 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_124;                               // 0x0034 (size: 0x2C)
    float __FloatProperty_125;                                                        // 0x0060 (size: 0x4)
    bool __BoolProperty_126;                                                          // 0x0064 (size: 0x1)
    EAnimSyncMethod __EnumProperty_127;                                               // 0x0065 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_128;                             // 0x0066 (size: 0x1)
    FName __NameProperty_129;                                                         // 0x0068 (size: 0x8)
    FName __NameProperty_130;                                                         // 0x0070 (size: 0x8)
    int32 __IntProperty_131;                                                          // 0x0078 (size: 0x4)
    FName __NameProperty_132;                                                         // 0x007C (size: 0x8)
    FName __NameProperty_133;                                                         // 0x0084 (size: 0x8)
    int32 __IntProperty_134;                                                          // 0x008C (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_135;                                        // 0x0090 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00B0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0130 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0148 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_7;     // 0x0178 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_6;     // 0x01A8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_5;     // 0x01D8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_4;     // 0x0208 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_3;     // 0x0238 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_2;     // 0x0268 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_1;     // 0x0298 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult;       // 0x02C8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_3;       // 0x02F8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_4;          // 0x0328 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_2;       // 0x0358 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_3;          // 0x0388 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;       // 0x03B8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_2;          // 0x03E8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x0418 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_1;          // 0x0448 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult;            // 0x0478 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine;           // 0x04A8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x04D8 (size: 0x30)

}; // Size: 0x508

class UST_Generic_Door_Animbp_C : public UDoorAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x03C8 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x03D0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03D8 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x03F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x0420 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0448 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0470 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0498 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x04C0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x04E8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0510 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0538 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x0580 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x05A0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x05E8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0608 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0650 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0670 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x06B8 (size: 0x20)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x06D8 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x06F8 (size: 0xC8)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x07C0 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ST_Generic_Door_Animbp_AnimGraphNode_TransitionResult_4E2B281F44C9D6F12E32BA8CB53B4525();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ST_Generic_Door_Animbp_AnimGraphNode_TransitionResult_5322416D4149A3D33D84E8A8EB16D5D3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ST_Generic_Door_Animbp_AnimGraphNode_TransitionResult_2D068C63449A673F23B19A8438085D25();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ST_Generic_Door_Animbp_AnimGraphNode_TransitionResult_DA8BD11949A32C8F0DB0CEBE9731730F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ST_Generic_Door_Animbp_AnimGraphNode_TransitionResult_4CC6D16F4F0DC289B80288B149F66732();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ST_Generic_Door_Animbp_AnimGraphNode_TransitionResult_C24BA4CB4123904600A778BD8728E6DE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ST_Generic_Door_Animbp_AnimGraphNode_TransitionResult_623461FA43170B5B9FAE5BA9F61EDF16();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ST_Generic_Door_Animbp_AnimGraphNode_TransitionResult_C95CDD8246AFA513724782B8A2B4493A();
    void AnimNotify_EndIdleEvent();
    void ExecuteUbergraph_ST_Generic_Door_Animbp(int32 EntryPoint);
}; // Size: 0x808

#endif
