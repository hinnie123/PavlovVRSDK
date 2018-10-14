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

// Function BP_RoundEnd.BP_RoundEnd_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RoundEnd_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoundEnd.BP_RoundEnd_C.UserConstructionScript");

	ABP_RoundEnd_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoundEnd.BP_RoundEnd_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RoundEnd_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoundEnd.BP_RoundEnd_C.ReceiveBeginPlay");

	ABP_RoundEnd_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RoundEnd.BP_RoundEnd_C.ExecuteUbergraph_BP_RoundEnd
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_RoundEnd_C::ExecuteUbergraph_BP_RoundEnd(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RoundEnd.BP_RoundEnd_C.ExecuteUbergraph_BP_RoundEnd");

	ABP_RoundEnd_C_ExecuteUbergraph_BP_RoundEnd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
