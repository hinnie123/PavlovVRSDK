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

// Function Bomb_AnimBlueprint.Bomb_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Bomb_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_A231CFA1462ED170D35A0B82925B24C3
// (BlueprintEvent)

void UBomb_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Bomb_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_A231CFA1462ED170D35A0B82925B24C3()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bomb_AnimBlueprint.Bomb_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Bomb_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_A231CFA1462ED170D35A0B82925B24C3");

	UBomb_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Bomb_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_A231CFA1462ED170D35A0B82925B24C3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bomb_AnimBlueprint.Bomb_AnimBlueprint_C.ExecuteUbergraph_Bomb_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBomb_AnimBlueprint_C::ExecuteUbergraph_Bomb_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bomb_AnimBlueprint.Bomb_AnimBlueprint_C.ExecuteUbergraph_Bomb_AnimBlueprint");

	UBomb_AnimBlueprint_C_ExecuteUbergraph_Bomb_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
