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

// Function Sawedoff_AnimBlueprint.Sawedoff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sawedoff_AnimBlueprint_AnimGraphNode_ModifyBone_60D17341405BBA00A932C68DDB3D3426
// (BlueprintEvent)

void USawedoff_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sawedoff_AnimBlueprint_AnimGraphNode_ModifyBone_60D17341405BBA00A932C68DDB3D3426()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sawedoff_AnimBlueprint.Sawedoff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sawedoff_AnimBlueprint_AnimGraphNode_ModifyBone_60D17341405BBA00A932C68DDB3D3426");

	USawedoff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Sawedoff_AnimBlueprint_AnimGraphNode_ModifyBone_60D17341405BBA00A932C68DDB3D3426_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sawedoff_AnimBlueprint.Sawedoff_AnimBlueprint_C.ExecuteUbergraph_Sawedoff_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USawedoff_AnimBlueprint_C::ExecuteUbergraph_Sawedoff_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sawedoff_AnimBlueprint.Sawedoff_AnimBlueprint_C.ExecuteUbergraph_Sawedoff_AnimBlueprint");

	USawedoff_AnimBlueprint_C_ExecuteUbergraph_Sawedoff_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
