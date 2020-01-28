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

// Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.CheckCrowbarHit
struct AItem_Escape_Crowbar_C_CheckCrowbarHit_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.TryUseItem
struct AItem_Escape_Crowbar_C_TryUseItem_Params
{
	class UObject**                                    Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayError;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.PlaySwingSound
struct AItem_Escape_Crowbar_C_PlaySwingSound_Params
{
};

// Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.UserConstructionScript
struct AItem_Escape_Crowbar_C_UserConstructionScript_Params
{
};

// Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.ReceiveBeginPlay
struct AItem_Escape_Crowbar_C_ReceiveBeginPlay_Params
{
};

// Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.Use
struct AItem_Escape_Crowbar_C_Use_Params
{
};

// Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.PlayInteractFX_Multi
struct AItem_Escape_Crowbar_C_PlayInteractFX_Multi_Params
{
};

// Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AItem_Escape_Crowbar_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Item_Escape_Crowbar.Item_Escape_Crowbar_C.ExecuteUbergraph_Item_Escape_Crowbar
struct AItem_Escape_Crowbar_C_ExecuteUbergraph_Item_Escape_Crowbar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
