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

// Function WBP_VendingEntry.WBP_VendingEntry_C.Entry Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VendingEntry_C::Entry_Selected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VendingEntry.WBP_VendingEntry_C.Entry Selected");

	UWBP_VendingEntry_C_Entry_Selected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VendingEntry.WBP_VendingEntry_C.ExecuteUbergraph_WBP_VendingEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VendingEntry_C::ExecuteUbergraph_WBP_VendingEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VendingEntry.WBP_VendingEntry_C.ExecuteUbergraph_WBP_VendingEntry");

	UWBP_VendingEntry_C_ExecuteUbergraph_WBP_VendingEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
