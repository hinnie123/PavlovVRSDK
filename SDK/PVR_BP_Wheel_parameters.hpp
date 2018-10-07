#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Wheel.BP_Wheel_C.EnableMenuFromGhost
struct ABP_Wheel_C_EnableMenuFromGhost_Params
{
	class AVRPawn*                                     self2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AVRPawn*                                     self3;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.HandleTkCommit
struct ABP_Wheel_C_HandleTkCommit_Params
{
	struct FWheelSegment                               WheelSegment;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       Selection;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.SwitchToTKMenu
struct ABP_Wheel_C_SwitchToTKMenu_Params
{
};

// Function BP_Wheel.BP_Wheel_C.SwitchToRootMenu
struct ABP_Wheel_C_SwitchToRootMenu_Params
{
};

// Function BP_Wheel.BP_Wheel_C.CommitAndClose
struct ABP_Wheel_C_CommitAndClose_Params
{
};

// Function BP_Wheel.BP_Wheel_C.HandleBuyCommit
struct ABP_Wheel_C_HandleBuyCommit_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWheelSegment                               WheelSegment;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Wheel.BP_Wheel_C.SetCenterLabel
struct ABP_Wheel_C_SetCenterLabel_Params
{
	struct FText                                       CenterLabel;                                              // (Parm)
};

// Function BP_Wheel.BP_Wheel_C.GetBuySegment List
struct ABP_Wheel_C_GetBuySegment_List_Params
{
	TEnumAsByte<EBuyMenuMode>                          Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FWheelSegment>                       Segments;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_Wheel.BP_Wheel_C.SwitchToBuyMenu
struct ABP_Wheel_C_SwitchToBuyMenu_Params
{
};

// Function BP_Wheel.BP_Wheel_C.UserConstructionScript
struct ABP_Wheel_C_UserConstructionScript_Params
{
};

// Function BP_Wheel.BP_Wheel_C.ReceiveBeginPlay
struct ABP_Wheel_C_ReceiveBeginPlay_Params
{
};

// Function BP_Wheel.BP_Wheel_C.OnBuyingChanged_Event_1
struct ABP_Wheel_C_OnBuyingChanged_Event_1_Params
{
	bool                                               bBuying;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.UpdateBuyMenu
struct ABP_Wheel_C_UpdateBuyMenu_Params
{
};

// Function BP_Wheel.BP_Wheel_C.OnEnabled
struct ABP_Wheel_C_OnEnabled_Params
{
};

// Function BP_Wheel.BP_Wheel_C.CustomEvent_1
struct ABP_Wheel_C_CustomEvent_1_Params
{
};

// Function BP_Wheel.BP_Wheel_C.OnCommit
struct ABP_Wheel_C_OnCommit_Params
{
	int*                                               Selection;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWheelSegment*                              Segment;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Wheel.BP_Wheel_C.ExecuteUbergraph_BP_Wheel
struct ABP_Wheel_C_ExecuteUbergraph_BP_Wheel_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
