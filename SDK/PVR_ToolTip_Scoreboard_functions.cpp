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

// Function ToolTip_Scoreboard.ToolTip_Scoreboard_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AToolTip_Scoreboard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_Scoreboard.ToolTip_Scoreboard_C.UserConstructionScript"));

	AToolTip_Scoreboard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Scoreboard.ToolTip_Scoreboard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AToolTip_Scoreboard_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_Scoreboard.ToolTip_Scoreboard_C.ReceiveBeginPlay"));

	AToolTip_Scoreboard_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Scoreboard.ToolTip_Scoreboard_C.OnDestroyed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void AToolTip_Scoreboard_C::OnDestroyed_Event_1(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_Scoreboard.ToolTip_Scoreboard_C.OnDestroyed_Event_1"));

	AToolTip_Scoreboard_C_OnDestroyed_Event_1_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Scoreboard.ToolTip_Scoreboard_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void AToolTip_Scoreboard_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_Scoreboard.ToolTip_Scoreboard_C.CustomEvent_1"));

	AToolTip_Scoreboard_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Scoreboard.ToolTip_Scoreboard_C.ExecuteUbergraph_ToolTip_Scoreboard
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AToolTip_Scoreboard_C::ExecuteUbergraph_ToolTip_Scoreboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_Scoreboard.ToolTip_Scoreboard_C.ExecuteUbergraph_ToolTip_Scoreboard"));

	AToolTip_Scoreboard_C_ExecuteUbergraph_ToolTip_Scoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
