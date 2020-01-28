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

// Function BP_BRItemProxy.BP_BRItemProxy_C.UseSoftGrabConstraint
struct ABP_BRItemProxy_C_UseSoftGrabConstraint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BRItemProxy.BP_BRItemProxy_C.UpdateMeshes
struct ABP_BRItemProxy_C_UpdateMeshes_Params
{
	struct FName                                       Loot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BRItemProxy.BP_BRItemProxy_C.GrabLoot_Server
struct ABP_BRItemProxy_C_GrabLoot_Server_Params
{
	class APavlovPawn*                                 PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDominant;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BRItemProxy.BP_BRItemProxy_C.SelectionDisable_Client
struct ABP_BRItemProxy_C_SelectionDisable_Client_Params
{
	class AActor*                                      Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BRItemProxy.BP_BRItemProxy_C.Haptic+SelectionEnable_Client
struct ABP_BRItemProxy_C_Haptic_SelectionEnable_Client_Params
{
	class AActor*                                      Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BRItemProxy.BP_BRItemProxy_C.UpdateLoot_Server
struct ABP_BRItemProxy_C_UpdateLoot_Server_Params
{
	struct FName                                       ActiveLoot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BRItemProxy.BP_BRItemProxy_C.OnRep_ActiveLoot
struct ABP_BRItemProxy_C_OnRep_ActiveLoot_Params
{
};

// Function BP_BRItemProxy.BP_BRItemProxy_C.UserConstructionScript
struct ABP_BRItemProxy_C_UserConstructionScript_Params
{
};

// Function BP_BRItemProxy.BP_BRItemProxy_C.UnGrabbed
struct ABP_BRItemProxy_C_UnGrabbed_Params
{
	class AVRController*                               Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BRItemProxy.BP_BRItemProxy_C.ReceiveBeginPlay
struct ABP_BRItemProxy_C_ReceiveBeginPlay_Params
{
};

// Function BP_BRItemProxy.BP_BRItemProxy_C.LootGrabbed
struct ABP_BRItemProxy_C_LootGrabbed_Params
{
	class ABP_PavlovPawn_C*                            PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Dominant_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BRItemProxy.BP_BRItemProxy_C.Grabbed
struct ABP_BRItemProxy_C_Grabbed_Params
{
	class AVRController*                               Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BRItemProxy.BP_BRItemProxy_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_BRItemProxy_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_BRItemProxy.BP_BRItemProxy_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ABP_BRItemProxy_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BRItemProxy.BP_BRItemProxy_C.SpawnLoot
struct ABP_BRItemProxy_C_SpawnLoot_Params
{
};

// Function BP_BRItemProxy.BP_BRItemProxy_C.ExecuteUbergraph_BP_BRItemProxy
struct ABP_BRItemProxy_C_ExecuteUbergraph_BP_BRItemProxy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
