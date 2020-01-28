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

// Function Magazine_AK.Magazine_AK_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMagazine_AK_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_AK.Magazine_AK_C.UserConstructionScript");

	AMagazine_AK_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_AK.Magazine_AK_C.OnReleasedFromGun
// (Event, Public, BlueprintEvent)

void AMagazine_AK_C::OnReleasedFromGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_AK.Magazine_AK_C.OnReleasedFromGun");

	AMagazine_AK_C_OnReleasedFromGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_AK.Magazine_AK_C.ExecuteUbergraph_Magazine_AK
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMagazine_AK_C::ExecuteUbergraph_Magazine_AK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_AK.Magazine_AK_C.ExecuteUbergraph_Magazine_AK");

	AMagazine_AK_C_ExecuteUbergraph_Magazine_AK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
