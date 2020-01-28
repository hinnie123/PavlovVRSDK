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

// Function Sight_ACOG.Sight_ACOG_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASight_ACOG_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sight_ACOG.Sight_ACOG_C.UserConstructionScript");

	ASight_ACOG_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sight_ACOG.Sight_ACOG_C.OnGunTickChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASight_ACOG_C::OnGunTickChanged(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sight_ACOG.Sight_ACOG_C.OnGunTickChanged");

	ASight_ACOG_C_OnGunTickChanged_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sight_ACOG.Sight_ACOG_C.ExecuteUbergraph_Sight_ACOG
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASight_ACOG_C::ExecuteUbergraph_Sight_ACOG(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sight_ACOG.Sight_ACOG_C.ExecuteUbergraph_Sight_ACOG");

	ASight_ACOG_C_ExecuteUbergraph_Sight_ACOG_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
