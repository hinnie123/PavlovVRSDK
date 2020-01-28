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

// Function Item_PickAxe.Item_PickAxe_C.PlaySwingSound
struct AItem_PickAxe_C_PlaySwingSound_Params
{
};

// Function Item_PickAxe.Item_PickAxe_C.UseItem
struct AItem_PickAxe_C_UseItem_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_PickAxe.Item_PickAxe_C.UserConstructionScript
struct AItem_PickAxe_C_UserConstructionScript_Params
{
};

// Function Item_PickAxe.Item_PickAxe_C.Physicalize
struct AItem_PickAxe_C_Physicalize_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_PickAxe.Item_PickAxe_C.Mine_Server
struct AItem_PickAxe_C_Mine_Server_Params
{
	class ABP_Mining_C*                                Mining;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_PickAxe.Item_PickAxe_C.PlayHit_Multi
struct AItem_PickAxe_C_PlayHit_Multi_Params
{
};

// Function Item_PickAxe.Item_PickAxe_C.Use
struct AItem_PickAxe_C_Use_Params
{
};

// Function Item_PickAxe.Item_PickAxe_C.Used
struct AItem_PickAxe_C_Used_Params
{
	bool*                                              bJustPicked;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_PickAxe.Item_PickAxe_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AItem_PickAxe_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Item_PickAxe.Item_PickAxe_C.SwingPickaxe
struct AItem_PickAxe_C_SwingPickaxe_Params
{
};

// Function Item_PickAxe.Item_PickAxe_C.ExecuteUbergraph_Item_PickAxe
struct AItem_PickAxe_C_ExecuteUbergraph_Item_PickAxe_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
