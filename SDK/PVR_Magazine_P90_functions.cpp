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

// Function Magazine_P90.Magazine_P90_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMagazine_P90_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_P90.Magazine_P90_C.UserConstructionScript");

	AMagazine_P90_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_P90.Magazine_P90_C.OnBulletsChanged
// (Event, Public, BlueprintEvent)

void AMagazine_P90_C::OnBulletsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_P90.Magazine_P90_C.OnBulletsChanged");

	AMagazine_P90_C_OnBulletsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_P90.Magazine_P90_C.ExecuteUbergraph_Magazine_P90
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMagazine_P90_C::ExecuteUbergraph_Magazine_P90(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_P90.Magazine_P90_C.ExecuteUbergraph_Magazine_P90");

	AMagazine_P90_C_ExecuteUbergraph_Magazine_P90_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
