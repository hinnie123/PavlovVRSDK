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

// Function UI_ModalMessageBox.UI_ModalMessageBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ModalMessageBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ModalMessageBox.UI_ModalMessageBox_C.Construct");

	UUI_ModalMessageBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ModalMessageBox.UI_ModalMessageBox_C.BndEvt__CommitButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUI_ModalMessageBox_C::BndEvt__CommitButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ModalMessageBox.UI_ModalMessageBox_C.BndEvt__CommitButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	UUI_ModalMessageBox_C_BndEvt__CommitButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ModalMessageBox.UI_ModalMessageBox_C.ExecuteUbergraph_UI_ModalMessageBox
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ModalMessageBox_C::ExecuteUbergraph_UI_ModalMessageBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ModalMessageBox.UI_ModalMessageBox_C.ExecuteUbergraph_UI_ModalMessageBox");

	UUI_ModalMessageBox_C_ExecuteUbergraph_UI_ModalMessageBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
