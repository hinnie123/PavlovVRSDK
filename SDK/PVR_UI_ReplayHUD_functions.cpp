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

// Function UI_ReplayHUD.UI_ReplayHUD_C.SelectPlayerStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayHUD_C::SelectPlayerStatus(int Index, int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.SelectPlayerStatus");

	UUI_ReplayHUD_C_SelectPlayerStatus_Params params;
	params.Index = Index;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_ReplayHUD_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.GetBrush_1");

	UUI_ReplayHUD_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.GetGameModeFromCombo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UComboBoxString*         self2                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUI_ReplayHUD_C::GetGameModeFromCombo(class UComboBoxString* self2)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.GetGameModeFromCombo");

	UUI_ReplayHUD_C_GetGameModeFromCombo_Params params;
	params.self2 = self2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.RefreshReplayList
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ReplayHUD_C::RefreshReplayList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.RefreshReplayList");

	UUI_ReplayHUD_C_RefreshReplayList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.ToggleScore
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ReplayHUD_C::ToggleScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.ToggleScore");

	UUI_ReplayHUD_C_ToggleScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.GetReplayManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UReplayManager*          ReplayManager                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayHUD_C::GetReplayManager(class UReplayManager** ReplayManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.GetReplayManager");

	UUI_ReplayHUD_C_GetReplayManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReplayManager != nullptr)
		*ReplayManager = params.ReplayManager;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.SetScrub
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayHUD_C::SetScrub(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.SetScrub");

	UUI_ReplayHUD_C_SetScrub_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_ReplayHUD_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.GetVisibility_1");

	UUI_ReplayHUD_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.ToggleMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ReplayHUD_C::ToggleMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.ToggleMenu");

	UUI_ReplayHUD_C_ToggleMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.GetScoreboardVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_ReplayHUD_C::GetScoreboardVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.GetScoreboardVisibility");

	UUI_ReplayHUD_C_GetScoreboardVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ReplayHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.Construct");

	UUI_ReplayHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.BndEvt__replayButton_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ReplayHUD_C::BndEvt__replayButton_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.BndEvt__replayButton_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature");

	UUI_ReplayHUD_C_BndEvt__replayButton_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_177_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ReplayHUD_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_177_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_177_OnButtonClickedEvent__DelegateSignature");

	UUI_ReplayHUD_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_177_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayHUD_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.Tick");

	UUI_ReplayHUD_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.PushErrorMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void UUI_ReplayHUD_C::PushErrorMessage(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.PushErrorMessage");

	UUI_ReplayHUD_C_PushErrorMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayHUD_C::CustomEvent_1(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.CustomEvent_1");

	UUI_ReplayHUD_C_CustomEvent_1_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.OnReplayListUpdated_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSucceeded                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayHUD_C::OnReplayListUpdated_Event_1(bool bSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.OnReplayListUpdated_Event_1");

	UUI_ReplayHUD_C_OnReplayListUpdated_Event_1_Params params;
	params.bSucceeded = bSucceeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.BndEvt__ScrubBtn_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ReplayHUD_C::BndEvt__ScrubBtn_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.BndEvt__ScrubBtn_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature");

	UUI_ReplayHUD_C_BndEvt__ScrubBtn_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.BndEvt__GameModeCombo_K2Node_ComponentBoundEvent_94_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayHUD_C::BndEvt__GameModeCombo_K2Node_ComponentBoundEvent_94_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.BndEvt__GameModeCombo_K2Node_ComponentBoundEvent_94_OnSelectionChangedEvent__DelegateSignature");

	UUI_ReplayHUD_C_BndEvt__GameModeCombo_K2Node_ComponentBoundEvent_94_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.BndEvt__CompCheckbox_K2Node_ComponentBoundEvent_103_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayHUD_C::BndEvt__CompCheckbox_K2Node_ComponentBoundEvent_103_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.BndEvt__CompCheckbox_K2Node_ComponentBoundEvent_103_OnCheckBoxComponentStateChanged__DelegateSignature");

	UUI_ReplayHUD_C_BndEvt__CompCheckbox_K2Node_ComponentBoundEvent_103_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayHUD_C::CustomEvent_2(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.CustomEvent_2");

	UUI_ReplayHUD_C_CustomEvent_2_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ReplayId                       (Parm, ZeroConstructor)

void UUI_ReplayHUD_C::CustomEvent_3(const struct FString& ReplayId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.CustomEvent_3");

	UUI_ReplayHUD_C_CustomEvent_3_Params params;
	params.ReplayId = ReplayId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSucceeded                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Error                          (Parm, ZeroConstructor)

void UUI_ReplayHUD_C::CustomEvent_4(bool bSucceeded, const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.CustomEvent_4");

	UUI_ReplayHUD_C_CustomEvent_4_Params params;
	params.bSucceeded = bSucceeded;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.ExecuteUbergraph_UI_ReplayHUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayHUD_C::ExecuteUbergraph_UI_ReplayHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.ExecuteUbergraph_UI_ReplayHUD");

	UUI_ReplayHUD_C_ExecuteUbergraph_UI_ReplayHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.OnScrubPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Ratio                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayHUD_C::OnScrubPressed__DelegateSignature(float Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.OnScrubPressed__DelegateSignature");

	UUI_ReplayHUD_C_OnScrubPressed__DelegateSignature_Params params;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayHUD.UI_ReplayHUD_C.OnMenuChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayHUD_C::OnMenuChanged__DelegateSignature(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayHUD.UI_ReplayHUD_C.OnMenuChanged__DelegateSignature");

	UUI_ReplayHUD_C_OnMenuChanged__DelegateSignature_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
