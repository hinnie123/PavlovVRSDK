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

// Function Magazine_Shotgun.Magazine_Shotgun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMagazine_Shotgun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Magazine_Shotgun.Magazine_Shotgun_C.UserConstructionScript"));

	AMagazine_Shotgun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Shotgun.Magazine_Shotgun_C.OnLoadedIntoGun
// (Event, Public, BlueprintEvent)

void AMagazine_Shotgun_C::OnLoadedIntoGun()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Magazine_Shotgun.Magazine_Shotgun_C.OnLoadedIntoGun"));

	AMagazine_Shotgun_C_OnLoadedIntoGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Shotgun.Magazine_Shotgun_C.OnReleasedFromGun
// (Event, Public, BlueprintEvent)

void AMagazine_Shotgun_C::OnReleasedFromGun()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Magazine_Shotgun.Magazine_Shotgun_C.OnReleasedFromGun"));

	AMagazine_Shotgun_C_OnReleasedFromGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Shotgun.Magazine_Shotgun_C.ExecuteUbergraph_Magazine_Shotgun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMagazine_Shotgun_C::ExecuteUbergraph_Magazine_Shotgun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Magazine_Shotgun.Magazine_Shotgun_C.ExecuteUbergraph_Magazine_Shotgun"));

	AMagazine_Shotgun_C_ExecuteUbergraph_Magazine_Shotgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
