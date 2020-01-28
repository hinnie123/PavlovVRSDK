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

// Function UI_Home.UI_Home_C.SwitchToCustom
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Home_C::SwitchToCustom()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.SwitchToCustom");

	UUI_Home_C_SwitchToCustom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.SetRegion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOnlineRegion                  Region                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Home_C::SetRegion(EOnlineRegion Region)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.SetRegion");

	UUI_Home_C_SetRegion_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Home_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.Construct");

	UUI_Home_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.BndEvt__UI_Button_37_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Home_C::BndEvt__UI_Button_37_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.BndEvt__UI_Button_37_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature");

	UUI_Home_C_BndEvt__UI_Button_37_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.BndEvt__UI_ButtonSecondary_95_K2Node_ComponentBoundEvent_94_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Home_C::BndEvt__UI_ButtonSecondary_95_K2Node_ComponentBoundEvent_94_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.BndEvt__UI_ButtonSecondary_95_K2Node_ComponentBoundEvent_94_OnButtonClicked__DelegateSignature");

	UUI_Home_C_BndEvt__UI_ButtonSecondary_95_K2Node_ComponentBoundEvent_94_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.BndEvt__CancelQuickMatch_K2Node_ComponentBoundEvent_169_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Home_C::BndEvt__CancelQuickMatch_K2Node_ComponentBoundEvent_169_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.BndEvt__CancelQuickMatch_K2Node_ComponentBoundEvent_169_OnButtonClicked__DelegateSignature");

	UUI_Home_C_BndEvt__CancelQuickMatch_K2Node_ComponentBoundEvent_169_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.QuickMatchStarted
// (BlueprintCallable, BlueprintEvent)

void UUI_Home_C::QuickMatchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.QuickMatchStarted");

	UUI_Home_C_QuickMatchStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.OnQuickMatchCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Succeeded                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   FailReason                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_Home_C::OnQuickMatchCompleted(bool Succeeded, const struct FText& FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.OnQuickMatchCompleted");

	UUI_Home_C_OnQuickMatchCompleted_Params params;
	params.Succeeded = Succeeded;
	params.FailReason = FailReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.BndEvt__QuickMatchPendingOk_K2Node_ComponentBoundEvent_135_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Home_C::BndEvt__QuickMatchPendingOk_K2Node_ComponentBoundEvent_135_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.BndEvt__QuickMatchPendingOk_K2Node_ComponentBoundEvent_135_OnButtonClicked__DelegateSignature");

	UUI_Home_C_BndEvt__QuickMatchPendingOk_K2Node_ComponentBoundEvent_135_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.BndEvt__LobbyButton_K2Node_ComponentBoundEvent_12_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Home_C::BndEvt__LobbyButton_K2Node_ComponentBoundEvent_12_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.BndEvt__LobbyButton_K2Node_ComponentBoundEvent_12_OnButtonClicked__DelegateSignature");

	UUI_Home_C_BndEvt__LobbyButton_K2Node_ComponentBoundEvent_12_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.BndEvt__europeCheckbox_K2Node_ComponentBoundEvent_75_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Home_C::BndEvt__europeCheckbox_K2Node_ComponentBoundEvent_75_OnCheckStateChanged__DelegateSignature(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.BndEvt__europeCheckbox_K2Node_ComponentBoundEvent_75_OnCheckStateChanged__DelegateSignature");

	UUI_Home_C_BndEvt__europeCheckbox_K2Node_ComponentBoundEvent_75_OnCheckStateChanged__DelegateSignature_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.BndEvt__americaCheckbox_K2Node_ComponentBoundEvent_82_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Home_C::BndEvt__americaCheckbox_K2Node_ComponentBoundEvent_82_OnCheckStateChanged__DelegateSignature(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.BndEvt__americaCheckbox_K2Node_ComponentBoundEvent_82_OnCheckStateChanged__DelegateSignature");

	UUI_Home_C_BndEvt__americaCheckbox_K2Node_ComponentBoundEvent_82_OnCheckStateChanged__DelegateSignature_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.OnLeftLobby_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESteamLobbyChatMemberStateChange StateChange                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Home_C::OnLeftLobby_Event_1(ESteamLobbyChatMemberStateChange StateChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.OnLeftLobby_Event_1");

	UUI_Home_C_OnLeftLobby_Event_1_Params params;
	params.StateChange = StateChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.BndEvt__asiaCheckbox_K2Node_ComponentBoundEvent_37_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Home_C::BndEvt__asiaCheckbox_K2Node_ComponentBoundEvent_37_OnCheckStateChanged__DelegateSignature(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.BndEvt__asiaCheckbox_K2Node_ComponentBoundEvent_37_OnCheckStateChanged__DelegateSignature");

	UUI_Home_C_BndEvt__asiaCheckbox_K2Node_ComponentBoundEvent_37_OnCheckStateChanged__DelegateSignature_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.BndEvt__ServerBrowser_K2Node_ComponentBoundEvent_64_OnJoinServer__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FPavlovServerInfo       ServerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_Home_C::BndEvt__ServerBrowser_K2Node_ComponentBoundEvent_64_OnJoinServer__DelegateSignature(const struct FPavlovServerInfo& ServerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.BndEvt__ServerBrowser_K2Node_ComponentBoundEvent_64_OnJoinServer__DelegateSignature");

	UUI_Home_C_BndEvt__ServerBrowser_K2Node_ComponentBoundEvent_64_OnJoinServer__DelegateSignature_Params params;
	params.ServerInfo = ServerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.BndEvt__customCheckbox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Home_C::BndEvt__customCheckbox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.BndEvt__customCheckbox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	UUI_Home_C_BndEvt__customCheckbox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.OnServerRefresh_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_Home_C::OnServerRefresh_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.OnServerRefresh_Event_1");

	UUI_Home_C_OnServerRefresh_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UUI_Home_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.CustomEvent_1");

	UUI_Home_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.BndEvt__CoopLobby_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Home_C::BndEvt__CoopLobby_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.BndEvt__CoopLobby_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");

	UUI_Home_C_BndEvt__CoopLobby_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.ExecuteUbergraph_UI_Home
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Home_C::ExecuteUbergraph_UI_Home(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.ExecuteUbergraph_UI_Home");

	UUI_Home_C_ExecuteUbergraph_UI_Home_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.OnJoinServer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPavlovServerInfo       ServerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_Home_C::OnJoinServer__DelegateSignature(const struct FPavlovServerInfo& ServerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.OnJoinServer__DelegateSignature");

	UUI_Home_C_OnJoinServer__DelegateSignature_Params params;
	params.ServerInfo = ServerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.OnCancelQuickMatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Home_C::OnCancelQuickMatch__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.OnCancelQuickMatch__DelegateSignature");

	UUI_Home_C_OnCancelQuickMatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.QuickMatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Home_C::QuickMatch__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.QuickMatch__DelegateSignature");

	UUI_Home_C_QuickMatch__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home.UI_Home_C.OpenSettings__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Home_C::OpenSettings__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home.UI_Home_C.OpenSettings__DelegateSignature");

	UUI_Home_C_OpenSettings__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
