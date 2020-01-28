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

// Function BP_Escape_Lock.BP_Escape_Lock_C.LockpickOverlap
struct ABP_Escape_Lock_C_LockpickOverlap_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.PlayLockpickSound
struct ABP_Escape_Lock_C_PlayLockpickSound_Params
{
	bool                                               Lock1_;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.CanGrab?
struct ABP_Escape_Lock_C_CanGrab__Params
{
	bool                                               CanGrab;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.EvaluateUnlockDegrees
struct ABP_Escape_Lock_C_EvaluateUnlockDegrees_Params
{
	float                                              Degrees;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Handle1_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.Unlock_Client
struct ABP_Escape_Lock_C_Unlock_Client_Params
{
	bool                                               Handle1_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.ShowLocks
struct ABP_Escape_Lock_C_ShowLocks_Params
{
	bool                                               Hidden_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.EscapeStateChanged
struct ABP_Escape_Lock_C_EscapeStateChanged_Params
{
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.CanRepair
struct ABP_Escape_Lock_C_CanRepair_Params
{
	bool                                               CanRepair_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.CanLockpick?
struct ABP_Escape_Lock_C_CanLockpick__Params
{
	class AVRItem*                                     VRItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanLockpick;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.MovingDoor
struct ABP_Escape_Lock_C_MovingDoor_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.SetObjectiveState
struct ABP_Escape_Lock_C_SetObjectiveState_Params
{
	TEnumAsByte<E_EscapeObjectiveState>                EscapeState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.OnRep_EscapeState
struct ABP_Escape_Lock_C_OnRep_EscapeState_Params
{
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.UserConstructionScript
struct ABP_Escape_Lock_C_UserConstructionScript_Params
{
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.MoveDoor__FinishedFunc
struct ABP_Escape_Lock_C_MoveDoor__FinishedFunc_Params
{
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.MoveDoor__UpdateFunc
struct ABP_Escape_Lock_C_MoveDoor__UpdateFunc_Params
{
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.ReceiveBeginPlay
struct ABP_Escape_Lock_C_ReceiveBeginPlay_Params
{
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.ResetObjective_Event
struct ABP_Escape_Lock_C_ResetObjective_Event_Params
{
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.LockpickEscape_Server
struct ABP_Escape_Lock_C_LockpickEscape_Server_Params
{
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.OpenDoor
struct ABP_Escape_Lock_C_OpenDoor_Params
{
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.CloseDoor
struct ABP_Escape_Lock_C_CloseDoor_Params
{
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.PlayRepairSound
struct ABP_Escape_Lock_C_PlayRepairSound_Params
{
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_0_VRHandleOnRotationInputReceivedSignature__DelegateSignature
struct ABP_Escape_Lock_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_0_VRHandleOnRotationInputReceivedSignature__DelegateSignature_Params
{
	float                                              InputValueDegrees;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature
struct ABP_Escape_Lock_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature_Params
{
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_5_VRHandleOnGrabSignature__DelegateSignature
struct ABP_Escape_Lock_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_5_VRHandleOnGrabSignature__DelegateSignature_Params
{
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle1_K2Node_ComponentBoundEvent_6_VRHandleOnGrabSignature__DelegateSignature
struct ABP_Escape_Lock_C_BndEvt__VRHandle1_K2Node_ComponentBoundEvent_6_VRHandleOnGrabSignature__DelegateSignature_Params
{
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle1_K2Node_ComponentBoundEvent_7_VRHandleOnUngrabSignature__DelegateSignature
struct ABP_Escape_Lock_C_BndEvt__VRHandle1_K2Node_ComponentBoundEvent_7_VRHandleOnUngrabSignature__DelegateSignature_Params
{
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle1_K2Node_ComponentBoundEvent_8_VRHandleOnRotationInputReceivedSignature__DelegateSignature
struct ABP_Escape_Lock_C_BndEvt__VRHandle1_K2Node_ComponentBoundEvent_8_VRHandleOnRotationInputReceivedSignature__DelegateSignature_Params
{
	float                                              InputValueDegrees;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Escape_Lock_C_BndEvt__VRHandle1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Escape_Lock_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.ExecuteUbergraph_BP_Escape_Lock
struct ABP_Escape_Lock_C_ExecuteUbergraph_BP_Escape_Lock_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Escape_Lock.BP_Escape_Lock_C.ResetObjective__DelegateSignature
struct ABP_Escape_Lock_C_ResetObjective__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
