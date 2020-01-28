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

// Function Magazine_DE.Magazine_DE_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMagazine_DE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_DE.Magazine_DE_C.UserConstructionScript");

	AMagazine_DE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_DE.Magazine_DE_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMagazine_DE_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_DE.Magazine_DE_C.ReceiveBeginPlay");

	AMagazine_DE_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_DE.Magazine_DE_C.ExecuteUbergraph_Magazine_DE
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMagazine_DE_C::ExecuteUbergraph_Magazine_DE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_DE.Magazine_DE_C.ExecuteUbergraph_Magazine_DE");

	AMagazine_DE_C_ExecuteUbergraph_Magazine_DE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
