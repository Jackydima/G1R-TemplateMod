#ifndef UE4SS_SDK_NinjaLiveFunctions_HPP
#define UE4SS_SDK_NinjaLiveFunctions_HPP

class UNinjaLiveFunctions_C : public UBlueprintFunctionLibrary
{

    void CameraFacing(class USceneComponent* InMesh, bool UseLegacyFacing, bool LockY, FRotator TraceMeshInitRot, class UObject* __WorldContext);
    void RenderTgAcquisitionStatus(const class UObject* SelfRef, int32 RT number - added, TEnumAsByte<SimPrecision_Enum::Type> SimPrecision, int32 ResX, int32 ResY, bool PoolManDetected, bool HalfRes, int32 NumberOfChannels, class UObject* __WorldContext, FString& Print, double& MemConsumtion);
    void AcquireRenderTargetsFromPool(int32 Request(0=RGBA, 1=RG, 2=R), int32 Host-RenderTG-List-Index, TArray<FString>& RenderTargetList, class ANinjaLive_MemoryPoolManager_C* MemoryPoolManager, class UObject* __WorldContext, TMap<class FString, class UTextureRenderTarget2D*>& RenderTargetsMapTmp);
    void TemplateLoader(FName TemplateDefinition, class UDataTable* LoadedDataTable, FString LoadedDataTablePath, class UObject* __WorldContext, bool& LoadFailed, class UObject*& LoadedTemplateObject, FString& LoadedTmpFullPath, FString& LoadedTemplateNameOnly, bool& UsesAbsolutePath);
    void SingleKeyPicker(class UDataTable* DataTableIn, FString KeyToPick, class UObject* __WorldContext, FString& PickedKeyValue, bool& NotFound);
    void CreateRenderTarget(int32 Width, int32 Height, TEnumAsByte<ETextureRenderTargetFormat> Format, bool Clamping, TEnumAsByte<TextureGroup> LODGroup, TEnumAsByte<TextureFilter> Filter, class UObject* __WorldContext, class UTextureRenderTarget2D*& RTout);
    void PresetLoader(FString PresetName, TArray<FName>& AssetPath, FName AssetTrimmedName, bool ForcePreferredPreset, class UDataTable* PreferredPreset, class UObject* __WorldContext, class UDataTable*& LoadedDataTable, FString& LoadedDataTablePath, TMap<FString, double>& PresetMap);
    void TraceOverlap(FVector Start, FVector End, double TracelineOvershoot, TEnumAsByte<ETraceTypeQuery> TraceChannel, TArray<class AActor*>& FluidNinjaLIVEActors, bool PainterV2, class UObject* __WorldContext, FLinearColor& HitUV, FVector& TracePosition, bool& HitValid);
    void TraceMouse(class UObject* HitComponent, bool TouchSensitive, uint8 FingerIndex, TEnumAsByte<ETraceTypeQuery> TraceChannel, const TArray<class AActor*>& FluidNinjaLIVEActors, class UObject* __WorldContext, FLinearColor& HitUV, bool& SimHitByMouse, bool& MouseClickValid, bool& TouchValid);
}; // Size: 0x28

#endif
