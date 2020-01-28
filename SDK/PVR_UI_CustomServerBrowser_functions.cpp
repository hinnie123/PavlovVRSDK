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

// Function UI_CustomServerBrowser.UI_CustomServerBrowser_C.RefreshServers
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CustomServerBrowser_C::RefreshServers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerBrowser.UI_CustomServerBrowser_C.RefreshServers");

	UUI_CustomServerBrowser_C_RefreshServers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomServerBrowser.UI_CustomServerBrowser_C.ClearServerList
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CustomServerBrowser_C::ClearServerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerBrowser.UI_CustomServerBrowser_C.ClearServerList");

	UUI_CustomServerBrowser_C_ClearServerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomServerBrowser.UI_CustomServerBrowser_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CustomServerBrowser_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerBrowser.UI_CustomServerBrowser_C.Construct");

	UUI_CustomServerBrowser_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomServerBrowser.UI_CustomServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_41_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_CustomServerBrowser_C::BndEvt__RefreshButton_K2Node_ComponentBoundEvent_41_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerBrowser.UI_CustomServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_41_OnButtonClicked__DelegateSignature");

	UUI_CustomServerBrowser_C_BndEvt__RefreshButton_K2Node_ComponentBoundEvent_41_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomServerBrowser.UI_CustomServerBrowser_C.OnUpdate_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_CustomServerBrowser_C::OnUpdate_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerBrowser.UI_CustomServerBrowser_C.OnUpdate_Event_1");

	UUI_CustomServerBrowser_C_OnUpdate_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomServerBrowser.UI_CustomServerBrowser_C.ExecuteUbergraph_UI_CustomServerBrowser
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CustomServerBrowser_C::ExecuteUbergraph_UI_CustomServerBrowser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerBrowser.UI_CustomServerBrowser_C.ExecuteUbergraph_UI_CustomServerBrowser");

	UUI_CustomServerBrowser_C_ExecuteUbergraph_UI_CustomServerBrowser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomServerBrowser.UI_CustomServerBrowser_C.OnServerRefreshCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_CustomServerBrowser_C::OnServerRefreshCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerBrowser.UI_CustomServerBrowser_C.OnServerRefreshCompleted__DelegateSignature");

	UUI_CustomServerBrowser_C_OnServerRefreshCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomServerBrowser.UI_CustomServerBrowser_C.OnServerRefresh__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_CustomServerBrowser_C::OnServerRefresh__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerBrowser.UI_CustomServerBrowser_C.OnServerRefresh__DelegateSignature");

	UUI_CustomServerBrowser_C_OnServerRefresh__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomServerBrowser.UI_CustomServerBrowser_C.OnJoinServer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamServerInfo        ServerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CustomServerBrowser_C::OnJoinServer__DelegateSignature(const struct FSteamServerInfo& ServerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerBrowser.UI_CustomServerBrowser_C.OnJoinServer__DelegateSignature");

	UUI_CustomServerBrowser_C_OnJoinServer__DelegateSignature_Params params;
	params.ServerInfo = ServerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
