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

// Function entry.entry_C.OnEntitlementCheck
// (BlueprintCallable, BlueprintEvent)

void Aentry_C::OnEntitlementCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function entry.entry_C.OnEntitlementCheck");

	Aentry_C_OnEntitlementCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function entry.entry_C.InitQuest
// (BlueprintCallable, BlueprintEvent)

void Aentry_C::InitQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function entry.entry_C.InitQuest");

	Aentry_C_InitQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function entry.entry_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aentry_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function entry.entry_C.ReceiveBeginPlay");

	Aentry_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function entry.entry_C.ExecuteUbergraph_entry
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aentry_C::ExecuteUbergraph_entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function entry.entry_C.ExecuteUbergraph_entry");

	Aentry_C_ExecuteUbergraph_entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
