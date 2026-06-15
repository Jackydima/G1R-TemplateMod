#ifndef UE4SS_SDK_BPI_FluxExportData_HPP
#define UE4SS_SDK_BPI_FluxExportData_HPP

class IBPI_FluxExportData_C : public IInterface
{

    void CopyPropertiesToObject(class UObject* Destination, bool& Done);
    void ClearExternalReferences();
    void GetExternalReferences(TArray<class UTexture*>& Objects);
}; // Size: 0x28

#endif
