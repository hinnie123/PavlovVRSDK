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

// Function BP_MatchState_WinLose.BP_MatchState_WinLose_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MatchState_WinLose_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MatchState_WinLose.BP_MatchState_WinLose_C.UserConstructionScript"));

	ABP_MatchState_WinLose_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchState_WinLose.BP_MatchState_WinLose_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MatchState_WinLose_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MatchState_WinLose.BP_MatchState_WinLose_C.ReceiveBeginPlay"));

	ABP_MatchState_WinLose_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchState_WinLose.BP_MatchState_WinLose_C.ExecuteUbergraph_BP_MatchState_WinLose
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MatchState_WinLose_C::ExecuteUbergraph_BP_MatchState_WinLose(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MatchState_WinLose.BP_MatchState_WinLose_C.ExecuteUbergraph_BP_MatchState_WinLose"));

	ABP_MatchState_WinLose_C_ExecuteUbergraph_BP_MatchState_WinLose_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
