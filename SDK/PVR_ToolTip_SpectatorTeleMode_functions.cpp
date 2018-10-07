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

// Function ToolTip_SpectatorTeleMode.ToolTip_SpectatorTeleMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AToolTip_SpectatorTeleMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_SpectatorTeleMode.ToolTip_SpectatorTeleMode_C.UserConstructionScript"));

	AToolTip_SpectatorTeleMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_SpectatorTeleMode.ToolTip_SpectatorTeleMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AToolTip_SpectatorTeleMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_SpectatorTeleMode.ToolTip_SpectatorTeleMode_C.ReceiveBeginPlay"));

	AToolTip_SpectatorTeleMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_SpectatorTeleMode.ToolTip_SpectatorTeleMode_C.OnTriggerChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bGripped                       (Parm, ZeroConstructor, IsPlainOldData)

void AToolTip_SpectatorTeleMode_C::OnTriggerChanged_Event_1(bool bGripped)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_SpectatorTeleMode.ToolTip_SpectatorTeleMode_C.OnTriggerChanged_Event_1"));

	AToolTip_SpectatorTeleMode_C_OnTriggerChanged_Event_1_Params params;
	params.bGripped = bGripped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_SpectatorTeleMode.ToolTip_SpectatorTeleMode_C.ExecuteUbergraph_ToolTip_SpectatorTeleMode
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AToolTip_SpectatorTeleMode_C::ExecuteUbergraph_ToolTip_SpectatorTeleMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_SpectatorTeleMode.ToolTip_SpectatorTeleMode_C.ExecuteUbergraph_ToolTip_SpectatorTeleMode"));

	AToolTip_SpectatorTeleMode_C_ExecuteUbergraph_ToolTip_SpectatorTeleMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
