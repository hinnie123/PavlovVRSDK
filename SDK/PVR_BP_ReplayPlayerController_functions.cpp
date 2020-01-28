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

// Function BP_ReplayPlayerController.BP_ReplayPlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ReplayPlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayPlayerController.BP_ReplayPlayerController_C.UserConstructionScript");

	ABP_ReplayPlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReplayPlayerController.BP_ReplayPlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ReplayPlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayPlayerController.BP_ReplayPlayerController_C.ReceiveBeginPlay");

	ABP_ReplayPlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReplayPlayerController.BP_ReplayPlayerController_C.ExecuteUbergraph_BP_ReplayPlayerController
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReplayPlayerController_C::ExecuteUbergraph_BP_ReplayPlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayPlayerController.BP_ReplayPlayerController_C.ExecuteUbergraph_BP_ReplayPlayerController");

	ABP_ReplayPlayerController_C_ExecuteUbergraph_BP_ReplayPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
