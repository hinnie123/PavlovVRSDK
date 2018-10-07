#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Pavlov.ActionGunState.SetAction
struct UActionGunState_SetAction_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ActionGunState.OpenAction
struct UActionGunState_OpenAction_Params
{
};

// Function Pavlov.ActionGunState.CloseAction
struct UActionGunState_CloseAction_Params
{
};

// Function Pavlov.AirplaneRoyale.StartTravel
struct AAirplaneRoyale_StartTravel_Params
{
};

// Function Pavlov.AirplaneRoyale.SetAsBase
struct AAirplaneRoyale_SetAsBase_Params
{
	class APavlovPawn*                                 Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.AirplaneRoyale.OnRep_Traveled
struct AAirplaneRoyale_OnRep_Traveled_Params
{
};

// Function Pavlov.AirplaneRoyale.ClearBase
struct AAirplaneRoyale_ClearBase_Params
{
	class APavlovPawn*                                 Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Bomb.PlantAt
struct ABomb_PlantAt_Params
{
	class ABombPlantSpot*                              Spot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Bomb.OnPlayerOcclusionChange
struct ABomb_OnPlayerOcclusionChange_Params
{
	bool                                               bNewOccluded;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Bomb.OnPlanted
struct ABomb_OnPlanted_Params
{
};

// Function Pavlov.Bomb.OnGrace
struct ABomb_OnGrace_Params
{
};

// Function Pavlov.Bomb.OnDetonation
struct ABomb_OnDetonation_Params
{
};

// Function Pavlov.Bomb.OnDefuse
struct ABomb_OnDefuse_Params
{
};

// Function Pavlov.Bomb.OnButtonPressed
struct ABomb_OnButtonPressed_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Bomb.OnBeep
struct ABomb_OnBeep_Params
{
};

// Function Pavlov.Bomb.MulticastOnPlantAt
struct ABomb_MulticastOnPlantAt_Params
{
	class ABombPlantSpot*                              Spot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Bomb.MulticastOnGrace
struct ABomb_MulticastOnGrace_Params
{
};

// Function Pavlov.Bomb.MulticastOnEnterCode
struct ABomb_MulticastOnEnterCode_Params
{
	bool                                               bSucceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Bomb.MulticastOnDetonation
struct ABomb_MulticastOnDetonation_Params
{
};

// Function Pavlov.Bomb.MulticastOnDefuse
struct ABomb_MulticastOnDefuse_Params
{
};

// Function Pavlov.Bomb.MulticastOnBeep
struct ABomb_MulticastOnBeep_Params
{
};

// Function Pavlov.Bomb.IsWireCut
struct ABomb_IsWireCut_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Bomb.IsButtonPressed
struct ABomb_IsButtonPressed_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Bomb.GetWireLocation
struct ABomb_GetWireLocation_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Bomb.GetClosestValidWireIndex
struct ABomb_GetClosestValidWireIndex_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Bomb.ExpireCode
struct ABomb_ExpireCode_Params
{
};

// Function Pavlov.Bomb.EnterDigit
struct ABomb_EnterDigit_Params
{
	int                                                Digit;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Presser;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Bomb.Detonate
struct ABomb_Detonate_Params
{
};

// Function Pavlov.Bomb.Defuse
struct ABomb_Defuse_Params
{
	class AController*                                 Defuser;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Bomb.CutWire
struct ABomb_CutWire_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Defuser;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.BombPlantSpot.UpdateEnabledState
struct ABombPlantSpot_UpdateEnabledState_Params
{
};

// Function Pavlov.BombPlantSpot.SetSpotEnabled
struct ABombPlantSpot_SetSpotEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.BombPlantSpot.ResetSpot
struct ABombPlantSpot_ResetSpot_Params
{
};

// Function Pavlov.BombPlantSpot.OnRep_PlantedHere
struct ABombPlantSpot_OnRep_PlantedHere_Params
{
};

// Function Pavlov.BombPlantSpot.MulticastOnPlantStateChanged
struct ABombPlantSpot_MulticastOnPlantStateChanged_Params
{
	bool                                               bPlanted;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ChamberComponent.ResetChamber
struct UChamberComponent_ResetChamber_Params
{
};

// Function Pavlov.ChamberComponent.OnOverlap
struct UChamberComponent_OnOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.ChamberComponent.OnChamberStateChanged
struct UChamberComponent_OnChamberStateChanged_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.ChamberComponent.DestroyConstrainedMesh
struct UChamberComponent_DestroyConstrainedMesh_Params
{
};

// Function Pavlov.ChamberComponent.DebugDraw
struct UChamberComponent_DebugDraw_Params
{
};

// Function Pavlov.ChamberComponent.CheckConstraintBreakThreshold
struct UChamberComponent_CheckConstraintBreakThreshold_Params
{
};

// Function Pavlov.ChamberComponent.BreakCheck
struct UChamberComponent_BreakCheck_Params
{
};

// Function Pavlov.ChamberComponent.AllowRemoval
struct UChamberComponent_AllowRemoval_Params
{
};

// Function Pavlov.DamageTrackerComponent.ResetTracking
struct UDamageTrackerComponent_ResetTracking_Params
{
};

// Function Pavlov.DamageTrackerComponent.GetLastHit
struct UDamageTrackerComponent_GetLastHit_Params
{
	struct FDamageTrackInfo                            LastHit;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.DamageTrackerComponent.GatherAssists
struct UDamageTrackerComponent_GatherAssists_Params
{
	TArray<struct FDamageTrackInfo>                    Assists;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Pavlov.Grenade.ServerRemoveSafetyPin
struct AGrenade_ServerRemoveSafetyPin_Params
{
};

// Function Pavlov.Grenade.ServerReleaseSafetyLever
struct AGrenade_ServerReleaseSafetyLever_Params
{
};

// Function Pavlov.Grenade.RemoveSafetyPin
struct AGrenade_RemoveSafetyPin_Params
{
};

// Function Pavlov.Grenade.ReleaseSafetyLever
struct AGrenade_ReleaseSafetyLever_Params
{
};

// Function Pavlov.Grenade.PullSafetyPin
struct AGrenade_PullSafetyPin_Params
{
	float                                              Ratio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Grenade.OnRep_ProjectileActive
struct AGrenade_OnRep_ProjectileActive_Params
{
};

// Function Pavlov.Grenade.OnProjectileStop
struct AGrenade_OnProjectileStop_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.Grenade.OnProjectileBounce
struct AGrenade_OnProjectileBounce_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.Grenade.OnDetonation
struct AGrenade_OnDetonation_Params
{
};

// Function Pavlov.Grenade.MulticastThrow
struct AGrenade_MulticastThrow_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, IsPlainOldData)
};

// Function Pavlov.Grenade.MulticastOnSafetyPinRemoved
struct AGrenade_MulticastOnSafetyPinRemoved_Params
{
};

// Function Pavlov.Grenade.MulticastOnReleaseSafetyLever
struct AGrenade_MulticastOnReleaseSafetyLever_Params
{
};

// Function Pavlov.Grenade.MulticastOnDetonation
struct AGrenade_MulticastOnDetonation_Params
{
};

// Function Pavlov.Grenade.Detonate
struct AGrenade_Detonate_Params
{
};

// Function Pavlov.Knife.SetBloody
struct AKnife_SetBloody_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Knife.OnRep_Bloody
struct AKnife_OnRep_Bloody_Params
{
};

// Function Pavlov.Knife.OnEndOverlap
struct AKnife_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Knife.OnBloodyChanged
struct AKnife_OnBloodyChanged_Params
{
	bool                                               bNewBloody;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Knife.OnBeginOverlap
struct AKnife_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.Knife.EnableTicking
struct AKnife_EnableTicking_Params
{
};

// Function Pavlov.Destructible.OnShatter
struct ADestructible_OnShatter_Params
{
	struct FVector                                     Normal;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function Pavlov.Destructible.MulticastOnShatter
struct ADestructible_MulticastOnShatter_Params
{
	struct FVector_NetQuantizeNormal                   Normal;                                                   // (Parm)
	struct FVector_NetQuantize                         Location;                                                 // (Parm)
};

// Function Pavlov.DoubleBarrelGunState.SetBarrel
struct UDoubleBarrelGunState_SetBarrel_Params
{
	bool                                               bOpen;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovMovementComponent.ServerDeployParachute
struct UPavlovMovementComponent_ServerDeployParachute_Params
{
};

// Function Pavlov.PavlovMovementComponent.OnRep_PrachuteState
struct UPavlovMovementComponent_OnRep_PrachuteState_Params
{
};

// Function Pavlov.PavlovMovementComponent.MulticastOnParachuteDeployed
struct UPavlovMovementComponent_MulticastOnParachuteDeployed_Params
{
};

// Function Pavlov.GestureComponent.RegisterGesture
struct UGestureComponent_RegisterGesture_Params
{
	struct FGestureSetup                               Setup;                                                    // (Parm)
};

// Function Pavlov.GhostPawn.SpawnTags
struct AGhostPawn_SpawnTags_Params
{
};

// Function Pavlov.GhostPawn.OnTraveledToSpectatorRoom
struct AGhostPawn_OnTraveledToSpectatorRoom_Params
{
};

// Function Pavlov.GhostPawn.OnTeamIdChanged
struct AGhostPawn_OnTeamIdChanged_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.GhostPawn.OnGraceTimeEnded
struct AGhostPawn_OnGraceTimeEnded_Params
{
};

// Function Pavlov.GhostPawn.EndGraceTime
struct AGhostPawn_EndGraceTime_Params
{
};

// Function Pavlov.GhostPawn.ClientTravelToSpectatorRoom
struct AGhostPawn_ClientTravelToSpectatorRoom_Params
{
};

// Function Pavlov.GhostPawn.ClientSpawnKillCam
struct AGhostPawn_ClientSpawnKillCam_Params
{
	struct FKillInfo                                   KillInfo;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Pavlov.GhostPawn.ClearTags
struct AGhostPawn_ClearTags_Params
{
};

// Function Pavlov.GlobalPlayerEffects.SwitchState
struct AGlobalPlayerEffects_SwitchState_Params
{
	EPlayerEffectState                                 NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.GlobalPlayerEffects.InstigateFlash
struct AGlobalPlayerEffects_InstigateFlash_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Gun.RecoilDrop
struct AGun_RecoilDrop_Params
{
};

// Function Pavlov.Gun.OnUnderExploitChanged
struct AGun_OnUnderExploitChanged_Params
{
	bool                                               bUnderExploit;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Gun.OnTwoHandGripChanged
struct AGun_OnTwoHandGripChanged_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Gun.OnSpawnUnloaded
struct AGun_OnSpawnUnloaded_Params
{
};

// Function Pavlov.Gun.OnSliderUngrabbed
struct AGun_OnSliderUngrabbed_Params
{
};

// Function Pavlov.Gun.OnSliderInputReceived
struct AGun_OnSliderInputReceived_Params
{
	struct FVector                                     Input;                                                    // (Parm, IsPlainOldData)
	struct FVector                                     InputDelta;                                               // (Parm, IsPlainOldData)
};

// Function Pavlov.Gun.OnSliderGrabbed
struct AGun_OnSliderGrabbed_Params
{
};

// Function Pavlov.Gun.OnRecoilDropCooldown
struct AGun_OnRecoilDropCooldown_Params
{
};

// Function Pavlov.Gun.MulticastOnRecoilDrop
struct AGun_MulticastOnRecoilDrop_Params
{
};

// Function Pavlov.Gun.IsBeingGrippedBy
struct AGun_IsBeingGrippedBy_Params
{
	class APavlovItemController*                       ByController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Gun.IsBeingGripped
struct AGun_IsBeingGripped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.HitBoxProxyComponent.OnBulletOverlap
struct UHitBoxProxyComponent_OnBulletOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.HolsterComponent.TakeItem
struct UHolsterComponent_TakeItem_Params
{
	class APavlovItemController*                       Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.HolsterComponent.ServerTakeItem
struct UHolsterComponent_ServerTakeItem_Params
{
	class APavlovItemController*                       Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.HolsterComponent.ServerHolster
struct UHolsterComponent_ServerHolster_Params
{
	class AVRItem*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.HolsterComponent.OnRep_HolsteredItem
struct UHolsterComponent_OnRep_HolsteredItem_Params
{
};

// Function Pavlov.HolsterComponent.MulticastOnItemHolstered
struct UHolsterComponent_MulticastOnItemHolstered_Params
{
	class AVRItem*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.HolsterComponent.MulticastOnDrop
struct UHolsterComponent_MulticastOnDrop_Params
{
	class AVRItem*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.HolsterComponent.Mirror
struct UHolsterComponent_Mirror_Params
{
};

// Function Pavlov.HolsterComponent.Holster
struct UHolsterComponent_Holster_Params
{
	class AVRItem*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.HolsterComponent.Drop
struct UHolsterComponent_Drop_Params
{
};

// Function Pavlov.HolsterComponent.AttachItemLocally
struct UHolsterComponent_AttachItemLocally_Params
{
};

// Function Pavlov.PavlovAIController.SetTargetPawn
struct APavlovAIController_SetTargetPawn_Params
{
	class APavlovPawn*                                 TargetPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovAIController.OnPawnCollisionBeginOverlap
struct APavlovAIController_OnPawnCollisionBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.PavlovAIController.IsSuppressed
struct APavlovAIController_IsSuppressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovAIController.GetTargetPawn
struct APavlovAIController_GetTargetPawn_Params
{
	class APavlovPawn*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.UseOOBLocomotion
struct UPavlovGameUserSettings_UseOOBLocomotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.ShouldSwapControllers
struct UPavlovGameUserSettings_ShouldSwapControllers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetVirtualStock
struct UPavlovGameUserSettings_SetVirtualStock_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetTwoHandToggle
struct UPavlovGameUserSettings_SetTwoHandToggle_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetTouchpadInverted
struct UPavlovGameUserSettings_SetTouchpadInverted_Params
{
	bool                                               bInverted;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetSwapControllers
struct UPavlovGameUserSettings_SetSwapControllers_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetSnapTurnDisabled
struct UPavlovGameUserSettings_SetSnapTurnDisabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetSnapTurn
struct UPavlovGameUserSettings_SetSnapTurn_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetSmoothTurnRate
struct UPavlovGameUserSettings_SetSmoothTurnRate_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetSmoothTurn
struct UPavlovGameUserSettings_SetSmoothTurn_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetResolutionQuality
struct UPavlovGameUserSettings_SetResolutionQuality_Params
{
	float                                              Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetPrimaryRegion
struct UPavlovGameUserSettings_SetPrimaryRegion_Params
{
	EOnlineRegion                                      Region;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetPlayerRightHanded
struct UPavlovGameUserSettings_SetPlayerRightHanded_Params
{
	bool                                               bRightHanded;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetPlayerHeight
struct UPavlovGameUserSettings_SetPlayerHeight_Params
{
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetOOBLocomotion
struct UPavlovGameUserSettings_SetOOBLocomotion_Params
{
	bool                                               bUse;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetOffHandAction
struct UPavlovGameUserSettings_SetOffHandAction_Params
{
	ECustomAction                                      Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetMountFriendly
struct UPavlovGameUserSettings_SetMountFriendly_Params
{
	bool                                               bFriendly;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetMainHandAction
struct UPavlovGameUserSettings_SetMainHandAction_Params
{
	ECustomAction                                      Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetLockInventory
struct UPavlovGameUserSettings_SetLockInventory_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetLiteFootStepHaptics
struct UPavlovGameUserSettings_SetLiteFootStepHaptics_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetLegacyGrip
struct UPavlovGameUserSettings_SetLegacyGrip_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetLeftEyeRendering
struct UPavlovGameUserSettings_SetLeftEyeRendering_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetHeadLocomotion
struct UPavlovGameUserSettings_SetHeadLocomotion_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetGripMode
struct UPavlovGameUserSettings_SetGripMode_Params
{
	EGripMode                                          NewGripMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetFreeSpectatingEnabled
struct UPavlovGameUserSettings_SetFreeSpectatingEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetAutoUngrip
struct UPavlovGameUserSettings_SetAutoUngrip_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetAutoSwapHandsEnabled
struct UPavlovGameUserSettings_SetAutoSwapHandsEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetAutoSprint
struct UPavlovGameUserSettings_SetAutoSprint_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SetArmKillfeedEnabled
struct UPavlovGameUserSettings_SetArmKillfeedEnabled_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.SendAnalyticEvents
struct UPavlovGameUserSettings_SendAnalyticEvents_Params
{
};

// Function Pavlov.PavlovGameUserSettings.SaveSpectatorView
struct UPavlovGameUserSettings_SaveSpectatorView_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.MarkAsCalibrated
struct UPavlovGameUserSettings_MarkAsCalibrated_Params
{
};

// Function Pavlov.PavlovGameUserSettings.IsTwoHandToggleEnabled
struct UPavlovGameUserSettings_IsTwoHandToggleEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsTouchpadInverted
struct UPavlovGameUserSettings_IsTouchpadInverted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsSnapTurnEnabled
struct UPavlovGameUserSettings_IsSnapTurnEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsSnapTurnDisabled
struct UPavlovGameUserSettings_IsSnapTurnDisabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsSmoothTurnEnabled
struct UPavlovGameUserSettings_IsSmoothTurnEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsPostProcessDisabled
struct UPavlovGameUserSettings_IsPostProcessDisabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsPlayerRightHanded
struct UPavlovGameUserSettings_IsPlayerRightHanded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsMountFriendly
struct UPavlovGameUserSettings_IsMountFriendly_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsLiteFootStepHapticsEnabled
struct UPavlovGameUserSettings_IsLiteFootStepHapticsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsLeftEyeRendering
struct UPavlovGameUserSettings_IsLeftEyeRendering_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsHeadLocomotionEnabled
struct UPavlovGameUserSettings_IsHeadLocomotionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsFreeSpectatingEnabled
struct UPavlovGameUserSettings_IsFreeSpectatingEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsCalibrated
struct UPavlovGameUserSettings_IsCalibrated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsAutoUngripEnabled
struct UPavlovGameUserSettings_IsAutoUngripEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsAutoSwapHandsEnabled
struct UPavlovGameUserSettings_IsAutoSwapHandsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsAutoSprintEnabled
struct UPavlovGameUserSettings_IsAutoSprintEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.IsArmKillfeedEnabled
struct UPavlovGameUserSettings_IsArmKillfeedEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.HasLegacyGrip
struct UPavlovGameUserSettings_HasLegacyGrip_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetVirtualStock
struct UPavlovGameUserSettings_GetVirtualStock_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetSpectatorView
struct UPavlovGameUserSettings_GetSpectatorView_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetSmoothTurnRate
struct UPavlovGameUserSettings_GetSmoothTurnRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetPrimaryRegion
struct UPavlovGameUserSettings_GetPrimaryRegion_Params
{
	EOnlineRegion                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetPlayerHeight
struct UPavlovGameUserSettings_GetPlayerHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetOffHandAction
struct UPavlovGameUserSettings_GetOffHandAction_Params
{
	ECustomAction                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetMainHandAction
struct UPavlovGameUserSettings_GetMainHandAction_Params
{
	ECustomAction                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetLockInventory
struct UPavlovGameUserSettings_GetLockInventory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.GetGripMode
struct UPavlovGameUserSettings_GetGripMode_Params
{
	EGripMode                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameUserSettings.ForceNoPostProcessing
struct UPavlovGameUserSettings_ForceNoPostProcessing_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.WearKevlar
struct APavlovPawn_WearKevlar_Params
{
	bool                                               bWithHelmet;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.UpdateLocomotion
struct APavlovPawn_UpdateLocomotion_Params
{
};

// Function Pavlov.PavlovPawn.TakePointDamage
struct APavlovPawn_TakePointDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShotFromDirection;                                        // (Parm, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.SetupWatch
struct APavlovPawn_SetupWatch_Params
{
	class UWatch*                                      WatchComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.SetTeamId
struct APavlovPawn_SetTeamId_Params
{
	int                                                NewTeamId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.ServerReportFallDamage
struct APavlovPawn_ServerReportFallDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.ServerGiveMagazine
struct APavlovPawn_ServerGiveMagazine_Params
{
	bool                                               bOffHand;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.ServerGive
struct APavlovPawn_ServerGive_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Skin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.ServerDeployParachute
struct APavlovPawn_ServerDeployParachute_Params
{
};

// Function Pavlov.PavlovPawn.OnVoiceChanged
struct APavlovPawn_OnVoiceChanged_Params
{
	bool                                               bTalking;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.OnTeamIdChanged
struct APavlovPawn_OnTeamIdChanged_Params
{
};

// Function Pavlov.PavlovPawn.OnRevive
struct APavlovPawn_OnRevive_Params
{
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.OnRep_TeamId
struct APavlovPawn_OnRep_TeamId_Params
{
};

// Function Pavlov.PavlovPawn.OnRep_HelmetArmour
struct APavlovPawn_OnRep_HelmetArmour_Params
{
};

// Function Pavlov.PavlovPawn.OnRep_Armour
struct APavlovPawn_OnRep_Armour_Params
{
};

// Function Pavlov.PavlovPawn.OnKill
struct APavlovPawn_OnKill_Params
{
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.OnImpactDamage
struct APavlovPawn_OnImpactDamage_Params
{
	struct FImpactDamage                               ImpactDamage;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.PavlovPawn.OnCameraClipChanged
struct APavlovPawn_OnCameraClipChanged_Params
{
	bool                                               bClipping;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.MulticastTeleportTo
struct APavlovPawn_MulticastTeleportTo_Params
{
	struct FVector                                     DestLocation;                                             // (Parm, IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (Parm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.MulticastOnWearArmour
struct APavlovPawn_MulticastOnWearArmour_Params
{
};

// Function Pavlov.PavlovPawn.MulticastOnReset
struct APavlovPawn_MulticastOnReset_Params
{
};

// Function Pavlov.PavlovPawn.MulticastOnRadialDeath
struct APavlovPawn_MulticastOnRadialDeath_Params
{
	struct FVector_NetQuantize                         Origin;                                                   // (Parm)
};

// Function Pavlov.PavlovPawn.MulticastOnImpactDamage
struct APavlovPawn_MulticastOnImpactDamage_Params
{
	struct FImpactDamage                               ImpactDamage;                                             // (Parm)
};

// Function Pavlov.PavlovPawn.MulticastOnHitSlow
struct APavlovPawn_MulticastOnHitSlow_Params
{
};

// Function Pavlov.PavlovPawn.MulticastOnHit
struct APavlovPawn_MulticastOnHit_Params
{
	struct FVector_NetQuantize                         Location;                                                 // (Parm)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // (Parm)
	class APlayerState*                                Shooter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnArmor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.MulticastOnHelmetHit
struct APavlovPawn_MulticastOnHelmetHit_Params
{
	struct FVector_NetQuantize                         Location;                                                 // (Parm)
	struct FVector_NetQuantizeNormal                   Direction;                                                // (Parm)
};

// Function Pavlov.PavlovPawn.MulticastOnHelmetBlownoff
struct APavlovPawn_MulticastOnHelmetBlownoff_Params
{
};

// Function Pavlov.PavlovPawn.MulticastOnHeadshot
struct APavlovPawn_MulticastOnHeadshot_Params
{
};

// Function Pavlov.PavlovPawn.MulticastAdjustAvatarScale
struct APavlovPawn_MulticastAdjustAvatarScale_Params
{
	float                                              PlayerHeight;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.LoadEquipment
struct APavlovPawn_LoadEquipment_Params
{
	struct FEquipmentDefinition                        Definition;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.PavlovPawn.IsSprinting
struct APavlovPawn_IsSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.IsDead
struct APavlovPawn_IsDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.IsCameraClipping
struct APavlovPawn_IsCameraClipping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GiveBomb
struct APavlovPawn_GiveBomb_Params
{
	class ABomb*                                       Bomb;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.Give
struct APavlovPawn_Give_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Skin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithAmmo;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bByBuyMenu;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetSideWeaponHolster
struct APavlovPawn_GetSideWeaponHolster_Params
{
	class UHolsterComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetNonDominantController
struct APavlovPawn_GetNonDominantController_Params
{
	class APavlovItemController*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetMainWeaponHolster
struct APavlovPawn_GetMainWeaponHolster_Params
{
	class UHolsterComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetKnifeHolster
struct APavlovPawn_GetKnifeHolster_Params
{
	class UHolsterComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetHealth
struct APavlovPawn_GetHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetGrenadeHolsters
struct APavlovPawn_GetGrenadeHolsters_Params
{
	TArray<class UHolsterComponent*>                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovPawn.GetEquipmentByName
struct APavlovPawn_GetEquipmentByName_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEquipmentDefinition                        Definition;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetDominantController
struct APavlovPawn_GetDominantController_Params
{
	class APavlovItemController*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetBombHolster
struct APavlovPawn_GetBombHolster_Params
{
	class UHolsterComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.GetAmmoPocket
struct APavlovPawn_GetAmmoPocket_Params
{
	class UVRPocketComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.PavlovPawn.DropEquipment
struct APavlovPawn_DropEquipment_Params
{
};

// Function Pavlov.PavlovPawn.ClientClearSoundMix
struct APavlovPawn_ClientClearSoundMix_Params
{
};

// Function Pavlov.PavlovPawn.BlowHelmetOff
struct APavlovPawn_BlowHelmetOff_Params
{
};

// Function Pavlov.PavlovPawn.AddHitSlow
struct APavlovPawn_AddHitSlow_Params
{
};

// Function Pavlov.PavlovPawn.ActivateCameraClip
struct APavlovPawn_ActivateCameraClip_Params
{
};

// Function Pavlov.PavlovGameState.MulticastOnKillfeedEntry
struct APavlovGameState_MulticastOnKillfeedEntry_Params
{
	struct FKillfeedEntry                              NewEntry;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Pavlov.PavlovGameState.GetTeamScore
struct APavlovGameState_GetTeamScore_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetTeamArray
struct APavlovGameState_GetTeamArray_Params
{
	TArray<class APavlovPlayerState*>                  TeamArray;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetSortedPlayerArray
struct APavlovGameState_GetSortedPlayerArray_Params
{
	TArray<class APavlovPlayerState*>                  SortedPlayerArray;                                        // (Parm, OutParm, ZeroConstructor)
	int                                                FilterByTeamId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetPlayerStringId
struct APavlovGameState_GetPlayerStringId_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovGameState.GetPlayerStateByStringId
struct APavlovGameState_GetPlayerStateByStringId_Params
{
	struct FString                                     StringId;                                                 // (Parm, ZeroConstructor)
	class APavlovPlayerState*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetPlayerByScore
struct APavlovGameState_GetPlayerByScore_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPlayerState*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetMatchResult
struct APavlovGameState_GetMatchResult_Params
{
	EMatchResult                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetEquipmentNameByClass
struct APavlovGameState_GetEquipmentNameByClass_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.GetEquipmentDataByClass
struct APavlovGameState_GetEquipmentDataByClass_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FEquipmentData                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pavlov.PavlovGameState.GetEquipmentData
struct APavlovGameState_GetEquipmentData_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FEquipmentData                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pavlov.PavlovGameState.GetEquipmentCost
struct APavlovGameState_GetEquipmentCost_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameState.DisplayMatchStateOverlay
struct APavlovGameState_DisplayMatchStateOverlay_Params
{
	class UClass*                                      OverlayClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.TerminateGameSession
struct APavlovGameMode_TerminateGameSession_Params
{
};

// Function Pavlov.PavlovGameMode.SwitchTeam
struct APavlovGameMode_SwitchTeam_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.Suicide
struct APavlovGameMode_Suicide_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.StopReplayRecording
struct APavlovGameMode_StopReplayRecording_Params
{
};

// Function Pavlov.PavlovGameMode.StartReplayRecording
struct APavlovGameMode_StartReplayRecording_Params
{
};

// Function Pavlov.PavlovGameMode.SpawnPlayer
struct APavlovGameMode_SpawnPlayer_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SpawnAndPossesPawns
struct APavlovGameMode_SpawnAndPossesPawns_Params
{
};

// Function Pavlov.PavlovGameMode.ShuffleTeams
struct APavlovGameMode_ShuffleTeams_Params
{
};

// Function Pavlov.PavlovGameMode.SetTeamCash
struct APavlovGameMode_SetTeamCash_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CashAmmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SetRoundState
struct APavlovGameMode_SetRoundState_Params
{
	EPavlovRoundState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SetPawnsInvulnerable
struct APavlovGameMode_SetPawnsInvulnerable_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SetMovement
struct APavlovGameMode_SetMovement_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SetEveryoneCash
struct APavlovGameMode_SetEveryoneCash_Params
{
	int                                                CashAmmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.SetAttackingTeam
struct APavlovGameMode_SetAttackingTeam_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.RotateMap
struct APavlovGameMode_RotateMap_Params
{
};

// Function Pavlov.PavlovGameMode.ResetScore
struct APavlovGameMode_ResetScore_Params
{
};

// Function Pavlov.PavlovGameMode.PunishTeamKiller
struct APavlovGameMode_PunishTeamKiller_Params
{
	class APavlovPlayerState*                          TeamKiller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.PostRoundCleanUp
struct APavlovGameMode_PostRoundCleanUp_Params
{
};

// Function Pavlov.PavlovGameMode.PerformServerTravel
struct APavlovGameMode_PerformServerTravel_Params
{
};

// Function Pavlov.PavlovGameMode.OnSteamTicketValidation
struct APavlovGameMode_OnSteamTicketValidation_Params
{
	struct FString                                     SteamUserId;                                              // (Parm, ZeroConstructor)
	ESteamAuthResponse                                 Response;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OwnerSteamUserId;                                         // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameMode.OnRoundStateChanged
struct APavlovGameMode_OnRoundStateChanged_Params
{
	EPavlovRoundState                                  OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EPavlovRoundState                                  NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.OnPlayerSpawned
struct APavlovGameMode_OnPlayerSpawned_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn*                                 Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.OnPlayerKilled
struct APavlovGameMode_OnPlayerKilled_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn*                                 Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.OnPawnKilled
struct APavlovGameMode_OnPawnKilled_Params
{
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.OnKillVolumeOverlap
struct APavlovGameMode_OnKillVolumeOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.MakeNavmeshStatic
struct APavlovGameMode_MakeNavmeshStatic_Params
{
};

// Function Pavlov.PavlovGameMode.KickByStringId
struct APavlovGameMode_KickByStringId_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FText                                       KickReason;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bBan;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.IsTeamDead
struct APavlovGameMode_IsTeamDead_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.IncrementTeamScore
struct APavlovGameMode_IncrementTeamScore_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.IncrementPlayerScore
struct APavlovGameMode_IncrementPlayerScore_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.GiveTeamCash
struct APavlovGameMode_GiveTeamCash_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CashAmmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.GiveItem
struct APavlovGameMode_GiveItem_Params
{
	class APavlovPawn*                                 Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlockDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoaded;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.GiveEveryoneCash
struct APavlovGameMode_GiveEveryoneCash_Params
{
	int                                                CashAmmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.GetTeamStatus
struct APavlovGameMode_GetTeamStatus_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Casualties;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.GetTeamRealPlayerCount
struct APavlovGameMode_GetTeamRealPlayerCount_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.GetRealPlayerCount
struct APavlovGameMode_GetRealPlayerCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.GetRandomController
struct APavlovGameMode_GetRandomController_Params
{
	int                                                TeamFilter;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRealPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.CreateDedicatedServerSession
struct APavlovGameMode_CreateDedicatedServerSession_Params
{
};

// Function Pavlov.PavlovGameMode.CleanUpItems
struct APavlovGameMode_CleanUpItems_Params
{
};

// Function Pavlov.PavlovGameMode.CanChangeScore
struct APavlovGameMode_CanChangeScore_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.AddExtraRoundTime
struct APavlovGameMode_AddExtraRoundTime_Params
{
	float                                              ExtraTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameMode.AddAssist
struct APavlovGameMode_AddAssist_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.Start
struct UPavlovLobby_Start_Params
{
};

// Function Pavlov.PavlovLobby.SetWantToStart
struct UPavlovLobby_SetWantToStart_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.SetServerSettings
struct UPavlovLobby_SetServerSettings_Params
{
	struct FServerSettings                             NewServerSettings;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.PavlovLobby.SetPin
struct UPavlovLobby_SetPin_Params
{
	struct FString                                     Pin;                                                      // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovLobby.SetMap
struct UPavlovLobby_SetMap_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovLobby.SetHostingType
struct UPavlovLobby_SetHostingType_Params
{
	EServerHostingType                                 NewHostingType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.SetGameMode
struct UPavlovLobby_SetGameMode_Params
{
	struct FString                                     NewGameMode;                                              // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovLobby.SetFriendsOnly
struct UPavlovLobby_SetFriendsOnly_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.SetFillWithBots
struct UPavlovLobby_SetFillWithBots_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.SetCompetitiveMode
struct UPavlovLobby_SetCompetitiveMode_Params
{
	int                                                CompMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.RequestTeam
struct UPavlovLobby_RequestTeam_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.MuteMember
struct UPavlovLobby_MuteMember_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.KickAndBan
struct UPavlovLobby_KickAndBan_Params
{
	int                                                MemberIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.Kick
struct UPavlovLobby_Kick_Params
{
	int                                                MemberIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.IsPinProtected
struct UPavlovLobby_IsPinProtected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.IsMemberMuted
struct UPavlovLobby_IsMemberMuted_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.IsFriendsOnly
struct UPavlovLobby_IsFriendsOnly_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.GetRegion
struct UPavlovLobby_GetRegion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovLobby.GetPin
struct UPavlovLobby_GetPin_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovLobby.GetMemberTeam
struct UPavlovLobby_GetMemberTeam_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.GetLocalUserIndex
struct UPavlovLobby_GetLocalUserIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovLobby.DoesMemberWantsToStart
struct UPavlovLobby_DoesMemberWantsToStart_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.UpdateServerList
struct UPavlovGameInstance_UpdateServerList_Params
{
	struct FString                                     Map;                                                      // (Parm, ZeroConstructor)
	struct FString                                     GameMode;                                                 // (Parm, ZeroConstructor)
	bool                                               bFriendsOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrivateOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.SetMuted
struct UPavlovGameInstance_SetMuted_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.SetMatchmakingState
struct UPavlovGameInstance_SetMatchmakingState_Params
{
	EMatchmakingState                                  NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.RetrieveMasterServerSessionId
struct UPavlovGameInstance_RetrieveMasterServerSessionId_Params
{
};

// Function Pavlov.PavlovGameInstance.ResetTutorial
struct UPavlovGameInstance_ResetTutorial_Params
{
};

// Function Pavlov.PavlovGameInstance.ReportServerState
struct UPavlovGameInstance_ReportServerState_Params
{
};

// Function Pavlov.PavlovGameInstance.QuickMatch
struct UPavlovGameInstance_QuickMatch_Params
{
};

// Function Pavlov.PavlovGameInstance.QueryForGameSession
struct UPavlovGameInstance_QueryForGameSession_Params
{
};

// Function Pavlov.PavlovGameInstance.OpenMap_Implementation
struct UPavlovGameInstance_OpenMap_Implementation_Params
{
};

// Function Pavlov.PavlovGameInstance.OpenMap
struct UPavlovGameInstance_OpenMap_Params
{
	struct FString                                     Map;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameInstance.OnWorkshopSpecificQuery
struct UPavlovGameInstance_OnWorkshopSpecificQuery_Params
{
};

// Function Pavlov.PavlovGameInstance.OnSteamLobbyListUpdated
struct UPavlovGameInstance_OnSteamLobbyListUpdated_Params
{
};

// Function Pavlov.PavlovGameInstance.OnServerMapDownloaded
struct UPavlovGameInstance_OnServerMapDownloaded_Params
{
	bool                                               bSucceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameInstance.OnNetworkFailure
struct UPavlovGameInstance_OnNetworkFailure_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetworkFailure>                       FailureType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ErrorString;                                              // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameInstance.OnLeftLobby
struct UPavlovGameInstance_OnLeftLobby_Params
{
	ESteamLobbyChatMemberStateChange                   StateChange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.OnLadderOverlap
struct UPavlovGameInstance_OnLadderOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.OnEnterLobby
struct UPavlovGameInstance_OnEnterLobby_Params
{
	bool                                               bFailed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.OnClientMapDownloaded
struct UPavlovGameInstance_OnClientMapDownloaded_Params
{
	bool                                               bSucceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameInstance.OnAuthSessionTicketResponse
struct UPavlovGameInstance_OnAuthSessionTicketResponse_Params
{
	bool                                               bSucceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     HexAuthTicket;                                            // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovGameInstance.JoinServer
struct UPavlovGameInstance_JoinServer_Params
{
	struct FPavlovServerInfo                           ServerInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.PavlovGameInstance.JoinPinProtectedServer
struct UPavlovGameInstance_JoinPinProtectedServer_Params
{
	struct FPavlovServerInfo                           ServerInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     Pin;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.IsMuted
struct UPavlovGameInstance_IsMuted_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.InitClientProxies
struct UPavlovGameInstance_InitClientProxies_Params
{
};

// Function Pavlov.PavlovGameInstance.HasGameSession
struct UPavlovGameInstance_HasGameSession_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.GetTutorial
struct UPavlovGameInstance_GetTutorial_Params
{
	class UTutorial*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.GetOnlineRegion
struct UPavlovGameInstance_GetOnlineRegion_Params
{
	EOnlineRegion                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.GetOculusScale
struct UPavlovGameInstance_GetOculusScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.GetMapListAdvanced
struct UPavlovGameInstance_GetMapListAdvanced_Params
{
	struct FPavlov_MapCompatibility                    Compatibility;                                            // (Parm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.GetMapList
struct UPavlovGameInstance_GetMapList_Params
{
	struct FPavlov_MapCompatibility                    Compatibility;                                            // (Parm, IsPlainOldData)
	TArray<class UPavlov_Map*>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pavlov.PavlovGameInstance.GetMap
struct UPavlovGameInstance_GetMap_Params
{
	struct FString                                     UniqueId;                                                 // (Parm, ZeroConstructor)
	class UPavlov_Map*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.DisplayNetworkFailureMessage
struct UPavlovGameInstance_DisplayNetworkFailureMessage_Params
{
};

// Function Pavlov.PavlovGameInstance.DisplayMessageImpl
struct UPavlovGameInstance_DisplayMessageImpl_Params
{
};

// Function Pavlov.PavlovGameInstance.DisplayMessage
struct UPavlovGameInstance_DisplayMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	bool                                               bDeferredDelay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovGameInstance.CreateLobby
struct UPavlovGameInstance_CreateLobby_Params
{
};

// Function Pavlov.PavlovGameInstance.CreateGameSession
struct UPavlovGameInstance_CreateGameSession_Params
{
};

// Function Pavlov.PavlovGameInstance.CheckPlacementStatus
struct UPavlovGameInstance_CheckPlacementStatus_Params
{
};

// Function Pavlov.PavlovGameInstance.CancelServerFind
struct UPavlovGameInstance_CancelServerFind_Params
{
};

// Function Pavlov.PavlovGameInstance.CancelQuickmatch
struct UPavlovGameInstance_CancelQuickmatch_Params
{
};

// Function Pavlov.PavlovItemController.UpdateUIState
struct APavlovItemController_UpdateUIState_Params
{
};

// Function Pavlov.PavlovItemController.SetWheelEnabled
struct APavlovItemController_SetWheelEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.SetMenu
struct APavlovItemController_SetMenu_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.SetKillfeed
struct APavlovItemController_SetKillfeed_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.OnSelectionPicked
struct APavlovItemController_OnSelectionPicked_Params
{
	class AVRItem*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.IsTwoHandReloadEnabled
struct APavlovItemController_IsTwoHandReloadEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.IsTwoHandGripEnabled
struct APavlovItemController_IsTwoHandGripEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.IsMenuActive
struct APavlovItemController_IsMenuActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.GetOppositeHandController
struct APavlovItemController_GetOppositeHandController_Params
{
	class APavlovItemController*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.GetFingerPointLocation
struct APavlovItemController_GetFingerPointLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovItemController.ForceTwoHandGrip
struct APavlovItemController_ForceTwoHandGrip_Params
{
};

// Function Pavlov.PavlovItemController.ClearWheelInstance
struct APavlovItemController_ClearWheelInstance_Params
{
};

// Function Pavlov.GhostItemController.OnPointModeChanged
struct AGhostItemController_OnPointModeChanged_Params
{
	EGhostPointMode                                    OldPointMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.GhostItemController.ChangePointMode
struct AGhostItemController_ChangePointMode_Params
{
	EGhostPointMode                                    NewPointMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.UnBoardVehicle
struct APavlovPlayerController_UnBoardVehicle_Params
{
};

// Function Pavlov.PavlovPlayerController.TryRestoreEquipmentBySnapshot
struct APavlovPlayerController_TryRestoreEquipmentBySnapshot_Params
{
};

// Function Pavlov.PavlovPlayerController.TestTeamKill
struct APavlovPlayerController_TestTeamKill_Params
{
};

// Function Pavlov.PavlovPlayerController.TakeEquipmentSnapshot
struct APavlovPlayerController_TakeEquipmentSnapshot_Params
{
};

// Function Pavlov.PavlovPlayerController.SwitchToSpectator
struct APavlovPlayerController_SwitchToSpectator_Params
{
};

// Function Pavlov.PavlovPlayerController.SwitchTeam
struct APavlovPlayerController_SwitchTeam_Params
{
};

// Function Pavlov.PavlovPlayerController.SwapControllers
struct APavlovPlayerController_SwapControllers_Params
{
};

// Function Pavlov.PavlovPlayerController.Suicide
struct APavlovPlayerController_Suicide_Params
{
};

// Function Pavlov.PavlovPlayerController.SetServerTickRate
struct APavlovPlayerController_SetServerTickRate_Params
{
	int                                                Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.SetHeadMountedDisplayScale
struct APavlovPlayerController_SetHeadMountedDisplayScale_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.SetBuyingEnabled
struct APavlovPlayerController_SetBuyingEnabled_Params
{
	float                                              ForDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BuyZoneMaxDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ServerVote
struct APavlovPlayerController_ServerVote_Params
{
	class AVote*                                       Vote;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bYes;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ServerUnBoardVehicle
struct APavlovPlayerController_ServerUnBoardVehicle_Params
{
};

// Function Pavlov.PavlovPlayerController.ServerTestTeamKill
struct APavlovPlayerController_ServerTestTeamKill_Params
{
};

// Function Pavlov.PavlovPlayerController.ServerSwitchTeam
struct APavlovPlayerController_ServerSwitchTeam_Params
{
};

// Function Pavlov.PavlovPlayerController.ServerSuicide
struct APavlovPlayerController_ServerSuicide_Params
{
};

// Function Pavlov.PavlovPlayerController.ServerSetServerTickRate
struct APavlovPlayerController_ServerSetServerTickRate_Params
{
	int                                                Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ServerReportZombieBulletHit
struct APavlovPlayerController_ServerReportZombieBulletHit_Params
{
	struct FClientZombieBulletHit                      Hit;                                                      // (Parm)
};

// Function Pavlov.PavlovPlayerController.ServerReportVirtualStockChange
struct APavlovPlayerController_ServerReportVirtualStockChange_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ServerReportTrigger
struct APavlovPlayerController_ServerReportTrigger_Params
{
	class AGun*                                        Gun;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTrigger;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              GunState;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Pavlov.PavlovPlayerController.ServerReportShatter
struct APavlovPlayerController_ServerReportShatter_Params
{
	class ADestructible*                               Destructible;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // (Parm)
	struct FVector_NetQuantize                         Location;                                                 // (Parm)
};

// Function Pavlov.PavlovPlayerController.ServerReportBulletHit
struct APavlovPlayerController_ServerReportBulletHit_Params
{
	struct FClientBulletHit                            Hit;                                                      // (Parm)
};

// Function Pavlov.PavlovPlayerController.ServerInstigateVote
struct APavlovPlayerController_ServerInstigateVote_Params
{
	class UClass*                                      VoteClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Param1;                                                   // (Parm, ZeroConstructor)
	int                                                Param2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ServerEnterDigit
struct APavlovPlayerController_ServerEnterDigit_Params
{
	class ABomb*                                       Bomb;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ServerBuy
struct APavlovPlayerController_ServerBuy_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ServerBoardVehicle
struct APavlovPlayerController_ServerBoardVehicle_Params
{
	class APavlovWheeledVehicle*                       Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ServerAuthenticate
struct APavlovPlayerController_ServerAuthenticate_Params
{
	struct FString                                     HexTicket;                                                // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovPlayerController.ServerAbstainToVote
struct APavlovPlayerController_ServerAbstainToVote_Params
{
};

// Function Pavlov.PavlovPlayerController.PunishTeamKiller
struct APavlovPlayerController_PunishTeamKiller_Params
{
};

// Function Pavlov.PavlovPlayerController.OnAuthTimedout
struct APavlovPlayerController_OnAuthTimedout_Params
{
};

// Function Pavlov.PavlovPlayerController.OnAuthTicketReceived
struct APavlovPlayerController_OnAuthTicketReceived_Params
{
	bool                                               bSucceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     HexAuthTicket;                                            // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovPlayerController.MulticastDebugPoint
struct APavlovPlayerController_MulticastDebugPoint_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovPlayerController.ForgiveTeamKiller
struct APavlovPlayerController_ForgiveTeamKiller_Params
{
};

// Function Pavlov.PavlovPlayerController.ClientVoiceChat
struct APavlovPlayerController_ClientVoiceChat_Params
{
	class USteamVoiceComponent*                        VoiceComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSteamworksVoicePacket                      VoicePacket;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function Pavlov.PavlovPlayerController.ClientSetBuying
struct APavlovPlayerController_ClientSetBuying_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ClientReportMatchEnd
struct APavlovPlayerController_ClientReportMatchEnd_Params
{
};

// Function Pavlov.PavlovPlayerController.ClientPlayKillPing
struct APavlovPlayerController_ClientPlayKillPing_Params
{
};

// Function Pavlov.PavlovPlayerController.ClientOnTeamKilled
struct APavlovPlayerController_ClientOnTeamKilled_Params
{
	class APavlovPlayerState*                          CulpritTeamKiller;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ClientInstigateFlash
struct APavlovPlayerController_ClientInstigateFlash_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.ClientDisplayMessage
struct APavlovPlayerController_ClientDisplayMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovPlayerController.ClientAuthenticate
struct APavlovPlayerController_ClientAuthenticate_Params
{
};

// Function Pavlov.PavlovPlayerController.Buy
struct APavlovPlayerController_Buy_Params
{
	struct FName                                       EquipmentName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerController.BoardVehicle
struct APavlovPlayerController_BoardVehicle_Params
{
	class APavlovWheeledVehicle*                       Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovPlayerState.Reset
struct APavlovPlayerState_Reset_Params
{
};

// Function Pavlov.PavlovSpectatorPawn.ScrubToLive
struct APavlovSpectatorPawn_ScrubToLive_Params
{
};

// Function Pavlov.PavlovSpectatorPawn.ScrubRelative
struct APavlovSpectatorPawn_ScrubRelative_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovSpectatorPawn.ScrubNormalized
struct APavlovSpectatorPawn_ScrubNormalized_Params
{
	float                                              NormalizedTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovSpectatorPawn.Scrub
struct APavlovSpectatorPawn_Scrub_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovSpectatorPawn.OnScrubChanged
struct APavlovSpectatorPawn_OnScrubChanged_Params
{
	bool                                               bScrubing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovSpectatorPawn.OnGotoTime
struct APavlovSpectatorPawn_OnGotoTime_Params
{
	bool                                               bWasSuccessful;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovSpectatorPawn.OnDemoPlaybackError
struct APavlovSpectatorPawn_OnDemoPlaybackError_Params
{
	TEnumAsByte<EDemoPlayFailure>                      FailureType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ErrorString;                                              // (Parm, ZeroConstructor)
};

// Function Pavlov.PavlovSpectatorPawn.GetNormalizedScrubTime
struct APavlovSpectatorPawn_GetNormalizedScrubTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.SwapHands
struct UPavlovStatics_SwapHands_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.SpawnLocalSound2DByPawn
struct UPavlovStatics_SpawnLocalSound2DByPawn_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.SpawnLocalSound2D
struct UPavlovStatics_SpawnLocalSound2D_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.SetPlayerEffectsDisabled
struct UPavlovStatics_SetPlayerEffectsDisabled_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.IsReplay
struct UPavlovStatics_IsReplay_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.IsPlayingOnlineGame
struct UPavlovStatics_IsPlayingOnlineGame_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.IsOculusTouch
struct UPavlovStatics_IsOculusTouch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.IsBombDropped
struct UPavlovStatics_IsBombDropped_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetWorkshop
struct UPavlovStatics_GetWorkshop_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UWorkshop*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetTutorial
struct UPavlovStatics_GetTutorial_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTutorial*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetSpectatorTVCamera
struct UPavlovStatics_GetSpectatorTVCamera_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ASpectatorTVCamera*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetPlayerEquipment
struct UPavlovStatics_GetPlayerEquipment_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Primary;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Secondary;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Pavlov.PavlovStatics.GetPlayerEffects
struct UPavlovStatics_GetPlayerEffects_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlobalPlayerEffects*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetPawnByPlayerState
struct UPavlovStatics_GetPawnByPlayerState_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetPavlovLobby
struct UPavlovStatics_GetPavlovLobby_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPavlovLobby*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetPavlovGameUserSettings
struct UPavlovStatics_GetPavlovGameUserSettings_Params
{
	class UPavlovGameUserSettings*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetLocalPlayerState
struct UPavlovStatics_GetLocalPlayerState_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPlayerState*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetLocalPlayerCameraTransform
struct UPavlovStatics_GetLocalPlayerCameraTransform_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.GetBombInstance
struct UPavlovStatics_GetBombInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ABomb*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.FindClosestBombPlantSpot
struct UPavlovStatics_FindClosestBombPlantSpot_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RefLocation;                                              // (Parm, IsPlainOldData)
	class ABombPlantSpot*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovStatics.ArePawnsHostile
struct UPavlovStatics_ArePawnsHostile_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.PavlovWheeledVehicle.SetSteeringInput
struct APavlovWheeledVehicle_SetSteeringInput_Params
{
	float                                              Input;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.PlayerCycler.GetNext
struct UPlayerCycler_GetNext_Params
{
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class APavlovPawn*                                 Pawn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Pliers.ServerReportCut
struct APliers_ServerReportCut_Params
{
	class ABomb*                                       Bomb;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WireIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Pliers.MulticastOnCut
struct APliers_MulticastOnCut_Params
{
};

// Function Pavlov.Rat.OnRevive
struct ARat_OnRevive_Params
{
	class AActor*                                      ActorOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Rat.OnKill
struct ARat_OnKill_Params
{
	class AActor*                                      ActorOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Rat.ApplyImpact
struct ARat_ApplyImpact_Params
{
};

// Function Pavlov.ReplayManager.PlayReplay
struct UReplayManager_PlayReplay_Params
{
	struct FString                                     ReplayId;                                                 // (Parm, ZeroConstructor)
};

// Function Pavlov.ReplayManager.OnCustomMapDownloaded
struct UReplayManager_OnCustomMapDownloaded_Params
{
	bool                                               bSucceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Pavlov.ReplayManager.Find
struct UReplayManager_Find_Params
{
	struct FString                                     GameMode;                                                 // (Parm, ZeroConstructor)
	bool                                               bCompetitive;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.RevolverGunState.SetCylinder
struct URevolverGunState_SetCylinder_Params
{
	bool                                               bOpen;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.SkinComponent.RequestSkin
struct USkinComponent_RequestSkin_Params
{
	class USkinAsset*                                  RequestedSkin;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.SkinComponent.OnRep_Skin
struct USkinComponent_OnRep_Skin_Params
{
};

// Function Pavlov.SpectatorTag.OnFadeOut
struct ASpectatorTag_OnFadeOut_Params
{
};

// Function Pavlov.SpectatorTag.GetPlayerState
struct ASpectatorTag_GetPlayerState_Params
{
	class APavlovPlayerState*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.SpectatorTVCamera.OnAttachedToFocusedPawn
struct ASpectatorTVCamera_OnAttachedToFocusedPawn_Params
{
};

// Function Pavlov.SpectatorTVCamera.GetSceneCapture
struct ASpectatorTVCamera_GetSceneCapture_Params
{
	class USceneCaptureComponent2D*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.SpectatorTVCamera.Cycle
struct ASpectatorTVCamera_Cycle_Params
{
};

// Function Pavlov.SpectatorTVCamera.AddYawInput
struct ASpectatorTVCamera_AddYawInput_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Killfeed.Show
struct AKillfeed_Show_Params
{
};

// Function Pavlov.Killfeed.OnDisplayModeUpdated
struct AKillfeed_OnDisplayModeUpdated_Params
{
};

// Function Pavlov.Killfeed.Hide
struct AKillfeed_Hide_Params
{
};

// Function Pavlov.Vote.OnVoteEnded
struct AVote_OnVoteEnded_Params
{
	bool                                               bSucceeded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Vote.MulticastOnVoteEnded
struct AVote_MulticastOnVoteEnded_Params
{
	bool                                               bSucceeded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Watch.OnKillfeedEntry
struct UWatch_OnKillfeedEntry_Params
{
	struct FKillfeedEntry                              NewEntry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.Watch.OnKillConfirmationPush
struct UWatch_OnKillConfirmationPush_Params
{
	class APavlovPlayerState*                          Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Watch.GetWatchAttachComponent
struct UWatch_GetWatchAttachComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Pavlov.ToolTip.GetFadeScalar
struct AToolTip_GetFadeScalar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Tutorial.TerminateToolTip
struct UTutorial_TerminateToolTip_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Tutorial.ShowToolTip
struct UTutorial_ShowToolTip_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ContextLocation;                                          // (Parm, IsPlainOldData)
};

// Function Pavlov.Tutorial.Reset
struct UTutorial_Reset_Params
{
};

// Function Pavlov.Tutorial.MarkToolTipAsComplete
struct UTutorial_MarkToolTipAsComplete_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Tutorial.IsToolTipCompleted
struct UTutorial_IsToolTipCompleted_Params
{
	struct FName                                       ID;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Tutorial.GetToolTipInstanceCount
struct UTutorial_GetToolTipInstanceCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.UberWheel.UpdateSegments
struct AUberWheel_UpdateSegments_Params
{
	TArray<struct FWheelSegment>                       NewSegments;                                              // (Parm, ZeroConstructor)
};

// Function Pavlov.UberWheel.SetEnabled
struct AUberWheel_SetEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.UberWheel.OnUpdateSegment
struct AUberWheel_OnUpdateSegment_Params
{
	struct FWheelSegment                               Segment;                                                  // (Parm, OutParm)
	class UUserWidget*                                 Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 ContentInstance;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.UberWheel.OnEnabled
struct AUberWheel_OnEnabled_Params
{
};

// Function Pavlov.UberWheel.OnCommit
struct AUberWheel_OnCommit_Params
{
	int                                                Selection;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWheelSegment                               Segment;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Pavlov.UberWheel.IsEnabled
struct AUberWheel_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Waypoint.GetNextWaypointTo
struct AWaypoint_GetNextWaypointTo_Params
{
	class AWaypoint*                                   TargetWaypoint;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AWaypoint*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Waypoint.GetClosestWaypoint
struct AWaypoint_GetClosestWaypoint_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	bool                                               bOnlyLeaf;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseNavMesh;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AWaypoint*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Workshop.Vote
struct UWorkshop_Vote_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUp;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Workshop.Unsubscribe
struct UWorkshop_Unsubscribe_Params
{
	struct FName                                       ID;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.Workshop.SubscribeTo
struct UWorkshop_SubscribeTo_Params
{
	struct FName                                       ID;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Pavlov.Workshop.RequestUserVote
struct UWorkshop_RequestUserVote_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Workshop.QueryForSpecificCustomMaps
struct UWorkshop_QueryForSpecificCustomMaps_Params
{
	TArray<struct FName>                               UniqueIds;                                                // (Parm, ZeroConstructor)
};

// Function Pavlov.Workshop.QueryForCustomMaps
struct UWorkshop_QueryForCustomMaps_Params
{
	EWorkshopQueryType                                 QueryType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pavlov.Workshop.QueryDownloadProgress
struct UWorkshop_QueryDownloadProgress_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Workshop.OnCustomMapDownloaded
struct UWorkshop_OnCustomMapDownloaded_Params
{
	bool                                               bSucceed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Pavlov.Workshop.OnAfterMount
struct UWorkshop_OnAfterMount_Params
{
};

// Function Pavlov.Workshop.IsSubscribedTo
struct UWorkshop_IsSubscribedTo_Params
{
	struct FName                                       ID;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Workshop.IsCustomMapId
struct UWorkshop_IsCustomMapId_Params
{
	struct FString                                     CustomMapId;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Workshop.GetPreviewTexture
struct UWorkshop_GetPreviewTexture_Params
{
	struct FName                                       ID;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Workshop.GetCurrentDownloadId
struct UWorkshop_GetCurrentDownloadId_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Workshop.DownloadTest
struct UWorkshop_DownloadTest_Params
{
};

// Function Pavlov.Workshop.DownloadCustomMap
struct UWorkshop_DownloadCustomMap_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Pavlov.Workshop.CheckForDownload
struct UWorkshop_CheckForDownload_Params
{
};

// Function Pavlov.Zombie.Revive
struct AZombie_Revive_Params
{
};

// Function Pavlov.Zombie.OnRep_Health
struct AZombie_OnRep_Health_Params
{
};

// Function Pavlov.Zombie.OnRep_Dead
struct AZombie_OnRep_Dead_Params
{
};

// Function Pavlov.Zombie.Kill
struct AZombie_Kill_Params
{
};

// Function Pavlov.Zombie.IsDead
struct AZombie_IsDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pavlov.Zombie.AddWound
struct AZombie_AddWound_Params
{
	EZombieWoundType                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RefBone;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif