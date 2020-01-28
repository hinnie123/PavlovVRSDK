// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sight_RedDot.Sight_RedDot_C.GetLenseMesh
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MaterialIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ASight_RedDot_C::GetLenseMesh(int* MaterialIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sight_RedDot.Sight_RedDot_C.GetLenseMesh");

	ASight_RedDot_C_GetLenseMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialIndex != nullptr)
		*MaterialIndex = params.MaterialIndex;

	return params.ReturnValue;
}


// Function Sight_RedDot.Sight_RedDot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASight_RedDot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sight_RedDot.Sight_RedDot_C.UserConstructionScript");

	ASight_RedDot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
