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

// Function BP_Wheel.BP_Wheel_C.DoesPickupSupportsAttachments
struct ABP_Wheel_C_DoesPickupSupportsAttachments_Params
{
	struct FName                                       EquipmentName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SupportsAttaments;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.DoesEquipmentSupportsAttachments
struct ABP_Wheel_C_DoesEquipmentSupportsAttachments_Params
{
	struct FName                                       EquipmentName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SupportsAttaments;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.EnqueDelayedUpdate
struct ABP_Wheel_C_EnqueDelayedUpdate_Params
{
};

// Function BP_Wheel.BP_Wheel_C.GetAttachmentList
struct ABP_Wheel_C_GetAttachmentList_Params
{
	TArray<struct FWheelSegment>                       Segments;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_Wheel.BP_Wheel_C.EnableMenuFromGhost
struct ABP_Wheel_C_EnableMenuFromGhost_Params
{
	class AVRPawn*                                     self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AVRPawn*                                     self3;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.HandleTkCommit
struct ABP_Wheel_C_HandleTkCommit_Params
{
	struct FWheelSegment                               WheelSegment;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FName                                       Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
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
	int                                                A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FWheelSegment                               WheelSegment;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Wheel.BP_Wheel_C.SetCenterLabel
struct ABP_Wheel_C_SetCenterLabel_Params
{
	struct FText                                       CenterLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Wheel.BP_Wheel_C.GetBuySegment List
struct ABP_Wheel_C_GetBuySegment_List_Params
{
	TEnumAsByte<EBuyMenuMode>                          Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
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

// Function BP_Wheel.BP_Wheel_C.OnCommit
struct ABP_Wheel_C_OnCommit_Params
{
	int*                                               Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FWheelSegment*                              Segment;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Wheel.BP_Wheel_C.OnEnabled
struct ABP_Wheel_C_OnEnabled_Params
{
};

// Function BP_Wheel.BP_Wheel_C.UpdateBuyMenu
struct ABP_Wheel_C_UpdateBuyMenu_Params
{
};

// Function BP_Wheel.BP_Wheel_C.ReceiveBeginPlay
struct ABP_Wheel_C_ReceiveBeginPlay_Params
{
};

// Function BP_Wheel.BP_Wheel_C.OnBuyingChanged_Event_1
struct ABP_Wheel_C_OnBuyingChanged_Event_1_Params
{
	bool                                               bBuying;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wheel.BP_Wheel_C.CustomEvent_1
struct ABP_Wheel_C_CustomEvent_1_Params
{
};

// Function BP_Wheel.BP_Wheel_C.ExecuteUbergraph_BP_Wheel
struct ABP_Wheel_C_ExecuteUbergraph_BP_Wheel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
