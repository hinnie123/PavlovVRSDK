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

// Function BP_BloodPuddle.BP_BloodPuddle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BloodPuddle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodPuddle.BP_BloodPuddle_C.UserConstructionScript");

	ABP_BloodPuddle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BloodPuddle.BP_BloodPuddle_C.OnPour
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FTransform*             Transform                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_BloodPuddle_C::OnPour(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodPuddle.BP_BloodPuddle_C.OnPour");

	ABP_BloodPuddle_C_OnPour_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BloodPuddle.BP_BloodPuddle_C.ExecuteUbergraph_BP_BloodPuddle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BloodPuddle_C::ExecuteUbergraph_BP_BloodPuddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodPuddle.BP_BloodPuddle_C.ExecuteUbergraph_BP_BloodPuddle");

	ABP_BloodPuddle_C_ExecuteUbergraph_BP_BloodPuddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
