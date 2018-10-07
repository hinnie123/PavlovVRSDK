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

// Function Bomb_Basic.Bomb_Basic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABomb_Basic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Bomb_Basic.Bomb_Basic_C.UserConstructionScript"));

	ABomb_Basic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bomb_Basic.Bomb_Basic_C.OnBeep
// (Event, Public, BlueprintEvent)

void ABomb_Basic_C::OnBeep()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Bomb_Basic.Bomb_Basic_C.OnBeep"));

	ABomb_Basic_C_OnBeep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bomb_Basic.Bomb_Basic_C.OnPlanted
// (Event, Public, BlueprintEvent)

void ABomb_Basic_C::OnPlanted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Bomb_Basic.Bomb_Basic_C.OnPlanted"));

	ABomb_Basic_C_OnPlanted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bomb_Basic.Bomb_Basic_C.Physicalize
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ABomb_Basic_C::Physicalize(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Bomb_Basic.Bomb_Basic_C.Physicalize"));

	ABomb_Basic_C_Physicalize_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bomb_Basic.Bomb_Basic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABomb_Basic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Bomb_Basic.Bomb_Basic_C.ReceiveBeginPlay"));

	ABomb_Basic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bomb_Basic.Bomb_Basic_C.OnPlayerOcclusionChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bNewOccluded                   (Parm, ZeroConstructor, IsPlainOldData)

void ABomb_Basic_C::OnPlayerOcclusionChange(bool* bNewOccluded)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Bomb_Basic.Bomb_Basic_C.OnPlayerOcclusionChange"));

	ABomb_Basic_C_OnPlayerOcclusionChange_Params params;
	params.bNewOccluded = bNewOccluded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bomb_Basic.Bomb_Basic_C.ExecuteUbergraph_Bomb_Basic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABomb_Basic_C::ExecuteUbergraph_Bomb_Basic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Bomb_Basic.Bomb_Basic_C.ExecuteUbergraph_Bomb_Basic"));

	ABomb_Basic_C_ExecuteUbergraph_Bomb_Basic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
