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

// Function BP_Pill.BP_Pill_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Pill_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pill.BP_Pill_C.UserConstructionScript");

	ABP_Pill_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pill.BP_Pill_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Pill_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pill.BP_Pill_C.ReceiveBeginPlay");

	ABP_Pill_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pill.BP_Pill_C.ExecuteUbergraph_BP_Pill
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pill_C::ExecuteUbergraph_BP_Pill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pill.BP_Pill_C.ExecuteUbergraph_BP_Pill");

	ABP_Pill_C_ExecuteUbergraph_BP_Pill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pill.BP_Pill_C.HealPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Pill_C::HealPlayer__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pill.BP_Pill_C.HealPlayer__DelegateSignature");

	ABP_Pill_C_HealPlayer__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
