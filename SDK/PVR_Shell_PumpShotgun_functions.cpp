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

// Function Shell_PumpShotgun.Shell_PumpShotgun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShell_PumpShotgun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shell_PumpShotgun.Shell_PumpShotgun_C.UserConstructionScript");

	AShell_PumpShotgun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shell_PumpShotgun.Shell_PumpShotgun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AShell_PumpShotgun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shell_PumpShotgun.Shell_PumpShotgun_C.ReceiveBeginPlay");

	AShell_PumpShotgun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shell_PumpShotgun.Shell_PumpShotgun_C.ExecuteUbergraph_Shell_PumpShotgun
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShell_PumpShotgun_C::ExecuteUbergraph_Shell_PumpShotgun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shell_PumpShotgun.Shell_PumpShotgun_C.ExecuteUbergraph_Shell_PumpShotgun");

	AShell_PumpShotgun_C_ExecuteUbergraph_Shell_PumpShotgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
