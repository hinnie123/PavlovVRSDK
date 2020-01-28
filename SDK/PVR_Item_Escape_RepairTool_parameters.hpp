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

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.SetHandleRotation
struct AItem_Escape_RepairTool_C_SetHandleRotation_Params
{
	float                                              HandleRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TurnOff;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.SetTriggerDown
struct AItem_Escape_RepairTool_C_SetTriggerDown_Params
{
	bool                                               TriggerDown;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.StopTorchFX
struct AItem_Escape_RepairTool_C_StopTorchFX_Params
{
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.PlayTorchFX
struct AItem_Escape_RepairTool_C_PlayTorchFX_Params
{
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.PlayRepairingSound
struct AItem_Escape_RepairTool_C_PlayRepairingSound_Params
{
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.TryUseItem
struct AItem_Escape_RepairTool_C_TryUseItem_Params
{
	class UObject**                                    Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayError;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.TryRepair_Client
struct AItem_Escape_RepairTool_C_TryRepair_Client_Params
{
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.OnRep_RepairTicks
struct AItem_Escape_RepairTool_C_OnRep_RepairTicks_Params
{
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.TickRepair
struct AItem_Escape_RepairTool_C_TickRepair_Params
{
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.StopGasSound
struct AItem_Escape_RepairTool_C_StopGasSound_Params
{
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.StopTorchSound
struct AItem_Escape_RepairTool_C_StopTorchSound_Params
{
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.PlayGasSound
struct AItem_Escape_RepairTool_C_PlayGasSound_Params
{
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.SetGasVolume
struct AItem_Escape_RepairTool_C_SetGasVolume_Params
{
	float                                              VolumeMultiplier;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.PlayTorchSound
struct AItem_Escape_RepairTool_C_PlayTorchSound_Params
{
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.PlayFlintStrikeSound
struct AItem_Escape_RepairTool_C_PlayFlintStrikeSound_Params
{
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.CanGetPickedBy
struct AItem_Escape_RepairTool_C_CanGetPickedBy_Params
{
	class AVRItemController**                          ByController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.UserConstructionScript
struct AItem_Escape_RepairTool_C_UserConstructionScript_Params
{
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.Repair Objective
struct AItem_Escape_RepairTool_C_Repair_Objective_Params
{
	class ABP_EscapeObjective_C*                       EscapeObjective;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.Use
struct AItem_Escape_RepairTool_C_Use_Params
{
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.RepairLock
struct AItem_Escape_RepairTool_C_RepairLock_Params
{
	class ABP_Escape_Lock_C*                           Escape_Lock;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_4_VRHandleOnRotationInputReceivedSignature__DelegateSignature
struct AItem_Escape_RepairTool_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_4_VRHandleOnRotationInputReceivedSignature__DelegateSignature_Params
{
	float                                              InputValueDegrees;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.Used
struct AItem_Escape_RepairTool_C_Used_Params
{
	bool*                                              bJustPicked;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.OnPick
struct AItem_Escape_RepairTool_C_OnPick_Params
{
	class AVRItemController**                          ByController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.OnDrop
struct AItem_Escape_RepairTool_C_OnDrop_Params
{
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
struct AItem_Escape_RepairTool_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature
struct AItem_Escape_RepairTool_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_0_VRHandleOnUngrabSignature__DelegateSignature_Params
{
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.RepairObjective
struct AItem_Escape_RepairTool_C_RepairObjective_Params
{
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.Start RepairingObjective
struct AItem_Escape_RepairTool_C_Start_RepairingObjective_Params
{
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.ReceiveDestroyed
struct AItem_Escape_RepairTool_C_ReceiveDestroyed_Params
{
};

// Function Item_Escape_RepairTool.Item_Escape_RepairTool_C.ExecuteUbergraph_Item_Escape_RepairTool
struct AItem_Escape_RepairTool_C_ExecuteUbergraph_Item_Escape_RepairTool_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
