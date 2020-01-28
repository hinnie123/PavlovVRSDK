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

// Function Item_Handcuffs.Item_Handcuffs_C.PlayArrestAnim
struct AItem_Handcuffs_C_PlayArrestAnim_Params
{
	bool                                               Arrested;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Handcuffs.Item_Handcuffs_C.SetTriggerDown
struct AItem_Handcuffs_C_SetTriggerDown_Params
{
	bool                                               TriggerDown;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Handcuffs.Item_Handcuffs_C.PlayHandcuffOpenSound
struct AItem_Handcuffs_C_PlayHandcuffOpenSound_Params
{
};

// Function Item_Handcuffs.Item_Handcuffs_C.Handcuff
struct AItem_Handcuffs_C_Handcuff_Params
{
	class ABP_PavlovPawn_C*                            PavlovPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Successful_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Handcuffs.Item_Handcuffs_C.TryHandcuff_Client
struct AItem_Handcuffs_C_TryHandcuff_Client_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Successful_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Handcuffs.Item_Handcuffs_C.FindPawnToHandcuff
struct AItem_Handcuffs_C_FindPawnToHandcuff_Params
{
	bool                                               FoundPawn;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABP_PavlovPawn_C*                            PavPawn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Handcuffs.Item_Handcuffs_C.UserConstructionScript
struct AItem_Handcuffs_C_UserConstructionScript_Params
{
};

// Function Item_Handcuffs.Item_Handcuffs_C.Physicalize
struct AItem_Handcuffs_C_Physicalize_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Handcuffs.Item_Handcuffs_C.Used
struct AItem_Handcuffs_C_Used_Params
{
	bool*                                              bJustPicked;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Handcuffs.Item_Handcuffs_C.Use
struct AItem_Handcuffs_C_Use_Params
{
};

// Function Item_Handcuffs.Item_Handcuffs_C.OnDrop
struct AItem_Handcuffs_C_OnDrop_Params
{
};

// Function Item_Handcuffs.Item_Handcuffs_C.HandcuffPlayer_Server
struct AItem_Handcuffs_C_HandcuffPlayer_Server_Params
{
	class ABP_PavlovPawn_C*                            PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Handcuffs.Item_Handcuffs_C.PlayHandcuffSound
struct AItem_Handcuffs_C_PlayHandcuffSound_Params
{
};

// Function Item_Handcuffs.Item_Handcuffs_C.BndEvt__SK_Handcuffs_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AItem_Handcuffs_C_BndEvt__SK_Handcuffs_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Item_Handcuffs.Item_Handcuffs_C.OnPick
struct AItem_Handcuffs_C_OnPick_Params
{
	class AVRItemController**                          ByController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Handcuffs.Item_Handcuffs_C.ExecuteUbergraph_Item_Handcuffs
struct AItem_Handcuffs_C_ExecuteUbergraph_Item_Handcuffs_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
