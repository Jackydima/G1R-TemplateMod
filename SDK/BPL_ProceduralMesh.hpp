#ifndef UE4SS_SDK_BPL_ProceduralMesh_HPP
#define UE4SS_SDK_BPL_ProceduralMesh_HPP

class UBPL_ProceduralMesh_C : public UBlueprintFunctionLibrary
{

    void ModQuad(FBS_MeshDefinition InMesh, FVector P1, FVector P2, FVector P3, FVector P4, class UObject* __WorldContext, FBS_MeshDefinition& OutMesh);
    void Pack3Ints(int32 Value1, int32 Value2, int32 Value3, class UObject* __WorldContext, int32& Bits);
    void BuildEmpty(class UObject* __WorldContext, FBS_MeshDefinition& BS_MeshDefinition);
    void Pack4Ints(int32 Value1, int32 Value2, int32 Value3, int32 Value4, class UObject* __WorldContext, int32& Bits);
    void PackIntToColor(int32 Value, class UObject* __WorldContext, double& R, double& G, double& B, double& A);
    void ModColor(FBS_MeshDefinition InMesh, FLinearColor NewColor, class UObject* __WorldContext, FBS_MeshDefinition& OutMesh);
    void SplineT(FVector A, FVector AT, FVector B, FVector BT, double T, class UObject* __WorldContext, FVector& R);
    void SplineTCoeff(double T1, class UObject* __WorldContext, double& WP1, double& WT1, double& WP2, double& WT2);
    void Spline(FVector A, FVector AT, FVector B, FVector BT, double T, class UObject* __WorldContext, FVector& R);
    void SplineCoeff(double T, class UObject* __WorldContext, double& WP1, double& WT1, double& WP2, double& WT2);
    void Lerp(FVector2D A, FVector2D B, double T, class UObject* __WorldContext, FVector2D& R);
    void ModTransformUV(FBS_MeshDefinition InMesh, FVector2D Scale, FVector2D Move, class UObject* __WorldContext, FBS_MeshDefinition& OutMesh);
    void DrawDebugMesh(FBS_MeshDefinition& Mesh, class UObject* __WorldContext);
    void BuildSplineBillboard(FVector StartPos, FVector EndPos, FVector StartTangent, FVector EndTangent, FVector2D StartUV, FVector2D EndUV, FLinearColor StartColor, FLinearColor EndColor, FVector Up, FBS_MeshDefinition& Triangles, class UObject* __WorldContext, FBS_MeshDefinition& Mesh);
    void BuildRemove(FBS_MeshDefinition Mesh, TArray<bool>& RemoeIndex, class UObject* __WorldContext, FBS_MeshDefinition& MeshOut);
    void ModUVMapPlane(FBS_MeshDefinition InMesh, FTransform Transform, class UObject* __WorldContext, FBS_MeshDefinition& OutMesh);
    void ModExtrudeLine(FBS_MeshDefinition InMesh, double Width, bool GenerateUV, int32 Divisons, class UObject* __WorldContext, FBS_MeshDefinition& OutMesh);
    void BuildLine(int32 Divisions, class UObject* __WorldContext, FBS_MeshDefinition& Mesh);
    void BuildSplit(FBS_MeshDefinition Mesh, int32 LastIndex, class UObject* __WorldContext, FBS_MeshDefinition& MeshOut);
    void BuildCopy(FBS_MeshDefinition Mesh, class UObject* __WorldContext, FBS_MeshDefinition& Copy);
    void QuadIndices(int32 I0, int32 I1, int32 I2, int32 I3, bool Swap, class UObject* __WorldContext, TArray<int32>& Array);
    void LogStats(FBS_MeshDefinition& Mesh, bool PrintTriangles, bool PrintLocations, bool PrintColors, class UObject* __WorldContext);
    void ModAppend(FBS_MeshDefinition InMeshA, FBS_MeshDefinition& InMeshB, class UObject* __WorldContext, FBS_MeshDefinition& OutMesh);
    void BuildPlane(FVector2D Size, int32 Width, int32 Height, FVector Normal, FVector2D Offset, int32 SwapMode, class UObject* __WorldContext, FBS_MeshDefinition& Mesh);
    void CreateMeshSection(class UProceduralMeshComponent* Target, FBS_MeshDefinition MeshDefinition, int32 SectionIndex, bool bCreateCollision, class UObject* __WorldContext);
    void ModTransform(FBS_MeshDefinition InMesh, FTransform Transform, class UObject* __WorldContext, FBS_MeshDefinition& OutMesh);
    void BuildQuad(FVector v1, FVector v2, FVector V3, FVector V4, class UObject* __WorldContext, FBS_MeshDefinition& Mesh);
}; // Size: 0x28

#endif
