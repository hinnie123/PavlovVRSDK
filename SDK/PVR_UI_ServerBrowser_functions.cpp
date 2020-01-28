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

// Function UI_ServerBrowser.UI_ServerBrowser_C.UpdatePageLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_ServerBrowser_C::UpdatePageLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.UpdatePageLabel");

	UUI_ServerBrowser_C_UpdatePageLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.GetMapFromLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Map                            (Parm, OutParm, ZeroConstructor)

void UUI_ServerBrowser_C::GetMapFromLabel(const struct FString& Label, struct FString* Map)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.GetMapFromLabel");

	UUI_ServerBrowser_C_GetMapFromLabel_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Map != nullptr)
		*Map = params.Map;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.GetGameModeFromLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUI_ServerBrowser_C::GetGameModeFromLabel(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.GetGameModeFromLabel");

	UUI_ServerBrowser_C_GetGameModeFromLabel_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.RefreshList
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ServerBrowser_C::RefreshList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.RefreshList");

	UUI_ServerBrowser_C_RefreshList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ServerBrowser_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.Construct");

	UUI_ServerBrowser_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.OnServerListUpdated_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_ServerBrowser_C::OnServerListUpdated_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.OnServerListUpdated_Event");

	UUI_ServerBrowser_C_OnServerListUpdated_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__UI_ServerFilter_C_0_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_ServerBrowser_C::BndEvt__UI_ServerFilter_C_0_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature(const struct FString& Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__UI_ServerFilter_C_0_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature");

	UUI_ServerBrowser_C_BndEvt__UI_ServerFilter_C_0_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__FriendsFiltercombo_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_ServerBrowser_C::BndEvt__FriendsFiltercombo_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature(const struct FString& Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__FriendsFiltercombo_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature");

	UUI_ServerBrowser_C_BndEvt__FriendsFiltercombo_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__GameModeFilterCombo_K2Node_ComponentBoundEvent_17_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_ServerBrowser_C::BndEvt__GameModeFilterCombo_K2Node_ComponentBoundEvent_17_OnSelectionChanged__DelegateSignature(const struct FString& Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__GameModeFilterCombo_K2Node_ComponentBoundEvent_17_OnSelectionChanged__DelegateSignature");

	UUI_ServerBrowser_C_BndEvt__GameModeFilterCombo_K2Node_ComponentBoundEvent_17_OnSelectionChanged__DelegateSignature_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_41_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_ServerBrowser_C::BndEvt__RefreshButton_K2Node_ComponentBoundEvent_41_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_41_OnButtonClicked__DelegateSignature");

	UUI_ServerBrowser_C_BndEvt__RefreshButton_K2Node_ComponentBoundEvent_41_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.OnEntryJoinServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPavlovServerInfo       Server                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ServerBrowser_C::OnEntryJoinServer(const struct FPavlovServerInfo& Server)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.OnEntryJoinServer");

	UUI_ServerBrowser_C_OnEntryJoinServer_Params params;
	params.Server = Server;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__PreviousBtn_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ServerBrowser_C::BndEvt__PreviousBtn_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__PreviousBtn_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature");

	UUI_ServerBrowser_C_BndEvt__PreviousBtn_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_346_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ServerBrowser_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_346_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_346_OnButtonClickedEvent__DelegateSignature");

	UUI_ServerBrowser_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_346_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.ExecuteUbergraph_UI_ServerBrowser
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ServerBrowser_C::ExecuteUbergraph_UI_ServerBrowser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.ExecuteUbergraph_UI_ServerBrowser");

	UUI_ServerBrowser_C_ExecuteUbergraph_UI_ServerBrowser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.OnJoinServer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPavlovServerInfo       ServerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ServerBrowser_C::OnJoinServer__DelegateSignature(const struct FPavlovServerInfo& ServerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.OnJoinServer__DelegateSignature");

	UUI_ServerBrowser_C_OnJoinServer__DelegateSignature_Params params;
	params.ServerInfo = ServerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
