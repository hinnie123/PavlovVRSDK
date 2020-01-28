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

// Function Magazine_PumpShotgun.Magazine_PumpShotgun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMagazine_PumpShotgun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_PumpShotgun.Magazine_PumpShotgun_C.UserConstructionScript");

	AMagazine_PumpShotgun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_PumpShotgun.Magazine_PumpShotgun_C.OnLoadedIntoGun
// (Event, Public, BlueprintEvent)

void AMagazine_PumpShotgun_C::OnLoadedIntoGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_PumpShotgun.Magazine_PumpShotgun_C.OnLoadedIntoGun");

	AMagazine_PumpShotgun_C_OnLoadedIntoGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_PumpShotgun.Magazine_PumpShotgun_C.OnReleasedFromGun
// (Event, Public, BlueprintEvent)

void AMagazine_PumpShotgun_C::OnReleasedFromGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_PumpShotgun.Magazine_PumpShotgun_C.OnReleasedFromGun");

	AMagazine_PumpShotgun_C_OnReleasedFromGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_PumpShotgun.Magazine_PumpShotgun_C.ExecuteUbergraph_Magazine_PumpShotgun
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMagazine_PumpShotgun_C::ExecuteUbergraph_Magazine_PumpShotgun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_PumpShotgun.Magazine_PumpShotgun_C.ExecuteUbergraph_Magazine_PumpShotgun");

	AMagazine_PumpShotgun_C_ExecuteUbergraph_Magazine_PumpShotgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
