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

// Function Magazine_58.Magazine_57_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMagazine_57_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_58.Magazine_57_C.UserConstructionScript");

	AMagazine_57_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_58.Magazine_57_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMagazine_57_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_58.Magazine_57_C.ReceiveBeginPlay");

	AMagazine_57_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_58.Magazine_57_C.ExecuteUbergraph_Magazine_58
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMagazine_57_C::ExecuteUbergraph_Magazine_58(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_58.Magazine_57_C.ExecuteUbergraph_Magazine_58");

	AMagazine_57_C_ExecuteUbergraph_Magazine_58_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
