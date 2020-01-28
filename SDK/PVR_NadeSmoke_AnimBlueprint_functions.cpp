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

// Function NadeSmoke_AnimBlueprint.NadeSmoke_AnimBlueprint_C.ExecuteUbergraph_NadeSmoke_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNadeSmoke_AnimBlueprint_C::ExecuteUbergraph_NadeSmoke_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NadeSmoke_AnimBlueprint.NadeSmoke_AnimBlueprint_C.ExecuteUbergraph_NadeSmoke_AnimBlueprint");

	UNadeSmoke_AnimBlueprint_C_ExecuteUbergraph_NadeSmoke_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
