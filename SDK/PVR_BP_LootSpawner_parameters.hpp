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

// Function BP_LootSpawner.BP_LootSpawner_C.UseSoftGrabConstraint
struct ABP_LootSpawner_C_UseSoftGrabConstraint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LootSpawner.BP_LootSpawner_C.GetRandomLoot
struct ABP_LootSpawner_C_GetRandomLoot_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LootSpawner.BP_LootSpawner_C.Init
struct ABP_LootSpawner_C_Init_Params
{
	TArray<struct FString>                             In_SpawnableItems;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              In_MinSpawnTime;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              In_MaxSpawnTime;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                In_SpawnType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               In_SpawnWithoutAttachments;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootSpawner.BP_LootSpawner_C.CanUseAttachment
struct ABP_LootSpawner_C_CanUseAttachment_Params
{
	class APavlovPawn*                                 PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanUse_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootSpawner.BP_LootSpawner_C.GetAttachmentSocket
struct ABP_LootSpawner_C_GetAttachmentSocket_Params
{
	class UClass*                                      vr_item;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGun_Base_C*                                 gun_base;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Picatinny_Lenth;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootSpawner.BP_LootSpawner_C.EquipLoot
struct ABP_LootSpawner_C_EquipLoot_Params
{
	class APavlovPawn*                                 PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Dominant;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootSpawner.BP_LootSpawner_C.ClampExtent
struct ABP_LootSpawner_C_ClampExtent_Params
{
	struct FVector                                     Extents;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Clamped_Extent;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootSpawner.BP_LootSpawner_C.SetMeshFromLootTable
struct ABP_LootSpawner_C_SetMeshFromLootTable_Params
{
};

// Function BP_LootSpawner.BP_LootSpawner_C.UserConstructionScript
struct ABP_LootSpawner_C_UserConstructionScript_Params
{
};

// Function BP_LootSpawner.BP_LootSpawner_C.UnGrabbed
struct ABP_LootSpawner_C_UnGrabbed_Params
{
	class AVRController*                               Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootSpawner.BP_LootSpawner_C.ReceiveBeginPlay
struct ABP_LootSpawner_C_ReceiveBeginPlay_Params
{
};

// Function BP_LootSpawner.BP_LootSpawner_C.Grabbed
struct ABP_LootSpawner_C_Grabbed_Params
{
	class AVRController*                               Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootSpawner.BP_LootSpawner_C.Weapon Taken
struct ABP_LootSpawner_C_Weapon_Taken_Params
{
};

// Function BP_LootSpawner.BP_LootSpawner_C.InitSpawner
struct ABP_LootSpawner_C_InitSpawner_Params
{
	TArray<struct FString>                             SpawnableItems;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              MinTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SpawnerType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnWithoutAttachments;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootSpawner.BP_LootSpawner_C.SelectNewItem
struct ABP_LootSpawner_C_SelectNewItem_Params
{
};

// Function BP_LootSpawner.BP_LootSpawner_C.LootGrabbed
struct ABP_LootSpawner_C_LootGrabbed_Params
{
	class ABP_PavlovPawn_C*                            PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Dominant_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootSpawner.BP_LootSpawner_C.BndEvt__GrabVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_LootSpawner_C_BndEvt__GrabVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_LootSpawner.BP_LootSpawner_C.RespawnOnRoundRestart
struct ABP_LootSpawner_C_RespawnOnRoundRestart_Params
{
};

// Function BP_LootSpawner.BP_LootSpawner_C.BndEvt__GrabVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_LootSpawner_C_BndEvt__GrabVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootSpawner.BP_LootSpawner_C.Reset Always Active DoOnce
struct ABP_LootSpawner_C_Reset_Always_Active_DoOnce_Params
{
};

// Function BP_LootSpawner.BP_LootSpawner_C.OnLootChanged
struct ABP_LootSpawner_C_OnLootChanged_Params
{
	unsigned char*                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Name;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_LootSpawner.BP_LootSpawner_C.Begin Play Loot
struct ABP_LootSpawner_C_Begin_Play_Loot_Params
{
};

// Function BP_LootSpawner.BP_LootSpawner_C.ExecuteUbergraph_BP_LootSpawner
struct ABP_LootSpawner_C_ExecuteUbergraph_BP_LootSpawner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
