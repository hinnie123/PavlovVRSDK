#pragma once

// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_VendingMachine.WBP_VendingMachine_C.UpdateList
struct UWBP_VendingMachine_C_UpdateList_Params
{
	TArray<struct FName>                               StartingItems;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_VendingMachine.WBP_VendingMachine_C.ItemPriceBinding
struct UWBP_VendingMachine_C_ItemPriceBinding_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_VendingMachine.WBP_VendingMachine_C.ResetMachine
struct UWBP_VendingMachine_C_ResetMachine_Params
{
};

// Function WBP_VendingMachine.WBP_VendingMachine_C.Construct
struct UWBP_VendingMachine_C_Construct_Params
{
};

// Function WBP_VendingMachine.WBP_VendingMachine_C.Tick
struct UWBP_VendingMachine_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VendingMachine.WBP_VendingMachine_C.AddScroll
struct UWBP_VendingMachine_C_AddScroll_Params
{
};

// Function WBP_VendingMachine.WBP_VendingMachine_C.Display List
struct UWBP_VendingMachine_C_Display_List_Params
{
};

// Function WBP_VendingMachine.WBP_VendingMachine_C.Spin
struct UWBP_VendingMachine_C_Spin_Params
{
};

// Function WBP_VendingMachine.WBP_VendingMachine_C.SetPlayerCash
struct UWBP_VendingMachine_C_SetPlayerCash_Params
{
	int                                                PlayerCash;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VendingMachine.WBP_VendingMachine_C.SetItemPrice
struct UWBP_VendingMachine_C_SetItemPrice_Params
{
	int                                                ItemPrice;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VendingMachine.WBP_VendingMachine_C.ExecuteUbergraph_WBP_VendingMachine
struct UWBP_VendingMachine_C_ExecuteUbergraph_WBP_VendingMachine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
