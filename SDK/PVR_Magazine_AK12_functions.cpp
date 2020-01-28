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

// Function Magazine_AK12.Magazine_AK12_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMagazine_AK12_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_AK12.Magazine_AK12_C.UserConstructionScript");

	AMagazine_AK12_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_AK12.Magazine_AK12_C.OnReleasedFromGun
// (Event, Public, BlueprintEvent)

void AMagazine_AK12_C::OnReleasedFromGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_AK12.Magazine_AK12_C.OnReleasedFromGun");

	AMagazine_AK12_C_OnReleasedFromGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_AK12.Magazine_AK12_C.ExecuteUbergraph_Magazine_AK12
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMagazine_AK12_C::ExecuteUbergraph_Magazine_AK12(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_AK12.Magazine_AK12_C.ExecuteUbergraph_Magazine_AK12");

	AMagazine_AK12_C_ExecuteUbergraph_Magazine_AK12_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
