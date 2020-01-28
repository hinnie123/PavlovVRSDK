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

// Function Pepe_AnimBlueprint.Pepe_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Pepe_AnimBlueprint_AnimGraphNode_ModifyBone_BB2D55D94EA8D4D14AB722B8A0AC045A
// (BlueprintEvent)

void UPepe_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Pepe_AnimBlueprint_AnimGraphNode_ModifyBone_BB2D55D94EA8D4D14AB722B8A0AC045A()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pepe_AnimBlueprint.Pepe_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Pepe_AnimBlueprint_AnimGraphNode_ModifyBone_BB2D55D94EA8D4D14AB722B8A0AC045A");

	UPepe_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Pepe_AnimBlueprint_AnimGraphNode_ModifyBone_BB2D55D94EA8D4D14AB722B8A0AC045A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pepe_AnimBlueprint.Pepe_AnimBlueprint_C.ExecuteUbergraph_Pepe_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPepe_AnimBlueprint_C::ExecuteUbergraph_Pepe_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pepe_AnimBlueprint.Pepe_AnimBlueprint_C.ExecuteUbergraph_Pepe_AnimBlueprint");

	UPepe_AnimBlueprint_C_ExecuteUbergraph_Pepe_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
