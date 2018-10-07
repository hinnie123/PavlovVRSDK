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

// Function Knife_ST1.Knife_ST1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AKnife_ST1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Knife_ST1.Knife_ST1_C.UserConstructionScript"));

	AKnife_ST1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Knife_ST1.Knife_ST1_C.OnBloodyChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bNewBloody                     (Parm, ZeroConstructor, IsPlainOldData)

void AKnife_ST1_C::OnBloodyChanged(bool* bNewBloody)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Knife_ST1.Knife_ST1_C.OnBloodyChanged"));

	AKnife_ST1_C_OnBloodyChanged_Params params;
	params.bNewBloody = bNewBloody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Knife_ST1.Knife_ST1_C.OnDrop
// (Event, Public, BlueprintEvent)

void AKnife_ST1_C::OnDrop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Knife_ST1.Knife_ST1_C.OnDrop"));

	AKnife_ST1_C_OnDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Knife_ST1.Knife_ST1_C.Physicalize
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AKnife_ST1_C::Physicalize(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Knife_ST1.Knife_ST1_C.Physicalize"));

	AKnife_ST1_C_Physicalize_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Knife_ST1.Knife_ST1_C.OnPick
// (Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController**      ByController                   (Parm, ZeroConstructor, IsPlainOldData)

void AKnife_ST1_C::OnPick(class AVRItemController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Knife_ST1.Knife_ST1_C.OnPick"));

	AKnife_ST1_C_OnPick_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Knife_ST1.Knife_ST1_C.Used
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bJustPicked                    (Parm, ZeroConstructor, IsPlainOldData)

void AKnife_ST1_C::Used(bool* bJustPicked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Knife_ST1.Knife_ST1_C.Used"));

	AKnife_ST1_C_Used_Params params;
	params.bJustPicked = bJustPicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Knife_ST1.Knife_ST1_C.Use
// (Event, Public, BlueprintEvent)

void AKnife_ST1_C::Use()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Knife_ST1.Knife_ST1_C.Use"));

	AKnife_ST1_C_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Knife_ST1.Knife_ST1_C.ExecuteUbergraph_Knife_ST1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AKnife_ST1_C::ExecuteUbergraph_Knife_ST1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Knife_ST1.Knife_ST1_C.ExecuteUbergraph_Knife_ST1"));

	AKnife_ST1_C_ExecuteUbergraph_Knife_ST1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
