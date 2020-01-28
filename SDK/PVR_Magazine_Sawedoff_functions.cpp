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

// Function Magazine_Sawedoff.Magazine_Sawedoff_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMagazine_Sawedoff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Sawedoff.Magazine_Sawedoff_C.UserConstructionScript");

	AMagazine_Sawedoff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Sawedoff.Magazine_Sawedoff_C.OnBulletsChanged
// (Event, Public, BlueprintEvent)

void AMagazine_Sawedoff_C::OnBulletsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Sawedoff.Magazine_Sawedoff_C.OnBulletsChanged");

	AMagazine_Sawedoff_C_OnBulletsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Sawedoff.Magazine_Sawedoff_C.OnLoadedIntoGun
// (Event, Public, BlueprintEvent)

void AMagazine_Sawedoff_C::OnLoadedIntoGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Sawedoff.Magazine_Sawedoff_C.OnLoadedIntoGun");

	AMagazine_Sawedoff_C_OnLoadedIntoGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Sawedoff.Magazine_Sawedoff_C.OnReleasedFromGun
// (Event, Public, BlueprintEvent)

void AMagazine_Sawedoff_C::OnReleasedFromGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Sawedoff.Magazine_Sawedoff_C.OnReleasedFromGun");

	AMagazine_Sawedoff_C_OnReleasedFromGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Sawedoff.Magazine_Sawedoff_C.ExecuteUbergraph_Magazine_Sawedoff
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMagazine_Sawedoff_C::ExecuteUbergraph_Magazine_Sawedoff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Sawedoff.Magazine_Sawedoff_C.ExecuteUbergraph_Magazine_Sawedoff");

	AMagazine_Sawedoff_C_ExecuteUbergraph_Magazine_Sawedoff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
