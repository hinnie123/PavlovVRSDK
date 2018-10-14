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

// Function BP_RoundStart.BP_RoundStart_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RoundStart_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoundStart.BP_RoundStart_C.UserConstructionScript");

	ABP_RoundStart_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoundStart.BP_RoundStart_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RoundStart_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoundStart.BP_RoundStart_C.ReceiveBeginPlay");

	ABP_RoundStart_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoundStart.BP_RoundStart_C.ExecuteUbergraph_BP_RoundStart
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_RoundStart_C::ExecuteUbergraph_BP_RoundStart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoundStart.BP_RoundStart_C.ExecuteUbergraph_BP_RoundStart");

	ABP_RoundStart_C_ExecuteUbergraph_BP_RoundStart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
