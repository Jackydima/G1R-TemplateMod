#ifndef UE4SS_SDK_BFGRendererMathUtils_HPP
#define UE4SS_SDK_BFGRendererMathUtils_HPP

class UBFGMatrixMath : public UBlueprintFunctionLibrary
{

    FMatrix TransposeMatrix(const FMatrix& _a);
    FVector4 TransformVector(const FMatrix& _a, const FVector4& _b);
    FMatrix MultiplyMatrices(const FMatrix& _a, const FMatrix& _b);
    FMatrix InvertMatrixFromColor(const FLinearColor& _row1, const FLinearColor& _row2, const FLinearColor& _row3, const FLinearColor& _row4, bool _bTransposeInput);
    FMatrix InvertMatrix(const FMatrix& _a);
    FMatrix GetViewProjectionMatrix(class USceneCaptureComponent2D* _pComponent);
    FMatrix GetViewMatrix(class USceneCaptureComponent2D* _pComponent);
    FMatrix GetProjectionMatrix(class USceneCaptureComponent2D* _pComponent);
    FMatrix GetMatrixFromTransform(FTransform _Transform, bool _bWithScale);
    FMatrix GetMatrixFromColor(const FLinearColor& _row1, const FLinearColor& _row2, const FLinearColor& _row3, const FLinearColor& _row4, bool _bTransposeInput);
    void GetMatrixAsLinearColor(FLinearColor& _row1, FLinearColor& _row2, FLinearColor& _row3, FLinearColor& _row4, const FMatrix& _m, bool _bTransposeOutput);
    FMatrix GetInverseViewProjMatrix(const FMatrix& _matView, const FMatrix& _matProj);
    FMatrix ComputeOffCenterProjectionMatrix(class USceneCaptureComponent2D* _pComponent, FVector _vPoint, float _fRadius);
    void BuildProjectionMatrix(FIntPoint RenderTargetSize, TEnumAsByte<ECameraProjectionMode::Type> ProjectionType, float FOV, float InOrthoWidth, FMatrix& ProjectionMatrix);
}; // Size: 0x28

#endif
