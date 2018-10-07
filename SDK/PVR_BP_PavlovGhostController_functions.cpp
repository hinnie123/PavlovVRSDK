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

// Function BP_PavlovGhostController.BP_PavlovGhostController_C.SetVRScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovGhostController_C::SetVRScale(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovGhostController.BP_PavlovGhostController_C.SetVRScale"));

	ABP_PavlovGhostController_C_SetVRScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovGhostController.BP_PavlovGhostController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PavlovGhostController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovGhostController.BP_PavlovGhostController_C.UserConstructionScript"));

	ABP_PavlovGhostController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovGhostController.BP_PavlovGhostController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PavlovGhostController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovGhostController.BP_PavlovGhostController_C.ReceiveBeginPlay"));

	ABP_PavlovGhostController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovGhostController.BP_PavlovGhostController_C.GripChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bNewGrip                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovGhostController_C::GripChanged(bool* bNewGrip)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovGhostController.BP_PavlovGhostController_C.GripChanged"));

	ABP_PavlovGhostController_C_GripChanged_Params params;
	params.bNewGrip = bNewGrip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovGhostController.BP_PavlovGhostController_C.OnPointModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EGhostPointMode*               OldPointMode                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovGhostController_C::OnPointModeChanged(EGhostPointMode* OldPointMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovGhostController.BP_PavlovGhostController_C.OnPointModeChanged"));

	ABP_PavlovGhostController_C_OnPointModeChanged_Params params;
	params.OldPointMode = OldPointMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovGhostController.BP_PavlovGhostController_C.ExecuteUbergraph_BP_PavlovGhostController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovGhostController_C::ExecuteUbergraph_BP_PavlovGhostController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovGhostController.BP_PavlovGhostController_C.ExecuteUbergraph_BP_PavlovGhostController"));

	ABP_PavlovGhostController_C_ExecuteUbergraph_BP_PavlovGhostController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
