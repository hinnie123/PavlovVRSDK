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

// Function UI_Skull.UI_Skull_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Skull_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Skull.UI_Skull_C.GetVisibility_1"));

	UUI_Skull_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Skull.UI_Skull_C.Get_Avatar_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_Skull_C::Get_Avatar_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Skull.UI_Skull_C.Get_Avatar_Brush_1"));

	UUI_Skull_C_Get_Avatar_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Skull.UI_Skull_C.Get_PlayerName_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_Skull_C::Get_PlayerName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Skull.UI_Skull_C.Get_PlayerName_Text_1"));

	UUI_Skull_C_Get_PlayerName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Skull.UI_Skull_C.GetColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_Skull_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Skull.UI_Skull_C.GetColorAndOpacity_1"));

	UUI_Skull_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Skull.UI_Skull_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_Skull_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Skull.UI_Skull_C.GetBrush_1"));

	UUI_Skull_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Skull.UI_Skull_C.SetPlayerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Skull_C::SetPlayerState(class APavlovPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Skull.UI_Skull_C.SetPlayerState"));

	UUI_Skull_C_SetPlayerState_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skull.UI_Skull_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Skull_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Skull.UI_Skull_C.Construct"));

	UUI_Skull_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skull.UI_Skull_C.UpdateInfo
// (BlueprintCallable, BlueprintEvent)

void UUI_Skull_C::UpdateInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Skull.UI_Skull_C.UpdateInfo"));

	UUI_Skull_C_UpdateInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skull.UI_Skull_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Skull_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Skull.UI_Skull_C.Destruct"));

	UUI_Skull_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skull.UI_Skull_C.ExecuteUbergraph_UI_Skull
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Skull_C::ExecuteUbergraph_UI_Skull(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Skull.UI_Skull_C.ExecuteUbergraph_UI_Skull"));

	UUI_Skull_C_ExecuteUbergraph_UI_Skull_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
