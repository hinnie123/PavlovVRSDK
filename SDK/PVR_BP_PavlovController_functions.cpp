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

// Function BP_PavlovController.BP_PavlovController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PavlovController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovController.BP_PavlovController_C.UserConstructionScript");

	ABP_PavlovController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovController.BP_PavlovController_C.BlinkTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_PavlovController_C::BlinkTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovController.BP_PavlovController_C.BlinkTimeline__FinishedFunc");

	ABP_PavlovController_C_BlinkTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovController.BP_PavlovController_C.BlinkTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_PavlovController_C::BlinkTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovController.BP_PavlovController_C.BlinkTimeline__UpdateFunc");

	ABP_PavlovController_C_BlinkTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovController.BP_PavlovController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PavlovController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovController.BP_PavlovController_C.ReceiveBeginPlay");

	ABP_PavlovController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovController.BP_PavlovController_C.MakeWatchBlink
// (BlueprintCallable, BlueprintEvent)

void ABP_PavlovController_C::MakeWatchBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovController.BP_PavlovController_C.MakeWatchBlink");

	ABP_PavlovController_C_MakeWatchBlink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovController.BP_PavlovController_C.ExecuteUbergraph_BP_PavlovController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovController_C::ExecuteUbergraph_BP_PavlovController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovController.BP_PavlovController_C.ExecuteUbergraph_BP_PavlovController");

	ABP_PavlovController_C_ExecuteUbergraph_BP_PavlovController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
