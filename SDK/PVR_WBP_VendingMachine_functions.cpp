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

// Function WBP_VendingMachine.WBP_VendingMachine_C.UpdateList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           StartingItems                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_VendingMachine_C::UpdateList(TArray<struct FName>* StartingItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VendingMachine.WBP_VendingMachine_C.UpdateList");

	UWBP_VendingMachine_C_UpdateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartingItems != nullptr)
		*StartingItems = params.StartingItems;
}


// Function WBP_VendingMachine.WBP_VendingMachine_C.ItemPriceBinding
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_VendingMachine_C::ItemPriceBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VendingMachine.WBP_VendingMachine_C.ItemPriceBinding");

	UWBP_VendingMachine_C_ItemPriceBinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VendingMachine.WBP_VendingMachine_C.ResetMachine
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_VendingMachine_C::ResetMachine()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VendingMachine.WBP_VendingMachine_C.ResetMachine");

	UWBP_VendingMachine_C_ResetMachine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VendingMachine.WBP_VendingMachine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_VendingMachine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VendingMachine.WBP_VendingMachine_C.Construct");

	UWBP_VendingMachine_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VendingMachine.WBP_VendingMachine_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VendingMachine_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VendingMachine.WBP_VendingMachine_C.Tick");

	UWBP_VendingMachine_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VendingMachine.WBP_VendingMachine_C.AddScroll
// (BlueprintCallable, BlueprintEvent)

void UWBP_VendingMachine_C::AddScroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VendingMachine.WBP_VendingMachine_C.AddScroll");

	UWBP_VendingMachine_C_AddScroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VendingMachine.WBP_VendingMachine_C.Display List
// (BlueprintCallable, BlueprintEvent)

void UWBP_VendingMachine_C::Display_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VendingMachine.WBP_VendingMachine_C.Display List");

	UWBP_VendingMachine_C_Display_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VendingMachine.WBP_VendingMachine_C.Spin
// (BlueprintCallable, BlueprintEvent)

void UWBP_VendingMachine_C::Spin()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VendingMachine.WBP_VendingMachine_C.Spin");

	UWBP_VendingMachine_C_Spin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VendingMachine.WBP_VendingMachine_C.SetPlayerCash
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerCash                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VendingMachine_C::SetPlayerCash(int PlayerCash)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VendingMachine.WBP_VendingMachine_C.SetPlayerCash");

	UWBP_VendingMachine_C_SetPlayerCash_Params params;
	params.PlayerCash = PlayerCash;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VendingMachine.WBP_VendingMachine_C.SetItemPrice
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemPrice                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VendingMachine_C::SetItemPrice(int ItemPrice)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VendingMachine.WBP_VendingMachine_C.SetItemPrice");

	UWBP_VendingMachine_C_SetItemPrice_Params params;
	params.ItemPrice = ItemPrice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VendingMachine.WBP_VendingMachine_C.ExecuteUbergraph_WBP_VendingMachine
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VendingMachine_C::ExecuteUbergraph_WBP_VendingMachine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VendingMachine.WBP_VendingMachine_C.ExecuteUbergraph_WBP_VendingMachine");

	UWBP_VendingMachine_C_ExecuteUbergraph_WBP_VendingMachine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
