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

// Function BP_RackPlaceholder.BP_RackPlaceholder_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RackPlaceholder_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RackPlaceholder.BP_RackPlaceholder_C.UserConstructionScript");

	ABP_RackPlaceholder_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RackPlaceholder.BP_RackPlaceholder_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RackPlaceholder_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RackPlaceholder.BP_RackPlaceholder_C.ReceiveBeginPlay");

	ABP_RackPlaceholder_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RackPlaceholder.BP_RackPlaceholder_C.ExecuteUbergraph_BP_RackPlaceholder
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RackPlaceholder_C::ExecuteUbergraph_BP_RackPlaceholder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RackPlaceholder.BP_RackPlaceholder_C.ExecuteUbergraph_BP_RackPlaceholder");

	ABP_RackPlaceholder_C_ExecuteUbergraph_BP_RackPlaceholder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
