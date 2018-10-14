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

// Function BP_BloodSplat.BP_BloodSplat_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BloodSplat_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodSplat.BP_BloodSplat_C.UserConstructionScript");

	ABP_BloodSplat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BloodSplat.BP_BloodSplat_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BloodSplat_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodSplat.BP_BloodSplat_C.ReceiveBeginPlay");

	ABP_BloodSplat_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BloodSplat.BP_BloodSplat_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BloodSplat_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodSplat.BP_BloodSplat_C.ReceiveTick");

	ABP_BloodSplat_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BloodSplat.BP_BloodSplat_C.ExecuteUbergraph_BP_BloodSplat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BloodSplat_C::ExecuteUbergraph_BP_BloodSplat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodSplat.BP_BloodSplat_C.ExecuteUbergraph_BP_BloodSplat");

	ABP_BloodSplat_C_ExecuteUbergraph_BP_BloodSplat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
