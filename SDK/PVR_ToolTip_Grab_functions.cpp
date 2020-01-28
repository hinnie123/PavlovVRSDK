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

// Function ToolTip_Grab.ToolTip_Grab_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AToolTip_Grab_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_Grab.ToolTip_Grab_C.UserConstructionScript");

	AToolTip_Grab_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Grab.ToolTip_Grab_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AToolTip_Grab_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_Grab.ToolTip_Grab_C.ReceiveBeginPlay");

	AToolTip_Grab_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Grab.ToolTip_Grab_C.OnDestroyed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AToolTip_Grab_C::OnDestroyed_Event_1(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_Grab.ToolTip_Grab_C.OnDestroyed_Event_1");

	AToolTip_Grab_C_OnDestroyed_Event_1_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Grab.ToolTip_Grab_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void AToolTip_Grab_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_Grab.ToolTip_Grab_C.CustomEvent_1");

	AToolTip_Grab_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTip_Grab.ToolTip_Grab_C.ExecuteUbergraph_ToolTip_Grab
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AToolTip_Grab_C::ExecuteUbergraph_ToolTip_Grab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTip_Grab.ToolTip_Grab_C.ExecuteUbergraph_ToolTip_Grab");

	AToolTip_Grab_C_ExecuteUbergraph_ToolTip_Grab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
