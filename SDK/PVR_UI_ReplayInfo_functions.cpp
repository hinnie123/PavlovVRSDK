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

// Function UI_ReplayInfo.UI_ReplayInfo_C.GetColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_ReplayInfo_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayInfo.UI_ReplayInfo_C.GetColorAndOpacity_1");

	UUI_ReplayInfo_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ReplayInfo.UI_ReplayInfo_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_ReplayInfo_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayInfo.UI_ReplayInfo_C.GetText_1");

	UUI_ReplayInfo_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ReplayInfo.UI_ReplayInfo_C.Get_dateLabel_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_ReplayInfo_C::Get_dateLabel_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayInfo.UI_ReplayInfo_C.Get_dateLabel_Text_1");

	UUI_ReplayInfo_C_Get_dateLabel_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ReplayInfo.UI_ReplayInfo_C.UpdateUsers
// (BlueprintCallable, BlueprintEvent)

void UUI_ReplayInfo_C::UpdateUsers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayInfo.UI_ReplayInfo_C.UpdateUsers");

	UUI_ReplayInfo_C_UpdateUsers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayInfo.UI_ReplayInfo_C.BndEvt__LoadBtn_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ReplayInfo_C::BndEvt__LoadBtn_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayInfo.UI_ReplayInfo_C.BndEvt__LoadBtn_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");

	UUI_ReplayInfo_C_BndEvt__LoadBtn_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayInfo.UI_ReplayInfo_C.ExecuteUbergraph_UI_ReplayInfo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayInfo_C::ExecuteUbergraph_UI_ReplayInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayInfo.UI_ReplayInfo_C.ExecuteUbergraph_UI_ReplayInfo");

	UUI_ReplayInfo_C_ExecuteUbergraph_UI_ReplayInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayInfo.UI_ReplayInfo_C.OnWatchReplayClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ReplayId                       (Parm, ZeroConstructor)

void UUI_ReplayInfo_C::OnWatchReplayClicked__DelegateSignature(const struct FString& ReplayId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayInfo.UI_ReplayInfo_C.OnWatchReplayClicked__DelegateSignature");

	UUI_ReplayInfo_C_OnWatchReplayClicked__DelegateSignature_Params params;
	params.ReplayId = ReplayId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
