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

// Function BP_Killfeed.BP_Killfeed_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Killfeed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Killfeed.BP_Killfeed_C.UserConstructionScript");

	ABP_Killfeed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Killfeed.BP_Killfeed_C.OnDisplayModeUpdated
// (Event, Public, BlueprintEvent)

void ABP_Killfeed_C::OnDisplayModeUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Killfeed.BP_Killfeed_C.OnDisplayModeUpdated");

	ABP_Killfeed_C_OnDisplayModeUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Killfeed.BP_Killfeed_C.ExecuteUbergraph_BP_Killfeed
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Killfeed_C::ExecuteUbergraph_BP_Killfeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Killfeed.BP_Killfeed_C.ExecuteUbergraph_BP_Killfeed");

	ABP_Killfeed_C_ExecuteUbergraph_BP_Killfeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
