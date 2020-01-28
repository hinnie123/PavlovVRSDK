// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VRFramework.VRBullet.OnProjectileStop
// (Native, Protected, HasOutParms)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AVRBullet::OnProjectileStop(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRBullet.OnProjectileStop");

	AVRBullet_OnProjectileStop_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRBullet.OnImpact
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AVRBullet::OnImpact(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRBullet.OnImpact");

	AVRBullet_OnImpact_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRBullet.OnBuzzingOverlap
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AVRBullet::OnBuzzingOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRBullet.OnBuzzingOverlap");

	AVRBullet_OnBuzzingOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRBullet.ApplyImpactForce
// (Final, Native, Protected)

void AVRBullet::ApplyImpactForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRBullet.ApplyImpactForce");

	AVRBullet_ApplyImpactForce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRBulletManager.Get
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AVRBulletManager*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AVRBulletManager* AVRBulletManager::STATIC_Get(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRBulletManager.Get");

	AVRBulletManager_Get_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRBulletPenetrationInterface.IsThinSurface
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRBulletPenetrationInterface::IsThinSurface(class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRBulletPenetrationInterface.IsThinSurface");

	UVRBulletPenetrationInterface_IsThinSurface_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRController.UnGrab
// (Final, Native, Public, BlueprintCallable)

void AVRController::UnGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.UnGrab");

	AVRController_UnGrab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.TriggerChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewTrigger                    (Parm, ZeroConstructor, IsPlainOldData)

void AVRController::TriggerChanged(bool bNewTrigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.TriggerChanged");

	AVRController_TriggerChanged_Params params;
	params.bNewTrigger = bNewTrigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.Teleport
// (Final, Native, Public, BlueprintCallable)

void AVRController::Teleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.Teleport");

	AVRController_Teleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.SetPlayArea
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AVRPlayArea*             NewPlayArea                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void AVRController::SetPlayArea(class AVRPlayArea* NewPlayArea, bool bTeleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.SetPlayArea");

	AVRController_SetPlayArea_Params params;
	params.NewPlayArea = NewPlayArea;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.SetHapticValues
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Amplitude                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Frequency                      (Parm, ZeroConstructor, IsPlainOldData)

void AVRController::SetHapticValues(float Amplitude, float Frequency)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.SetHapticValues");

	AVRController_SetHapticValues_Params params;
	params.Amplitude = Amplitude;
	params.Frequency = Frequency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.PrepareTeleport
// (Final, Native, Public, BlueprintCallable)

void AVRController::PrepareTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.PrepareTeleport");

	AVRController_PrepareTeleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.PlayHapticEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UHapticFeedbackEffect_Base* HapticEffect                   (Parm, ZeroConstructor, IsPlainOldData)

void AVRController::PlayHapticEffect(class UHapticFeedbackEffect_Base* HapticEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.PlayHapticEffect");

	AVRController_PlayHapticEffect_Params params;
	params.HapticEffect = HapticEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.PlayHaptic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EVRHapticType                  Type                           (Parm, ZeroConstructor, IsPlainOldData)

void AVRController::PlayHaptic(EVRHapticType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.PlayHaptic");

	AVRController_PlayHaptic_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.OnRep_HandType
// (Final, Native, Public)

void AVRController::OnRep_HandType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.OnRep_HandType");

	AVRController_OnRep_HandType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.OnModeChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// EVRControllerMode              From                           (Parm, ZeroConstructor, IsPlainOldData)

void AVRController::OnModeChanged(EVRControllerMode From)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.OnModeChanged");

	AVRController_OnModeChanged_Params params;
	params.From = From;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.OnInvalidTeleportOverlap
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void AVRController::OnInvalidTeleportOverlap(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.OnInvalidTeleportOverlap");

	AVRController_OnInvalidTeleportOverlap_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.OnImminentTeleport
// (Native, Event, Public, BlueprintEvent)

void AVRController::OnImminentTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.OnImminentTeleport");

	AVRController_OnImminentTeleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.OnGrabVolumeEndOverlapOld
// (Final, Native, Protected)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AVRController::OnGrabVolumeEndOverlapOld(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.OnGrabVolumeEndOverlapOld");

	AVRController_OnGrabVolumeEndOverlapOld_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.OnGrabVolumeEndOverlap
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AVRController::OnGrabVolumeEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.OnGrabVolumeEndOverlap");

	AVRController_OnGrabVolumeEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.OnGrabVolumeBeginOverlapOld
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AVRController::OnGrabVolumeBeginOverlapOld(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.OnGrabVolumeBeginOverlapOld");

	AVRController_OnGrabVolumeBeginOverlapOld_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.OnGrabVolumeBeginOverlap
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AVRController::OnGrabVolumeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.OnGrabVolumeBeginOverlap");

	AVRController_OnGrabVolumeBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.OnGrabEndOverlap
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AVRController::OnGrabEndOverlap(class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.OnGrabEndOverlap");

	AVRController_OnGrabEndOverlap_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.OnGrabBeginOverlap
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AVRController::OnGrabBeginOverlap(class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.OnGrabBeginOverlap");

	AVRController_OnGrabBeginOverlap_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.GripChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewGrip                       (Parm, ZeroConstructor, IsPlainOldData)

void AVRController::GripChanged(bool bNewGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.GripChanged");

	AVRController_GripChanged_Params params;
	params.bNewGrip = bNewGrip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.GrabManual
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bByGrip                        (Parm, ZeroConstructor, IsPlainOldData)

void AVRController::GrabManual(class UPrimitiveComponent* Component, bool bByGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.GrabManual");

	AVRController_GrabManual_Params params;
	params.Component = Component;
	params.bByGrip = bByGrip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.Grab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bByGrip                        (Parm, ZeroConstructor, IsPlainOldData)

void AVRController::Grab(bool bByGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.Grab");

	AVRController_Grab_Params params;
	params.bByGrip = bByGrip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.GetPawnController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* AVRController::GetPawnController()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.GetPawnController");

	AVRController_GetPawnController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRController.GetPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AVRPawn*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AVRPawn* AVRController::GetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.GetPawn");

	AVRController_GetPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRController.GetHandType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EControllerHand                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EControllerHand AVRController::GetHandType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.GetHandType");

	AVRController_GetHandType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRController.GetGrabVolume
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* AVRController::GetGrabVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.GetGrabVolume");

	AVRController_GetGrabVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRController.GenericHaptic
// (Final, Native, Public, BlueprintCallable)

void AVRController::GenericHaptic()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.GenericHaptic");

	AVRController_GenericHaptic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.EmulateTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void AVRController::EmulateTrigger(bool bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.EmulateTrigger");

	AVRController_EmulateTrigger_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.EmulateMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void AVRController::EmulateMenu(bool bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.EmulateMenu");

	AVRController_EmulateMenu_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.EmulateGrip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void AVRController::EmulateGrip(bool bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.EmulateGrip");

	AVRController_EmulateGrip_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRController.CouldGrab
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRController::CouldGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.CouldGrab");

	AVRController_CouldGrab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRController.ChangeMode
// (Native, Public, BlueprintCallable)
// Parameters:
// EVRControllerMode              To                             (Parm, ZeroConstructor, IsPlainOldData)

void AVRController::ChangeMode(EVRControllerMode To)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRController.ChangeMode");

	AVRController_ChangeMode_Params params;
	params.To = To;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRDynamicHelperComponent.OnWake
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent*     WakingComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UVRDynamicHelperComponent::OnWake(class UPrimitiveComponent* WakingComponent, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRDynamicHelperComponent.OnWake");

	UVRDynamicHelperComponent_OnWake_Params params;
	params.WakingComponent = WakingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRDynamicHelperComponent.OnSleep
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent*     SleepingComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UVRDynamicHelperComponent::OnSleep(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRDynamicHelperComponent.OnSleep");

	UVRDynamicHelperComponent_OnSleep_Params params;
	params.SleepingComponent = SleepingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGrabInterface.UseSoftGrabConstraint
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRGrabInterface::UseSoftGrabConstraint()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGrabInterface.UseSoftGrabConstraint");

	UVRGrabInterface_UseSoftGrabConstraint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGrabInterface.UnGrabbed
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AVRController*           Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void UVRGrabInterface::UnGrabbed(class AVRController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGrabInterface.UnGrabbed");

	UVRGrabInterface_UnGrabbed_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGrabInterface.Grabbed
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AVRController*           Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void UVRGrabInterface::Grabbed(class AVRController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGrabInterface.Grabbed");

	UVRGrabInterface_Grabbed_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.Used
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bJustPicked                    (Parm, ZeroConstructor, IsPlainOldData)

void AVRItem::Used(bool bJustPicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.Used");

	AVRItem_Used_Params params;
	params.bJustPicked = bJustPicked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.Use
// (Native, Event, Public, BlueprintEvent)

void AVRItem::Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.Use");

	AVRItem_Use_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.SpawnPickSound
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController*       ByController                   (Parm, ZeroConstructor, IsPlainOldData)

void AVRItem::SpawnPickSound(class AVRItemController* ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.SpawnPickSound");

	AVRItem_SpawnPickSound_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.ShouldSelfDestroy
// (Final, Native, Public, BlueprintCallable)

void AVRItem::ShouldSelfDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.ShouldSelfDestroy");

	AVRItem_ShouldSelfDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.ShouldNotSelfDestroy
// (Final, Native, Public, BlueprintCallable)

void AVRItem::ShouldNotSelfDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.ShouldNotSelfDestroy");

	AVRItem_ShouldNotSelfDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.SetController
// (Native, Public, BlueprintCallable)
// Parameters:
// class AVRItemController*       NewController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNetUpdate                     (Parm, ZeroConstructor, IsPlainOldData)

void AVRItem::SetController(class AVRItemController* NewController, bool bNetUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.SetController");

	AVRItem_SetController_Params params;
	params.NewController = NewController;
	params.bNetUpdate = bNetUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.SetAttachParent
// (Native, Public, BlueprintCallable)
// Parameters:
// class AVRItem*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNetUpdate                     (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Slot                           (Parm, ZeroConstructor, IsPlainOldData)

void AVRItem::SetAttachParent(class AVRItem* Item, bool bNetUpdate, unsigned char Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.SetAttachParent");

	AVRItem_SetAttachParent_Params params;
	params.Item = Item;
	params.bNetUpdate = bNetUpdate;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.SelfDestroy
// (Native, Protected)

void AVRItem::SelfDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.SelfDestroy");

	AVRItem_SelfDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.Physicalize
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AVRItem::Physicalize(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.Physicalize");

	AVRItem_Physicalize_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.OnRep_Parent
// (Native, Protected)

void AVRItem::OnRep_Parent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnRep_Parent");

	AVRItem_OnRep_Parent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.OnRep_ItemState
// (Native, Protected)

void AVRItem::OnRep_ItemState()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnRep_ItemState");

	AVRItem_OnRep_ItemState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.OnRep_Controller
// (Native, Protected)

void AVRItem::OnRep_Controller()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnRep_Controller");

	AVRItem_OnRep_Controller_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.OnPredictionTimeout
// (Final, Native, Private)

void AVRItem::OnPredictionTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnPredictionTimeout");

	AVRItem_OnPredictionTimeout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.OnPredictionCorrect
// (Final, Native, Private)

void AVRItem::OnPredictionCorrect()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnPredictionCorrect");

	AVRItem_OnPredictionCorrect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.OnPick
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController*       ByController                   (Parm, ZeroConstructor, IsPlainOldData)

void AVRItem::OnPick(class AVRItemController* ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnPick");

	AVRItem_OnPick_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.OnPhysicsWake
// (Native, Protected)
// Parameters:
// class UPrimitiveComponent*     SleepingComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void AVRItem::OnPhysicsWake(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnPhysicsWake");

	AVRItem_OnPhysicsWake_Params params;
	params.SleepingComponent = SleepingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.OnPhysicsSleep
// (Native, Protected)
// Parameters:
// class UPrimitiveComponent*     SleepingComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void AVRItem::OnPhysicsSleep(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnPhysicsSleep");

	AVRItem_OnPhysicsSleep_Params params;
	params.SleepingComponent = SleepingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.OnParentChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AVRItem*                 ParentItem                     (Parm, ZeroConstructor, IsPlainOldData)

void AVRItem::OnParentChanged(class AVRItem* ParentItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnParentChanged");

	AVRItem_OnParentChanged_Params params;
	params.ParentItem = ParentItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.OnDrop
// (Native, Event, Public, BlueprintEvent)

void AVRItem::OnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.OnDrop");

	AVRItem_OnDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.MulticastUpdateState
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// class AVRItemController*       RequestedController            (Parm, ZeroConstructor, IsPlainOldData)
// class AVRItem*                 RequestedParent                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  RequestedParentSlot            (Parm, ZeroConstructor, IsPlainOldData)

void AVRItem::MulticastUpdateState(class AVRItemController* RequestedController, class AVRItem* RequestedParent, unsigned char RequestedParentSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.MulticastUpdateState");

	AVRItem_MulticastUpdateState_Params params;
	params.RequestedController = RequestedController;
	params.RequestedParent = RequestedParent;
	params.RequestedParentSlot = RequestedParentSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.MulticastStateSanityCheck
// (Net, NetReliable, Native, Event, NetMulticast, Protected)

void AVRItem::MulticastStateSanityCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.MulticastStateSanityCheck");

	AVRItem_MulticastStateSanityCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.MakeDormant
// (Final, Native, Private)

void AVRItem::MakeDormant()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.MakeDormant");

	AVRItem_MakeDormant_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.IsBlocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRItem::IsBlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.IsBlocked");

	AVRItem_IsBlocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRItem.GetSequenceTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform AVRItem::GetSequenceTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.GetSequenceTransform");

	AVRItem_GetSequenceTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRItem.DestroyNow
// (Final, Native, Protected)

void AVRItem::DestroyNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.DestroyNow");

	AVRItem_DestroyNow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.Cycle
// (Native, Event, Public, BlueprintEvent)

void AVRItem::Cycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.Cycle");

	AVRItem_Cycle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItem.CanGetPickedBy
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController*       ByController                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRItem::CanGetPickedBy(class AVRItemController* ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItem.CanGetPickedBy");

	AVRItem_CanGetPickedBy_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGun.UngrabChargingHandle
// (Final, Native, Protected)

void AVRGun::UngrabChargingHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.UngrabChargingHandle");

	AVRGun_UngrabChargingHandle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.SpawnGunHandlingSoundAtComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundCue*               SoundCue                       (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bReplicate                     (Parm, ZeroConstructor, IsPlainOldData)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAudioComponent* AVRGun::SpawnGunHandlingSoundAtComponent(class USoundCue* SoundCue, class USceneComponent* Component, bool bReplicate)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.SpawnGunHandlingSoundAtComponent");

	AVRGun_SpawnGunHandlingSoundAtComponent_Params params;
	params.SoundCue = SoundCue;
	params.Component = Component;
	params.bReplicate = bReplicate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGun.SpawnGunHandlingSound
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USoundCue*               SoundCue                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocalOffset                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplicate                     (Parm, ZeroConstructor, IsPlainOldData)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAudioComponent* AVRGun::SpawnGunHandlingSound(class USoundCue* SoundCue, const struct FVector& LocalOffset, bool bReplicate)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.SpawnGunHandlingSound");

	AVRGun_SpawnGunHandlingSound_Params params;
	params.SoundCue = SoundCue;
	params.LocalOffset = LocalOffset;
	params.bReplicate = bReplicate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGun.ServerUpdateState
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<unsigned char>          RawState                       (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AVRGun::ServerUpdateState(TArray<unsigned char> RawState)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ServerUpdateState");

	AVRGun_ServerUpdateState_Params params;
	params.RawState = RawState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.ServerTrigger
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bPulled                        (Parm, ZeroConstructor, IsPlainOldData)

void AVRGun::ServerTrigger(bool bPulled)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ServerTrigger");

	AVRGun_ServerTrigger_Params params;
	params.bPulled = bPulled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.ServerSpawnGunHandlingSound
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class USoundCue*               SoundCue                       (Parm, ZeroConstructor, IsPlainOldData)

void AVRGun::ServerSpawnGunHandlingSound(class USoundCue* SoundCue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ServerSpawnGunHandlingSound");

	AVRGun_ServerSpawnGunHandlingSound_Params params;
	params.SoundCue = SoundCue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.ServerReleaseMagazine
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AVRGun::ServerReleaseMagazine()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ServerReleaseMagazine");

	AVRGun_ServerReleaseMagazine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.ServerReleaseBolt
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AVRGun::ServerReleaseBolt()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ServerReleaseBolt");

	AVRGun_ServerReleaseBolt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.ServerLoadMagazine
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AVRMagazine*             NewMagazine                    (Parm, ZeroConstructor, IsPlainOldData)

void AVRGun::ServerLoadMagazine(class AVRMagazine* NewMagazine)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ServerLoadMagazine");

	AVRGun_ServerLoadMagazine_Params params;
	params.NewMagazine = NewMagazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.ServerLoadChamber
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AVRGun::ServerLoadChamber()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ServerLoadChamber");

	AVRGun_ServerLoadChamber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.ServerCycleFireMode
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AVRGun::ServerCycleFireMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ServerCycleFireMode");

	AVRGun_ServerCycleFireMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.ServerCock
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AVRGun::ServerCock()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ServerCock");

	AVRGun_ServerCock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.SendStateToClientOwner
// (Final, Native, Public)

void AVRGun::SendStateToClientOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.SendStateToClientOwner");

	AVRGun_SendStateToClientOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.ReleaseTrigger
// (Native, Public, BlueprintCallable)

void AVRGun::ReleaseTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ReleaseTrigger");

	AVRGun_ReleaseTrigger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.ReleaseMagazine
// (Final, Native, Public, BlueprintCallable)

void AVRGun::ReleaseMagazine()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ReleaseMagazine");

	AVRGun_ReleaseMagazine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.ReleaseBolt
// (Final, Native, Public, BlueprintCallable)

void AVRGun::ReleaseBolt()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ReleaseBolt");

	AVRGun_ReleaseBolt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.QuickReloadImpl
// (Final, Native, Public, BlueprintCallable)

void AVRGun::QuickReloadImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.QuickReloadImpl");

	AVRGun_QuickReloadImpl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.QuickReload
// (Final, Native, Public, BlueprintCallable)

void AVRGun::QuickReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.QuickReload");

	AVRGun_QuickReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.PullTrigger
// (Native, Public, BlueprintCallable)

void AVRGun::PullTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.PullTrigger");

	AVRGun_PullTrigger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.OnUnload
// (Native, Event, Public, BlueprintEvent)

void AVRGun::OnUnload()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.OnUnload");

	AVRGun_OnUnload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.OnSnapTriggerReset
// (Native, Event, Public, BlueprintEvent)

void AVRGun::OnSnapTriggerReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.OnSnapTriggerReset");

	AVRGun_OnSnapTriggerReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.OnRoundEjected
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bLive                          (Parm, ZeroConstructor, IsPlainOldData)

void AVRGun::OnRoundEjected(bool bLive)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.OnRoundEjected");

	AVRGun_OnRoundEjected_Params params;
	params.bLive = bLive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.OnRep_StateProxy
// (Native, Protected)

void AVRGun::OnRep_StateProxy()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.OnRep_StateProxy");

	AVRGun_OnRep_StateProxy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.OnRep_Magazine
// (Final, Native, Public)

void AVRGun::OnRep_Magazine()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.OnRep_Magazine");

	AVRGun_OnRep_Magazine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.OnMagazinePicked
// (Final, Native, Protected)
// Parameters:
// class AVRItem*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void AVRGun::OnMagazinePicked(class AVRItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.OnMagazinePicked");

	AVRGun_OnMagazinePicked_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.OnMagazineChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bHasMagazine                   (Parm, ZeroConstructor, IsPlainOldData)

void AVRGun::OnMagazineChanged(bool bHasMagazine)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.OnMagazineChanged");

	AVRGun_OnMagazineChanged_Params params;
	params.bHasMagazine = bHasMagazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.OnChargingHandleGrab
// (Native, Protected)

void AVRGun::OnChargingHandleGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.OnChargingHandleGrab");

	AVRGun_OnChargingHandleGrab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.OnChamberLoaded
// (Native, Event, Public, BlueprintEvent)

void AVRGun::OnChamberLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.OnChamberLoaded");

	AVRGun_OnChamberLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.MulticastOnStateUpdated
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// TArray<unsigned char>          RawState                       (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AVRGun::MulticastOnStateUpdated(TArray<unsigned char> RawState)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.MulticastOnStateUpdated");

	AVRGun_MulticastOnStateUpdated_Params params;
	params.RawState = RawState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.MulticastOnMagazineReleased
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AVRMagazine*             ReleasedMagazine               (Parm, ZeroConstructor, IsPlainOldData)

void AVRGun::MulticastOnMagazineReleased(class AVRMagazine* ReleasedMagazine)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.MulticastOnMagazineReleased");

	AVRGun_MulticastOnMagazineReleased_Params params;
	params.ReleasedMagazine = ReleasedMagazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.MulticastOnDryFire
// (Net, Native, Event, NetMulticast, Public)

void AVRGun::MulticastOnDryFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.MulticastOnDryFire");

	AVRGun_MulticastOnDryFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.MulticastOnCock
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           bPullBack                      (Parm, ZeroConstructor, IsPlainOldData)

void AVRGun::MulticastOnCock(bool bPullBack)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.MulticastOnCock");

	AVRGun_MulticastOnCock_Params params;
	params.bPullBack = bPullBack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.MulticastOnChamberLoaded
// (Net, Native, Event, NetMulticast, Public)

void AVRGun::MulticastOnChamberLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.MulticastOnChamberLoaded");

	AVRGun_MulticastOnChamberLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.MulticastOnBoltRelease
// (Net, Native, Event, NetMulticast, Public)

void AVRGun::MulticastOnBoltRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.MulticastOnBoltRelease");

	AVRGun_MulticastOnBoltRelease_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.MulticastFire
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AVRGun::MulticastFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.MulticastFire");

	AVRGun_MulticastFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.LoadMagazine
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AVRMagazine*             NewMagazine                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void AVRGun::LoadMagazine(class AVRMagazine* NewMagazine, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.LoadMagazine");

	AVRGun_LoadMagazine_Params params;
	params.NewMagazine = NewMagazine;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.LoadChamber
// (Final, Native, Public, BlueprintCallable)

void AVRGun::LoadChamber()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.LoadChamber");

	AVRGun_LoadChamber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.IsSuppressed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRGun::IsSuppressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.IsSuppressed");

	AVRGun_IsSuppressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGun.IsOwnedLocally
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRGun::IsOwnedLocally()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.IsOwnedLocally");

	AVRGun_IsOwnedLocally_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGun.IsOwnedByPrimaryPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRGun::IsOwnedByPrimaryPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.IsOwnedByPrimaryPlayer");

	AVRGun_IsOwnedByPrimaryPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGun.IsLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRGun::IsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.IsLoaded");

	AVRGun_IsLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGun.IsIndoor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRGun::IsIndoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.IsIndoor");

	AVRGun_IsIndoor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGun.HasMagazine
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRGun::HasMagazine()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.HasMagazine");

	AVRGun_HasMagazine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGun.GetSlideTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AVRGun::GetSlideTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.GetSlideTime");

	AVRGun_GetSlideTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGun.GetRecoilTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AVRGun::GetRecoilTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.GetRecoilTime");

	AVRGun_GetRecoilTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGun.GetMuzzleLocalOffset
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AVRGun::GetMuzzleLocalOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.GetMuzzleLocalOffset");

	AVRGun_GetMuzzleLocalOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGun.GetLocalMagazineOffset
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AVRGun::GetLocalMagazineOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.GetLocalMagazineOffset");

	AVRGun_GetLocalMagazineOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGun.GetChargingHandle
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UVRHandleComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVRHandleComponent* AVRGun::GetChargingHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.GetChargingHandle");

	AVRGun_GetChargingHandle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGun.GetBasisTransform
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform AVRGun::GetBasisTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.GetBasisTransform");

	AVRGun_GetBasisTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGun.ForceGunStateUpdate
// (Final, Native, Public, BlueprintCallable)

void AVRGun::ForceGunStateUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ForceGunStateUpdate");

	AVRGun_ForceGunStateUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.Fired
// (Native, Event, Public, BlueprintEvent)

void AVRGun::Fired()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.Fired");

	AVRGun_Fired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.DeactivateMuzzleFlash
// (Final, Native, Protected)

void AVRGun::DeactivateMuzzleFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.DeactivateMuzzleFlash");

	AVRGun_DeactivateMuzzleFlash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.CycleFireMode
// (Final, Native, Public, BlueprintCallable)

void AVRGun::CycleFireMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.CycleFireMode");

	AVRGun_CycleFireMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.Cock
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Ratio                          (Parm, ZeroConstructor, IsPlainOldData)

void AVRGun::Cock(float Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.Cock");

	AVRGun_Cock_Params params;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.ClientUpdateState
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<unsigned char>          RawState                       (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AVRGun::ClientUpdateState(TArray<unsigned char> RawState)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.ClientUpdateState");

	AVRGun_ClientUpdateState_Params params;
	params.RawState = RawState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGun.CanLoadChamber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRGun::CanLoadChamber()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.CanLoadChamber");

	AVRGun_CanLoadChamber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGun.CanFire
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRGun::CanFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.CanFire");

	AVRGun_CanFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGun.AttachMagazine
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AVRMagazine*             MagazineToAttach               (Parm, ZeroConstructor, IsPlainOldData)

void AVRGun::AttachMagazine(class AVRMagazine* MagazineToAttach)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGun.AttachMagazine");

	AVRGun_AttachMagazine_Params params;
	params.MagazineToAttach = MagazineToAttach;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGunState.SetChamberState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EVRGunChamberState             NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UVRGunState::SetChamberState(EVRGunChamberState NewState, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGunState.SetChamberState");

	UVRGunState_SetChamberState_Params params;
	params.NewState = NewState;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRGunState.IsChamberLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRGunState::IsChamberLoaded(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGunState.IsChamberLoaded");

	UVRGunState_IsChamberLoaded_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGunState.IsAnyChamberLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRGunState::IsAnyChamberLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGunState.IsAnyChamberLoaded");

	UVRGunState_IsAnyChamberLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGunState.GetMagazineBulletCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVRGunState::GetMagazineBulletCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGunState.GetMagazineBulletCount");

	UVRGunState_GetMagazineBulletCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGunState.GetChamberState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// EVRGunChamberState             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EVRGunChamberState UVRGunState::GetChamberState(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGunState.GetChamberState");

	UVRGunState_GetChamberState_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRGunState.GetBulletCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bEmptyShellsToo                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UVRGunState::GetBulletCount(bool bEmptyShellsToo)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRGunState.GetBulletCount");

	UVRGunState_GetBulletCount_Params params;
	params.bEmptyShellsToo = bEmptyShellsToo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRHand.GetShoulderLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AVRHand::GetShoulderLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRHand.GetShoulderLocation");

	AVRHand_GetShoulderLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRHandleComponent.IsGrabbed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRHandleComponent::IsGrabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRHandleComponent.IsGrabbed");

	UVRHandleComponent_IsGrabbed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRHandleComponent.GetGrabbedBy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AVRController*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AVRController* UVRHandleComponent::GetGrabbedBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRHandleComponent.GetGrabbedBy");

	UVRHandleComponent_GetGrabbedBy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRInventory.ReAttachChildren
// (Final, Native, Protected)

void AVRInventory::ReAttachChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventory.ReAttachChildren");

	AVRInventory_ReAttachChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRInventory.OnRotationChanged
// (Native, Event, Public, BlueprintEvent)

void AVRInventory::OnRotationChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventory.OnRotationChanged");

	AVRInventory_OnRotationChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRInventory.OnQuickSlotAction
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AVRItemController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// EVRQuickSlotType               Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bState                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRInventory::OnQuickSlotAction(class AVRItemController* Controller, EVRQuickSlotType Type, bool bState)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventory.OnQuickSlotAction");

	AVRInventory_OnQuickSlotAction_Params params;
	params.Controller = Controller;
	params.Type = Type;
	params.bState = bState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRInventory.GetVestVolume
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* AVRInventory::GetVestVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventory.GetVestVolume");

	AVRInventory_GetVestVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRInventory.GetQuickSlotVolume
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// EVRQuickSlotType               Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* AVRInventory::GetQuickSlotVolume(EVRQuickSlotType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventory.GetQuickSlotVolume");

	AVRInventory_GetQuickSlotVolume_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRInventory.GetPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AVRPawn*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AVRPawn* AVRInventory::GetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventory.GetPawn");

	AVRInventory_GetPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRInventory.GetLogic
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AVRInventoryLogic*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AVRInventoryLogic* AVRInventory::GetLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventory.GetLogic");

	AVRInventory_GetLogic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRInventoryLogic.Set
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// class AVRItem*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void AVRInventoryLogic::Set(unsigned char Slot, class AVRItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventoryLogic.Set");

	AVRInventoryLogic_Set_Params params;
	params.Slot = Slot;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRInventoryLogic.ServerPut
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// unsigned char                  Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// class AVRItemController*       ByController                   (Parm, ZeroConstructor, IsPlainOldData)

void AVRInventoryLogic::ServerPut(unsigned char Slot, class AVRItemController* ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventoryLogic.ServerPut");

	AVRInventoryLogic_ServerPut_Params params;
	params.Slot = Slot;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRInventoryLogic.ServerGet
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// unsigned char                  Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// class AVRItemController*       ByController                   (Parm, ZeroConstructor, IsPlainOldData)

void AVRInventoryLogic::ServerGet(unsigned char Slot, class AVRItemController* ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventoryLogic.ServerGet");

	AVRInventoryLogic_ServerGet_Params params;
	params.Slot = Slot;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRInventoryLogic.ReAttachChildren
// (Final, Native, Public)

void AVRInventoryLogic::ReAttachChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventoryLogic.ReAttachChildren");

	AVRInventoryLogic_ReAttachChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRInventoryLogic.Put
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// class AVRItemController*       ByController                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRInventoryLogic::Put(unsigned char Slot, class AVRItemController* ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventoryLogic.Put");

	AVRInventoryLogic_Put_Params params;
	params.Slot = Slot;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRInventoryLogic.GetSlotName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AVRInventoryLogic::GetSlotName(unsigned char Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventoryLogic.GetSlotName");

	AVRInventoryLogic_GetSlotName_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRInventoryLogic.GetPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AVRPawn*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AVRPawn* AVRInventoryLogic::GetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventoryLogic.GetPawn");

	AVRInventoryLogic_GetPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRInventoryLogic.Get
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// class AVRItemController*       ByController                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRInventoryLogic::Get(unsigned char Slot, class AVRItemController* ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventoryLogic.Get");

	AVRInventoryLogic_Get_Params params;
	params.Slot = Slot;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRInventoryLogic.DropEverything
// (Final, Native, Public, BlueprintCallable)

void AVRInventoryLogic::DropEverything()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRInventoryLogic.DropEverything");

	AVRInventoryLogic_DropEverything_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItemController.ServerReportStateChange
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FVRItemControllerState  NewState                       (ConstParm, Parm, ReferenceParm)

void AVRItemController::ServerReportStateChange(const struct FVRItemControllerState& NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.ServerReportStateChange");

	AVRItemController_ServerReportStateChange_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItemController.ServerPickManual
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AVRItem*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void AVRItemController::ServerPickManual(class AVRItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.ServerPickManual");

	AVRItemController_ServerPickManual_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItemController.ServerDrop
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// class AVRItem*                 PickupToDrop                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DesiredThrowLocation           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DesiredThrowVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                DesiredThrowRotation           (Parm, ZeroConstructor, IsPlainOldData)

void AVRItemController::ServerDrop(class AVRItem* PickupToDrop, const struct FVector& DesiredThrowLocation, const struct FVector& DesiredThrowVelocity, const struct FRotator& DesiredThrowRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.ServerDrop");

	AVRItemController_ServerDrop_Params params;
	params.PickupToDrop = PickupToDrop;
	params.DesiredThrowLocation = DesiredThrowLocation;
	params.DesiredThrowVelocity = DesiredThrowVelocity;
	params.DesiredThrowRotation = DesiredThrowRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItemController.ReportPickupDrop
// (Native, Public)
// Parameters:
// class AVRItem*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void AVRItemController::ReportPickupDrop(class AVRItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.ReportPickupDrop");

	AVRItemController_ReportPickupDrop_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItemController.PredictedPickManual
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AVRItem*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void AVRItemController::PredictedPickManual(class AVRItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.PredictedPickManual");

	AVRItemController_PredictedPickManual_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItemController.PickManual
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AVRItem*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void AVRItemController::PickManual(class AVRItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.PickManual");

	AVRItemController_PickManual_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItemController.Pick
// (Final, Native, Public, BlueprintCallable)

void AVRItemController::Pick()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.Pick");

	AVRItemController_Pick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItemController.OnStateChanged
// (Native, Protected, HasOutParms)
// Parameters:
// struct FVRItemControllerState  OldState                       (ConstParm, Parm, OutParm, ReferenceParm)

void AVRItemController::OnStateChanged(const struct FVRItemControllerState& OldState)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.OnStateChanged");

	AVRItemController_OnStateChanged_Params params;
	params.OldState = OldState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItemController.OnRep_State
// (Native, Protected)

void AVRItemController::OnRep_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.OnRep_State");

	AVRItemController_OnRep_State_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItemController.OnPickupDestroyed
// (Final, Native, Protected)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void AVRItemController::OnPickupDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.OnPickupDestroyed");

	AVRItemController_OnPickupDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItemController.OnDropTimer
// (Final, Native, Protected)

void AVRItemController::OnDropTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.OnDropTimer");

	AVRItemController_OnDropTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItemController.MulticastChangeState
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FVRItemControllerState  NewState                       (ConstParm, Parm, ReferenceParm)

void AVRItemController::MulticastChangeState(const struct FVRItemControllerState& NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.MulticastChangeState");

	AVRItemController_MulticastChangeState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRItemController.IsLocallyOwned
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRItemController::IsLocallyOwned()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.IsLocallyOwned");

	AVRItemController_IsLocallyOwned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRItemController.Drop
// (Final, Native, Public, BlueprintCallable)

void AVRItemController::Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRItemController.Drop");

	AVRItemController_Drop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRLadder.CreateVolume
// (Final, Native, Private)

void AVRLadder::CreateVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRLadder.CreateVolume");

	AVRLadder_CreateVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMagazine.ServerObliterate
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AVRMagazine::ServerObliterate()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.ServerObliterate");

	AVRMagazine_ServerObliterate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMagazine.ServerMerge
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AVRMagazine*             Magazine                       (Parm, ZeroConstructor, IsPlainOldData)

void AVRMagazine::ServerMerge(class AVRMagazine* Magazine)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.ServerMerge");

	AVRMagazine_ServerMerge_Params params;
	params.Magazine = Magazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMagazine.OnRep_Gun
// (Native, Protected)

void AVRMagazine::OnRep_Gun()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.OnRep_Gun");

	AVRMagazine_OnRep_Gun_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMagazine.OnRep_Bullets
// (Native, Protected)

void AVRMagazine::OnRep_Bullets()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.OnRep_Bullets");

	AVRMagazine_OnRep_Bullets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMagazine.OnReleasedFromGun
// (Native, Event, Public, BlueprintEvent)

void AVRMagazine::OnReleasedFromGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.OnReleasedFromGun");

	AVRMagazine_OnReleasedFromGun_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMagazine.OnLoadedIntoGun
// (Native, Event, Public, BlueprintEvent)

void AVRMagazine::OnLoadedIntoGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.OnLoadedIntoGun");

	AVRMagazine_OnLoadedIntoGun_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMagazine.OnBulletsChanged
// (Native, Event, Public, BlueprintEvent)

void AVRMagazine::OnBulletsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.OnBulletsChanged");

	AVRMagazine_OnBulletsChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMagazine.Merge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AVRMagazine*             Magazine                       (Parm, ZeroConstructor, IsPlainOldData)

void AVRMagazine::Merge(class AVRMagazine* Magazine)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.Merge");

	AVRMagazine_Merge_Params params;
	params.Magazine = Magazine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMagazine.MakeReinsertable
// (Final, Native, Protected)

void AVRMagazine::MakeReinsertable()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.MakeReinsertable");

	AVRMagazine_MakeReinsertable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMagazine.IsFull
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRMagazine::IsFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazine.IsFull");

	AVRMagazine_IsFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRMagazineSlotComponent.OnEndOverlap
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UVRMagazineSlotComponent::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazineSlotComponent.OnEndOverlap");

	UVRMagazineSlotComponent_OnEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMagazineSlotComponent.OnBeginOverlap
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UVRMagazineSlotComponent::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMagazineSlotComponent.OnBeginOverlap");

	UVRMagazineSlotComponent_OnBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMenu.Close
// (Final, Native, Public, BlueprintCallable)

void AVRMenu::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMenu.Close");

	AVRMenu_Close_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMovementComponent.SyncTime
// (Final, Native, Public)

void UVRMovementComponent::SyncTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMovementComponent.SyncTime");

	UVRMovementComponent_SyncTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMovementComponent.ServerSyncTime
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UVRMovementComponent::ServerSyncTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMovementComponent.ServerSyncTime");

	UVRMovementComponent_ServerSyncTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMovementComponent.ServerReportMovement
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FVRMovementSnapshot     M0                             (Parm)

void UVRMovementComponent::ServerReportMovement(const struct FVRMovementSnapshot& M0)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMovementComponent.ServerReportMovement");

	UVRMovementComponent_ServerReportMovement_Params params;
	params.M0 = M0;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMovementComponent.ServerMoveTo
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void UVRMovementComponent::ServerMoveTo(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMovementComponent.ServerMoveTo");

	UVRMovementComponent_ServerMoveTo_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMovementComponent.OnRep_MovementSnapshot
// (Final, Native, Private)

void UVRMovementComponent::OnRep_MovementSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMovementComponent.OnRep_MovementSnapshot");

	UVRMovementComponent_OnRep_MovementSnapshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMovementComponent.OnPawnEndOverlap
// (Final, Native, Protected)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UVRMovementComponent::OnPawnEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMovementComponent.OnPawnEndOverlap");

	UVRMovementComponent_OnPawnEndOverlap_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMovementComponent.OnPawnBeginOverlap
// (Final, Native, Protected)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UVRMovementComponent::OnPawnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMovementComponent.OnPawnBeginOverlap");

	UVRMovementComponent_OnPawnBeginOverlap_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMovementComponent.MulticastMoveTo
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void UVRMovementComponent::MulticastMoveTo(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMovementComponent.MulticastMoveTo");

	UVRMovementComponent_MulticastMoveTo_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMovementComponent.MoveTo
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void UVRMovementComponent::MoveTo(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMovementComponent.MoveTo");

	UVRMovementComponent_MoveTo_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRMovementComponent.GetGroundSurface
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EPhysicalSurface> UVRMovementComponent::GetGroundSurface()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMovementComponent.GetGroundSurface");

	UVRMovementComponent_GetGroundSurface_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRMovementComponent.ClientSyncTime
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// float                          ServerTimeSeconds              (Parm, ZeroConstructor, IsPlainOldData)

void UVRMovementComponent::ClientSyncTime(float ServerTimeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRMovementComponent.ClientSyncTime");

	UVRMovementComponent_ClientSyncTime_Params params;
	params.ServerTimeSeconds = ServerTimeSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPawn.Teleport
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                WorldRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// EVRTeleportSpace               Space                          (Parm, ZeroConstructor, IsPlainOldData)

void AVRPawn::Teleport(const struct FVector& WorldLocation, const struct FRotator& WorldRotation, EVRTeleportSpace Space)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.Teleport");

	AVRPawn_Teleport_Params params;
	params.WorldLocation = WorldLocation;
	params.WorldRotation = WorldRotation;
	params.Space = Space;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPawn.SetFakePlayer
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AVRPawn::SetFakePlayer(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.SetFakePlayer");

	AVRPawn_SetFakePlayer_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPawn.SetAllPockets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AVRPawn::SetAllPockets(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.SetAllPockets");

	AVRPawn_SetAllPockets_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPawn.ServerUpdate
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FVRNetSnapshot          Snapshot                       (Parm)

void AVRPawn::ServerUpdate(const struct FVRNetSnapshot& Snapshot)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.ServerUpdate");

	AVRPawn_ServerUpdate_Params params;
	params.Snapshot = Snapshot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPawn.ServerTeleport
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                WorldRotation                  (Parm, ZeroConstructor, IsPlainOldData)

void AVRPawn::ServerTeleport(const struct FVector& WorldLocation, const struct FRotator& WorldRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.ServerTeleport");

	AVRPawn_ServerTeleport_Params params;
	params.WorldLocation = WorldLocation;
	params.WorldRotation = WorldRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPawn.ServerRotate
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)

void AVRPawn::ServerRotate(float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.ServerRotate");

	AVRPawn_ServerRotate_Params params;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPawn.ReCenter
// (Final, Native, Public, BlueprintCallable)

void AVRPawn::ReCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.ReCenter");

	AVRPawn_ReCenter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPawn.ProjectToFloor
// (Final, Native, Public, BlueprintCallable)

void AVRPawn::ProjectToFloor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.ProjectToFloor");

	AVRPawn_ProjectToFloor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPawn.OnTeleport
// (Event, Public, BlueprintEvent)

void AVRPawn::OnTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.OnTeleport");

	AVRPawn_OnTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPawn.OnRep_RightController
// (Native, Protected)

void AVRPawn::OnRep_RightController()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.OnRep_RightController");

	AVRPawn_OnRep_RightController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPawn.OnRep_LeftController
// (Native, Protected)

void AVRPawn::OnRep_LeftController()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.OnRep_LeftController");

	AVRPawn_OnRep_LeftController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPawn.OnRep_LatestSnapshot
// (Final, Native, Protected)

void AVRPawn::OnRep_LatestSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.OnRep_LatestSnapshot");

	AVRPawn_OnRep_LatestSnapshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPawn.OnRep_InventoryLogic
// (Final, Native, Protected)

void AVRPawn::OnRep_InventoryLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.OnRep_InventoryLogic");

	AVRPawn_OnRep_InventoryLogic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPawn.OnPreTeleport
// (Event, Public, BlueprintEvent)

void AVRPawn::OnPreTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.OnPreTeleport");

	AVRPawn_OnPreTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPawn.OnEndMove
// (Final, Native, Protected)

void AVRPawn::OnEndMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.OnEndMove");

	AVRPawn_OnEndMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPawn.OnBeginMove
// (Final, Native, Protected)

void AVRPawn::OnBeginMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.OnBeginMove");

	AVRPawn_OnBeginMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPawn.MulticastRotated
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)

void AVRPawn::MulticastRotated(float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.MulticastRotated");

	AVRPawn_MulticastRotated_Params params;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPawn.IsProne
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRPawn::IsProne()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.IsProne");

	AVRPawn_IsProne_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRPawn.IsMoving
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRPawn::IsMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.IsMoving");

	AVRPawn_IsMoving_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRPawn.IsFakePlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRPawn::IsFakePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.IsFakePlayer");

	AVRPawn_IsFakePlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRPawn.IsCrouching
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRPawn::IsCrouching()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.IsCrouching");

	AVRPawn_IsCrouching_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRPawn.GetPlayerEmulator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVRPlayerEmulatorComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVRPlayerEmulatorComponent* AVRPawn::GetPlayerEmulator()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetPlayerEmulator");

	AVRPawn_GetPlayerEmulator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRPawn.GetPivot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* AVRPawn::GetPivot()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetPivot");

	AVRPawn_GetPivot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRPawn.GetMovingSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AVRPawn::GetMovingSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetMovingSpeed");

	AVRPawn_GetMovingSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRPawn.GetMovingRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AVRPawn::GetMovingRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetMovingRatio");

	AVRPawn_GetMovingRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRPawn.GetHeadRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator AVRPawn::GetHeadRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetHeadRotation");

	AVRPawn_GetHeadRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRPawn.GetHeadLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AVRPawn::GetHeadLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetHeadLocation");

	AVRPawn_GetHeadLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRPawn.GetHeadCamera
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCameraComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCameraComponent* AVRPawn::GetHeadCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetHeadCamera");

	AVRPawn_GetHeadCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRPawn.GetGroundLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AVRPawn::GetGroundLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetGroundLocation");

	AVRPawn_GetGroundLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRPawn.GetCrouchRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AVRPawn::GetCrouchRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetCrouchRatio");

	AVRPawn_GetCrouchRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRPawn.GetAvatarScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AVRPawn::GetAvatarScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetAvatarScale");

	AVRPawn_GetAvatarScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRPawn.GetAvatarComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UVRAvatarComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVRAvatarComponent* AVRPawn::GetAvatarComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.GetAvatarComponent");

	AVRPawn_GetAvatarComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRPawn.ClientBulletPassby
// (Net, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// class USoundCue*               BuzzingSound                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize     Velocity                       (Parm)

void AVRPawn::ClientBulletPassby(class USoundCue* BuzzingSound, const struct FVector& Location, const struct FVector_NetQuantize& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.ClientBulletPassby");

	AVRPawn_ClientBulletPassby_Params params;
	params.BuzzingSound = BuzzingSound;
	params.Location = Location;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPawn.CheckAndSwapHands
// (Final, Native, Public, BlueprintCallable)

void AVRPawn::CheckAndSwapHands()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.CheckAndSwapHands");

	AVRPawn_CheckAndSwapHands_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPawn.CanTeleport
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRPawn::CanTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPawn.CanTeleport");

	AVRPawn_CanTeleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRPlayerEmulatorComponent.SetAimRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleDeviation                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnableAim                     (Parm, ZeroConstructor, IsPlainOldData)

void UVRPlayerEmulatorComponent::SetAimRotation(const struct FVector& WorldLocation, float AngleDeviation, bool bEnableAim)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPlayerEmulatorComponent.SetAimRotation");

	UVRPlayerEmulatorComponent_SetAimRotation_Params params;
	params.WorldLocation = WorldLocation;
	params.AngleDeviation = AngleDeviation;
	params.bEnableAim = bEnableAim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPocketComponent.OnEndOverlap
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UVRPocketComponent::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPocketComponent.OnEndOverlap");

	UVRPocketComponent_OnEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPocketComponent.OnBeginOverlap
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UVRPocketComponent::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPocketComponent.OnBeginOverlap");

	UVRPocketComponent_OnBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRPocketComponent.MulticastUnpocketize
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AVRItem*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UVRPocketComponent::MulticastUnpocketize(class AVRItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRPocketComponent.MulticastUnpocketize");

	UVRPocketComponent_MulticastUnpocketize_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRSpectatorComponent.SetTwoPointGrabEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UVRSpectatorComponent::SetTwoPointGrabEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRSpectatorComponent.SetTwoPointGrabEnabled");

	UVRSpectatorComponent_SetTwoPointGrabEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRSpectatorComponent.SetMotionControllers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMotionControllerComponent* LeftController                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMotionControllerComponent* RightController                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UVRSpectatorComponent::SetMotionControllers(class UMotionControllerComponent* LeftController, class UMotionControllerComponent* RightController)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRSpectatorComponent.SetMotionControllers");

	UVRSpectatorComponent_SetMotionControllers_Params params;
	params.LeftController = LeftController;
	params.RightController = RightController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRStatics.SaveVRSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVRSettings             Settings                       (ConstParm, Parm, OutParm, ReferenceParm)

void UVRStatics::STATIC_SaveVRSettings(class UObject* WorldContextObject, const struct FVRSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRStatics.SaveVRSettings");

	UVRStatics_SaveVRSettings_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRStatics.LoadVRSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVRSettings             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVRSettings UVRStatics::STATIC_LoadVRSettings(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRStatics.LoadVRSettings");

	UVRStatics_LoadVRSettings_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRStatics.IsOculusTouch
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRStatics::STATIC_IsOculusTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRStatics.IsOculusTouch");

	UVRStatics_IsOculusTouch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRStatics.GetVRPlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EVRPlatform                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EVRPlatform UVRStatics::STATIC_GetVRPlatform()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRStatics.GetVRPlatform");

	UVRStatics_GetVRPlatform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRStatics.GetContraintRefFrame
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UPhysicsConstraintComponent* ConstraintComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EConstraintFrame>  Frame                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UVRStatics::STATIC_GetContraintRefFrame(class UObject* WorldContextObject, class UPhysicsConstraintComponent* ConstraintComponent, TEnumAsByte<EConstraintFrame> Frame)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRStatics.GetContraintRefFrame");

	UVRStatics_GetContraintRefFrame_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ConstraintComponent = ConstraintComponent;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRFramework.VRStatics.ApplyVRSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVRSettings             Settings                       (ConstParm, Parm, OutParm, ReferenceParm)

void UVRStatics::STATIC_ApplyVRSettings(class UObject* WorldContextObject, const struct FVRSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRStatics.ApplyVRSettings");

	UVRStatics_ApplyVRSettings_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRStatics.ApplyAndSaveSingleVRSettingFromString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 String                         (Parm, ZeroConstructor)

void UVRStatics::STATIC_ApplyAndSaveSingleVRSettingFromString(class UObject* WorldContextObject, const struct FName& Key, const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRStatics.ApplyAndSaveSingleVRSettingFromString");

	UVRStatics_ApplyAndSaveSingleVRSettingFromString_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Key = Key;
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRFramework.VRStatics.AddContraintRefFrameOffset
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// class UPhysicsConstraintComponent* ConstraintComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EConstraintFrame>  Frame                          (Parm, ZeroConstructor, IsPlainOldData)

void UVRStatics::STATIC_AddContraintRefFrameOffset(class UObject* WorldContextObject, const struct FVector& Offset, class UPhysicsConstraintComponent* ConstraintComponent, TEnumAsByte<EConstraintFrame> Frame)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRFramework.VRStatics.AddContraintRefFrameOffset");

	UVRStatics_AddContraintRefFrameOffset_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Offset = Offset;
	params.ConstraintComponent = ConstraintComponent;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
