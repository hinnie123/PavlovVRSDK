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

// Function Shell_AutoShotgun.Shell_AutoShotgun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShell_AutoShotgun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shell_AutoShotgun.Shell_AutoShotgun_C.UserConstructionScript");

	AShell_AutoShotgun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shell_AutoShotgun.Shell_AutoShotgun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AShell_AutoShotgun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shell_AutoShotgun.Shell_AutoShotgun_C.ReceiveBeginPlay");

	AShell_AutoShotgun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shell_AutoShotgun.Shell_AutoShotgun_C.ExecuteUbergraph_Shell_AutoShotgun
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShell_AutoShotgun_C::ExecuteUbergraph_Shell_AutoShotgun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shell_AutoShotgun.Shell_AutoShotgun_C.ExecuteUbergraph_Shell_AutoShotgun");

	AShell_AutoShotgun_C_ExecuteUbergraph_Shell_AutoShotgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
