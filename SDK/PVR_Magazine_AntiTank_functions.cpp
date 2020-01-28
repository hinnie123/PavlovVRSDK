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

// Function Magazine_AntiTank.Magazine_AntiTank_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMagazine_AntiTank_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_AntiTank.Magazine_AntiTank_C.UserConstructionScript");

	AMagazine_AntiTank_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_AntiTank.Magazine_AntiTank_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMagazine_AntiTank_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_AntiTank.Magazine_AntiTank_C.ReceiveBeginPlay");

	AMagazine_AntiTank_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_AntiTank.Magazine_AntiTank_C.OnLoadedIntoGun
// (Event, Public, BlueprintEvent)

void AMagazine_AntiTank_C::OnLoadedIntoGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_AntiTank.Magazine_AntiTank_C.OnLoadedIntoGun");

	AMagazine_AntiTank_C_OnLoadedIntoGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_AntiTank.Magazine_AntiTank_C.ExecuteUbergraph_Magazine_AntiTank
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMagazine_AntiTank_C::ExecuteUbergraph_Magazine_AntiTank(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_AntiTank.Magazine_AntiTank_C.ExecuteUbergraph_Magazine_AntiTank");

	AMagazine_AntiTank_C_ExecuteUbergraph_Magazine_AntiTank_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
