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

// Function ToolTip_Reload.ToolTip_Reload_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AToolTip_Reload_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_Reload.ToolTip_Reload_C.UserConstructionScript"));

	AToolTip_Reload_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Reload.ToolTip_Reload_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AToolTip_Reload_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_Reload.ToolTip_Reload_C.ReceiveBeginPlay"));

	AToolTip_Reload_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Reload.ToolTip_Reload_C.OnDestroyed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void AToolTip_Reload_C::OnDestroyed_Event_1(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_Reload.ToolTip_Reload_C.OnDestroyed_Event_1"));

	AToolTip_Reload_C_OnDestroyed_Event_1_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Reload.ToolTip_Reload_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void AToolTip_Reload_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_Reload.ToolTip_Reload_C.CustomEvent_1"));

	AToolTip_Reload_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Reload.ToolTip_Reload_C.ExecuteUbergraph_ToolTip_Reload
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AToolTip_Reload_C::ExecuteUbergraph_ToolTip_Reload(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ToolTip_Reload.ToolTip_Reload_C.ExecuteUbergraph_ToolTip_Reload"));

	AToolTip_Reload_C_ExecuteUbergraph_ToolTip_Reload_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif