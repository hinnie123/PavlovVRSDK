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

// Function SK_VRHand_R_Skeleton_AnimBlueprint.SK_VRHand_R_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_VRHand_R_Skeleton_AnimBlueprint_AnimGraphNode_TwoBoneIK_4B9E7D2C4E34CE8B3F5689B33FC35081
// (BlueprintEvent)

void USK_VRHand_R_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_VRHand_R_Skeleton_AnimBlueprint_AnimGraphNode_TwoBoneIK_4B9E7D2C4E34CE8B3F5689B33FC35081()
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_VRHand_R_Skeleton_AnimBlueprint.SK_VRHand_R_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_VRHand_R_Skeleton_AnimBlueprint_AnimGraphNode_TwoBoneIK_4B9E7D2C4E34CE8B3F5689B33FC35081");

	USK_VRHand_R_Skeleton_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_VRHand_R_Skeleton_AnimBlueprint_AnimGraphNode_TwoBoneIK_4B9E7D2C4E34CE8B3F5689B33FC35081_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_VRHand_R_Skeleton_AnimBlueprint.SK_VRHand_R_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_VRHand_R_Skeleton_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USK_VRHand_R_Skeleton_AnimBlueprint_C::ExecuteUbergraph_SK_VRHand_R_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_VRHand_R_Skeleton_AnimBlueprint.SK_VRHand_R_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_VRHand_R_Skeleton_AnimBlueprint");

	USK_VRHand_R_Skeleton_AnimBlueprint_C_ExecuteUbergraph_SK_VRHand_R_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
