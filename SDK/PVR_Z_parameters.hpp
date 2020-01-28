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

// Function Z.AIDamageComponent.SetCanTakeDamage
struct UAIDamageComponent_SetCanTakeDamage_Params
{
	bool                                               InCanTakeDamage;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Z.AIDamageComponent.ResetDamageComponent
struct UAIDamageComponent_ResetDamageComponent_Params
{
	bool                                               toState;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Z.AIDamageComponent.OnRep_CanTakeDamage
struct UAIDamageComponent_OnRep_CanTakeDamage_Params
{
};

// Function Z.AIDamageComponent.MulticastDamageAplied
struct UAIDamageComponent_MulticastDamageAplied_Params
{
	struct FAIDamageResult                             DamageResult;                                             // (ConstParm, Parm, ReferenceParm)
};

// Function Z.AIDamageComponent.IncomingDamage
struct UAIDamageComponent_IncomingDamage_Params
{
	struct FAIDamageResult                             DamageResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Z.AIDamageComponent.GetCanTakeDamage
struct UAIDamageComponent_GetCanTakeDamage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.AIDamageComponent.ApplyDamage
struct UAIDamageComponent_ApplyDamage_Params
{
	struct FAIDamageResult                             DamageResult;                                             // (ConstParm, Parm, ReferenceParm)
};

// Function Z.AIDamageComponentInterface.GetAIDamageComponent
struct UAIDamageComponentInterface_GetAIDamageComponent_Params
{
	class UAIDamageComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Z.AIDirector.UpdateDynamicNavLinks
struct AAIDirector_UpdateDynamicNavLinks_Params
{
};

// Function Z.AIDirector.TrickleOutAI_OverTime
struct AAIDirector_TrickleOutAI_OverTime_Params
{
};

// Function Z.AIDirector.TrickleOutAI_OnDeath
struct AAIDirector_TrickleOutAI_OnDeath_Params
{
};

// Function Z.AIDirector.TrickleOut_AndKill
struct AAIDirector_TrickleOut_AndKill_Params
{
};

// Function Z.AIDirector.TrickleInAI
struct AAIDirector_TrickleInAI_Params
{
};

// Function Z.AIDirector.TrickleIn
struct AAIDirector_TrickleIn_Params
{
};

// Function Z.AIDirector.SetDirectorMode
struct AAIDirector_SetDirectorMode_Params
{
	float                                              TrickleTimeIn;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                NumberOfDesiredActiveAI;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	EAIDirectorMode                                    NewDirectorState;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	EAISetDirectorResponse                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.AIDirector.SetALLAiPooled
struct AAIDirector_SetALLAiPooled_Params
{
};

// Function Z.AIDirector.SetAllAIActive
struct AAIDirector_SetAllAIActive_Params
{
};

// Function Z.AIDirector.SetAIPoolAmount
struct AAIDirector_SetAIPoolAmount_Params
{
	int                                                NewPoolAmount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Z.AIDirector.PopulateNeighborGroups
struct AAIDirector_PopulateNeighborGroups_Params
{
};

// Function Z.AIDirector.K2_SetPlayersInPlay
struct AAIDirector_K2_SetPlayersInPlay_Params
{
	TArray<class ACharacter*>                          ListOfPlayersInPlay;                                      // (ConstParm, Parm, ZeroConstructor)
};

// Function Z.AIDirector.K2_RemovePlayersInPlay
struct AAIDirector_K2_RemovePlayersInPlay_Params
{
	TArray<class ACharacter*>                          ListOfPlayersToRemove;                                    // (ConstParm, Parm, ZeroConstructor)
};

// Function Z.AIDirector.K2_RemoveAPlayerInPlay
struct AAIDirector_K2_RemoveAPlayerInPlay_Params
{
	class ACharacter*                                  PlayerToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Z.AIDirector.K2_AddPlayerToPlayList
struct AAIDirector_K2_AddPlayerToPlayList_Params
{
	class ACharacter*                                  PlayerToAdd;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Z.AIDirector.InitAIPool
struct AAIDirector_InitAIPool_Params
{
};

// Function Z.AIDirector.GetVersion
struct AAIDirector_GetVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.AIDirector.GetAIPoolAmount
struct AAIDirector_GetAIPoolAmount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.AIDirector.CreateAIPawnAtLocation
struct AAIDirector_CreateAIPawnAtLocation_Params
{
	struct FTransform                                  SpawnLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.AIDirector.AIWasKilled
struct AAIDirector_AIWasKilled_Params
{
	class AZAICharacter*                               KilledAI;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                KillerPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Z.AISlotManager.SetNumberOfMaxAISlots
struct UAISlotManager_SetNumberOfMaxAISlots_Params
{
	int                                                NumberOfslots;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Z.AISlotManager.SetIsValidTarget
struct UAISlotManager_SetIsValidTarget_Params
{
	bool                                               IsValid;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Z.AISlotManager.RemoveAICharacterFromSlot
struct UAISlotManager_RemoveAICharacterFromSlot_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.AISlotManager.IsValidTarget
struct UAISlotManager_IsValidTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.AISlotManager.IsActorInSlots
struct UAISlotManager_IsActorInSlots_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.AISlotManager.HasEmptySlot
struct UAISlotManager_HasEmptySlot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.AISlotManager.GetNumberOfActiveSlots
struct UAISlotManager_GetNumberOfActiveSlots_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.AISlotManager.GetMaxNumberOfAISlots
struct UAISlotManager_GetMaxNumberOfAISlots_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.AISlotManager.AssignSlotToActor
struct UAISlotManager_AssignSlotToActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Z.BaseAICharacter.GetMovementDirection
struct ABaseAICharacter_GetMovementDirection_Params
{
	struct FMovementDirection                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Z.ProxyPlayerCharacter.ReviveCharacter
struct AProxyPlayerCharacter_ReviveCharacter_Params
{
};

// Function Z.QueryContext_AllPlayers.ProvideActorsSet
struct UQueryContext_AllPlayers_ProvideActorsSet_Params
{
	class UObject*                                     QuerierObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ResultingActorSet;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function Z.QueryContext_PlayerContext.ProvideSingleActor
struct UQueryContext_PlayerContext_ProvideSingleActor_Params
{
	class UObject*                                     QuerierObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ResultingActor;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Z.RoundInterface.ResetToDefaultState
struct URoundInterface_ResetToDefaultState_Params
{
};

// Function Z.SlotSystemInterface.GetPlayerSlotManager
struct USlotSystemInterface_GetPlayerSlotManager_Params
{
	class UAISlotManager*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Z.ZAICharacter.SetSprinting
struct AZAICharacter_SetSprinting_Params
{
	bool                                               inIsSprinting;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Z.ZAICharacter.SetKnockBackState
struct AZAICharacter_SetKnockBackState_Params
{
	EZKnockBackState                                   NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Z.ZAICharacter.SetClimbing
struct AZAICharacter_SetClimbing_Params
{
	EAIClimbingState                                   inIsClimbing;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Z.ZAICharacter.SetCanSprint
struct AZAICharacter_SetCanSprint_Params
{
	bool                                               inCanSprint;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Z.ZAICharacter.SetAttackState
struct AZAICharacter_SetAttackState_Params
{
	EAIAttackState                                     AttackingState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Z.ZAICharacter.ReEnableMovement
struct AZAICharacter_ReEnableMovement_Params
{
};

// Function Z.ZAICharacter.OnRep_Target
struct AZAICharacter_OnRep_Target_Params
{
};

// Function Z.ZAICharacter.OnRep_Sprint
struct AZAICharacter_OnRep_Sprint_Params
{
};

// Function Z.ZAICharacter.OnRep_Climb
struct AZAICharacter_OnRep_Climb_Params
{
};

// Function Z.ZAICharacter.OnRep_bIsDead
struct AZAICharacter_OnRep_bIsDead_Params
{
};

// Function Z.ZAICharacter.OnRep_Attacking
struct AZAICharacter_OnRep_Attacking_Params
{
};

// Function Z.ZAICharacter.OnRep_AIControllerState
struct AZAICharacter_OnRep_AIControllerState_Params
{
};

// Function Z.ZAICharacter.OnMontangeStarted
struct AZAICharacter_OnMontangeStarted_Params
{
	class UAnimMontage*                                Montange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Z.ZAICharacter.OnMontangeEnded
struct AZAICharacter_OnMontangeEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Z.ZAICharacter.OnAnimInit
struct AZAICharacter_OnAnimInit_Params
{
};

// Function Z.ZAICharacter.NewTargetSelected
struct AZAICharacter_NewTargetSelected_Params
{
	class AActor*                                      NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAISlotManager*                              SlotManager;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Z.ZAICharacter.MulticastKnockBack
struct AZAICharacter_MulticastKnockBack_Params
{
	EZKnockBackDirection                               Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 bY;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Z.ZAICharacter.KnockBack
struct AZAICharacter_KnockBack_Params
{
	EZKnockBackDirection                               Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Z.ZAICharacter.K2_KillAI
struct AZAICharacter_K2_KillAI_Params
{
};

// Function Z.ZAICharacter.GetTarget
struct AZAICharacter_GetTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.ZAICharacter.GetSprinting
struct AZAICharacter_GetSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.ZAICharacter.GetMeshAndAnimInstance
struct AZAICharacter_GetMeshAndAnimInstance_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimInstance;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Z.ZAICharacter.GetKnockBackState
struct AZAICharacter_GetKnockBackState_Params
{
	EZKnockBackState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.ZAICharacter.GetCurrentAIstate
struct AZAICharacter_GetCurrentAIstate_Params
{
	EAIState                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.ZAICharacter.GetClimbingState
struct AZAICharacter_GetClimbingState_Params
{
	EAIClimbingState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.ZAICharacter.GetAttackState
struct AZAICharacter_GetAttackState_Params
{
	EAIAttackState                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.ZAICharacter.DelayedReturnToNormalCollision
struct AZAICharacter_DelayedReturnToNormalCollision_Params
{
};

// Function Z.ZAICharacter.AttemptRandomSprint
struct AZAICharacter_AttemptRandomSprint_Params
{
};

// Function Z.ZAICharacter.AttackTargetInRange
struct AZAICharacter_AttackTargetInRange_Params
{
};

// Function Z.ZAICharacter.AIStateChange
struct AZAICharacter_AIStateChange_Params
{
	EAIState                                           NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Z.ZAIController.SetState
struct AZAIController_SetState_Params
{
	EAIState                                           inState;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Z.ZAIController.SetCurrentTarget
struct AZAIController_SetCurrentTarget_Params
{
	class AActor*                                      InTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.ZAIController.RandomDeviationFindTarget
struct AZAIController_RandomDeviationFindTarget_Params
{
};

// Function Z.ZAIController.OnSlotsCleared
struct AZAIController_OnSlotsCleared_Params
{
};

// Function Z.ZAIController.JumpTo
struct AZAIController_JumpTo_Params
{
	struct FTransform                                  Destination;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Arc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      JumpFromActor;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Z.ZAIController.IsDecelerationgOnPath
struct AZAIController_IsDecelerationgOnPath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.ZAIController.HasTarget
struct AZAIController_HasTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.ZAIController.GetState
struct AZAIController_GetState_Params
{
	EAIState                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.ZAIController.GetCurrentTarget
struct AZAIController_GetCurrentTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.ZAIController.FinishClimb
struct AZAIController_FinishClimb_Params
{
};

// Function Z.ZAIController.FindTarget
struct AZAIController_FindTarget_Params
{
};

// Function Z.ZAIController.DoJumpLaunch_PrecomputedVelocity
struct AZAIController_DoJumpLaunch_PrecomputedVelocity_Params
{
	struct FTransform                                  Destination;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Arc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InLaunchVelocity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      JumpFromActor;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutAscendingTime;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDescendingTime;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.ZAIController.DoJumpLaunch
struct AZAIController_DoJumpLaunch_Params
{
	struct FTransform                                  Destination;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Arc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      JumpFromActor;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutAscendingTime;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDescendingTime;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.ZAIController.ClimbTo
struct AZAIController_ClimbTo_Params
{
	struct FTransform                                  LedgeTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndPosition;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	uint32_t                                           NavLinkID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Z.ZAIController.ClearTarget
struct AZAIController_ClearTarget_Params
{
};

// Function Z.ZAIController.ClearAITargets
struct AZAIController_ClearAITargets_Params
{
};

// Function Z.ZCharacterMovementComponent.SetSprinting
struct UZCharacterMovementComponent_SetSprinting_Params
{
	bool                                               inWantsToSprint;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DesiredSpeed;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Z.ZCharacterMovementComponent.SetSprintEnabled
struct UZCharacterMovementComponent_SetSprintEnabled_Params
{
	bool                                               inbIsSprintEnabled;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Z.ZCharacterMovementComponent.ServerFinishLanding
struct UZCharacterMovementComponent_ServerFinishLanding_Params
{
};

// Function Z.ZCharacterMovementComponent.FinishLanding
struct UZCharacterMovementComponent_FinishLanding_Params
{
};

// Function Z.ZCharacterMovementComponent.CanSprint
struct UZCharacterMovementComponent_CanSprint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Z.ZCheatManager.TogglePathFollowingDebug
struct UZCheatManager_TogglePathFollowingDebug_Params
{
};

// Function Z.ZNavLinkComponent.ToggleNavLink
struct UZNavLinkComponent_ToggleNavLink_Params
{
	bool                                               IsEnabled;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Z.ZNavLinkProxy_Destructible.ToggleNavLinkState
struct AZNavLinkProxy_Destructible_ToggleNavLinkState_Params
{
	bool                                               bEnable;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Z.ZNavLinkProxy_Destructible.OnTakeDamage
struct AZNavLinkProxy_Destructible_OnTakeDamage_Params
{
	struct FAIDamageResult                             DamageTaken;                                              // (Parm)
};

// Function Z.ZNavLinkProxy_Destructible.OnCanTakeDamageChange
struct AZNavLinkProxy_Destructible_OnCanTakeDamageChange_Params
{
	bool                                               CurrentState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Z.ZNavLinkProxy_Destructible.GetAIDamageComponent
struct AZNavLinkProxy_Destructible_GetAIDamageComponent_Params
{
	class UAIDamageComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Z.ZNavLinkProxy_Jump.RefreshPathVisualizer
struct AZNavLinkProxy_Jump_RefreshPathVisualizer_Params
{
};

// Function Z.ZPathFollowingComponent.OnTargetSelectionUpdate
struct UZPathFollowingComponent_OnTargetSelectionUpdate_Params
{
	class AActor*                                      NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAISlotManager*                              SlotManager;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
