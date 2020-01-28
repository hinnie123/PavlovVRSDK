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

// Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.Get_header_ColorAndOpacity_1
struct UUI_ReplayPlayerStatus_C_Get_header_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.Get_Root_Visibility_1
struct UUI_ReplayPlayerStatus_C_Get_Root_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.Get_CashLabel_Text_1
struct UUI_ReplayPlayerStatus_C_Get_CashLabel_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.Initialize
struct UUI_ReplayPlayerStatus_C_Initialize_Params
{
	bool                                               bLeft;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.UpdateEquipment
struct UUI_ReplayPlayerStatus_C_UpdateEquipment_Params
{
};

// Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.Construct
struct UUI_ReplayPlayerStatus_C_Construct_Params
{
};

// Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.Tick
struct UUI_ReplayPlayerStatus_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.ExecuteUbergraph_UI_ReplayPlayerStatus
struct UUI_ReplayPlayerStatus_C_ExecuteUbergraph_UI_ReplayPlayerStatus_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
