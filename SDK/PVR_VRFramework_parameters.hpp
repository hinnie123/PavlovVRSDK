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

// Function VRFramework.VRGunState.SetChamberState
struct UVRGunState_SetChamberState_Params
{
	EVRGunChamberState                                 NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRGunState.IsChamberLoaded
struct UVRGunState_IsChamberLoaded_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRGunState.IsAnyChamberLoaded
struct UVRGunState_IsAnyChamberLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRGunState.GetMagazineBulletCount
struct UVRGunState_GetMagazineBulletCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRGunState.GetChamberState
struct UVRGunState_GetChamberState_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRGunState.GetBulletCount
struct UVRGunState_GetBulletCount_Params
{
	bool                                               bEmptyShellsToo;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRItem.Used
struct AVRItem_Used_Params
{
	bool                                               bJustPicked;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRItem.Use
struct AVRItem_Use_Params
{
};

// Function VRFramework.VRItem.ShouldSelfDestroy
struct AVRItem_ShouldSelfDestroy_Params
{
};

// Function VRFramework.VRItem.ShouldNotSelfDestroy
struct AVRItem_ShouldNotSelfDestroy_Params
{
};

// Function VRFramework.VRItem.SetController
struct AVRItem_SetController_Params
{
	class AVRItemController*                           NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNetUpdate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRItem.SetAttachParent
struct AVRItem_SetAttachParent_Params
{
	class AVRItem*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNetUpdate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRItem.SelfDestroy
struct AVRItem_SelfDestroy_Params
{
};

// Function VRFramework.VRItem.Physicalize
struct AVRItem_Physicalize_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRItem.OnRep_Parent
struct AVRItem_OnRep_Parent_Params
{
};

// Function VRFramework.VRItem.OnRep_ItemState
struct AVRItem_OnRep_ItemState_Params
{
};

// Function VRFramework.VRItem.OnRep_Controller
struct AVRItem_OnRep_Controller_Params
{
};

// Function VRFramework.VRItem.OnPredictionTimeout
struct AVRItem_OnPredictionTimeout_Params
{
};

// Function VRFramework.VRItem.OnPredictionCorrect
struct AVRItem_OnPredictionCorrect_Params
{
};

// Function VRFramework.VRItem.OnPick
struct AVRItem_OnPick_Params
{
	class AVRItemController*                           ByController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRItem.OnPhysicsWake
struct AVRItem_OnPhysicsWake_Params
{
	class UPrimitiveComponent*                         SleepingComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRItem.OnPhysicsSleep
struct AVRItem_OnPhysicsSleep_Params
{
	class UPrimitiveComponent*                         SleepingComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRItem.OnDrop
struct AVRItem_OnDrop_Params
{
};

// Function VRFramework.VRItem.MulticastUpdateState
struct AVRItem_MulticastUpdateState_Params
{
	class AVRItemController*                           RequestedController;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AVRItem*                                     RequestedParent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RequestedParentSlot;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRItem.MulticastStateSanityCheck
struct AVRItem_MulticastStateSanityCheck_Params
{
};

// Function VRFramework.VRItem.MakeDormant
struct AVRItem_MakeDormant_Params
{
};

// Function VRFramework.VRItem.IsBlocked
struct AVRItem_IsBlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRItem.DestroyNow
struct AVRItem_DestroyNow_Params
{
};

// Function VRFramework.VRItem.Cycle
struct AVRItem_Cycle_Params
{
};

// Function VRFramework.VRBullet.OnProjectileStop
struct AVRBullet_OnProjectileStop_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function VRFramework.VRBullet.OnImpact
struct AVRBullet_OnImpact_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function VRFramework.VRBullet.OnBuzzingOverlap
struct AVRBullet_OnBuzzingOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function VRFramework.VRBullet.ApplyImpactForce
struct AVRBullet_ApplyImpactForce_Params
{
};

// Function VRFramework.VRPawn.Teleport
struct AVRPawn_Teleport_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	struct FRotator                                    WorldRotation;                                            // (Parm, IsPlainOldData)
	EVRTeleportSpace                                   Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRPawn.SetFakePlayer
struct AVRPawn_SetFakePlayer_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRPawn.SetAllPockets
struct AVRPawn_SetAllPockets_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRPawn.ServerUpdate
struct AVRPawn_ServerUpdate_Params
{
	struct FVRNetSnapshot                              Snapshot;                                                 // (Parm)
};

// Function VRFramework.VRPawn.ServerTeleport
struct AVRPawn_ServerTeleport_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	struct FRotator                                    WorldRotation;                                            // (Parm, IsPlainOldData)
};

// Function VRFramework.VRPawn.ServerRotate
struct AVRPawn_ServerRotate_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRPawn.ReCenter
struct AVRPawn_ReCenter_Params
{
};

// Function VRFramework.VRPawn.ProjectToFloor
struct AVRPawn_ProjectToFloor_Params
{
};

// Function VRFramework.VRPawn.OnTeleport
struct AVRPawn_OnTeleport_Params
{
};

// Function VRFramework.VRPawn.OnRep_RightController
struct AVRPawn_OnRep_RightController_Params
{
};

// Function VRFramework.VRPawn.OnRep_LeftController
struct AVRPawn_OnRep_LeftController_Params
{
};

// Function VRFramework.VRPawn.OnRep_LatestSnapshot
struct AVRPawn_OnRep_LatestSnapshot_Params
{
};

// Function VRFramework.VRPawn.OnRep_InventoryLogic
struct AVRPawn_OnRep_InventoryLogic_Params
{
};

// Function VRFramework.VRPawn.OnPreTeleport
struct AVRPawn_OnPreTeleport_Params
{
};

// Function VRFramework.VRPawn.OnEndMove
struct AVRPawn_OnEndMove_Params
{
};

// Function VRFramework.VRPawn.OnBeginMove
struct AVRPawn_OnBeginMove_Params
{
};

// Function VRFramework.VRPawn.MulticastRotated
struct AVRPawn_MulticastRotated_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRPawn.IsProne
struct AVRPawn_IsProne_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRPawn.IsMoving
struct AVRPawn_IsMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRPawn.IsFakePlayer
struct AVRPawn_IsFakePlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRPawn.IsCrouching
struct AVRPawn_IsCrouching_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRPawn.GetPlayerEmulator
struct AVRPawn_GetPlayerEmulator_Params
{
	class UVRPlayerEmulatorComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VRFramework.VRPawn.GetPivot
struct AVRPawn_GetPivot_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VRFramework.VRPawn.GetMovingSpeed
struct AVRPawn_GetMovingSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRPawn.GetMovingRatio
struct AVRPawn_GetMovingRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRPawn.GetHeadRotation
struct AVRPawn_GetHeadRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRPawn.GetHeadLocation
struct AVRPawn_GetHeadLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRPawn.GetHeadCamera
struct AVRPawn_GetHeadCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VRFramework.VRPawn.GetGroundLocation
struct AVRPawn_GetGroundLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRPawn.GetCrouchRatio
struct AVRPawn_GetCrouchRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRPawn.GetAvatarScale
struct AVRPawn_GetAvatarScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRPawn.GetAvatarComponent
struct AVRPawn_GetAvatarComponent_Params
{
	class UVRAvatarComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VRFramework.VRPawn.ClientBulletPassby
struct AVRPawn_ClientBulletPassby_Params
{
	class USoundCue*                                   BuzzingSound;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function VRFramework.VRPawn.CheckAndSwapHands
struct AVRPawn_CheckAndSwapHands_Params
{
};

// Function VRFramework.VRPawn.CanTeleport
struct AVRPawn_CanTeleport_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRGun.UngrabChargingHandle
struct AVRGun_UngrabChargingHandle_Params
{
};

// Function VRFramework.VRGun.ServerUpdateState
struct AVRGun_ServerUpdateState_Params
{
	TArray<unsigned char>                              RawState;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function VRFramework.VRGun.ServerTrigger
struct AVRGun_ServerTrigger_Params
{
	bool                                               bPulled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRGun.ServerReleaseMagazine
struct AVRGun_ServerReleaseMagazine_Params
{
};

// Function VRFramework.VRGun.ServerReleaseBolt
struct AVRGun_ServerReleaseBolt_Params
{
};

// Function VRFramework.VRGun.ServerLoadMagazine
struct AVRGun_ServerLoadMagazine_Params
{
	class AVRMagazine*                                 NewMagazine;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRGun.ServerLoadChamber
struct AVRGun_ServerLoadChamber_Params
{
};

// Function VRFramework.VRGun.ServerCycleFireMode
struct AVRGun_ServerCycleFireMode_Params
{
};

// Function VRFramework.VRGun.ServerCock
struct AVRGun_ServerCock_Params
{
};

// Function VRFramework.VRGun.SendStateToClientOwner
struct AVRGun_SendStateToClientOwner_Params
{
};

// Function VRFramework.VRGun.ReleaseTrigger
struct AVRGun_ReleaseTrigger_Params
{
};

// Function VRFramework.VRGun.ReleaseMagazine
struct AVRGun_ReleaseMagazine_Params
{
};

// Function VRFramework.VRGun.ReleaseBolt
struct AVRGun_ReleaseBolt_Params
{
};

// Function VRFramework.VRGun.QuickReloadImpl
struct AVRGun_QuickReloadImpl_Params
{
};

// Function VRFramework.VRGun.QuickReload
struct AVRGun_QuickReload_Params
{
};

// Function VRFramework.VRGun.PullTrigger
struct AVRGun_PullTrigger_Params
{
};

// Function VRFramework.VRGun.OnUnload
struct AVRGun_OnUnload_Params
{
};

// Function VRFramework.VRGun.OnSnapTriggerReset
struct AVRGun_OnSnapTriggerReset_Params
{
};

// Function VRFramework.VRGun.OnRoundEjected
struct AVRGun_OnRoundEjected_Params
{
	bool                                               bLive;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRGun.OnRep_StateProxy
struct AVRGun_OnRep_StateProxy_Params
{
};

// Function VRFramework.VRGun.OnRep_Magazine
struct AVRGun_OnRep_Magazine_Params
{
};

// Function VRFramework.VRGun.OnMagazinePicked
struct AVRGun_OnMagazinePicked_Params
{
	class AVRItem*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRGun.OnMagazineChanged
struct AVRGun_OnMagazineChanged_Params
{
	bool                                               bHasMagazine;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRGun.OnChargingHandleGrab
struct AVRGun_OnChargingHandleGrab_Params
{
};

// Function VRFramework.VRGun.OnChamberLoaded
struct AVRGun_OnChamberLoaded_Params
{
};

// Function VRFramework.VRGun.MulticastOnStateUpdated
struct AVRGun_MulticastOnStateUpdated_Params
{
	TArray<unsigned char>                              RawState;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function VRFramework.VRGun.MulticastOnMagazineReleased
struct AVRGun_MulticastOnMagazineReleased_Params
{
	class AVRMagazine*                                 ReleasedMagazine;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRGun.MulticastOnDryFire
struct AVRGun_MulticastOnDryFire_Params
{
};

// Function VRFramework.VRGun.MulticastOnCock
struct AVRGun_MulticastOnCock_Params
{
	bool                                               bPullBack;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRGun.MulticastOnChamberLoaded
struct AVRGun_MulticastOnChamberLoaded_Params
{
};

// Function VRFramework.VRGun.MulticastOnBoltRelease
struct AVRGun_MulticastOnBoltRelease_Params
{
};

// Function VRFramework.VRGun.MulticastFire
struct AVRGun_MulticastFire_Params
{
};

// Function VRFramework.VRGun.LoadMagazine
struct AVRGun_LoadMagazine_Params
{
	class AVRMagazine*                                 NewMagazine;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRGun.LoadChamber
struct AVRGun_LoadChamber_Params
{
};

// Function VRFramework.VRGun.IsOwnedLocally
struct AVRGun_IsOwnedLocally_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRGun.IsOwnedByPrimaryPlayer
struct AVRGun_IsOwnedByPrimaryPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRGun.IsLoaded
struct AVRGun_IsLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRGun.HasMagazine
struct AVRGun_HasMagazine_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRGun.GetSlideTime
struct AVRGun_GetSlideTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRGun.GetRecoilTime
struct AVRGun_GetRecoilTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRGun.GetMuzzleLocalOffset
struct AVRGun_GetMuzzleLocalOffset_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRGun.GetChargingHandle
struct AVRGun_GetChargingHandle_Params
{
	class UVRHandleComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VRFramework.VRGun.ForceGunStateUpdate
struct AVRGun_ForceGunStateUpdate_Params
{
};

// Function VRFramework.VRGun.Fired
struct AVRGun_Fired_Params
{
};

// Function VRFramework.VRGun.CycleFireMode
struct AVRGun_CycleFireMode_Params
{
};

// Function VRFramework.VRGun.Cock
struct AVRGun_Cock_Params
{
	float                                              Ratio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRGun.ClientUpdateState
struct AVRGun_ClientUpdateState_Params
{
	TArray<unsigned char>                              RawState;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function VRFramework.VRGun.CanLoadChamber
struct AVRGun_CanLoadChamber_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRGun.AttachMagazine
struct AVRGun_AttachMagazine_Params
{
	class AVRMagazine*                                 MagazineToAttach;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRInventory.ReAttachChildren
struct AVRInventory_ReAttachChildren_Params
{
};

// Function VRFramework.VRInventory.OnRotationChanged
struct AVRInventory_OnRotationChanged_Params
{
};

// Function VRFramework.VRInventory.OnQuickSlotAction
struct AVRInventory_OnQuickSlotAction_Params
{
	class AVRItemController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EVRQuickSlotType                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bState;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRInventory.GetVestVolume
struct AVRInventory_GetVestVolume_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VRFramework.VRInventory.GetQuickSlotVolume
struct AVRInventory_GetQuickSlotVolume_Params
{
	EVRQuickSlotType                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VRFramework.VRInventory.GetPawn
struct AVRInventory_GetPawn_Params
{
	class AVRPawn*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRInventory.GetLogic
struct AVRInventory_GetLogic_Params
{
	class AVRInventoryLogic*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRController.UnGrab
struct AVRController_UnGrab_Params
{
};

// Function VRFramework.VRController.TriggerChanged
struct AVRController_TriggerChanged_Params
{
	bool                                               bNewTrigger;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRController.Teleport
struct AVRController_Teleport_Params
{
};

// Function VRFramework.VRController.SetPlayArea
struct AVRController_SetPlayArea_Params
{
	class AVRPlayArea*                                 NewPlayArea;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRController.SetHapticValues
struct AVRController_SetHapticValues_Params
{
	float                                              Amplitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRController.PrepareTeleport
struct AVRController_PrepareTeleport_Params
{
};

// Function VRFramework.VRController.PlayHapticEffect
struct AVRController_PlayHapticEffect_Params
{
	class UHapticFeedbackEffect_Base*                  HapticEffect;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRController.PlayHaptic
struct AVRController_PlayHaptic_Params
{
	EVRHapticType                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRController.OnRep_HandType
struct AVRController_OnRep_HandType_Params
{
};

// Function VRFramework.VRController.OnModeChanged
struct AVRController_OnModeChanged_Params
{
	EVRControllerMode                                  From;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRController.OnInvalidTeleportOverlap
struct AVRController_OnInvalidTeleportOverlap_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRController.OnImminentTeleport
struct AVRController_OnImminentTeleport_Params
{
};

// Function VRFramework.VRController.OnGrabVolumeEndOverlapOld
struct AVRController_OnGrabVolumeEndOverlapOld_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRController.OnGrabVolumeEndOverlap
struct AVRController_OnGrabVolumeEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRController.OnGrabVolumeBeginOverlapOld
struct AVRController_OnGrabVolumeBeginOverlapOld_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function VRFramework.VRController.OnGrabVolumeBeginOverlap
struct AVRController_OnGrabVolumeBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function VRFramework.VRController.OnGrabEndOverlap
struct AVRController_OnGrabEndOverlap_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function VRFramework.VRController.OnGrabBeginOverlap
struct AVRController_OnGrabBeginOverlap_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function VRFramework.VRController.GripChanged
struct AVRController_GripChanged_Params
{
	bool                                               bNewGrip;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRController.GrabManual
struct AVRController_GrabManual_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bByGrip;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRController.Grab
struct AVRController_Grab_Params
{
	bool                                               bByGrip;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRController.GetPawnController
struct AVRController_GetPawnController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRController.GetPawn
struct AVRController_GetPawn_Params
{
	class AVRPawn*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRController.GetHandType
struct AVRController_GetHandType_Params
{
	EControllerHand                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRController.GetGrabVolume
struct AVRController_GetGrabVolume_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VRFramework.VRController.GenericHaptic
struct AVRController_GenericHaptic_Params
{
};

// Function VRFramework.VRController.EmulateTrigger
struct AVRController_EmulateTrigger_Params
{
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRController.EmulateMenu
struct AVRController_EmulateMenu_Params
{
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRController.EmulateGrip
struct AVRController_EmulateGrip_Params
{
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRController.CouldGrab
struct AVRController_CouldGrab_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRController.ChangeMode
struct AVRController_ChangeMode_Params
{
	EVRControllerMode                                  To;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRItemController.ServerReportStateChange
struct AVRItemController_ServerReportStateChange_Params
{
	struct FVRItemControllerState                      NewState;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function VRFramework.VRItemController.ServerPickManual
struct AVRItemController_ServerPickManual_Params
{
	class AVRItem*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRItemController.ServerDrop
struct AVRItemController_ServerDrop_Params
{
	class AVRItem*                                     PickupToDrop;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DesiredThrowLocation;                                     // (Parm, IsPlainOldData)
	struct FVector                                     DesiredThrowVelocity;                                     // (Parm, IsPlainOldData)
	struct FRotator                                    DesiredThrowRotation;                                     // (Parm, IsPlainOldData)
};

// Function VRFramework.VRItemController.ReportPickupDrop
struct AVRItemController_ReportPickupDrop_Params
{
	class AVRItem*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRItemController.PredictedPickManual
struct AVRItemController_PredictedPickManual_Params
{
	class AVRItem*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRItemController.PickManual
struct AVRItemController_PickManual_Params
{
	class AVRItem*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRItemController.Pick
struct AVRItemController_Pick_Params
{
};

// Function VRFramework.VRItemController.OnStateChanged
struct AVRItemController_OnStateChanged_Params
{
	struct FVRItemControllerState                      OldState;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRFramework.VRItemController.OnRep_State
struct AVRItemController_OnRep_State_Params
{
};

// Function VRFramework.VRItemController.OnPickupDestroyed
struct AVRItemController_OnPickupDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRItemController.OnDropTimer
struct AVRItemController_OnDropTimer_Params
{
};

// Function VRFramework.VRItemController.MulticastChangeState
struct AVRItemController_MulticastChangeState_Params
{
	struct FVRItemControllerState                      NewState;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function VRFramework.VRItemController.IsLocallyOwned
struct AVRItemController_IsLocallyOwned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRItemController.Drop
struct AVRItemController_Drop_Params
{
};

// Function VRFramework.VRBulletManager.Get
struct AVRBulletManager_Get_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AVRBulletManager*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRBulletPenetrationInterface.IsThinSurface
struct UVRBulletPenetrationInterface_IsThinSurface_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRMenu.Close
struct AVRMenu_Close_Params
{
};

// Function VRFramework.VRHand.GetShoulderLocation
struct AVRHand_GetShoulderLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRGrabInterface.UseSoftGrabConstraint
struct UVRGrabInterface_UseSoftGrabConstraint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRGrabInterface.UnGrabbed
struct UVRGrabInterface_UnGrabbed_Params
{
	class AVRController*                               Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRGrabInterface.Grabbed
struct UVRGrabInterface_Grabbed_Params
{
	class AVRController*                               Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRDynamicHelperComponent.OnWake
struct UVRDynamicHelperComponent_OnWake_Params
{
	class UPrimitiveComponent*                         WakingComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRDynamicHelperComponent.OnSleep
struct UVRDynamicHelperComponent_OnSleep_Params
{
	class UPrimitiveComponent*                         SleepingComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRHandleComponent.IsGrabbed
struct UVRHandleComponent_IsGrabbed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRHandleComponent.GetGrabbedBy
struct UVRHandleComponent_GetGrabbedBy_Params
{
	class AVRController*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRInventoryLogic.ServerPut
struct AVRInventoryLogic_ServerPut_Params
{
	unsigned char                                      Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AVRItemController*                           ByController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRInventoryLogic.ServerGet
struct AVRInventoryLogic_ServerGet_Params
{
	unsigned char                                      Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AVRItemController*                           ByController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRInventoryLogic.ReAttachChildren
struct AVRInventoryLogic_ReAttachChildren_Params
{
};

// Function VRFramework.VRInventoryLogic.GetPawn
struct AVRInventoryLogic_GetPawn_Params
{
	class AVRPawn*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRMagazine.ServerObliterate
struct AVRMagazine_ServerObliterate_Params
{
};

// Function VRFramework.VRMagazine.ServerMerge
struct AVRMagazine_ServerMerge_Params
{
	class AVRMagazine*                                 Magazine;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRMagazine.OnRep_Gun
struct AVRMagazine_OnRep_Gun_Params
{
};

// Function VRFramework.VRMagazine.OnRep_Bullets
struct AVRMagazine_OnRep_Bullets_Params
{
};

// Function VRFramework.VRMagazine.OnReleasedFromGun
struct AVRMagazine_OnReleasedFromGun_Params
{
};

// Function VRFramework.VRMagazine.OnLoadedIntoGun
struct AVRMagazine_OnLoadedIntoGun_Params
{
};

// Function VRFramework.VRMagazine.OnBulletsChanged
struct AVRMagazine_OnBulletsChanged_Params
{
};

// Function VRFramework.VRMagazine.Merge
struct AVRMagazine_Merge_Params
{
	class AVRMagazine*                                 Magazine;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRMagazine.MakeReinsertable
struct AVRMagazine_MakeReinsertable_Params
{
};

// Function VRFramework.VRMagazine.IsFull
struct AVRMagazine_IsFull_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRLadder.CreateVolume
struct AVRLadder_CreateVolume_Params
{
};

// Function VRFramework.VRMagazineSlotComponent.OnEndOverlap
struct UVRMagazineSlotComponent_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRMagazineSlotComponent.OnBeginOverlap
struct UVRMagazineSlotComponent_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function VRFramework.VRMovementComponent.SyncTime
struct UVRMovementComponent_SyncTime_Params
{
};

// Function VRFramework.VRMovementComponent.ServerSyncTime
struct UVRMovementComponent_ServerSyncTime_Params
{
};

// Function VRFramework.VRMovementComponent.ServerReportMovement
struct UVRMovementComponent_ServerReportMovement_Params
{
	struct FVRMovementSnapshot                         M0;                                                       // (Parm)
};

// Function VRFramework.VRMovementComponent.ServerMoveTo
struct UVRMovementComponent_ServerMoveTo_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function VRFramework.VRMovementComponent.OnRep_MovementSnapshot
struct UVRMovementComponent_OnRep_MovementSnapshot_Params
{
};

// Function VRFramework.VRMovementComponent.OnPawnEndOverlap
struct UVRMovementComponent_OnPawnEndOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRMovementComponent.OnPawnBeginOverlap
struct UVRMovementComponent_OnPawnBeginOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRMovementComponent.MulticastMoveTo
struct UVRMovementComponent_MulticastMoveTo_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function VRFramework.VRMovementComponent.MoveTo
struct UVRMovementComponent_MoveTo_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function VRFramework.VRMovementComponent.GetGroundSurface
struct UVRMovementComponent_GetGroundSurface_Params
{
	TEnumAsByte<EPhysicalSurface>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRMovementComponent.ClientSyncTime
struct UVRMovementComponent_ClientSyncTime_Params
{
	float                                              ServerTimeSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRPlayerEmulatorComponent.SetAimRotation
struct UVRPlayerEmulatorComponent_SetAimRotation_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	float                                              AngleDeviation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAim;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRPocketComponent.OnEndOverlap
struct UVRPocketComponent_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRPocketComponent.OnBeginOverlap
struct UVRPocketComponent_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function VRFramework.VRPocketComponent.MulticastUnpocketize
struct UVRPocketComponent_MulticastUnpocketize_Params
{
	class AVRItem*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRSpectatorComponent.SetTwoPointGrabEnabled
struct UVRSpectatorComponent_SetTwoPointGrabEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRFramework.VRSpectatorComponent.SetMotionControllers
struct UVRSpectatorComponent_SetMotionControllers_Params
{
	class UMotionControllerComponent*                  LeftController;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMotionControllerComponent*                  RightController;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function VRFramework.VRStatics.SaveVRSettings
struct UVRStatics_SaveVRSettings_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVRSettings                                 Settings;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRFramework.VRStatics.LoadVRSettings
struct UVRStatics_LoadVRSettings_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVRSettings                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRFramework.VRStatics.IsOculusTouch
struct UVRStatics_IsOculusTouch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRStatics.GetContraintRefFrame
struct UVRStatics_GetContraintRefFrame_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicsConstraintComponent*                 ConstraintComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EConstraintFrame>                      Frame;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRFramework.VRStatics.ApplyVRSettings
struct UVRStatics_ApplyVRSettings_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVRSettings                                 Settings;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRFramework.VRStatics.ApplyAndSaveSingleVRSettingFromString
struct UVRStatics_ApplyAndSaveSingleVRSettingFromString_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
};

// Function VRFramework.VRStatics.AddContraintRefFrameOffset
struct UVRStatics_AddContraintRefFrameOffset_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, IsPlainOldData)
	class UPhysicsConstraintComponent*                 ConstraintComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EConstraintFrame>                      Frame;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
