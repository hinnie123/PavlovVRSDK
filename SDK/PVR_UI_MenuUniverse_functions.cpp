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

// Function UI_MenuUniverse.UI_MenuUniverse_C.Get_AdminPanelButton_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_MenuUniverse_C::Get_AdminPanelButton_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuUniverse.UI_MenuUniverse_C.Get_AdminPanelButton_Visibility_1");

	UUI_MenuUniverse_C_Get_AdminPanelButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_MenuUniverse.UI_MenuUniverse_C.ShowServerStandby
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MenuUniverse_C::ShowServerStandby()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuUniverse.UI_MenuUniverse_C.ShowServerStandby");

	UUI_MenuUniverse_C_ShowServerStandby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuUniverse.UI_MenuUniverse_C.OnDismiss_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_MenuUniverse_C::OnDismiss_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuUniverse.UI_MenuUniverse_C.OnDismiss_Event_1");

	UUI_MenuUniverse_C_OnDismiss_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuUniverse.UI_MenuUniverse_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MenuUniverse_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuUniverse.UI_MenuUniverse_C.Construct");

	UUI_MenuUniverse_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuUniverse.UI_MenuUniverse_C.BndEvt__AdminPanelButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_MenuUniverse_C::BndEvt__AdminPanelButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuUniverse.UI_MenuUniverse_C.BndEvt__AdminPanelButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	UUI_MenuUniverse_C_BndEvt__AdminPanelButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuUniverse.UI_MenuUniverse_C.BndEvt__AdminPanel_K2Node_ComponentBoundEvent_1_Exit Menu__DelegateSignature
// (BlueprintEvent)

void UUI_MenuUniverse_C::BndEvt__AdminPanel_K2Node_ComponentBoundEvent_1_Exit_Menu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuUniverse.UI_MenuUniverse_C.BndEvt__AdminPanel_K2Node_ComponentBoundEvent_1_Exit Menu__DelegateSignature");

	UUI_MenuUniverse_C_BndEvt__AdminPanel_K2Node_ComponentBoundEvent_1_Exit_Menu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuUniverse.UI_MenuUniverse_C.BndEvt__AdminPanel_K2Node_ComponentBoundEvent_2_AdminAction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AdminAction>     AdminAction                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuUniverse_C::BndEvt__AdminPanel_K2Node_ComponentBoundEvent_2_AdminAction__DelegateSignature(TEnumAsByte<E_AdminAction> AdminAction, class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuUniverse.UI_MenuUniverse_C.BndEvt__AdminPanel_K2Node_ComponentBoundEvent_2_AdminAction__DelegateSignature");

	UUI_MenuUniverse_C_BndEvt__AdminPanel_K2Node_ComponentBoundEvent_2_AdminAction__DelegateSignature_Params params;
	params.AdminAction = AdminAction;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuUniverse.UI_MenuUniverse_C.ExecuteUbergraph_UI_MenuUniverse
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuUniverse_C::ExecuteUbergraph_UI_MenuUniverse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuUniverse.UI_MenuUniverse_C.ExecuteUbergraph_UI_MenuUniverse");

	UUI_MenuUniverse_C_ExecuteUbergraph_UI_MenuUniverse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
