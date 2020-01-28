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

// Function UI_OnlineSettings.UI_OnlineSettings_C.GetSelectedMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Map                            (Parm, OutParm, ZeroConstructor)

void UUI_OnlineSettings_C::GetSelectedMap(struct FString* Map)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineSettings.UI_OnlineSettings_C.GetSelectedMap");

	UUI_OnlineSettings_C_GetSelectedMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Map != nullptr)
		*Map = params.Map;
}


// Function UI_OnlineSettings.UI_OnlineSettings_C.BndEvt__UI_Button_37_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_OnlineSettings_C::BndEvt__UI_Button_37_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineSettings.UI_OnlineSettings_C.BndEvt__UI_Button_37_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature");

	UUI_OnlineSettings_C_BndEvt__UI_Button_37_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineSettings.UI_OnlineSettings_C.BndEvt__ComboBoxString_115_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_OnlineSettings_C::BndEvt__ComboBoxString_115_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineSettings.UI_OnlineSettings_C.BndEvt__ComboBoxString_115_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature");

	UUI_OnlineSettings_C_BndEvt__ComboBoxString_115_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineSettings.UI_OnlineSettings_C.ExecuteUbergraph_UI_OnlineSettings
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_OnlineSettings_C::ExecuteUbergraph_UI_OnlineSettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineSettings.UI_OnlineSettings_C.ExecuteUbergraph_UI_OnlineSettings");

	UUI_OnlineSettings_C_ExecuteUbergraph_UI_OnlineSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineSettings.UI_OnlineSettings_C.OnMapChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Map                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_OnlineSettings_C::OnMapChanged__DelegateSignature(const struct FString& Map)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineSettings.UI_OnlineSettings_C.OnMapChanged__DelegateSignature");

	UUI_OnlineSettings_C_OnMapChanged__DelegateSignature_Params params;
	params.Map = Map;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OnlineSettings.UI_OnlineSettings_C.OnModalEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_OnlineSettings_C::OnModalEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OnlineSettings.UI_OnlineSettings_C.OnModalEnd__DelegateSignature");

	UUI_OnlineSettings_C_OnModalEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
