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

// Function Magazine_Kar98.Magazine_Kar98_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMagazine_Kar98_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Magazine_Kar98.Magazine_Kar98_C.UserConstructionScript"));

	AMagazine_Kar98_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Kar98.Magazine_Kar98_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMagazine_Kar98_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Magazine_Kar98.Magazine_Kar98_C.ReceiveBeginPlay"));

	AMagazine_Kar98_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Kar98.Magazine_Kar98_C.OnLoadedIntoGun
// (Event, Public, BlueprintEvent)

void AMagazine_Kar98_C::OnLoadedIntoGun()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Magazine_Kar98.Magazine_Kar98_C.OnLoadedIntoGun"));

	AMagazine_Kar98_C_OnLoadedIntoGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Kar98.Magazine_Kar98_C.ExecuteUbergraph_Magazine_Kar98
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMagazine_Kar98_C::ExecuteUbergraph_Magazine_Kar98(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Magazine_Kar98.Magazine_Kar98_C.ExecuteUbergraph_Magazine_Kar98"));

	AMagazine_Kar98_C_ExecuteUbergraph_Magazine_Kar98_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
