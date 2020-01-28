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

// Function BPFL_Loot.BPFL_Loot_C.GetGunName
struct UBPFL_Loot_C_GetGunName_Params
{
	class AVRItem*                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemName;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BPFL_Loot.BPFL_Loot_C.GetLeaderboardLoot
struct UBPFL_Loot_C_GetLeaderboardLoot_Params
{
	class APavlovPawn*                                 PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LeaderboardWep;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BPFL_Loot.BPFL_Loot_C.SetupAttachment
struct UBPFL_Loot_C_SetupAttachment_Params
{
	class AGun_Base_C*                                 AttachTo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AVRItem*                                     Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Successful_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_Loot.BPFL_Loot_C.GetAttachmentSocket
struct UBPFL_Loot_C_GetAttachmentSocket_Params
{
	class AGun_Base_C*                                 GunBase;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      VRItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_Loot.BPFL_Loot_C.Loot_Server
struct UBPFL_Loot_C_Loot_Server_Params
{
	struct FName                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_PavlovPawn_C*                            PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Dominant;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Successful_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               NeedSpawnAttachment_;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AttachmentClass;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (Parm, OutParm, IsPlainOldData)
	class AGun_Base_C*                                 AttachTo;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_Loot.BPFL_Loot_C.IsAttachment
struct UBPFL_Loot_C_IsAttachment_Params
{
	struct FName                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAttachment_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_Loot.BPFL_Loot_C.CanLoot_Client
struct UBPFL_Loot_C_CanLoot_Client_Params
{
	struct FName                                       Loot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_PavlovPawn_C*                            PavPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanLoot_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
