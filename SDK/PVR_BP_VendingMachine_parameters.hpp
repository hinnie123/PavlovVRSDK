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

// Function BP_VendingMachine.BP_VendingMachine_C.UseSoftGrabConstraint
struct ABP_VendingMachine_C_UseSoftGrabConstraint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_VendingMachine.BP_VendingMachine_C.InitVendingMachine_Server
struct ABP_VendingMachine_C_InitVendingMachine_Server_Params
{
	int                                                MinPrice;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxPrice;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Items;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_VendingMachine.BP_VendingMachine_C.PlaySpinSound
struct ABP_VendingMachine_C_PlaySpinSound_Params
{
};

// Function BP_VendingMachine.BP_VendingMachine_C.PayForSpin
struct ABP_VendingMachine_C_PayForSpin_Params
{
	class ABP_PavlovPawn_C*                            PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               successful;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VendingMachine.BP_VendingMachine_C.ResetPlayerCash
struct ABP_VendingMachine_C_ResetPlayerCash_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VendingMachine.BP_VendingMachine_C.ShowPlayerCash
struct ABP_VendingMachine_C_ShowPlayerCash_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VendingMachine.BP_VendingMachine_C.SetInUse
struct ABP_VendingMachine_C_SetInUse_Params
{
	bool                                               InUse;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VendingMachine.BP_VendingMachine_C.OnRep_CurrentItems
struct ABP_VendingMachine_C_OnRep_CurrentItems_Params
{
};

// Function BP_VendingMachine.BP_VendingMachine_C.SetVendingItems
struct ABP_VendingMachine_C_SetVendingItems_Params
{
};

// Function BP_VendingMachine.BP_VendingMachine_C.UpdateCash
struct ABP_VendingMachine_C_UpdateCash_Params
{
};

// Function BP_VendingMachine.BP_VendingMachine_C.OnRep_UpdatePlayerCash
struct ABP_VendingMachine_C_OnRep_UpdatePlayerCash_Params
{
};

// Function BP_VendingMachine.BP_VendingMachine_C.SpawnItem
struct ABP_VendingMachine_C_SpawnItem_Params
{
};

// Function BP_VendingMachine.BP_VendingMachine_C.PlayNotEnoughCashSound
struct ABP_VendingMachine_C_PlayNotEnoughCashSound_Params
{
};

// Function BP_VendingMachine.BP_VendingMachine_C.OnRep_Cost
struct ABP_VendingMachine_C_OnRep_Cost_Params
{
};

// Function BP_VendingMachine.BP_VendingMachine_C.HasEnoughCash
struct ABP_VendingMachine_C_HasEnoughCash_Params
{
	class ABP_PavlovPawn_C*                            PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasEnough_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VendingMachine.BP_VendingMachine_C.UserConstructionScript
struct ABP_VendingMachine_C_UserConstructionScript_Params
{
};

// Function BP_VendingMachine.BP_VendingMachine_C.Timeline_0__FinishedFunc
struct ABP_VendingMachine_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_VendingMachine.BP_VendingMachine_C.Timeline_0__UpdateFunc
struct ABP_VendingMachine_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_VendingMachine.BP_VendingMachine_C.Grabbed
struct ABP_VendingMachine_C_Grabbed_Params
{
	class AVRController*                               Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VendingMachine.BP_VendingMachine_C.LootGrabbed
struct ABP_VendingMachine_C_LootGrabbed_Params
{
	class ABP_PavlovPawn_C*                            PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Dominant_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VendingMachine.BP_VendingMachine_C.ReceiveBeginPlay
struct ABP_VendingMachine_C_ReceiveBeginPlay_Params
{
};

// Function BP_VendingMachine.BP_VendingMachine_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_VendingMachine_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_VendingMachine.BP_VendingMachine_C.BndEvt__PawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_VendingMachine_C_BndEvt__PawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VendingMachine.BP_VendingMachine_C.SpinVendingWheel
struct ABP_VendingMachine_C_SpinVendingWheel_Params
{
};

// Function BP_VendingMachine.BP_VendingMachine_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_4_VRHandleOnRotationInputReceivedSignature__DelegateSignature
struct ABP_VendingMachine_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_4_VRHandleOnRotationInputReceivedSignature__DelegateSignature_Params
{
	float                                              InputValueDegrees;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VendingMachine.BP_VendingMachine_C.UnGrabbed
struct ABP_VendingMachine_C_UnGrabbed_Params
{
	class AVRController*                               Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VendingMachine.BP_VendingMachine_C.DidPlayerDie
struct ABP_VendingMachine_C_DidPlayerDie_Params
{
};

// Function BP_VendingMachine.BP_VendingMachine_C.Reset Handle
struct ABP_VendingMachine_C_Reset_Handle_Params
{
};

// Function BP_VendingMachine.BP_VendingMachine_C.ExecuteUbergraph_BP_VendingMachine
struct ABP_VendingMachine_C_ExecuteUbergraph_BP_VendingMachine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
