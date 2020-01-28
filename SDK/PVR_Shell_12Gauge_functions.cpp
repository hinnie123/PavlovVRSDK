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

// Function Shell_12Gauge.Shell_12Gauge_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShell_12Gauge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shell_12Gauge.Shell_12Gauge_C.UserConstructionScript");

	AShell_12Gauge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shell_12Gauge.Shell_12Gauge_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AShell_12Gauge_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shell_12Gauge.Shell_12Gauge_C.ReceiveBeginPlay");

	AShell_12Gauge_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shell_12Gauge.Shell_12Gauge_C.ExecuteUbergraph_Shell_12Gauge
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShell_12Gauge_C::ExecuteUbergraph_Shell_12Gauge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shell_12Gauge.Shell_12Gauge_C.ExecuteUbergraph_Shell_12Gauge");

	AShell_12Gauge_C_ExecuteUbergraph_Shell_12Gauge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
