// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OpcenterGameMode.OpcenterGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOpcenterGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OpcenterGameMode.OpcenterGameMode_C.UserConstructionScript"));

	AOpcenterGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpcenterGameMode.OpcenterGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOpcenterGameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OpcenterGameMode.OpcenterGameMode_C.ReceiveBeginPlay"));

	AOpcenterGameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpcenterGameMode.OpcenterGameMode_C.ExecuteUbergraph_OpcenterGameMode
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOpcenterGameMode_C::ExecuteUbergraph_OpcenterGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OpcenterGameMode.OpcenterGameMode_C.ExecuteUbergraph_OpcenterGameMode"));

	AOpcenterGameMode_C_ExecuteUbergraph_OpcenterGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
