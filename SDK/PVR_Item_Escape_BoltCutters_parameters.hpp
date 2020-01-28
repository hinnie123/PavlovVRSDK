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

// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.MainHandHaptics
struct AItem_Escape_BoltCutters_C_MainHandHaptics_Params
{
};

// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.PlayCloseAnim
struct AItem_Escape_BoltCutters_C_PlayCloseAnim_Params
{
	bool                                               Close;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.SetOpenAlpha
struct AItem_Escape_BoltCutters_C_SetOpenAlpha_Params
{
	float                                              OpenAlpha;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.CheckFenceTouch
struct AItem_Escape_BoltCutters_C_CheckFenceTouch_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.PlaySnipSound
struct AItem_Escape_BoltCutters_C_PlaySnipSound_Params
{
};

// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.TryUseItem
struct AItem_Escape_BoltCutters_C_TryUseItem_Params
{
	class UObject**                                    Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayError;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.UserConstructionScript
struct AItem_Escape_BoltCutters_C_UserConstructionScript_Params
{
};

// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_1_VRHandleOnGrabSignature__DelegateSignature
struct AItem_Escape_BoltCutters_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_1_VRHandleOnGrabSignature__DelegateSignature_Params
{
};

// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_2_VRHandleOnUngrabSignature__DelegateSignature
struct AItem_Escape_BoltCutters_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_2_VRHandleOnUngrabSignature__DelegateSignature_Params
{
};

// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.BndEvt__VRHandle_K2Node_ComponentBoundEvent_3_VRHandleOnInputReceivedSignature__DelegateSignature
struct AItem_Escape_BoltCutters_C_BndEvt__VRHandle_K2Node_ComponentBoundEvent_3_VRHandleOnInputReceivedSignature__DelegateSignature_Params
{
	float                                              InputValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.Use
struct AItem_Escape_BoltCutters_C_Use_Params
{
};

// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.Used
struct AItem_Escape_BoltCutters_C_Used_Params
{
	bool*                                              bJustPicked;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AItem_Escape_BoltCutters_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.DestroyObjective_Server
struct AItem_Escape_BoltCutters_C_DestroyObjective_Server_Params
{
	class ABP_EscapeObjective_C**                      EscapeObjective;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.PlaySnipFX_Multi
struct AItem_Escape_BoltCutters_C_PlaySnipFX_Multi_Params
{
};

// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.OnPick
struct AItem_Escape_BoltCutters_C_OnPick_Params
{
	class AVRItemController**                          ByController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.OnDrop
struct AItem_Escape_BoltCutters_C_OnDrop_Params
{
};

// Function Item_Escape_BoltCutters.Item_Escape_BoltCutters_C.ExecuteUbergraph_Item_Escape_BoltCutters
struct AItem_Escape_BoltCutters_C_ExecuteUbergraph_Item_Escape_BoltCutters_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
