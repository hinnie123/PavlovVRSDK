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

// Function Shell_12Gauge_Alt.Shell_12Gauge_Alt_C.GetImpulseVector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AShell_12Gauge_Alt_C::GetImpulseVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shell_12Gauge_Alt.Shell_12Gauge_Alt_C.GetImpulseVector");

	AShell_12Gauge_Alt_C_GetImpulseVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shell_12Gauge_Alt.Shell_12Gauge_Alt_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShell_12Gauge_Alt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shell_12Gauge_Alt.Shell_12Gauge_Alt_C.UserConstructionScript");

	AShell_12Gauge_Alt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shell_12Gauge_Alt.Shell_12Gauge_Alt_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AShell_12Gauge_Alt_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shell_12Gauge_Alt.Shell_12Gauge_Alt_C.ReceiveBeginPlay");

	AShell_12Gauge_Alt_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shell_12Gauge_Alt.Shell_12Gauge_Alt_C.ExecuteUbergraph_Shell_12Gauge_Alt
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShell_12Gauge_Alt_C::ExecuteUbergraph_Shell_12Gauge_Alt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shell_12Gauge_Alt.Shell_12Gauge_Alt_C.ExecuteUbergraph_Shell_12Gauge_Alt");

	AShell_12Gauge_Alt_C_ExecuteUbergraph_Shell_12Gauge_Alt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
