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

// Function Vankrupt.VCollisionEffectComponent.ResetCooldown
struct UVCollisionEffectComponent_ResetCooldown_Params
{
};

// Function Vankrupt.VCollisionEffectComponent.OnActorHit
struct UVCollisionEffectComponent_OnActorHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Vankrupt.VDecalComponent.Project
struct UVDecalComponent_Project_Params
{
};

// Function Vankrupt.VDecalComponent.CheckTaskCompletion
struct UVDecalComponent_CheckTaskCompletion_Params
{
};

// Function Vankrupt.VHealthComponent.Revive
struct UVHealthComponent_Revive_Params
{
};

// Function Vankrupt.VHealthComponent.OnTakePointDamage
struct UVHealthComponent_OnTakePointDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShotFromDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vankrupt.VHealthComponent.OnTakeAnyDamage
struct UVHealthComponent_OnTakeAnyDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vankrupt.VHealthComponent.OnRep_Dead
struct UVHealthComponent_OnRep_Dead_Params
{
};

// Function Vankrupt.VHealthComponent.MulticastOnRevived
struct UVHealthComponent_MulticastOnRevived_Params
{
};

// Function Vankrupt.VHealthComponent.MulticastOnKilledWithData
struct UVHealthComponent_MulticastOnKilledWithData_Params
{
	struct FVKillData                                  Data;                                                     // (Parm)
};

// Function Vankrupt.VHealthComponent.MulticastOnKilled
struct UVHealthComponent_MulticastOnKilled_Params
{
};

// Function Vankrupt.VHealthComponent.MulticastOnHitEffect
struct UVHealthComponent_MulticastOnHitEffect_Params
{
	EVHitEffect                                        Effect;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vankrupt.VHealthComponent.Kill
struct UVHealthComponent_Kill_Params
{
};

// Function Vankrupt.VHealthComponent.ApplyKillImpulse
struct UVHealthComponent_ApplyKillImpulse_Params
{
};

// Function Vankrupt.VMenu.Show
struct AVMenu_Show_Params
{
};

// Function Vankrupt.VMenu.SetVisibility
struct AVMenu_SetVisibility_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vankrupt.VMenu.Hide
struct AVMenu_Hide_Params
{
};

// Function Vankrupt.VLobby.StartGameImpl
struct AVLobby_StartGameImpl_Params
{
};

// Function Vankrupt.VLobby.OnLeaveLobbyPrompt
struct AVLobby_OnLeaveLobbyPrompt_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vankrupt.VLobby.OnGoBack
struct AVLobby_OnGoBack_Params
{
};

// Function Vankrupt.VLobby.MulticastOnLeavingLobby
struct AVLobby_MulticastOnLeavingLobby_Params
{
};

// Function Vankrupt.VLobby.MulticastOnGameStart
struct AVLobby_MulticastOnGameStart_Params
{
};

// Function Vankrupt.VLobby.LeaveLobbyImpl
struct AVLobby_LeaveLobbyImpl_Params
{
};

// Function Vankrupt.VSpawnManagerComponent.SpawnRandomly
struct UVSpawnManagerComponent_SpawnRandomly_Params
{
	class UClass*                                      CharacterClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVSpawnParams                               Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class ACharacter*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Vankrupt.VSpawnManagerComponent.SpawnAt
struct UVSpawnManagerComponent_SpawnAt_Params
{
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	class UClass*                                      CharacterClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVSpawnParams                               Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class ACharacter*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Vankrupt.VSpawnManagerComponent.Spawn
struct UVSpawnManagerComponent_Spawn_Params
{
	class UClass*                                      CharacterClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVSpawnParams                               Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class ACharacter*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Vankrupt.VSpawnManagerComponent.GetSpawnTransform
struct UVSpawnManagerComponent_GetSpawnTransform_Params
{
	int                                                AgentId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOccluded;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClosest;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Vankrupt.VSpawnManagerComponent.GetRandomSpawnTransform
struct UVSpawnManagerComponent_GetRandomSpawnTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Vankrupt.VSpawnPoint.IsOccluded
struct AVSpawnPoint_IsOccluded_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Vankrupt.VStatics.RetrieveNews
struct UVStatics_RetrieveNews_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Vankrupt.VStatics.LeaveGame
struct UVStatics_LeaveGame_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vankrupt.VStatics.IsPlayingOnline
struct UVStatics_IsPlayingOnline_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Vankrupt.VStatics.FormatTime
struct UVStatics_FormatTime_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
