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

// Function BP_AIDirector.BP_AIDirector_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AIDirector_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIDirector.BP_AIDirector_C.UserConstructionScript");

	ABP_AIDirector_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIDirector.BP_AIDirector_C.TrickleOut_WhenDead
// (BlueprintCallable, BlueprintEvent)

void ABP_AIDirector_C::TrickleOut_WhenDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIDirector.BP_AIDirector_C.TrickleOut_WhenDead");

	ABP_AIDirector_C_TrickleOut_WhenDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIDirector.BP_AIDirector_C.SetAllPooled
// (BlueprintCallable, BlueprintEvent)

void ABP_AIDirector_C::SetAllPooled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIDirector.BP_AIDirector_C.SetAllPooled");

	ABP_AIDirector_C_SetAllPooled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIDirector.BP_AIDirector_C.SetAllActive
// (BlueprintCallable, BlueprintEvent)

void ABP_AIDirector_C::SetAllActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIDirector.BP_AIDirector_C.SetAllActive");

	ABP_AIDirector_C_SetAllActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIDirector.BP_AIDirector_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AIDirector_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIDirector.BP_AIDirector_C.ReceiveBeginPlay");

	ABP_AIDirector_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIDirector.BP_AIDirector_C.FailedTrigger
// (BlueprintCallable, BlueprintEvent)

void ABP_AIDirector_C::FailedTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIDirector.BP_AIDirector_C.FailedTrigger");

	ABP_AIDirector_C_FailedTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIDirector.BP_AIDirector_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZAICharacter*           KilledCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            KillerPlayerState              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AIDirector_C::CustomEvent_1(class AZAICharacter* KilledCharacter, class APlayerState* KillerPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIDirector.BP_AIDirector_C.CustomEvent_1");

	ABP_AIDirector_C_CustomEvent_1_Params params;
	params.KilledCharacter = KilledCharacter;
	params.KillerPlayerState = KillerPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIDirector.BP_AIDirector_C.TrickleIn_BP
// (BlueprintCallable, BlueprintEvent)

void ABP_AIDirector_C::TrickleIn_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIDirector.BP_AIDirector_C.TrickleIn_BP");

	ABP_AIDirector_C_TrickleIn_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIDirector.BP_AIDirector_C.TrickleOut_OverTime
// (BlueprintCallable, BlueprintEvent)

void ABP_AIDirector_C::TrickleOut_OverTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIDirector.BP_AIDirector_C.TrickleOut_OverTime");

	ABP_AIDirector_C_TrickleOut_OverTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIDirector.BP_AIDirector_C.ExecuteUbergraph_BP_AIDirector
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AIDirector_C::ExecuteUbergraph_BP_AIDirector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIDirector.BP_AIDirector_C.ExecuteUbergraph_BP_AIDirector");

	ABP_AIDirector_C_ExecuteUbergraph_BP_AIDirector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
