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

// Function UI_ServerStandby.UI_ServerStandby_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ServerStandby_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerStandby.UI_ServerStandby_C.PreConstruct");

	UUI_ServerStandby_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerStandby.UI_ServerStandby_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ServerStandby_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerStandby.UI_ServerStandby_C.Construct");

	UUI_ServerStandby_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerStandby.UI_ServerStandby_C.OnDownloadProgress_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ServerStandby_C::OnDownloadProgress_Event_1(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerStandby.UI_ServerStandby_C.OnDownloadProgress_Event_1");

	UUI_ServerStandby_C_OnDownloadProgress_Event_1_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerStandby.UI_ServerStandby_C.BndEvt__Button_275_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ServerStandby_C::BndEvt__Button_275_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerStandby.UI_ServerStandby_C.BndEvt__Button_275_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUI_ServerStandby_C_BndEvt__Button_275_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerStandby.UI_ServerStandby_C.ExecuteUbergraph_UI_ServerStandby
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ServerStandby_C::ExecuteUbergraph_UI_ServerStandby(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerStandby.UI_ServerStandby_C.ExecuteUbergraph_UI_ServerStandby");

	UUI_ServerStandby_C_ExecuteUbergraph_UI_ServerStandby_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
