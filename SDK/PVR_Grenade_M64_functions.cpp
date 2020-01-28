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

// Function Grenade_M64.Grenade_M64_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrenade_M64_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_M64.Grenade_M64_C.UserConstructionScript");

	AGrenade_M64_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_M64.Grenade_M64_C.OnDetonation
// (Event, Public, BlueprintEvent)

void AGrenade_M64_C::OnDetonation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_M64.Grenade_M64_C.OnDetonation");

	AGrenade_M64_C_OnDetonation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_M64.Grenade_M64_C.ExecuteUbergraph_Grenade_M64
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrenade_M64_C::ExecuteUbergraph_Grenade_M64(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_M64.Grenade_M64_C.ExecuteUbergraph_Grenade_M64");

	AGrenade_M64_C_ExecuteUbergraph_Grenade_M64_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
