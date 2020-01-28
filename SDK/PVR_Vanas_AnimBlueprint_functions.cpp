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

// Function Vanas_AnimBlueprint.Vanas_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanas_AnimBlueprint_AnimGraphNode_ModifyBone_5397B45B409E88305D543F856E0B88A2
// (BlueprintEvent)

void UVanas_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanas_AnimBlueprint_AnimGraphNode_ModifyBone_5397B45B409E88305D543F856E0B88A2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vanas_AnimBlueprint.Vanas_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanas_AnimBlueprint_AnimGraphNode_ModifyBone_5397B45B409E88305D543F856E0B88A2");

	UVanas_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanas_AnimBlueprint_AnimGraphNode_ModifyBone_5397B45B409E88305D543F856E0B88A2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vanas_AnimBlueprint.Vanas_AnimBlueprint_C.ExecuteUbergraph_Vanas_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVanas_AnimBlueprint_C::ExecuteUbergraph_Vanas_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vanas_AnimBlueprint.Vanas_AnimBlueprint_C.ExecuteUbergraph_Vanas_AnimBlueprint");

	UVanas_AnimBlueprint_C_ExecuteUbergraph_Vanas_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
