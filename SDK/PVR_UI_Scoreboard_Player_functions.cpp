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

// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Scoreboard_Player_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.GetVisibility_1"));

	UUI_Scoreboard_Player_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_Scoreboard_Player_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.GetBrush_1"));

	UUI_Scoreboard_Player_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.GetColorAndOpacity_3
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_Scoreboard_Player_C::GetColorAndOpacity_3()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.GetColorAndOpacity_3"));

	UUI_Scoreboard_Player_C_GetColorAndOpacity_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.GetColorAndOpacity_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_Scoreboard_Player_C::GetColorAndOpacity_2()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.GetColorAndOpacity_2"));

	UUI_Scoreboard_Player_C_GetColorAndOpacity_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.GetColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_Scoreboard_Player_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.GetColorAndOpacity_1"));

	UUI_Scoreboard_Player_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
