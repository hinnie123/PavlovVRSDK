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

// Function UI_PlayerInfo.UI_PlayerInfo_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_PlayerInfo_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerInfo.UI_PlayerInfo_C.GetVisibility_1"));

	UUI_PlayerInfo_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_PlayerInfo.UI_PlayerInfo_C.Get_Avatar_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_PlayerInfo_C::Get_Avatar_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerInfo.UI_PlayerInfo_C.Get_Avatar_Brush_1"));

	UUI_PlayerInfo_C_Get_Avatar_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_PlayerInfo.UI_PlayerInfo_C.Get_PlayerName_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_PlayerInfo_C::Get_PlayerName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerInfo.UI_PlayerInfo_C.Get_PlayerName_Text_1"));

	UUI_PlayerInfo_C_Get_PlayerName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_PlayerInfo.UI_PlayerInfo_C.GetColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_PlayerInfo_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerInfo.UI_PlayerInfo_C.GetColorAndOpacity_1"));

	UUI_PlayerInfo_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_PlayerInfo.UI_PlayerInfo_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_PlayerInfo_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerInfo.UI_PlayerInfo_C.GetBrush_1"));

	UUI_PlayerInfo_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_PlayerInfo.UI_PlayerInfo_C.SetPlayerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PlayerInfo_C::SetPlayerState(class APavlovPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerInfo.UI_PlayerInfo_C.SetPlayerState"));

	UUI_PlayerInfo_C_SetPlayerState_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PlayerInfo.UI_PlayerInfo_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PlayerInfo_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerInfo.UI_PlayerInfo_C.Tick"));

	UUI_PlayerInfo_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PlayerInfo.UI_PlayerInfo_C.ExecuteUbergraph_UI_PlayerInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PlayerInfo_C::ExecuteUbergraph_UI_PlayerInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_PlayerInfo.UI_PlayerInfo_C.ExecuteUbergraph_UI_PlayerInfo"));

	UUI_PlayerInfo_C_ExecuteUbergraph_UI_PlayerInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
