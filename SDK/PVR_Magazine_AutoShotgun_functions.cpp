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

// Function Magazine_AutoShotgun.Magazine_AutoShotgun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMagazine_AutoShotgun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_AutoShotgun.Magazine_AutoShotgun_C.UserConstructionScript");

	AMagazine_AutoShotgun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_AutoShotgun.Magazine_AutoShotgun_C.OnLoadedIntoGun
// (Event, Public, BlueprintEvent)

void AMagazine_AutoShotgun_C::OnLoadedIntoGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_AutoShotgun.Magazine_AutoShotgun_C.OnLoadedIntoGun");

	AMagazine_AutoShotgun_C_OnLoadedIntoGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_AutoShotgun.Magazine_AutoShotgun_C.OnReleasedFromGun
// (Event, Public, BlueprintEvent)

void AMagazine_AutoShotgun_C::OnReleasedFromGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_AutoShotgun.Magazine_AutoShotgun_C.OnReleasedFromGun");

	AMagazine_AutoShotgun_C_OnReleasedFromGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_AutoShotgun.Magazine_AutoShotgun_C.ExecuteUbergraph_Magazine_AutoShotgun
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMagazine_AutoShotgun_C::ExecuteUbergraph_Magazine_AutoShotgun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_AutoShotgun.Magazine_AutoShotgun_C.ExecuteUbergraph_Magazine_AutoShotgun");

	AMagazine_AutoShotgun_C_ExecuteUbergraph_Magazine_AutoShotgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
