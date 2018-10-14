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

// Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PavlovPlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.UserConstructionScript");

	ABP_PavlovPlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PavlovPlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.ReceiveBeginPlay");

	ABP_PavlovPlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.OnBuyingChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bBuying                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPlayerController_C::OnBuyingChanged_Event_1(bool bBuying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.OnBuyingChanged_Event_1");

	ABP_PavlovPlayerController_C_OnBuyingChanged_Event_1_Params params;
	params.bBuying = bBuying;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.ExecuteUbergraph_BP_PavlovPlayerController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovPlayerController_C::ExecuteUbergraph_BP_PavlovPlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovPlayerController.BP_PavlovPlayerController_C.ExecuteUbergraph_BP_PavlovPlayerController");

	ABP_PavlovPlayerController_C_ExecuteUbergraph_BP_PavlovPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
