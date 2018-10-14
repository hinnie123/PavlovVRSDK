// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SK_ViveController_Skeleton_AnimBlueprint.SK_ViveController_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_ViveController_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_339C207B408426627D77C49E8EF2E8E2
// (BlueprintEvent)

void USK_ViveController_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_ViveController_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_339C207B408426627D77C49E8EF2E8E2()
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_ViveController_Skeleton_AnimBlueprint.SK_ViveController_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_ViveController_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_339C207B408426627D77C49E8EF2E8E2");

	USK_ViveController_Skeleton_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_ViveController_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_339C207B408426627D77C49E8EF2E8E2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_ViveController_Skeleton_AnimBlueprint.SK_ViveController_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_ViveController_Skeleton_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USK_ViveController_Skeleton_AnimBlueprint_C::ExecuteUbergraph_SK_ViveController_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_ViveController_Skeleton_AnimBlueprint.SK_ViveController_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_ViveController_Skeleton_AnimBlueprint");

	USK_ViveController_Skeleton_AnimBlueprint_C_ExecuteUbergraph_SK_ViveController_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
