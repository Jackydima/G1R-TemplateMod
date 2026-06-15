#ifndef UE4SS_SDK_AngelscriptCode_HPP
#define UE4SS_SDK_AngelscriptCode_HPP

#include "AngelscriptCode_enums.hpp"

struct FCurveKeyHandle
{
}; // Size: 0x4

struct FDefault__ASStruct
{
}; // Size: 0x0

class ALatentAutomationCommandClientExecutor : public AActor
{
    class ULatentAutomationCommand* LatentCommand;                                    // 0x02A8 (size: 0x8)
    bool bCanStartBefore;                                                             // 0x02B0 (size: 0x1)
    bool bCanStartUpdate;                                                             // 0x02B1 (size: 0x1)
    bool bCanStartAfter;                                                              // 0x02B2 (size: 0x1)

    void ServerLatentCommandDescribeOnClient(FString NewDescription);
    void ServerLatentCommandClientReady();
    void ServerLatentCommandClientDone();
    void ServerLatentCommandClientChecked();
    void ServerFail(FString Message);
    void ServerAssertTrue(bool bExpression, FString Message);
    void ServerAssertSame(const class UObject* Expected, const class UObject* Actual, FString Message);
    void ServerAssertNull(const class UObject* Object, FString Message);
    void ServerAssertNotSame(const class UObject* Expected, const class UObject* Actual, FString Message);
    void ServerAssertNotNull(const class UObject* Object, FString Message);
    void ServerAssertFalse(bool bExpression, FString Message);
    void Fail(FString Message);
    void AssertTrue(bool bExpression, FString Message);
    void AssertSame(const class UObject* Expected, const class UObject* Actual, FString Message);
    void AssertNull(const class UObject* Object, FString Message);
    void AssertNotSame(const class UObject* Expected, const class UObject* Actual, FString Message);
    void AssertNotNull(const class UObject* Object, FString Message);
    void AssertFalse(bool bExpression, FString Message);
}; // Size: 0x2B8

class ATestTerminator : public AActor
{
}; // Size: 0x2A0

class UASClass : public UClass
{

    bool IsDeveloperOnly();
    FString GetSourceFilePath();
    FString GetRelativeSourceFilePath();
}; // Size: 0x2D0

class UASFunction : public UFunction
{
}; // Size: 0x188

class UASFunction_ByteArg : public UASFunction
{
}; // Size: 0x188

class UASFunction_ByteArg_JIT : public UASFunction
{
}; // Size: 0x188

class UASFunction_ByteReturn : public UASFunction
{
}; // Size: 0x188

class UASFunction_ByteReturn_JIT : public UASFunction
{
}; // Size: 0x188

class UASFunction_DWordArg : public UASFunction
{
}; // Size: 0x188

class UASFunction_DWordArg_JIT : public UASFunction
{
}; // Size: 0x188

class UASFunction_DWordReturn : public UASFunction
{
}; // Size: 0x188

class UASFunction_DWordReturn_JIT : public UASFunction
{
}; // Size: 0x188

class UASFunction_DoubleArg : public UASFunction
{
}; // Size: 0x188

class UASFunction_DoubleArg_JIT : public UASFunction
{
}; // Size: 0x188

class UASFunction_DoubleReturn : public UASFunction
{
}; // Size: 0x188

class UASFunction_DoubleReturn_JIT : public UASFunction
{
}; // Size: 0x188

class UASFunction_FloatArg : public UASFunction
{
}; // Size: 0x188

class UASFunction_FloatArg_JIT : public UASFunction
{
}; // Size: 0x188

class UASFunction_FloatExtendedToDoubleArg : public UASFunction
{
}; // Size: 0x188

class UASFunction_FloatExtendedToDoubleArg_JIT : public UASFunction
{
}; // Size: 0x188

class UASFunction_FloatExtendedToDoubleReturn : public UASFunction
{
}; // Size: 0x188

class UASFunction_FloatExtendedToDoubleReturn_JIT : public UASFunction
{
}; // Size: 0x188

class UASFunction_FloatReturn : public UASFunction
{
}; // Size: 0x188

class UASFunction_FloatReturn_JIT : public UASFunction
{
}; // Size: 0x188

class UASFunction_JIT : public UASFunction
{
}; // Size: 0x188

class UASFunction_NoParams : public UASFunction
{
}; // Size: 0x188

class UASFunction_NoParams_JIT : public UASFunction
{
}; // Size: 0x188

class UASFunction_NotThreadSafe : public UASFunction
{
}; // Size: 0x188

class UASFunction_NotThreadSafe_JIT : public UASFunction
{
}; // Size: 0x188

class UASFunction_ObjectReturn : public UASFunction
{
}; // Size: 0x188

class UASFunction_ObjectReturn_JIT : public UASFunction
{
}; // Size: 0x188

class UASFunction_QWordArg : public UASFunction
{
}; // Size: 0x188

class UASFunction_QWordArg_JIT : public UASFunction
{
}; // Size: 0x188

class UASFunction_ReferenceArg : public UASFunction
{
}; // Size: 0x188

class UASFunction_ReferenceArg_JIT : public UASFunction
{
}; // Size: 0x188

class UASStruct : public UScriptStruct
{
}; // Size: 0xE0

class UAngelscriptActorLibrary : public UObject
{

    void SetbRunConstructionScriptOnDrag(class AActor* Actor, bool Value);
    void SetActorTransform(class AActor* Actor, const FTransform& NewTransform);
    void SetActorRotationQuat(class AActor* Actor, const FQuat& NewRotation);
    void SetActorRotation(class AActor* Actor, const FRotator& NewRotation);
    void SetActorRelativeTransform(class AActor* Actor, const FTransform& NewRelativeTransform);
    void SetActorRelativeRotationQuat(class AActor* Actor, const FQuat& NewRelativeRotation);
    void SetActorRelativeRotation(class AActor* Actor, const FRotator& NewRelativeRotation);
    void SetActorRelativeLocation(class AActor* Actor, const FVector& NewRelativeLocation);
    void SetActorQuat(class AActor* Actor, const FQuat& NewRotation);
    void SetActorLocationAndRotationQuat(class AActor* Actor, const FVector& NewLocation, const FQuat& NewRotation, bool bTeleport);
    void SetActorLocationAndRotation(class AActor* Actor, const FVector& NewLocation, const FRotator& NewRotation, bool bTeleport);
    void SetActorLocation(class AActor* Actor, const FVector& NewLocation);
    FTransform GetActorRelativeTransform(const class AActor* Actor);
    FRotator GetActorRelativeRotation(const class AActor* Actor);
    FVector GetActorRelativeLocation(const class AActor* Actor);
    FQuat GetActorQuat(const class AActor* Actor);
    void AttachToComponent(class AActor* Actor, class USceneComponent* Parent, FName SocketName, EAttachmentRule AttachmentRule);
    void AttachToActor(class AActor* Actor, class AActor* ParentActor, FName SocketName, EAttachmentRule AttachmentRule);
    void AddActorWorldTransform(class AActor* Actor, const FTransform& DeltaTransform);
    void AddActorWorldRotationQuat(class AActor* Actor, const FQuat& DeltaRotation);
    void AddActorWorldRotation(class AActor* Actor, const FRotator& DeltaRotation);
    void AddActorWorldOffset(class AActor* Actor, const FVector& DeltaLocation);
    void AddActorLocalTransform(class AActor* Actor, const FTransform& DeltaTransform);
    void AddActorLocalRotationQuat(class AActor* Actor, const FQuat& DeltaRotation);
    void AddActorLocalRotation(class AActor* Actor, const FRotator& DeltaRotation);
    void AddActorLocalOffset(class AActor* Actor, const FVector& DeltaLocation);
}; // Size: 0x28

class UAngelscriptAllScriptRootsCommandlet : public UCommandlet
{
}; // Size: 0x80

class UAngelscriptComponentLibrary : public UObject
{

    void SetWorldTransform(class USceneComponent* Component, const FTransform& NewTransform);
    void SetWorldRotationQuat(class USceneComponent* Component, const FQuat& NewRotation);
    void SetWorldRotation(class USceneComponent* Component, const FRotator& NewRotation);
    void SetWorldLocationAndRotationQuat(class USceneComponent* Component, const FVector& NewLocation, const FQuat& NewRotation);
    void SetWorldLocationAndRotation(class USceneComponent* Component, const FVector& NewLocation, const FRotator& NewRotation);
    void SetWorldLocation(class USceneComponent* Component, const FVector& NewLocation);
    void SetRelativeTransform(class USceneComponent* Component, const FTransform& NewTransform);
    void SetRelativeRotationQuat(class USceneComponent* Component, const FQuat& NewRotation);
    void SetRelativeRotation(class USceneComponent* Component, const FRotator& NewRotation);
    void SetRelativeLocationAndRotationQuat(class USceneComponent* Component, const FVector& NewLocation, const FQuat& NewRotation);
    void SetRelativeLocationAndRotation(class USceneComponent* Component, const FVector& NewLocation, const FRotator& NewRotation);
    void SetRelativeLocation(class USceneComponent* Component, const FVector& NewLocation);
    void SetComponentQuat(class USceneComponent* Component, const FQuat& NewRotation);
    void SetbVisualizeComponent(class USceneComponent* Component, bool bVisualize);
    bool IsAttachedTo_Actor(const class USceneComponent* Component, const class AActor* CheckActor);
    bool IsAttachedTo(const class USceneComponent* Component, const class USceneComponent* CheckComponent);
    FQuat GetSocketQuaternion(class USceneComponent* Component, const FName& SocketName);
    FVector GetShapeCenter(const class USceneComponent* Component);
    FVector GetRelativeScale3D(const class USceneComponent* Component);
    FRotator GetRelativeRotation(const class USceneComponent* Component);
    FVector GetRelativeLocation(const class USceneComponent* Component);
    FQuat GetComponentQuat(const class USceneComponent* Component);
    FBoxSphereBounds GetBounds(const class USceneComponent* Component);
    void AttachToComponent(class USceneComponent* Component, class USceneComponent* Parent, const FName& SocketName, EAttachmentRule AttachmentRule);
    void AddWorldTransform(class USceneComponent* Component, const FTransform& DeltaTransform);
    void AddWorldRotationQuat(class USceneComponent* Component, const FQuat& DeltaRotation);
    void AddWorldRotation(class USceneComponent* Component, const FRotator& DeltaRotation);
    void AddWorldOffset(class USceneComponent* Component, const FVector& DeltaLocation);
    void AddRelativeRotationQuat(class USceneComponent* Component, const FQuat& DeltaRotation);
    void AddRelativeRotation(class USceneComponent* Component, const FRotator& DeltaRotation);
    void AddRelativeLocation(class USceneComponent* Component, const FVector& DeltaLocation);
    void AddLocalTransform(class USceneComponent* Component, const FTransform& DeltaTransform);
    void AddLocalRotationQuat(class USceneComponent* Component, const FQuat& DeltaRotation);
    void AddLocalRotation(class USceneComponent* Component, const FRotator& DeltaRotation);
    void AddLocalOffset(class USceneComponent* Component, const FVector& DeltaLocation);
}; // Size: 0x28

class UAngelscriptFQuat4fLibrary : public UObject
{

    FQuat4f MakeFromZY(const FVector3f& ZAxis, const FVector3f& YAxis);
    FQuat4f MakeFromZX(const FVector3f& ZAxis, const FVector3f& XAxis);
    FQuat4f MakeFromZ(const FVector3f& ZAxis);
    FQuat4f MakeFromYZ(const FVector3f& YAxis, const FVector3f& ZAxis);
    FQuat4f MakeFromYX(const FVector3f& YAxis, const FVector3f& XAxis);
    FQuat4f MakeFromY(const FVector3f& YAxis);
    FQuat4f MakeFromXZ(const FVector3f& XAxis, const FVector3f& ZAxis);
    FQuat4f MakeFromXY(const FVector3f& XAxis, const FVector3f& YAxis);
    FQuat4f MakeFromX(const FVector3f& XAxis);
    FQuat4f MakeFromAxes(const FVector3f& Forward, const FVector3f& Right, const FVector3f& Up);
}; // Size: 0x28

class UAngelscriptFQuatLibrary : public UObject
{

    FQuat MakeFromZY(const FVector& ZAxis, const FVector& YAxis);
    FQuat MakeFromZX(const FVector& ZAxis, const FVector& XAxis);
    FQuat MakeFromZ(const FVector& ZAxis);
    FQuat MakeFromYZ(const FVector& YAxis, const FVector& ZAxis);
    FQuat MakeFromYX(const FVector& YAxis, const FVector& XAxis);
    FQuat MakeFromY(const FVector& YAxis);
    FQuat MakeFromXZ(const FVector& XAxis, const FVector& ZAxis);
    FQuat MakeFromXY(const FVector& XAxis, const FVector& YAxis);
    FQuat MakeFromX(const FVector& XAxis);
    FQuat MakeFromAxes(const FVector& Forward, const FVector& Right, const FVector& Up);
}; // Size: 0x28

class UAngelscriptFRotator3fLibrary : public UObject
{

    FRotator3f MakeFromAxes(const FVector3f& Forward, const FVector3f& Right, const FVector3f& Up);
    FVector3f GetUpVector(const FRotator3f& Rotator);
    FVector3f GetRightVector(const FRotator3f& Rotator);
    FVector3f GetForwardVector(const FRotator3f& Rotator);
    FRotator3f Compose(const FRotator3f& A, const FRotator3f& B);
    float AngularDistance(const FRotator3f& A, const FRotator3f& B);
}; // Size: 0x28

class UAngelscriptFRotatorLibrary : public UObject
{

    FRotator MakeFromAxes(const FVector& Forward, const FVector& Right, const FVector& Up);
    FVector GetUpVector(const FRotator& Rotator);
    FVector GetRightVector(const FRotator& Rotator);
    FVector GetForwardVector(const FRotator& Rotator);
    FRotator Compose(const FRotator& A, const FRotator& B);
    double AngularDistance(const FRotator& A, const FRotator& B);
}; // Size: 0x28

class UAngelscriptFTransform3fLibrary : public UObject
{

    FRotator3f TransformRotation(const FTransform3f& Transform, const FRotator3f& R);
    void SetRotation(FTransform3f& Transform, const FRotator3f& NewRotation);
    FTransform3f MakeFromZY(const FVector3f& ZAxis, const FVector3f& YAxis);
    FTransform3f MakeFromZX(const FVector3f& ZAxis, const FVector3f& XAxis);
    FTransform3f MakeFromYZ(const FVector3f& YAxis, const FVector3f& ZAxis);
    FTransform3f MakeFromYX(const FVector3f& YAxis, const FVector3f& XAxis);
    FTransform3f MakeFromXZ(const FVector3f& XAxis, const FVector3f& ZAxis);
    FTransform3f MakeFromXY(const FVector3f& XAxis, const FVector3f& YAxis);
    FRotator3f InverseTransformRotation(const FTransform3f& Transform, const FRotator3f& R);
}; // Size: 0x28

class UAngelscriptFTransformLibrary : public UObject
{

    FRotator TransformRotation(const FTransform& Transform, const FRotator& R);
    void SetRotation(FTransform& Transform, const FRotator& NewRotation);
    FTransform MakeFromZY(const FVector& ZAxis, const FVector& YAxis);
    FTransform MakeFromZX(const FVector& ZAxis, const FVector& XAxis);
    FTransform MakeFromYZ(const FVector& YAxis, const FVector& ZAxis);
    FTransform MakeFromYX(const FVector& YAxis, const FVector& XAxis);
    FTransform MakeFromXZ(const FVector& XAxis, const FVector& ZAxis);
    FTransform MakeFromXY(const FVector& XAxis, const FVector& YAxis);
    FRotator InverseTransformRotation(const FTransform& Transform, const FRotator& R);
    void BlendWith(FTransform& Transform, const FTransform& OtherAtom, double Alpha);
    void Blend(FTransform& Transform, const FTransform& Atom1, const FTransform& Atom2, double Alpha);
}; // Size: 0x28

class UAngelscriptFVector3fMixinLibrary : public UObject
{

    FString ToColorString(const FVector3f& Vector);
    float SizeSquared2D(const FVector3f& Vector, const FVector3f& UpDirection);
    float Size2D(const FVector3f& Vector, const FVector3f& UpDirection);
    FVector3f PointPlaneProject(const FVector3f& Vector, const FVector3f& PlaneBase, const FVector3f& PlaneNormal);
    float DistSquared2D(const FVector3f& Vector, const FVector3f& Other, const FVector3f& UpDirection);
    float Dist2D(const FVector3f& Vector, const FVector3f& Other, const FVector3f& UpDirection);
    FVector3f ConstrainToPlane(const FVector3f& Vector, const FVector3f& PlaneUp);
    FVector3f ConstrainToDirection(const FVector3f& Vector, const FVector3f& Direction);
    float AngularDistanceForNormals(const FVector3f& A, const FVector3f& B);
    float AngularDistance(const FVector3f& A, const FVector3f& B);
}; // Size: 0x28

class UAngelscriptFVectorMixinLibrary : public UObject
{

    FString ToColorString(const FVector& Vector);
    double SizeSquared2D(const FVector& Vector, const FVector& UpDirection);
    double Size2D(const FVector& Vector, const FVector& UpDirection);
    FVector PointPlaneProject(const FVector& Vector, const FVector& PlaneBase, const FVector& PlaneNormal);
    FVector MoveTowards(const FVector& Vector, const FVector& Target, double StepSize);
    double DistSquared2D(const FVector& Vector, const FVector& Other, const FVector& UpDirection);
    double Dist2D(const FVector& Vector, const FVector& Other, const FVector& UpDirection);
    FVector ConstrainToPlane(const FVector& Vector, const FVector& PlaneUp);
    FVector ConstrainToDirection(const FVector& Vector, const FVector& Direction);
    double AngularDistanceForNormals(const FVector& A, const FVector& B);
    double AngularDistance(const FVector& A, const FVector& B);
}; // Size: 0x28

class UAngelscriptHitResultLibrary : public UObject
{

    void SetComponent(FHitResult& HitResult, class UPrimitiveComponent* Component);
    void SetbStartPenetrating(FHitResult& HitResult, bool bStartPenetrating);
    void SetBlockingHit(FHitResult& HitResult, bool bIsBlocking);
    void SetbBlockingHit(FHitResult& HitResult, bool bIsBlocking);
    void SetActor(FHitResult& HitResult, class AActor* Actor);
    void Reset(FHitResult& HitResult);
    class UPhysicalMaterial* GetPhysMaterial(const FHitResult& HitResult);
    class UPrimitiveComponent* GetComponent(const FHitResult& HitResult);
    bool GetbStartPenetrating(const FHitResult& HitResult);
    bool GetbBlockingHit(const FHitResult& HitResult);
    class AActor* GetActor(const FHitResult& HitResult);
}; // Size: 0x28

class UAngelscriptMathLibrary : public UObject
{

    uint32 WrapUInt(uint32 X, uint32 min, uint32 max);
    int32 WrapInt(int32 X, int32 min, int32 max);
    uint32 WrapIndexUInt(uint32 Value, uint32 min, uint32 max);
    int32 WrapIndex(int32 Value, int32 min, int32 max);
    float WrapFloat(float X, float min, float max);
    double WrapDouble(double X, double min, double max);
    FTransform TInterpTo(const FTransform& Current, const FTransform& Target, float DeltaTime, float InterpSpeed);
    void SinCos_64(double& ScalarSin, double& ScalarCos, double Value);
    void SinCos_32(float& ScalarSin, float& ScalarCos, float Value);
    FRotator RInterpShortestPathTo(const FRotator& Current, const FRotator& Target, float DeltaTime, float InterpSpeed);
    FRotator RInterpConstantShortestPathTo(const FRotator& Current, const FRotator& Target, float DeltaTime, float InterpSpeedDegrees);
    double Modf_64(double InValue, double& OutIntPart);
    float Modf_32(float InValue, float& OutIntPart);
    bool LineBoxIntersection(const FBox& Box, const FVector& Start, const FVector& End);
    FRotator LerpShortestPath(const FRotator& A, const FRotator& B, double Alpha);
}; // Size: 0x28

class UAngelscriptScriptLibrary : public UObject
{

    FString GetNamespaceOfGlobalVariableBeingInitialized();
    FString GetNameOfGlobalVariableBeingInitialized();
    FString GetModuleNameOfGlobalVariableBeingInitialized();
}; // Size: 0x28

class UAngelscriptSettings : public UObject
{
    TArray<FString> PreprocessorFlags;                                                // 0x0028 (size: 0x10)
    bool bAllowImplicitPropertyAccessors;                                             // 0x0038 (size: 0x1)
    bool bAutomaticImports;                                                           // 0x0039 (size: 0x1)
    bool bWarnOnManualImportStatements;                                               // 0x003A (size: 0x1)
    EAngelscriptMathNamespace MathNamespace;                                          // 0x003B (size: 0x1)
    bool bDefaultFunctionBlueprintCallable;                                           // 0x003C (size: 0x1)
    EAngelscriptPropertyEditSpecifier DefaultPropertyEditSpecifier;                   // 0x003D (size: 0x1)
    EAngelscriptPropertyEditSpecifier DefaultPropertyEditSpecifierForStructs;         // 0x003E (size: 0x1)
    EAngelscriptPropertyBlueprintSpecifier DefaultPropertyBlueprintSpecifier;         // 0x003F (size: 0x1)
    bool bMarkNonUpropertyPropertiesAsTransient;                                      // 0x0040 (size: 0x1)
    EAngelscriptStaticClassMode StaticClassDeprecation;                               // 0x0041 (size: 0x1)
    bool bUseScriptNameForBlueprintLibraryNamespaces;                                 // 0x0042 (size: 0x1)
    bool bAllowRawConstructorsForComponentsAndActors;                                 // 0x0043 (size: 0x1)
    bool bForceConstWithinDevelopmentOnlyFunctions;                                   // 0x0044 (size: 0x1)
    TArray<FString> BlueprintLibraryNamespacePrefixesToStrip;                         // 0x0048 (size: 0x10)
    TArray<FString> BlueprintLibraryNamespaceSuffixesToStrip;                         // 0x0058 (size: 0x10)
    float EditorMaximumScriptExecutionTime;                                           // 0x0068 (size: 0x4)
    bool bScriptFloatIsFloat64;                                                       // 0x006C (size: 0x1)
    bool bTreatWarningsAsErrors;                                                      // 0x006D (size: 0x1)
    bool bDeprecateDoubleType;                                                        // 0x006E (size: 0x1)
    bool bWarnOnFloatConstantsForDoubleValues;                                        // 0x006F (size: 0x1)
    bool bWarnIntegerDivision;                                                        // 0x0070 (size: 0x1)
    bool bErrorWhenUsingInvalidWorldContext;                                          // 0x0071 (size: 0x1)
    bool bWarnOnUnusedReturnValueForConstMethods;                                     // 0x0072 (size: 0x1)
    bool bWarnOnImplicitSignedUnsignedConversion;                                     // 0x0073 (size: 0x1)
    bool bErrorOnIncorrectEditorOnlyCode;                                             // 0x0074 (size: 0x1)
    bool bWarnOnDivergentComparisonOperatorOverloads;                                 // 0x0075 (size: 0x1)
    bool bWarnOnIncrementDecrementInComplexExpression;                                // 0x0076 (size: 0x1)
    TArray<FName> AdditionalEditorOnlyScriptPackageNames;                             // 0x0078 (size: 0x10)
    TArray<FString> NeverJITModules;                                                  // 0x0088 (size: 0x10)
    TArray<FString> NeverJITFunctionNames;                                            // 0x0098 (size: 0x10)
    TArray<FString> NeverJITClassNames;                                               // 0x00A8 (size: 0x10)
    uint32 NeverJITFunctionsLargerThan;                                               // 0x00B8 (size: 0x4)

}; // Size: 0xC0

class UAngelscriptTestCommandlet : public UCommandlet
{
}; // Size: 0x80

class UAngelscriptTestSettings : public UDeveloperSettings
{
    bool bEnableTestDiscovery;                                                        // 0x0038 (size: 0x1)
    FString IntegrationTestMapRoot;                                                   // 0x0040 (size: 0x10)
    int32 GarbageCollectEveryNTests;                                                  // 0x0050 (size: 0x4)
    TSoftClassPtr<UGameInstance> UnitTestGameInstanceClass;                           // 0x0058 (size: 0x28)
    bool bEnableCodeCoverage;                                                         // 0x0080 (size: 0x1)
    TArray<FString> CoverageExcludePatterns;                                          // 0x0088 (size: 0x10)
    bool bEnableDebugBreaksInTests;                                                   // 0x0098 (size: 0x1)
    FString IntegrationTestNamingConvention;                                          // 0x00A0 (size: 0x10)
    FString UnitTestNamingConvention;                                                 // 0x00B0 (size: 0x10)
    bool bEnableNetworkEmulation;                                                     // 0x00D0 (size: 0x1)
    int32 InPacketsMinLatency;                                                        // 0x00D4 (size: 0x4)
    int32 InPacketsMaxLatency;                                                        // 0x00D8 (size: 0x4)
    int32 InPacketsPacketLossPercentage;                                              // 0x00DC (size: 0x4)
    int32 OutPacketsMinLatency;                                                       // 0x00E0 (size: 0x4)
    int32 OutPacketsMaxLatency;                                                       // 0x00E4 (size: 0x4)
    int32 OutPacketsPacketLossPercentage;                                             // 0x00E8 (size: 0x4)

}; // Size: 0xF0

class UAngelscriptTestUserSettings : public UDeveloperSettings
{
    bool bRunUnitTestsOnHotReload;                                                    // 0x0038 (size: 0x1)
    int32 LimitNModulesToTestOnHotReload;                                             // 0x003C (size: 0x4)

}; // Size: 0x40

class UAngelscriptWidgetMixinLibrary : public UObject
{

    FWidgetTransform GetRenderTransform(class UWidget* Widget);
}; // Size: 0x28

class UAngelscriptWorldLibrary : public UObject
{

    TArray<class ULevelStreaming*> GetStreamingLevels(const class UWorld* World);
}; // Size: 0x28

class UAssetManagerMixinLibrary : public UObject
{

    void GetPrimaryAssetTypeInfoList(class UAssetManager* AssetManager, TArray<FPrimaryAssetTypeInfo>& AssetTypeInfoList);
    bool GetPrimaryAssetTypeInfo(class UAssetManager* AssetManager, FPrimaryAssetType PrimaryAssetType, FPrimaryAssetTypeInfo& AssetTypeInfo);
    FPrimaryAssetRules GetPrimaryAssetRules(class UAssetManager* AssetManager, const FPrimaryAssetId& PrimaryAssetId);
    class UObject* GetPrimaryAssetObject(class UAssetManager* AssetManager, const FPrimaryAssetId& PrimaryAssetId);
    bool GetPrimaryAssetIdList(class UAssetManager* AssetManager, FPrimaryAssetType PrimaryAssetType, TArray<FPrimaryAssetId>& PrimaryAssetIdList);
    FPrimaryAssetId GetPrimaryAssetIdForObject(class UAssetManager* AssetManager, class UObject* Object);
    bool GetPrimaryAssetDataList(class UAssetManager* AssetManager, FPrimaryAssetType PrimaryAssetType, TArray<FAssetData>& AssetDataList);
    bool GetPrimaryAssetData(class UAssetManager* AssetManager, const FPrimaryAssetId& PrimaryAssetId, FAssetData& AssetData);
}; // Size: 0x28

class UDefault__ASClass
{
}; // Size: 0x0

class UFakeNetDriver : public UNetDriver
{
}; // Size: 0x8D0

class UGameplayLibrary : public UObject
{

    void AsyncSaveGameToSlot(class USaveGame* SaveGameObject, FString SlotName, const int32 UserIndex, FAsyncSaveGameToSlotDelegate Delegate);
    void AsyncLoadGameFromSlot(FString SlotName, const int32 UserIndex, FAsyncLoadGameFromSlotDelegate Delegate);
}; // Size: 0x28

class UGameplayTagContainerMixinLibrary : public UObject
{

    void RemoveTags(FGameplayTagContainer& GameplayTagContainer, FGameplayTagContainer TagsToRemove);
    bool RemoveTag(FGameplayTagContainer& GameplayTagContainer, const FGameplayTag& TagToRemove);
    int32 Num(const FGameplayTagContainer& GameplayTagContainer);
    bool MatchesQuery(const FGameplayTagContainer& GameplayTagContainer, const FGameplayTagQuery& Query);
    FGameplayTag Last(const FGameplayTagContainer& GameplayTagContainer);
    bool IsValid(const FGameplayTagContainer& GameplayTagContainer);
    bool IsEmpty(const FGameplayTagContainer& GameplayTagContainer);
    bool HasTagExact(const FGameplayTagContainer& GameplayTagContainer, const FGameplayTag& TagToCheck);
    bool HasTag(const FGameplayTagContainer& GameplayTagContainer, const FGameplayTag& TagToCheck);
    bool HasAnyExact(const FGameplayTagContainer& GameplayTagContainer, const FGameplayTagContainer& ContainerToCheck);
    bool HasAny(const FGameplayTagContainer& GameplayTagContainer, const FGameplayTagContainer& ContainerToCheck);
    bool HasAllExact(const FGameplayTagContainer& GameplayTagContainer, const FGameplayTagContainer& ContainerToCheck);
    bool HasAll(const FGameplayTagContainer& GameplayTagContainer, const FGameplayTagContainer& ContainerToCheck);
    FGameplayTagContainer GetGameplayTagParents(const FGameplayTagContainer& GameplayTagContainer);
    FGameplayTag First(const FGameplayTagContainer& GameplayTagContainer);
    FGameplayTagContainer FilterExact(const FGameplayTagContainer& GameplayTagContainer, const FGameplayTagContainer& OtherContainer);
    FGameplayTagContainer Filter(const FGameplayTagContainer& GameplayTagContainer, const FGameplayTagContainer& OtherContainer);
    void AddTagFast(FGameplayTagContainer& GameplayTagContainer, const FGameplayTag& TagToAdd);
    void AddTag(FGameplayTagContainer& GameplayTagContainer, const FGameplayTag& TagToAdd);
    void AddLeafTag(FGameplayTagContainer& GameplayTagContainer, const FGameplayTag& TagToAdd);
}; // Size: 0x28

class UGameplayTagMixinLibrary : public UObject
{

    FGameplayTag RequestDirectParent(const FGameplayTag& GameplayTag);
    bool MatchesTagExact(const FGameplayTag& GameplayTag, const FGameplayTag& TagToCheck);
    int32 MatchesTagDepth(const FGameplayTag& GameplayTag, const FGameplayTag& TagToCheck);
    bool MatchesTag(const FGameplayTag& GameplayTag, const FGameplayTag& TagToCheck);
    bool MatchesAnyExact(const FGameplayTag& GameplayTag, const FGameplayTagContainer& ContainerToCheck);
    bool MatchesAny(const FGameplayTag& GameplayTag, const FGameplayTagContainer& ContainerToCheck);
    bool IsValid(const FGameplayTag& GameplayTag);
    FGameplayTagContainer GetSingleTagContainer(const FGameplayTag& GameplayTag);
    FGameplayTagContainer GetGameplayTagParents(const FGameplayTag& GameplayTag);
}; // Size: 0x28

class UGameplayTagQueryMixinLibrary : public UObject
{

    bool Matches(const FGameplayTagQuery& GameplayTagQuery, const FGameplayTagContainer& Tags);
    bool IsEmpty(const FGameplayTagQuery& GameplayTagQuery);
    FString GetDescription(const FGameplayTagQuery& GameplayTagQuery);
}; // Size: 0x28

class UInputComponentScriptMixinLibrary : public UObject
{

    void BindVectorAxis(class UInputComponent* Component, const FKey& AxisKey, const FBindVectorAxisDelegate& Delegate);
    void BindKey(class UInputComponent* Component, const FKey& Key, TEnumAsByte<EInputEvent> KeyEvent, const FBindKeyDelegate& Delegate, bool bConsumeInput);
    void BindChord(class UInputComponent* Component, const FInputChord& Chord, TEnumAsByte<EInputEvent> KeyEvent, const FBindChordDelegate& Delegate);
    void BindAxisKey(class UInputComponent* Component, const FName& AxisKey, const FBindAxisKeyDelegate& Delegate);
    void BindAxis(class UInputComponent* Component, const FName& AxisName, const FBindAxisDelegate& Delegate);
    void BindAction(class UInputComponent* Component, const FName& ActionName, TEnumAsByte<EInputEvent> KeyEvent, const FBindActionDelegate& Delegate);
}; // Size: 0x28

class ULatentAutomationCommand : public UObject
{
    class UWorld* World;                                                              // 0x0028 (size: 0x8)
    bool bAllowTimeout;                                                               // 0x0030 (size: 0x1)
    bool bAlsoRunOnClient;                                                            // 0x0031 (size: 0x1)

    bool UpdateOnClient();
    bool Update();
    bool HasAuthority();
    FString DescribeOnClient();
    FString Describe();
    bool BeforeOnClient();
    void Before();
    bool AfterOnClient();
    void After();
}; // Size: 0x48

class UObjectInWorld : public UObject
{
    class UWorld* World;                                                              // 0x0028 (size: 0x8)

    void SetWorldContext(class UObject* WorldContext);
    void SetWorld(class UWorld* InWorld);
    void DestroyObject();
}; // Size: 0x30

class UObjectTickable : public UObject
{
    class UWorld* World;                                                              // 0x0030 (size: 0x8)
    bool bTickWhilePaused;                                                            // 0x0038 (size: 0x1)

    void SetWorldContext(class UObject* WorldContext);
    void SetWorld(class UWorld* InWorld);
    void DestroyObject();
    void BP_Tick(float DeltaTime);
}; // Size: 0x40

class UPlayerControllerInputScriptMixinLibrary : public UObject
{

    void PushInputComponent(class APlayerController* PlayerController, class UInputComponent* Component);
    void PopInputComponent(class APlayerController* PlayerController, class UInputComponent* Component);
    class UPlayerInput* GetPlayerInput(class APlayerController* PlayerController);
}; // Size: 0x28

class UPlayerInputScriptMixinLibrary : public UObject
{

    void SetMouseSensitivity(class UPlayerInput* PlayerInput, const float Sensitivity);
    void RemoveAxisMapping(class UPlayerInput* PlayerInput, const FInputAxisKeyMapping& KeyMapping);
    void RemoveActionMapping(class UPlayerInput* PlayerInput, const FInputActionKeyMapping& KeyMapping);
    void InvertAxis(class UPlayerInput* PlayerInput, const FName AxisName);
    float GetMouseSensitivityY(class UPlayerInput* PlayerInput);
    float GetMouseSensitivityX(class UPlayerInput* PlayerInput);
    TArray<FInputAxisKeyMapping> GetKeysForAxis(class UPlayerInput* PlayerInput, const FName AxisName);
    TArray<FInputActionKeyMapping> GetKeysForAction(class UPlayerInput* PlayerInput, const FName ActionName);
    TArray<FInputAxisKeyMapping> GetEngineDefinedAxisMappings(class UPlayerInput* PlayerInput, const FName AxisName);
    TArray<FInputActionKeyMapping> GetEngineDefinedActionMappings(class UPlayerInput* PlayerInput, const FName ActionName);
    void ForceRebuildingKeyMaps(class UPlayerInput* PlayerInput, const bool bRestoreDefaults);
    void AddAxisMapping(class UPlayerInput* PlayerInput, const FInputAxisKeyMapping& KeyMapping);
    void AddActionMapping(class UPlayerInput* PlayerInput, const FInputActionKeyMapping& KeyMapping);
}; // Size: 0x28

class URuntimeFloatCurveMixinLibrary : public UObject
{

    void SetPreInfinityExtrap(class UCurveFloat* Curve, TEnumAsByte<ERichCurveExtrapolation> Extrapolation);
    void SetPostInfinityExtrap(class UCurveFloat* Curve, TEnumAsByte<ERichCurveExtrapolation> Extrapolation);
    void SetKeyUserTangentWeights(class UCurveFloat* Curve, FCurveKeyHandle KeyHandle, float ArriveTangentWeight, float LeaveTangentWeight);
    void SetKeyUserTangents(class UCurveFloat* Curve, FCurveKeyHandle KeyHandle, float ArriveTangent, float LeaveTangent);
    void SetKeyTangentWeightMode(class UCurveFloat* Curve, FCurveKeyHandle KeyHandle, TEnumAsByte<ERichCurveTangentWeightMode> NewTangentWeightMode, bool bAutoSetTangents);
    void SetKeyTangentMode(class UCurveFloat* Curve, FCurveKeyHandle KeyHandle, TEnumAsByte<ERichCurveTangentMode> NewTangentMode, bool bAutoSetTangents);
    void SetKeyInterpMode(class UCurveFloat* Curve, FCurveKeyHandle KeyHandle, TEnumAsByte<ERichCurveInterpMode> NewInterpMode, bool bAutoSetTangents);
    void SetDefaultValue(class UCurveFloat* Curve, float DefaultValue);
    void GetValueRange_Double(const FRuntimeFloatCurve& Target, double& MinValue, double& MaxValue);
    void GetValueRange(const FRuntimeFloatCurve& Target, float& MinValue, float& MaxValue);
    void GetTimeRange_Double(const FRuntimeFloatCurve& Target, double& MinTime, double& MaxTime);
    void GetTimeRange(const FRuntimeFloatCurve& Target, float& MinTime, float& MaxTime);
    int32 GetNumKeys(const FRuntimeFloatCurve& Target);
    float GetFloatValue(const FRuntimeFloatCurve& Target, const float InTime, const float DefaultValue);
    bool Equals(const FRuntimeFloatCurve& Target, const FRuntimeFloatCurve& Other);
    void AutoSetTangents(class UCurveFloat* Curve);
    FCurveKeyHandle AddSmartAutoCurveKey(class UCurveFloat* Curve, float InTime, float InValue);
    FCurveKeyHandle AddLinearCurveKey(class UCurveFloat* Curve, float InTime, float InValue);
    void AddDefaultKey(FRuntimeFloatCurve& Target, float InTime, float InValue);
    FCurveKeyHandle AddCurveKeyWeightedLeaveTangent(class UCurveFloat* Curve, float InTime, float InValue, bool bBrokenTangent, float ArriveTangent, float LeaveTangent, float ArriveTangentWeight, float LeaveTangentWeight);
    FCurveKeyHandle AddCurveKeyWeightedBothTangent(class UCurveFloat* Curve, float InTime, float InValue, bool bBrokenTangent, float ArriveTangent, float LeaveTangent, float ArriveTangentWeight, float LeaveTangentWeight);
    FCurveKeyHandle AddCurveKeyWeightedArriveTangent(class UCurveFloat* Curve, float InTime, float InValue, bool bBrokenTangent, float ArriveTangent, float LeaveTangent, float ArriveTangentWeight, float LeaveTangentWeight);
    FCurveKeyHandle AddCurveKeyTangent(class UCurveFloat* Curve, float InTime, float InValue, float Tangent);
    FCurveKeyHandle AddCurveKeyBrokenTangent(class UCurveFloat* Curve, float InTime, float InValue, float ArriveTangent, float LeaveTangent);
    FCurveKeyHandle AddCurveKey(class UCurveFloat* Curve, float InTime, float InValue);
    FCurveKeyHandle AddConstantCurveKey(class UCurveFloat* Curve, float InTime, float InValue);
    FCurveKeyHandle AddAutoCurveKey(class UCurveFloat* Curve, float InTime, float InValue);
}; // Size: 0x28

class UScriptEngineSubsystem : public UEngineSubsystem
{
    bool bIsTickableWhenPaused;                                                       // 0x0038 (size: 0x1)
    bool bIsTickableInEditor;                                                         // 0x0039 (size: 0x1)

    void BP_Tick(float DeltaTime);
    bool BP_ShouldCreateSubsystem(class UObject* Outer);
    void BP_Initialize();
    void BP_Deinitialize();
}; // Size: 0x40

class UScriptGameInstanceSubsystem : public UGameInstanceSubsystem
{

    void BP_Tick(float DeltaTime);
    bool BP_ShouldCreateSubsystem(class UObject* Outer);
    void BP_Initialize();
    class UGameInstance* BP_GetGameInstance();
    void BP_Deinitialize();
}; // Size: 0x40

class UScriptLocalPlayerSubsystem : public ULocalPlayerSubsystem
{

    bool BP_ShouldCreateSubsystem(class UObject* Outer);
    void BP_Initialize();
    class ULocalPlayer* BP_GetLocalPlayer();
    void BP_Deinitialize();
}; // Size: 0x30

class UScriptWorldSubsystem : public UWorldSubsystem
{
    bool bCreateForLevelEditorWorlds;                                                 // 0x0039 (size: 0x1)
    bool bCreateForGameWorlds;                                                        // 0x003A (size: 0x1)
    bool bTickWhenPaused;                                                             // 0x003B (size: 0x1)

    void BP_UpdateStreamingState();
    void BP_Tick(float DeltaTime);
    bool BP_ShouldCreateSubsystem(class UObject* Outer);
    void BP_PostInitialize();
    void BP_OnWorldComponentsUpdated();
    void BP_OnWorldBeginPlay();
    void BP_Initialize();
    void BP_Deinitialize();
}; // Size: 0x40

class USoftReferenceStatics : public UObject
{
}; // Size: 0x28

class USubsystemLibrary : public UObject
{

    class UWorldSubsystem* GetWorldSubsystem(class UObject* WorldContextObject, TSubclassOf<class UWorldSubsystem> Class);
    class ULocalPlayerSubsystem* GetLocalPlayerSubSystemFromPlayerController(class APlayerController* PlayerController, TSubclassOf<class ULocalPlayerSubsystem> Class);
    class ULocalPlayerSubsystem* GetLocalPlayerSubsystemFromLocalPlayer(class UObject* WorldContextObject, class ULocalPlayer* LocalPlayer, TSubclassOf<class ULocalPlayerSubsystem> Class);
    class ULocalPlayerSubsystem* GetLocalPlayerSubsystem(class UObject* WorldContextObject, TSubclassOf<class ULocalPlayerSubsystem> Class);
    class UGameInstanceSubsystem* GetGameInstanceSubsystem(class UObject* WorldContextObject, TSubclassOf<class UGameInstanceSubsystem> Class);
    class UEngineSubsystem* GetEngineSubsystem(TSubclassOf<class UEngineSubsystem> Class);
}; // Size: 0x28

class UTestTerminatorComponent : public UActorComponent
{

    void ServerTerminatorReplicated();
}; // Size: 0xA8

class UWidgetBlueprintStatics : public UObject
{

    class UUserWidget* CreateWidget(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetType, class APlayerController* OwningPlayer);
}; // Size: 0x28

class UWorldCollisionStatics : public UObject
{
}; // Size: 0x28

#endif
