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

// Function Item_Keycard.Item_Keycard_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AItem_Keycard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Keycard.Item_Keycard_C.UserConstructionScript");

	AItem_Keycard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Keycard.Item_Keycard_C.Physicalize
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Keycard_C::Physicalize(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Keycard.Item_Keycard_C.Physicalize");

	AItem_Keycard_C_Physicalize_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Keycard.Item_Keycard_C.ExecuteUbergraph_Item_Keycard
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItem_Keycard_C::ExecuteUbergraph_Item_Keycard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Keycard.Item_Keycard_C.ExecuteUbergraph_Item_Keycard");

	AItem_Keycard_C_ExecuteUbergraph_Item_Keycard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
