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

// Function UI_ServerBrowserEntry.UI_ServerBrowserEntry_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_16_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_ServerBrowserEntry_C::BndEvt__JoinButton_K2Node_ComponentBoundEvent_16_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserEntry.UI_ServerBrowserEntry_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_16_OnButtonClicked__DelegateSignature");

	UUI_ServerBrowserEntry_C_BndEvt__JoinButton_K2Node_ComponentBoundEvent_16_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowserEntry.UI_ServerBrowserEntry_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPavlovServerInfo       ServerInfoA                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ServerBrowserEntry_C::Update(const struct FPavlovServerInfo& ServerInfoA)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserEntry.UI_ServerBrowserEntry_C.Update");

	UUI_ServerBrowserEntry_C_Update_Params params;
	params.ServerInfoA = ServerInfoA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowserEntry.UI_ServerBrowserEntry_C.ExecuteUbergraph_UI_ServerBrowserEntry
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ServerBrowserEntry_C::ExecuteUbergraph_UI_ServerBrowserEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserEntry.UI_ServerBrowserEntry_C.ExecuteUbergraph_UI_ServerBrowserEntry");

	UUI_ServerBrowserEntry_C_ExecuteUbergraph_UI_ServerBrowserEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowserEntry.UI_ServerBrowserEntry_C.OnJoinClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPavlovServerInfo       Server                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ServerBrowserEntry_C::OnJoinClicked__DelegateSignature(const struct FPavlovServerInfo& Server)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowserEntry.UI_ServerBrowserEntry_C.OnJoinClicked__DelegateSignature");

	UUI_ServerBrowserEntry_C_OnJoinClicked__DelegateSignature_Params params;
	params.Server = Server;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
