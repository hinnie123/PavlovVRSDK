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

// Function BP_BRDoor.BP_BRDoor_C.UseSoftGrabConstraint
struct ABP_BRDoor_C_UseSoftGrabConstraint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BRDoor.BP_BRDoor_C.PlayCloseSound
struct ABP_BRDoor_C_PlayCloseSound_Params
{
};

// Function BP_BRDoor.BP_BRDoor_C.PlayOpenSound
struct ABP_BRDoor_C_PlayOpenSound_Params
{
};

// Function BP_BRDoor.BP_BRDoor_C.CanMoveDoor
struct ABP_BRDoor_C_CanMoveDoor_Params
{
	bool                                               CanMove;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BRDoor.BP_BRDoor_C.OnRep_DoorState
struct ABP_BRDoor_C_OnRep_DoorState_Params
{
};

// Function BP_BRDoor.BP_BRDoor_C.SetDoorState_Server
struct ABP_BRDoor_C_SetDoorState_Server_Params
{
	TEnumAsByte<E_DoorState>                           DoorState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BRDoor.BP_BRDoor_C.UserConstructionScript
struct ABP_BRDoor_C_UserConstructionScript_Params
{
};

// Function BP_BRDoor.BP_BRDoor_C.MoveDoor_Timeline__FinishedFunc
struct ABP_BRDoor_C_MoveDoor_Timeline__FinishedFunc_Params
{
};

// Function BP_BRDoor.BP_BRDoor_C.MoveDoor_Timeline__UpdateFunc
struct ABP_BRDoor_C_MoveDoor_Timeline__UpdateFunc_Params
{
};

// Function BP_BRDoor.BP_BRDoor_C.UnGrabbed
struct ABP_BRDoor_C_UnGrabbed_Params
{
	class AVRController*                               Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BRDoor.BP_BRDoor_C.ReceiveBeginPlay
struct ABP_BRDoor_C_ReceiveBeginPlay_Params
{
};

// Function BP_BRDoor.BP_BRDoor_C.OnDoorStateChanged_Event
struct ABP_BRDoor_C_OnDoorStateChanged_Event_Params
{
	TEnumAsByte<E_DoorState>                           DoorState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BRDoor.BP_BRDoor_C.MoveDoor
struct ABP_BRDoor_C_MoveDoor_Params
{
};

// Function BP_BRDoor.BP_BRDoor_C.Grabbed
struct ABP_BRDoor_C_Grabbed_Params
{
	class AVRController*                               Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BRDoor.BP_BRDoor_C.LootGrabbed
struct ABP_BRDoor_C_LootGrabbed_Params
{
	class ABP_PavlovPawn_C*                            PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Dominant_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BRDoor.BP_BRDoor_C.BndEvt__Handle_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_BRDoor_C_BndEvt__Handle_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_BRDoor.BP_BRDoor_C.ExecuteUbergraph_BP_BRDoor
struct ABP_BRDoor_C_ExecuteUbergraph_BP_BRDoor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BRDoor.BP_BRDoor_C.OnDoorStateChanged__DelegateSignature
struct ABP_BRDoor_C_OnDoorStateChanged__DelegateSignature_Params
{
	TEnumAsByte<E_DoorState>                           DoorState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
