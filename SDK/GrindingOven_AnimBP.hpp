#ifndef UE4SS_SDK_GrindingOven_AnimBP_HPP
#define UE4SS_SDK_GrindingOven_AnimBP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_45;                                                          // 0x0004 (size: 0x8)
    FInputScaleBiasClampConstants __StructProperty_46;                                // 0x000C (size: 0x2C)
    float __FloatProperty_47;                                                         // 0x0038 (size: 0x4)
    FName __NameProperty_48;                                                          // 0x003C (size: 0x8)
    int32 __IntProperty_49;                                                           // 0x0044 (size: 0x4)
    TEnumAsByte<ESequenceEvalReinit::Type> __ByteProperty_50;                         // 0x0048 (size: 0x1)
    bool __BoolProperty_51;                                                           // 0x0049 (size: 0x1)
    float __FloatProperty_52;                                                         // 0x004C (size: 0x4)
    class UAnimSequenceBase* __AnimSequenceBase_53;                                   // 0x0050 (size: 0x8)
    bool __BoolProperty_54;                                                           // 0x0058 (size: 0x1)
    EAnimSyncMethod __EnumProperty_55;                                                // 0x0059 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_56;                              // 0x005A (size: 0x1)
    FName __NameProperty_57;                                                          // 0x005C (size: 0x8)
    FName __NameProperty_58;                                                          // 0x0064 (size: 0x8)
    FName __NameProperty_59;                                                          // 0x006C (size: 0x8)
    int32 __IntProperty_60;                                                           // 0x0074 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_61;                                         // 0x0078 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0098 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0118 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0130 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x0160 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_1;     // 0x0190 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult;       // 0x01C0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x01F0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_1;          // 0x0220 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequenceEvaluator;      // 0x0250 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult;            // 0x0280 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine;           // 0x02B0 (size: 0x30)

}; // Size: 0x2E0

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)

}; // Size: 0xC

class UGrindingOven_AnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0xC)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0388 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0390 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0398 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x03B8 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0400 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0428 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0450 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0498 (size: 0x20)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x04B8 (size: 0x40)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x04F8 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0518 (size: 0xC8)
    double AccumulatedTime;                                                           // 0x05E0 (size: 0x8)
    double PlayRate;                                                                  // 0x05E8 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GrindingOven_AnimBP_AnimGraphNode_TransitionResult_4BA882774541B9195C0906B4DD9FFFBA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GrindingOven_AnimBP_AnimGraphNode_TransitionResult_95C2703E4AF88AED56181EAF07982255();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_ReturnToIdle();
    void ExecuteUbergraph_GrindingOven_AnimBP(int32 EntryPoint);
}; // Size: 0x5F0

#endif
