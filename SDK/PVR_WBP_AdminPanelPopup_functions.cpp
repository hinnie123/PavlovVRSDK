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

// Function WBP_AdminPanelPopup.WBP_AdminPanelPopup_C.WarningLine1Bind
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_AdminPanelPopup_C::WarningLine1Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanelPopup.WBP_AdminPanelPopup_C.WarningLine1Bind");

	UWBP_AdminPanelPopup_C_WarningLine1Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_AdminPanelPopup.WBP_AdminPanelPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_AdminPanelPopup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanelPopup.WBP_AdminPanelPopup_C.Construct");

	UWBP_AdminPanelPopup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanelPopup.WBP_AdminPanelPopup_C.ChangeText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   PopupText                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_AdminPanelPopup_C::ChangeText(const struct FText& PopupText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanelPopup.WBP_AdminPanelPopup_C.ChangeText");

	UWBP_AdminPanelPopup_C_ChangeText_Params params;
	params.PopupText = PopupText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanelPopup.WBP_AdminPanelPopup_C.ExecuteUbergraph_WBP_AdminPanelPopup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AdminPanelPopup_C::ExecuteUbergraph_WBP_AdminPanelPopup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanelPopup.WBP_AdminPanelPopup_C.ExecuteUbergraph_WBP_AdminPanelPopup");

	UWBP_AdminPanelPopup_C_ExecuteUbergraph_WBP_AdminPanelPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdminPanelPopup.WBP_AdminPanelPopup_C.PopulateText__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   PopupText                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_AdminPanelPopup_C::PopulateText__DelegateSignature(const struct FText& PopupText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdminPanelPopup.WBP_AdminPanelPopup_C.PopulateText__DelegateSignature");

	UWBP_AdminPanelPopup_C_PopulateText__DelegateSignature_Params params;
	params.PopupText = PopupText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
