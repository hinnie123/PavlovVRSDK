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

// Function BP_SpectatorTVCamera.BP_SpectatorTVCamera_C.GetSceneCapture
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneCaptureComponent2D* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USceneCaptureComponent2D* ABP_SpectatorTVCamera_C::GetSceneCapture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpectatorTVCamera.BP_SpectatorTVCamera_C.GetSceneCapture"));

	ABP_SpectatorTVCamera_C_GetSceneCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SpectatorTVCamera.BP_SpectatorTVCamera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpectatorTVCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpectatorTVCamera.BP_SpectatorTVCamera_C.UserConstructionScript"));

	ABP_SpectatorTVCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpectatorTVCamera.BP_SpectatorTVCamera_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpectatorTVCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpectatorTVCamera.BP_SpectatorTVCamera_C.ReceiveBeginPlay"));

	ABP_SpectatorTVCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpectatorTVCamera.BP_SpectatorTVCamera_C.OnAttachedToFocusedPawn
// (Event, Public, BlueprintEvent)

void ABP_SpectatorTVCamera_C::OnAttachedToFocusedPawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpectatorTVCamera.BP_SpectatorTVCamera_C.OnAttachedToFocusedPawn"));

	ABP_SpectatorTVCamera_C_OnAttachedToFocusedPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpectatorTVCamera.BP_SpectatorTVCamera_C.ExecuteUbergraph_BP_SpectatorTVCamera
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpectatorTVCamera_C::ExecuteUbergraph_BP_SpectatorTVCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpectatorTVCamera.BP_SpectatorTVCamera_C.ExecuteUbergraph_BP_SpectatorTVCamera"));

	ABP_SpectatorTVCamera_C_ExecuteUbergraph_BP_SpectatorTVCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
