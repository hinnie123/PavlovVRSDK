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

// Function UI_Home_Quest.UI_Home_Quest_C.OnSwitch
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Home_Quest_C::OnSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home_Quest.UI_Home_Quest_C.OnSwitch");

	UUI_Home_Quest_C_OnSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home_Quest.UI_Home_Quest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Home_Quest_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home_Quest.UI_Home_Quest_C.Construct");

	UUI_Home_Quest_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home_Quest.UI_Home_Quest_C.BndEvt__UI_Button_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Home_Quest_C::BndEvt__UI_Button_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home_Quest.UI_Home_Quest_C.BndEvt__UI_Button_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	UUI_Home_Quest_C_BndEvt__UI_Button_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home_Quest.UI_Home_Quest_C.BndEvt__BackBtn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Home_Quest_C::BndEvt__BackBtn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home_Quest.UI_Home_Quest_C.BndEvt__BackBtn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");

	UUI_Home_Quest_C_BndEvt__BackBtn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home_Quest.UI_Home_Quest_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Home_Quest_C::BndEvt__CancelBtn_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home_Quest.UI_Home_Quest_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature");

	UUI_Home_Quest_C_BndEvt__CancelBtn_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home_Quest.UI_Home_Quest_C.OnStatusChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMatchmakingStatus             Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Home_Quest_C::OnStatusChanged_Event_1(EMatchmakingStatus Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home_Quest.UI_Home_Quest_C.OnStatusChanged_Event_1");

	UUI_Home_Quest_C_OnStatusChanged_Event_1_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home_Quest.UI_Home_Quest_C.ExecuteUbergraph_UI_Home_Quest
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Home_Quest_C::ExecuteUbergraph_UI_Home_Quest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home_Quest.UI_Home_Quest_C.ExecuteUbergraph_UI_Home_Quest");

	UUI_Home_Quest_C_ExecuteUbergraph_UI_Home_Quest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Home_Quest.UI_Home_Quest_C.OnBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Home_Quest_C::OnBack__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Home_Quest.UI_Home_Quest_C.OnBack__DelegateSignature");

	UUI_Home_Quest_C_OnBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
