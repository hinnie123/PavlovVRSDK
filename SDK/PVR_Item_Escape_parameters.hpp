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

// Function Item_Escape.Item_Escape_C.PlayInteractFX
struct AItem_Escape_C_PlayInteractFX_Params
{
	bool                                               UseInteractSocket;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  EmitterTrans;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Item_Escape.Item_Escape_C.CheckUseAmount_Server
struct AItem_Escape_C_CheckUseAmount_Server_Params
{
};

// Function Item_Escape.Item_Escape_C.TryUseItem
struct AItem_Escape_C_TryUseItem_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayError;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape.Item_Escape_C.UserConstructionScript
struct AItem_Escape_C_UserConstructionScript_Params
{
};

// Function Item_Escape.Item_Escape_C.Physicalize
struct AItem_Escape_C_Physicalize_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape.Item_Escape_C.DestroyObjective_Server
struct AItem_Escape_C_DestroyObjective_Server_Params
{
	class ABP_EscapeObjective_C*                       EscapeObjective;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape.Item_Escape_C.Use
struct AItem_Escape_C_Use_Params
{
};

// Function Item_Escape.Item_Escape_C.Used
struct AItem_Escape_C_Used_Params
{
	bool*                                              bJustPicked;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape.Item_Escape_C.OnDrop
struct AItem_Escape_C_OnDrop_Params
{
};

// Function Item_Escape.Item_Escape_C.Play Error Sound
struct AItem_Escape_C_Play_Error_Sound_Params
{
};

// Function Item_Escape.Item_Escape_C.OnPick
struct AItem_Escape_C_OnPick_Params
{
	class AVRItemController**                          ByController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape.Item_Escape_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AItem_Escape_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Item_Escape.Item_Escape_C.ExecuteUbergraph_Item_Escape
struct AItem_Escape_C_ExecuteUbergraph_Item_Escape_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
