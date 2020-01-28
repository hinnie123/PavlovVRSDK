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

// Function UI_Scoreboard_Player_Titles.UI_Scoreboard_Player_Titles_C.GetColorAndOpacity_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_Scoreboard_Player_Titles_C::GetColorAndOpacity_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard_Player_Titles.UI_Scoreboard_Player_Titles_C.GetColorAndOpacity_2");

	UUI_Scoreboard_Player_Titles_C_GetColorAndOpacity_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Scoreboard_Player_Titles.UI_Scoreboard_Player_Titles_C.GetColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_Scoreboard_Player_Titles_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Scoreboard_Player_Titles.UI_Scoreboard_Player_Titles_C.GetColorAndOpacity_1");

	UUI_Scoreboard_Player_Titles_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
