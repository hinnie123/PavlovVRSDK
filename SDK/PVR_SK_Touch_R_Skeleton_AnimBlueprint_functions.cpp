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

// Function SK_Touch_R_Skeleton_AnimBlueprint.SK_Touch_R_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Touch_R_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_46C1D6FE42236EEAD9394DA608FC88F9
// (BlueprintEvent)

void USK_Touch_R_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Touch_R_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_46C1D6FE42236EEAD9394DA608FC88F9()
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_Touch_R_Skeleton_AnimBlueprint.SK_Touch_R_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Touch_R_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_46C1D6FE42236EEAD9394DA608FC88F9");

	USK_Touch_R_Skeleton_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Touch_R_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_46C1D6FE42236EEAD9394DA608FC88F9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_Touch_R_Skeleton_AnimBlueprint.SK_Touch_R_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_Touch_R_Skeleton_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USK_Touch_R_Skeleton_AnimBlueprint_C::ExecuteUbergraph_SK_Touch_R_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_Touch_R_Skeleton_AnimBlueprint.SK_Touch_R_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_Touch_R_Skeleton_AnimBlueprint");

	USK_Touch_R_Skeleton_AnimBlueprint_C_ExecuteUbergraph_SK_Touch_R_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
