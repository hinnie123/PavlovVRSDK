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

// Function ToolTip_SpectatorZoom.ToolTip_SpectatorZoom_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AToolTip_SpectatorZoom_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_SpectatorZoom.ToolTip_SpectatorZoom_C.UserConstructionScript"));

	AToolTip_SpectatorZoom_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_SpectatorZoom.ToolTip_SpectatorZoom_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AToolTip_SpectatorZoom_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_SpectatorZoom.ToolTip_SpectatorZoom_C.ReceiveBeginPlay"));

	AToolTip_SpectatorZoom_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_SpectatorZoom.ToolTip_SpectatorZoom_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void AToolTip_SpectatorZoom_C::CustomEvent_2(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_SpectatorZoom.ToolTip_SpectatorZoom_C.CustomEvent_2"));

	AToolTip_SpectatorZoom_C_CustomEvent_2_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_SpectatorZoom.ToolTip_SpectatorZoom_C.ExecuteUbergraph_ToolTip_SpectatorZoom
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AToolTip_SpectatorZoom_C::ExecuteUbergraph_ToolTip_SpectatorZoom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_SpectatorZoom.ToolTip_SpectatorZoom_C.ExecuteUbergraph_ToolTip_SpectatorZoom"));

	AToolTip_SpectatorZoom_C_ExecuteUbergraph_ToolTip_SpectatorZoom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
