// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pavlov.ActionGunState.SetAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UActionGunState::SetAction(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ActionGunState.SetAction");

	UActionGunState_SetAction_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ActionGunState.OpenAction
// (Final, Native, Public, BlueprintCallable)

void UActionGunState::OpenAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ActionGunState.OpenAction");

	UActionGunState_OpenAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ActionGunState.CloseAction
// (Final, Native, Public, BlueprintCallable)

void UActionGunState::CloseAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ActionGunState.CloseAction");

	UActionGunState_CloseAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AirplaneRoyale.StartTravel
// (Final, Native, Public, BlueprintCallable)

void AAirplaneRoyale::StartTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AirplaneRoyale.StartTravel");

	AAirplaneRoyale_StartTravel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AirplaneRoyale.SetAsBase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPawn*             Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void AAirplaneRoyale::SetAsBase(class APavlovPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AirplaneRoyale.SetAsBase");

	AAirplaneRoyale_SetAsBase_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AirplaneRoyale.OnRep_Traveled
// (Final, Native, Private)

void AAirplaneRoyale::OnRep_Traveled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AirplaneRoyale.OnRep_Traveled");

	AAirplaneRoyale_OnRep_Traveled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.AirplaneRoyale.ClearBase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPawn*             Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void AAirplaneRoyale::ClearBase(class APavlovPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.AirplaneRoyale.ClearBase");

	AAirplaneRoyale_ClearBase_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.PlantAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ABombPlantSpot*          Spot                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void ABomb::PlantAt(class ABombPlantSpot* Spot, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.PlantAt");

	ABomb_PlantAt_Params params;
	params.Spot = Spot;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.OnPlayerOcclusionChange
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewOccluded                   (Parm, ZeroConstructor, IsPlainOldData)

void ABomb::OnPlayerOcclusionChange(bool bNewOccluded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.OnPlayerOcclusionChange");

	ABomb_OnPlayerOcclusionChange_Params params;
	params.bNewOccluded = bNewOccluded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.OnPlanted
// (Native, Event, Public, BlueprintEvent)

void ABomb::OnPlanted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.OnPlanted");

	ABomb_OnPlanted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.OnGrace
// (Native, Event, Public, BlueprintEvent)

void ABomb::OnGrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.OnGrace");

	ABomb_OnGrace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.OnDetonation
// (Native, Event, Public, BlueprintEvent)

void ABomb::OnDetonation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.OnDetonation");

	ABomb_OnDetonation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.OnDefuse
// (Native, Event, Public, BlueprintEvent)

void ABomb::OnDefuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.OnDefuse");

	ABomb_OnDefuse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.OnButtonPressed
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void ABomb::OnButtonPressed(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.OnButtonPressed");

	ABomb_OnButtonPressed_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.OnBeep
// (Native, Event, Public, BlueprintEvent)

void ABomb::OnBeep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.OnBeep");

	ABomb_OnBeep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.MulticastOnPlantAt
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class ABombPlantSpot*          Spot                           (Parm, ZeroConstructor, IsPlainOldData)

void ABomb::MulticastOnPlantAt(class ABombPlantSpot* Spot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.MulticastOnPlantAt");

	ABomb_MulticastOnPlantAt_Params params;
	params.Spot = Spot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.MulticastOnGrace
// (Net, Native, Event, NetMulticast, Public)

void ABomb::MulticastOnGrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.MulticastOnGrace");

	ABomb_MulticastOnGrace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.MulticastOnEnterCode
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           bSucceed                       (Parm, ZeroConstructor, IsPlainOldData)

void ABomb::MulticastOnEnterCode(bool bSucceed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.MulticastOnEnterCode");

	ABomb_MulticastOnEnterCode_Params params;
	params.bSucceed = bSucceed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.MulticastOnDetonation
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void ABomb::MulticastOnDetonation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.MulticastOnDetonation");

	ABomb_MulticastOnDetonation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.MulticastOnDefuse
// (Net, Native, Event, NetMulticast, Public)

void ABomb::MulticastOnDefuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.MulticastOnDefuse");

	ABomb_MulticastOnDefuse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.MulticastOnBeep
// (Net, Native, Event, NetMulticast, Public)

void ABomb::MulticastOnBeep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.MulticastOnBeep");

	ABomb_MulticastOnBeep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.IsWireCut
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABomb::IsWireCut(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.IsWireCut");

	ABomb_IsWireCut_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Bomb.IsButtonPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABomb::IsButtonPressed(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.IsButtonPressed");

	ABomb_IsButtonPressed_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Bomb.GetWireLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABomb::GetWireLocation(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.GetWireLocation");

	ABomb_GetWireLocation_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Bomb.GetClosestValidWireIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABomb::GetClosestValidWireIndex(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.GetClosestValidWireIndex");

	ABomb_GetClosestValidWireIndex_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Bomb.ExpireCode
// (Final, Native, Protected)

void ABomb::ExpireCode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.ExpireCode");

	ABomb_ExpireCode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.EnterDigit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Digit                          (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Presser                        (Parm, ZeroConstructor, IsPlainOldData)

void ABomb::EnterDigit(int Digit, class AController* Presser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.EnterDigit");

	ABomb_EnterDigit_Params params;
	params.Digit = Digit;
	params.Presser = Presser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.Detonate
// (Native, Public, BlueprintCallable)

void ABomb::Detonate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.Detonate");

	ABomb_Detonate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.Defuse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AController*             Defuser                        (Parm, ZeroConstructor, IsPlainOldData)

void ABomb::Defuse(class AController* Defuser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.Defuse");

	ABomb_Defuse_Params params;
	params.Defuser = Defuser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Bomb.CutWire
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Defuser                        (Parm, ZeroConstructor, IsPlainOldData)

void ABomb::CutWire(int Index, class AController* Defuser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Bomb.CutWire");

	ABomb_CutWire_Params params;
	params.Index = Index;
	params.Defuser = Defuser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.BombPlantSpot.UpdateEnabledState
// (Final, Native, Private)

void ABombPlantSpot::UpdateEnabledState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BombPlantSpot.UpdateEnabledState");

	ABombPlantSpot_UpdateEnabledState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.BombPlantSpot.SetSpotEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ABombPlantSpot::SetSpotEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BombPlantSpot.SetSpotEnabled");

	ABombPlantSpot_SetSpotEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.BombPlantSpot.ResetSpot
// (Final, Native, Public, BlueprintCallable)

void ABombPlantSpot::ResetSpot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BombPlantSpot.ResetSpot");

	ABombPlantSpot_ResetSpot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.BombPlantSpot.OnRep_PlantedHere
// (Final, Native, Private)

void ABombPlantSpot::OnRep_PlantedHere()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BombPlantSpot.OnRep_PlantedHere");

	ABombPlantSpot_OnRep_PlantedHere_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.BombPlantSpot.MulticastOnPlantStateChanged
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           bPlanted                       (Parm, ZeroConstructor, IsPlainOldData)

void ABombPlantSpot::MulticastOnPlantStateChanged(bool bPlanted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.BombPlantSpot.MulticastOnPlantStateChanged");

	ABombPlantSpot_MulticastOnPlantStateChanged_Params params;
	params.bPlanted = bPlanted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ChamberComponent.ResetChamber
// (Final, Native, Public, BlueprintCallable)

void UChamberComponent::ResetChamber()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ChamberComponent.ResetChamber");

	UChamberComponent_ResetChamber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ChamberComponent.OnOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UChamberComponent::OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ChamberComponent.OnOverlap");

	UChamberComponent_OnOverlap_Params params;
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


// Function Pavlov.ChamberComponent.OnChamberStateChanged
// (Final, Native, Private)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// EVRGunChamberState             OldState                       (Parm, ZeroConstructor, IsPlainOldData)
// EVRGunChamberState             NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void UChamberComponent::OnChamberStateChanged(int Index, EVRGunChamberState OldState, EVRGunChamberState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ChamberComponent.OnChamberStateChanged");

	UChamberComponent_OnChamberStateChanged_Params params;
	params.Index = Index;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ChamberComponent.DestroyConstrainedMesh
// (Final, Native, Private)

void UChamberComponent::DestroyConstrainedMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ChamberComponent.DestroyConstrainedMesh");

	UChamberComponent_DestroyConstrainedMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ChamberComponent.DebugDraw
// (Final, Native, Public, BlueprintCallable, Const)

void UChamberComponent::DebugDraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ChamberComponent.DebugDraw");

	UChamberComponent_DebugDraw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ChamberComponent.CheckConstraintBreakThreshold
// (Final, Native, Private)

void UChamberComponent::CheckConstraintBreakThreshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ChamberComponent.CheckConstraintBreakThreshold");

	UChamberComponent_CheckConstraintBreakThreshold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ChamberComponent.BreakCheck
// (Final, Native, Private)

void UChamberComponent::BreakCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ChamberComponent.BreakCheck");

	UChamberComponent_BreakCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ChamberComponent.AllowRemoval
// (Final, Native, Public, BlueprintCallable)

void UChamberComponent::AllowRemoval()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ChamberComponent.AllowRemoval");

	UChamberComponent_AllowRemoval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.DamageTrackerComponent.ResetTracking
// (Final, Native, Public, BlueprintCallable)

void UDamageTrackerComponent::ResetTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.DamageTrackerComponent.ResetTracking");

	UDamageTrackerComponent_ResetTracking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.DamageTrackerComponent.GetLastHit
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDamageTrackInfo        LastHit                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDamageTrackerComponent::GetLastHit(struct FDamageTrackInfo* LastHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.DamageTrackerComponent.GetLastHit");

	UDamageTrackerComponent_GetLastHit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LastHit != nullptr)
		*LastHit = params.LastHit;

	return params.ReturnValue;
}


// Function Pavlov.DamageTrackerComponent.GatherAssists
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FDamageTrackInfo> Assists                        (Parm, OutParm, ZeroConstructor)

void UDamageTrackerComponent::GatherAssists(TArray<struct FDamageTrackInfo>* Assists)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.DamageTrackerComponent.GatherAssists");

	UDamageTrackerComponent_GatherAssists_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Assists != nullptr)
		*Assists = params.Assists;
}


// Function Pavlov.Grenade.ServerRemoveSafetyPin
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AGrenade::ServerRemoveSafetyPin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.ServerRemoveSafetyPin");

	AGrenade_ServerRemoveSafetyPin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.ServerReleaseSafetyLever
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AGrenade::ServerReleaseSafetyLever()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.ServerReleaseSafetyLever");

	AGrenade_ServerReleaseSafetyLever_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.RemoveSafetyPin
// (Final, Native, Public, BlueprintCallable)

void AGrenade::RemoveSafetyPin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.RemoveSafetyPin");

	AGrenade_RemoveSafetyPin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.ReleaseSafetyLever
// (Final, Native, Public, BlueprintCallable)

void AGrenade::ReleaseSafetyLever()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.ReleaseSafetyLever");

	AGrenade_ReleaseSafetyLever_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.PullSafetyPin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Ratio                          (Parm, ZeroConstructor, IsPlainOldData)

void AGrenade::PullSafetyPin(float Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.PullSafetyPin");

	AGrenade_PullSafetyPin_Params params;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.OnRep_ProjectileActive
// (Final, Native, Protected)

void AGrenade::OnRep_ProjectileActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.OnRep_ProjectileActive");

	AGrenade_OnRep_ProjectileActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.OnProjectileStop
// (Native, Protected, HasOutParms)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGrenade::OnProjectileStop(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.OnProjectileStop");

	AGrenade_OnProjectileStop_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.OnProjectileBounce
// (Native, Protected, HasOutParms, HasDefaults)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGrenade::OnProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.OnProjectileBounce");

	AGrenade_OnProjectileBounce_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.OnDetonation
// (Native, Event, Public, BlueprintEvent)

void AGrenade::OnDetonation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.OnDetonation");

	AGrenade_OnDetonation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.MulticastThrow
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, IsPlainOldData)

void AGrenade::MulticastThrow(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.MulticastThrow");

	AGrenade_MulticastThrow_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.MulticastOnSafetyPinRemoved
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AGrenade::MulticastOnSafetyPinRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.MulticastOnSafetyPinRemoved");

	AGrenade_MulticastOnSafetyPinRemoved_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.MulticastOnReleaseSafetyLever
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AGrenade::MulticastOnReleaseSafetyLever()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.MulticastOnReleaseSafetyLever");

	AGrenade_MulticastOnReleaseSafetyLever_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.MulticastOnDetonation
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AGrenade::MulticastOnDetonation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.MulticastOnDetonation");

	AGrenade_MulticastOnDetonation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Grenade.Detonate
// (Native, Public, BlueprintCallable)

void AGrenade::Detonate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Grenade.Detonate");

	AGrenade_Detonate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Knife.SetBloody
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AKnife::SetBloody(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.SetBloody");

	AKnife_SetBloody_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Knife.OnRep_Bloody
// (Final, Native, Private)

void AKnife::OnRep_Bloody()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.OnRep_Bloody");

	AKnife_OnRep_Bloody_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Knife.OnEndOverlap
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AKnife::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.OnEndOverlap");

	AKnife_OnEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Knife.OnBloodyChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewBloody                     (Parm, ZeroConstructor, IsPlainOldData)

void AKnife::OnBloodyChanged(bool bNewBloody)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.OnBloodyChanged");

	AKnife_OnBloodyChanged_Params params;
	params.bNewBloody = bNewBloody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Knife.OnBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AKnife::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.OnBeginOverlap");

	AKnife_OnBeginOverlap_Params params;
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


// Function Pavlov.Knife.EnableTicking
// (Final, Native, Public, BlueprintCallable)

void AKnife::EnableTicking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Knife.EnableTicking");

	AKnife_EnableTicking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Destructible.OnShatter
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 Normal                         (Parm, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)

void ADestructible::OnShatter(const struct FVector& Normal, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Destructible.OnShatter");

	ADestructible_OnShatter_Params params;
	params.Normal = Normal;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Destructible.MulticastOnShatter
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FVector_NetQuantizeNormal Normal                         (Parm)
// struct FVector_NetQuantize     Location                       (Parm)

void ADestructible::MulticastOnShatter(const struct FVector_NetQuantizeNormal& Normal, const struct FVector_NetQuantize& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Destructible.MulticastOnShatter");

	ADestructible_MulticastOnShatter_Params params;
	params.Normal = Normal;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.DoubleBarrelGunState.SetBarrel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bOpen                          (Parm, ZeroConstructor, IsPlainOldData)

void UDoubleBarrelGunState::SetBarrel(bool bOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.DoubleBarrelGunState.SetBarrel");

	UDoubleBarrelGunState_SetBarrel_Params params;
	params.bOpen = bOpen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovMovementComponent.ServerDeployParachute
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UPavlovMovementComponent::ServerDeployParachute()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovMovementComponent.ServerDeployParachute");

	UPavlovMovementComponent_ServerDeployParachute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovMovementComponent.OnRep_PrachuteState
// (Final, Native, Private)

void UPavlovMovementComponent::OnRep_PrachuteState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovMovementComponent.OnRep_PrachuteState");

	UPavlovMovementComponent_OnRep_PrachuteState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovMovementComponent.MulticastOnParachuteDeployed
// (Net, Native, Event, NetMulticast, Public)

void UPavlovMovementComponent::MulticastOnParachuteDeployed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovMovementComponent.MulticastOnParachuteDeployed");

	UPavlovMovementComponent_MulticastOnParachuteDeployed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GestureComponent.RegisterGesture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGestureSetup           Setup                          (Parm)

void UGestureComponent::RegisterGesture(const struct FGestureSetup& Setup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GestureComponent.RegisterGesture");

	UGestureComponent_RegisterGesture_Params params;
	params.Setup = Setup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GhostPawn.SpawnTags
// (Final, Native, Public, BlueprintCallable)

void AGhostPawn::SpawnTags()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostPawn.SpawnTags");

	AGhostPawn_SpawnTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GhostPawn.OnTraveledToSpectatorRoom
// (Event, Protected, BlueprintEvent)

void AGhostPawn::OnTraveledToSpectatorRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostPawn.OnTraveledToSpectatorRoom");

	AGhostPawn_OnTraveledToSpectatorRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GhostPawn.OnTeamIdChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)

void AGhostPawn::OnTeamIdChanged(int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostPawn.OnTeamIdChanged");

	AGhostPawn_OnTeamIdChanged_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GhostPawn.OnGraceTimeEnded
// (Event, Public, BlueprintEvent)

void AGhostPawn::OnGraceTimeEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostPawn.OnGraceTimeEnded");

	AGhostPawn_OnGraceTimeEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GhostPawn.EndGraceTime
// (Final, Native, Protected)

void AGhostPawn::EndGraceTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostPawn.EndGraceTime");

	AGhostPawn_EndGraceTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GhostPawn.ClientTravelToSpectatorRoom
// (Net, NetReliable, Native, Event, Protected, NetClient)

void AGhostPawn::ClientTravelToSpectatorRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostPawn.ClientTravelToSpectatorRoom");

	AGhostPawn_ClientTravelToSpectatorRoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GhostPawn.ClientSpawnKillCam
// (Net, Native, Event, Public, NetClient)
// Parameters:
// struct FKillInfo               KillInfo                       (ConstParm, Parm, ReferenceParm)

void AGhostPawn::ClientSpawnKillCam(const struct FKillInfo& KillInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostPawn.ClientSpawnKillCam");

	AGhostPawn_ClientSpawnKillCam_Params params;
	params.KillInfo = KillInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GhostPawn.ClearTags
// (Final, Native, Public, BlueprintCallable)

void AGhostPawn::ClearTags()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostPawn.ClearTags");

	AGhostPawn_ClearTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GlobalPlayerEffects.SwitchState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPlayerEffectState             NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AGlobalPlayerEffects::SwitchState(EPlayerEffectState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GlobalPlayerEffects.SwitchState");

	AGlobalPlayerEffects_SwitchState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GlobalPlayerEffects.InstigateFlash
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void AGlobalPlayerEffects::InstigateFlash(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GlobalPlayerEffects.InstigateFlash");

	AGlobalPlayerEffects_InstigateFlash_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.RecoilDrop
// (Event, Public, BlueprintEvent)

void AGun::RecoilDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.RecoilDrop");

	AGun_RecoilDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.OnUnderExploitChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bUnderExploit                  (Parm, ZeroConstructor, IsPlainOldData)

void AGun::OnUnderExploitChanged(bool bUnderExploit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.OnUnderExploitChanged");

	AGun_OnUnderExploitChanged_Params params;
	params.bUnderExploit = bUnderExploit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.OnTwoHandGripChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AGun::OnTwoHandGripChanged(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.OnTwoHandGripChanged");

	AGun_OnTwoHandGripChanged_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.OnSpawnUnloaded
// (Event, Public, BlueprintEvent)

void AGun::OnSpawnUnloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.OnSpawnUnloaded");

	AGun_OnSpawnUnloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.OnSliderUngrabbed
// (Final, Native, Private)

void AGun::OnSliderUngrabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.OnSliderUngrabbed");

	AGun_OnSliderUngrabbed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.OnSliderInputReceived
// (Final, Native, Private, HasDefaults)
// Parameters:
// struct FVector                 Input                          (Parm, IsPlainOldData)
// struct FVector                 InputDelta                     (Parm, IsPlainOldData)

void AGun::OnSliderInputReceived(const struct FVector& Input, const struct FVector& InputDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.OnSliderInputReceived");

	AGun_OnSliderInputReceived_Params params;
	params.Input = Input;
	params.InputDelta = InputDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.OnSliderGrabbed
// (Final, Native, Private)

void AGun::OnSliderGrabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.OnSliderGrabbed");

	AGun_OnSliderGrabbed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.OnRecoilDropCooldown
// (Final, Native, Private)

void AGun::OnRecoilDropCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.OnRecoilDropCooldown");

	AGun_OnRecoilDropCooldown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.MulticastOnRecoilDrop
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AGun::MulticastOnRecoilDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.MulticastOnRecoilDrop");

	AGun_MulticastOnRecoilDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Gun.IsBeingGrippedBy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APavlovItemController*   ByController                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGun::IsBeingGrippedBy(class APavlovItemController* ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.IsBeingGrippedBy");

	AGun_IsBeingGrippedBy_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Gun.IsBeingGripped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGun::IsBeingGripped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Gun.IsBeingGripped");

	AGun_IsBeingGripped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.HitBoxProxyComponent.OnBulletOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UHitBoxProxyComponent::OnBulletOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HitBoxProxyComponent.OnBulletOverlap");

	UHitBoxProxyComponent_OnBulletOverlap_Params params;
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


// Function Pavlov.HolsterComponent.TakeItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovItemController*   Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void UHolsterComponent::TakeItem(class APavlovItemController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HolsterComponent.TakeItem");

	UHolsterComponent_TakeItem_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HolsterComponent.ServerTakeItem
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class APavlovItemController*   Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void UHolsterComponent::ServerTakeItem(class APavlovItemController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HolsterComponent.ServerTakeItem");

	UHolsterComponent_ServerTakeItem_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HolsterComponent.ServerHolster
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AVRItem*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UHolsterComponent::ServerHolster(class AVRItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HolsterComponent.ServerHolster");

	UHolsterComponent_ServerHolster_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HolsterComponent.OnRep_HolsteredItem
// (Final, Native, Private)

void UHolsterComponent::OnRep_HolsteredItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HolsterComponent.OnRep_HolsteredItem");

	UHolsterComponent_OnRep_HolsteredItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HolsterComponent.MulticastOnItemHolstered
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AVRItem*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UHolsterComponent::MulticastOnItemHolstered(class AVRItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HolsterComponent.MulticastOnItemHolstered");

	UHolsterComponent_MulticastOnItemHolstered_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HolsterComponent.MulticastOnDrop
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AVRItem*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UHolsterComponent::MulticastOnDrop(class AVRItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HolsterComponent.MulticastOnDrop");

	UHolsterComponent_MulticastOnDrop_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HolsterComponent.Mirror
// (Final, Native, Public, BlueprintCallable)

void UHolsterComponent::Mirror()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HolsterComponent.Mirror");

	UHolsterComponent_Mirror_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HolsterComponent.Holster
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AVRItem*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UHolsterComponent::Holster(class AVRItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HolsterComponent.Holster");

	UHolsterComponent_Holster_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HolsterComponent.Drop
// (Final, Native, Public, BlueprintCallable)

void UHolsterComponent::Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HolsterComponent.Drop");

	UHolsterComponent_Drop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.HolsterComponent.AttachItemLocally
// (Final, Native, Private)

void UHolsterComponent::AttachItemLocally()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.HolsterComponent.AttachItemLocally");

	UHolsterComponent_AttachItemLocally_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovAIController.SetTargetPawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPawn*             TargetPawn                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovAIController::SetTargetPawn(class APavlovPawn* TargetPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovAIController.SetTargetPawn");

	APavlovAIController_SetTargetPawn_Params params;
	params.TargetPawn = TargetPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovAIController.OnPawnCollisionBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APavlovAIController::OnPawnCollisionBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovAIController.OnPawnCollisionBeginOverlap");

	APavlovAIController_OnPawnCollisionBeginOverlap_Params params;
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


// Function Pavlov.PavlovAIController.IsSuppressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovAIController::IsSuppressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovAIController.IsSuppressed");

	APavlovAIController_IsSuppressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovAIController.GetTargetPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APavlovPawn*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovPawn* APavlovAIController::GetTargetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovAIController.GetTargetPawn");

	APavlovAIController_GetTargetPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.UseOOBLocomotion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::UseOOBLocomotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.UseOOBLocomotion");

	UPavlovGameUserSettings_UseOOBLocomotion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.ShouldSwapControllers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::ShouldSwapControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.ShouldSwapControllers");

	UPavlovGameUserSettings_ShouldSwapControllers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.SetVirtualStock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetVirtualStock(class UObject* WorldContextObject, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetVirtualStock");

	UPavlovGameUserSettings_SetVirtualStock_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetTwoHandToggle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetTwoHandToggle(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetTwoHandToggle");

	UPavlovGameUserSettings_SetTwoHandToggle_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetTouchpadInverted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInverted                      (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetTouchpadInverted(bool bInverted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetTouchpadInverted");

	UPavlovGameUserSettings_SetTouchpadInverted_Params params;
	params.bInverted = bInverted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetSwapControllers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetSwapControllers(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetSwapControllers");

	UPavlovGameUserSettings_SetSwapControllers_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetSnapTurnDisabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetSnapTurnDisabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetSnapTurnDisabled");

	UPavlovGameUserSettings_SetSnapTurnDisabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetSnapTurn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetSnapTurn(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetSnapTurn");

	UPavlovGameUserSettings_SetSnapTurn_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetSmoothTurnRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetSmoothTurnRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetSmoothTurnRate");

	UPavlovGameUserSettings_SetSmoothTurnRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetSmoothTurn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetSmoothTurn(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetSmoothTurn");

	UPavlovGameUserSettings_SetSmoothTurn_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetResolutionQuality
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Quality                        (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetResolutionQuality(float Quality)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetResolutionQuality");

	UPavlovGameUserSettings_SetResolutionQuality_Params params;
	params.Quality = Quality;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetPrimaryRegion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EOnlineRegion                  Region                         (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetPrimaryRegion(EOnlineRegion Region)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetPrimaryRegion");

	UPavlovGameUserSettings_SetPrimaryRegion_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetPlayerRightHanded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bRightHanded                   (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetPlayerRightHanded(bool bRightHanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetPlayerRightHanded");

	UPavlovGameUserSettings_SetPlayerRightHanded_Params params;
	params.bRightHanded = bRightHanded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetPlayerHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Height                         (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetPlayerHeight(float Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetPlayerHeight");

	UPavlovGameUserSettings_SetPlayerHeight_Params params;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetOOBLocomotion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bUse                           (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetOOBLocomotion(bool bUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetOOBLocomotion");

	UPavlovGameUserSettings_SetOOBLocomotion_Params params;
	params.bUse = bUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetOffHandAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECustomAction                  Action                         (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetOffHandAction(ECustomAction Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetOffHandAction");

	UPavlovGameUserSettings_SetOffHandAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetMountFriendly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bFriendly                      (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetMountFriendly(bool bFriendly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetMountFriendly");

	UPavlovGameUserSettings_SetMountFriendly_Params params;
	params.bFriendly = bFriendly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetMainHandAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECustomAction                  Action                         (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetMainHandAction(ECustomAction Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetMainHandAction");

	UPavlovGameUserSettings_SetMainHandAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetLockInventory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetLockInventory(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetLockInventory");

	UPavlovGameUserSettings_SetLockInventory_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetLiteFootStepHaptics
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetLiteFootStepHaptics(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetLiteFootStepHaptics");

	UPavlovGameUserSettings_SetLiteFootStepHaptics_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetLegacyGrip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetLegacyGrip(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetLegacyGrip");

	UPavlovGameUserSettings_SetLegacyGrip_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetLeftEyeRendering
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetLeftEyeRendering(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetLeftEyeRendering");

	UPavlovGameUserSettings_SetLeftEyeRendering_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetHeadLocomotion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetHeadLocomotion(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetHeadLocomotion");

	UPavlovGameUserSettings_SetHeadLocomotion_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetGripMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EGripMode                      NewGripMode                    (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetGripMode(EGripMode NewGripMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetGripMode");

	UPavlovGameUserSettings_SetGripMode_Params params;
	params.NewGripMode = NewGripMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetFreeSpectatingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetFreeSpectatingEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetFreeSpectatingEnabled");

	UPavlovGameUserSettings_SetFreeSpectatingEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetAutoUngrip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetAutoUngrip(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetAutoUngrip");

	UPavlovGameUserSettings_SetAutoUngrip_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetAutoSwapHandsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetAutoSwapHandsEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetAutoSwapHandsEnabled");

	UPavlovGameUserSettings_SetAutoSwapHandsEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetAutoSprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetAutoSprint(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetAutoSprint");

	UPavlovGameUserSettings_SetAutoSprint_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SetArmKillfeedEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::SetArmKillfeedEnabled(class UObject* WorldContextObject, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SetArmKillfeedEnabled");

	UPavlovGameUserSettings_SetArmKillfeedEnabled_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SendAnalyticEvents
// (Final, Native, Public, BlueprintCallable)

void UPavlovGameUserSettings::SendAnalyticEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SendAnalyticEvents");

	UPavlovGameUserSettings_SendAnalyticEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.SaveSpectatorView
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UPavlovGameUserSettings::SaveSpectatorView(class UObject* WorldContextObject, int Index, const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.SaveSpectatorView");

	UPavlovGameUserSettings_SaveSpectatorView_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Index = Index;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.MarkAsCalibrated
// (Final, Native, Public, BlueprintCallable)

void UPavlovGameUserSettings::MarkAsCalibrated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.MarkAsCalibrated");

	UPavlovGameUserSettings_MarkAsCalibrated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameUserSettings.IsTwoHandToggleEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsTwoHandToggleEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsTwoHandToggleEnabled");

	UPavlovGameUserSettings_IsTwoHandToggleEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsTouchpadInverted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsTouchpadInverted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsTouchpadInverted");

	UPavlovGameUserSettings_IsTouchpadInverted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsSnapTurnEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsSnapTurnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsSnapTurnEnabled");

	UPavlovGameUserSettings_IsSnapTurnEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsSnapTurnDisabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsSnapTurnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsSnapTurnDisabled");

	UPavlovGameUserSettings_IsSnapTurnDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsSmoothTurnEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsSmoothTurnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsSmoothTurnEnabled");

	UPavlovGameUserSettings_IsSmoothTurnEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsPostProcessDisabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsPostProcessDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsPostProcessDisabled");

	UPavlovGameUserSettings_IsPostProcessDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsPlayerRightHanded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsPlayerRightHanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsPlayerRightHanded");

	UPavlovGameUserSettings_IsPlayerRightHanded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsMountFriendly
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsMountFriendly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsMountFriendly");

	UPavlovGameUserSettings_IsMountFriendly_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsLiteFootStepHapticsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsLiteFootStepHapticsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsLiteFootStepHapticsEnabled");

	UPavlovGameUserSettings_IsLiteFootStepHapticsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsLeftEyeRendering
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsLeftEyeRendering()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsLeftEyeRendering");

	UPavlovGameUserSettings_IsLeftEyeRendering_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsHeadLocomotionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsHeadLocomotionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsHeadLocomotionEnabled");

	UPavlovGameUserSettings_IsHeadLocomotionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsFreeSpectatingEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsFreeSpectatingEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsFreeSpectatingEnabled");

	UPavlovGameUserSettings_IsFreeSpectatingEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsCalibrated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsCalibrated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsCalibrated");

	UPavlovGameUserSettings_IsCalibrated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsAutoUngripEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsAutoUngripEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsAutoUngripEnabled");

	UPavlovGameUserSettings_IsAutoUngripEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsAutoSwapHandsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsAutoSwapHandsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsAutoSwapHandsEnabled");

	UPavlovGameUserSettings_IsAutoSwapHandsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsAutoSprintEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsAutoSprintEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsAutoSprintEnabled");

	UPavlovGameUserSettings_IsAutoSprintEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.IsArmKillfeedEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::IsArmKillfeedEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.IsArmKillfeedEnabled");

	UPavlovGameUserSettings_IsArmKillfeedEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.HasLegacyGrip
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::HasLegacyGrip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.HasLegacyGrip");

	UPavlovGameUserSettings_HasLegacyGrip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetVirtualStock
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::GetVirtualStock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetVirtualStock");

	UPavlovGameUserSettings_GetVirtualStock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetSpectatorView
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UPavlovGameUserSettings::GetSpectatorView(class UObject* WorldContextObject, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetSpectatorView");

	UPavlovGameUserSettings_GetSpectatorView_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetSmoothTurnRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPavlovGameUserSettings::GetSmoothTurnRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetSmoothTurnRate");

	UPavlovGameUserSettings_GetSmoothTurnRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetPrimaryRegion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EOnlineRegion                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EOnlineRegion UPavlovGameUserSettings::GetPrimaryRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetPrimaryRegion");

	UPavlovGameUserSettings_GetPrimaryRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetPlayerHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPavlovGameUserSettings::GetPlayerHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetPlayerHeight");

	UPavlovGameUserSettings_GetPlayerHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetOffHandAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECustomAction                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECustomAction UPavlovGameUserSettings::GetOffHandAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetOffHandAction");

	UPavlovGameUserSettings_GetOffHandAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetMainHandAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECustomAction                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECustomAction UPavlovGameUserSettings::GetMainHandAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetMainHandAction");

	UPavlovGameUserSettings_GetMainHandAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetLockInventory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameUserSettings::GetLockInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetLockInventory");

	UPavlovGameUserSettings_GetLockInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.GetGripMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EGripMode                      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripMode UPavlovGameUserSettings::GetGripMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.GetGripMode");

	UPavlovGameUserSettings_GetGripMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameUserSettings.ForceNoPostProcessing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameUserSettings::ForceNoPostProcessing(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameUserSettings.ForceNoPostProcessing");

	UPavlovGameUserSettings_ForceNoPostProcessing_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.WearKevlar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bWithHelmet                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::WearKevlar(bool bWithHelmet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.WearKevlar");

	APavlovPawn_WearKevlar_Params params;
	params.bWithHelmet = bWithHelmet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.UpdateLocomotion
// (Final, Native, Public, BlueprintCallable)

void APavlovPawn::UpdateLocomotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.UpdateLocomotion");

	APavlovPawn_UpdateLocomotion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.TakePointDamage
// (Final, Native, Private, HasDefaults)
// Parameters:
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, IsPlainOldData)
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ShotFromDirection              (Parm, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::TakePointDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.TakePointDamage");

	APavlovPawn_TakePointDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.SetupWatch
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWatch*                  WatchComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APavlovPawn::SetupWatch(class UWatch* WatchComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.SetupWatch");

	APavlovPawn_SetupWatch_Params params;
	params.WatchComp = WatchComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.SetTeamId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewTeamId                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::SetTeamId(int NewTeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.SetTeamId");

	APavlovPawn_SetTeamId_Params params;
	params.NewTeamId = NewTeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ServerReportFallDamage
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::ServerReportFallDamage(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ServerReportFallDamage");

	APavlovPawn_ServerReportFallDamage_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ServerGiveMagazine
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bOffHand                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::ServerGiveMagazine(bool bOffHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ServerGiveMagazine");

	APavlovPawn_ServerGiveMagazine_Params params;
	params.bOffHand = bOffHand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ServerGive
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Skin                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::ServerGive(const struct FName& EquipmentName, const struct FName& Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ServerGive");

	APavlovPawn_ServerGive_Params params;
	params.EquipmentName = EquipmentName;
	params.Skin = Skin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ServerDeployParachute
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void APavlovPawn::ServerDeployParachute()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ServerDeployParachute");

	APavlovPawn_ServerDeployParachute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnVoiceChanged
// (Final, Native, Private)
// Parameters:
// bool                           bTalking                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocal                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::OnVoiceChanged(bool bTalking, bool bLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnVoiceChanged");

	APavlovPawn_OnVoiceChanged_Params params;
	params.bTalking = bTalking;
	params.bLocal = bLocal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnTeamIdChanged
// (Native, Event, Protected, BlueprintEvent)

void APavlovPawn::OnTeamIdChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnTeamIdChanged");

	APavlovPawn_OnTeamIdChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnRevive
// (Final, Native, Private)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::OnRevive(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnRevive");

	APavlovPawn_OnRevive_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnRep_TeamId
// (Native, Protected)

void APavlovPawn::OnRep_TeamId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnRep_TeamId");

	APavlovPawn_OnRep_TeamId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnRep_HelmetArmour
// (Final, Native, Private)

void APavlovPawn::OnRep_HelmetArmour()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnRep_HelmetArmour");

	APavlovPawn_OnRep_HelmetArmour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnRep_Armour
// (Final, Native, Private)

void APavlovPawn::OnRep_Armour()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnRep_Armour");

	APavlovPawn_OnRep_Armour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnKill
// (Final, Native, Private)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::OnKill(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnKill");

	APavlovPawn_OnKill_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnImpactDamage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FImpactDamage           ImpactDamage                   (ConstParm, Parm, OutParm, ReferenceParm)

void APavlovPawn::OnImpactDamage(const struct FImpactDamage& ImpactDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnImpactDamage");

	APavlovPawn_OnImpactDamage_Params params;
	params.ImpactDamage = ImpactDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.OnCameraClipChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bClipping                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::OnCameraClipChanged(bool bClipping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.OnCameraClipChanged");

	APavlovPawn_OnCameraClipChanged_Params params;
	params.bClipping = bClipping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastTeleportTo
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 DestLocation                   (Parm, IsPlainOldData)
// struct FRotator                DestRotation                   (Parm, IsPlainOldData)

void APavlovPawn::MulticastTeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastTeleportTo");

	APavlovPawn_MulticastTeleportTo_Params params;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastOnWearArmour
// (Net, Native, Event, NetMulticast, Public)

void APavlovPawn::MulticastOnWearArmour()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastOnWearArmour");

	APavlovPawn_MulticastOnWearArmour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastOnReset
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void APavlovPawn::MulticastOnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastOnReset");

	APavlovPawn_MulticastOnReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastOnRadialDeath
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FVector_NetQuantize     Origin                         (Parm)

void APavlovPawn::MulticastOnRadialDeath(const struct FVector_NetQuantize& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastOnRadialDeath");

	APavlovPawn_MulticastOnRadialDeath_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastOnImpactDamage
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FImpactDamage           ImpactDamage                   (Parm)

void APavlovPawn::MulticastOnImpactDamage(const struct FImpactDamage& ImpactDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastOnImpactDamage");

	APavlovPawn_MulticastOnImpactDamage_Params params;
	params.ImpactDamage = ImpactDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastOnHitSlow
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void APavlovPawn::MulticastOnHitSlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastOnHitSlow");

	APavlovPawn_MulticastOnHitSlow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastOnHit
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FVector_NetQuantize     Location                       (Parm)
// struct FVector_NetQuantizeNormal Normal                         (Parm)
// class APlayerState*            Shooter                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnArmor                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::MulticastOnHit(const struct FVector_NetQuantize& Location, const struct FVector_NetQuantizeNormal& Normal, class APlayerState* Shooter, bool bOnArmor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastOnHit");

	APavlovPawn_MulticastOnHit_Params params;
	params.Location = Location;
	params.Normal = Normal;
	params.Shooter = Shooter;
	params.bOnArmor = bOnArmor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastOnHelmetHit
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FVector_NetQuantize     Location                       (Parm)
// struct FVector_NetQuantizeNormal Direction                      (Parm)

void APavlovPawn::MulticastOnHelmetHit(const struct FVector_NetQuantize& Location, const struct FVector_NetQuantizeNormal& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastOnHelmetHit");

	APavlovPawn_MulticastOnHelmetHit_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastOnHelmetBlownoff
// (Net, Native, Event, NetMulticast, Public)

void APavlovPawn::MulticastOnHelmetBlownoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastOnHelmetBlownoff");

	APavlovPawn_MulticastOnHelmetBlownoff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastOnHeadshot
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void APavlovPawn::MulticastOnHeadshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastOnHeadshot");

	APavlovPawn_MulticastOnHeadshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.MulticastAdjustAvatarScale
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// float                          PlayerHeight                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::MulticastAdjustAvatarScale(float PlayerHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.MulticastAdjustAvatarScale");

	APavlovPawn_MulticastAdjustAvatarScale_Params params;
	params.PlayerHeight = PlayerHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.LoadEquipment
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEquipmentDefinition    Definition                     (ConstParm, Parm, OutParm, ReferenceParm)

void APavlovPawn::LoadEquipment(const struct FEquipmentDefinition& Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.LoadEquipment");

	APavlovPawn_LoadEquipment_Params params;
	params.Definition = Definition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.IsSprinting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::IsSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.IsSprinting");

	APavlovPawn_IsSprinting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.IsDead
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::IsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.IsDead");

	APavlovPawn_IsDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.IsCameraClipping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::IsCameraClipping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.IsCameraClipping");

	APavlovPawn_IsCameraClipping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GiveBomb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ABomb*                   Bomb                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::GiveBomb(class ABomb* Bomb)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GiveBomb");

	APavlovPawn_GiveBomb_Params params;
	params.Bomb = Bomb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.Give
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Skin                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithAmmo                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bByBuyMenu                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPawn::Give(const struct FName& EquipmentName, const struct FName& Skin, bool bWithAmmo, bool bByBuyMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.Give");

	APavlovPawn_Give_Params params;
	params.EquipmentName = EquipmentName;
	params.Skin = Skin;
	params.bWithAmmo = bWithAmmo;
	params.bByBuyMenu = bByBuyMenu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.GetSideWeaponHolster
// (Event, Public, BlueprintEvent)
// Parameters:
// class UHolsterComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UHolsterComponent* APavlovPawn::GetSideWeaponHolster()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetSideWeaponHolster");

	APavlovPawn_GetSideWeaponHolster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetNonDominantController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovItemController*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovItemController* APavlovPawn::GetNonDominantController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetNonDominantController");

	APavlovPawn_GetNonDominantController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetMainWeaponHolster
// (Event, Public, BlueprintEvent)
// Parameters:
// class UHolsterComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UHolsterComponent* APavlovPawn::GetMainWeaponHolster()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetMainWeaponHolster");

	APavlovPawn_GetMainWeaponHolster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetKnifeHolster
// (Event, Public, BlueprintEvent)
// Parameters:
// class UHolsterComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UHolsterComponent* APavlovPawn::GetKnifeHolster()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetKnifeHolster");

	APavlovPawn_GetKnifeHolster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APavlovPawn::GetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetHealth");

	APavlovPawn_GetHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetGrenadeHolsters
// (Event, Public, BlueprintEvent)
// Parameters:
// TArray<class UHolsterComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UHolsterComponent*> APavlovPawn::GetGrenadeHolsters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetGrenadeHolsters");

	APavlovPawn_GetGrenadeHolsters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetEquipmentByName
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEquipmentDefinition    Definition                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovPawn::GetEquipmentByName(const struct FName& EquipmentName, struct FEquipmentDefinition* Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetEquipmentByName");

	APavlovPawn_GetEquipmentByName_Params params;
	params.EquipmentName = EquipmentName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Definition != nullptr)
		*Definition = params.Definition;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetDominantController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovItemController*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovItemController* APavlovPawn::GetDominantController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetDominantController");

	APavlovPawn_GetDominantController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetBombHolster
// (Event, Public, BlueprintEvent)
// Parameters:
// class UHolsterComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UHolsterComponent* APavlovPawn::GetBombHolster()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetBombHolster");

	APavlovPawn_GetBombHolster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.GetAmmoPocket
// (Event, Public, BlueprintEvent)
// Parameters:
// class UVRPocketComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVRPocketComponent* APavlovPawn::GetAmmoPocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.GetAmmoPocket");

	APavlovPawn_GetAmmoPocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovPawn.DropEquipment
// (Final, Native, Public, BlueprintCallable)

void APavlovPawn::DropEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.DropEquipment");

	APavlovPawn_DropEquipment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ClientClearSoundMix
// (Net, NetReliable, Native, Event, Public, NetClient)

void APavlovPawn::ClientClearSoundMix()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ClientClearSoundMix");

	APavlovPawn_ClientClearSoundMix_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.BlowHelmetOff
// (Event, Public, BlueprintEvent)

void APavlovPawn::BlowHelmetOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.BlowHelmetOff");

	APavlovPawn_BlowHelmetOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.AddHitSlow
// (Final, Native, Public, BlueprintCallable)

void APavlovPawn::AddHitSlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.AddHitSlow");

	APavlovPawn_AddHitSlow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPawn.ActivateCameraClip
// (Final, Native, Private)

void APavlovPawn::ActivateCameraClip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPawn.ActivateCameraClip");

	APavlovPawn_ActivateCameraClip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.MulticastOnKillfeedEntry
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// struct FKillfeedEntry          NewEntry                       (ConstParm, Parm, ReferenceParm)

void APavlovGameState::MulticastOnKillfeedEntry(const struct FKillfeedEntry& NewEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.MulticastOnKillfeedEntry");

	APavlovGameState_MulticastOnKillfeedEntry_Params params;
	params.NewEntry = NewEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameState.GetTeamScore
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovGameState::GetTeamScore(int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetTeamScore");

	APavlovGameState_GetTeamScore_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetTeamArray
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class APavlovPlayerState*> TeamArray                      (Parm, OutParm, ZeroConstructor)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameState::GetTeamArray(int TeamID, TArray<class APavlovPlayerState*>* TeamArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetTeamArray");

	APavlovGameState_GetTeamArray_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamArray != nullptr)
		*TeamArray = params.TeamArray;
}


// Function Pavlov.PavlovGameState.GetSortedPlayerArray
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class APavlovPlayerState*> SortedPlayerArray              (Parm, OutParm, ZeroConstructor)
// int                            FilterByTeamId                 (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameState::GetSortedPlayerArray(int FilterByTeamId, TArray<class APavlovPlayerState*>* SortedPlayerArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetSortedPlayerArray");

	APavlovGameState_GetSortedPlayerArray_Params params;
	params.FilterByTeamId = FilterByTeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SortedPlayerArray != nullptr)
		*SortedPlayerArray = params.SortedPlayerArray;
}


// Function Pavlov.PavlovGameState.GetPlayerStringId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString APavlovGameState::GetPlayerStringId(class APavlovPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetPlayerStringId");

	APavlovGameState_GetPlayerStringId_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetPlayerStateByStringId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StringId                       (Parm, ZeroConstructor)
// class APavlovPlayerState*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovPlayerState* APavlovGameState::GetPlayerStateByStringId(const struct FString& StringId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetPlayerStateByStringId");

	APavlovGameState_GetPlayerStateByStringId_Params params;
	params.StringId = StringId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetPlayerByScore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPlayerState*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovPlayerState* APavlovGameState::GetPlayerByScore(int Index, int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetPlayerByScore");

	APavlovGameState_GetPlayerByScore_Params params;
	params.Index = Index;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetMatchResult
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EMatchResult                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMatchResult APavlovGameState::GetMatchResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetMatchResult");

	APavlovGameState_GetMatchResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetEquipmentNameByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName APavlovGameState::GetEquipmentNameByClass(class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetEquipmentNameByClass");

	APavlovGameState_GetEquipmentNameByClass_Params params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetEquipmentDataByClass
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FEquipmentData          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEquipmentData APavlovGameState::GetEquipmentDataByClass(class UClass* ItemClass, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetEquipmentDataByClass");

	APavlovGameState_GetEquipmentDataByClass_Params params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetEquipmentData
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FEquipmentData          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEquipmentData APavlovGameState::GetEquipmentData(const struct FName& EquipmentName, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetEquipmentData");

	APavlovGameState_GetEquipmentData_Params params;
	params.EquipmentName = EquipmentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.GetEquipmentCost
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovGameState::GetEquipmentCost(const struct FName& EquipmentName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.GetEquipmentCost");

	APavlovGameState_GetEquipmentCost_Params params;
	params.EquipmentName = EquipmentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameState.DisplayMatchStateOverlay
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// class UClass*                  OverlayClass                   (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameState::DisplayMatchStateOverlay(class UClass* OverlayClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameState.DisplayMatchStateOverlay");

	APavlovGameState_DisplayMatchStateOverlay_Params params;
	params.OverlayClass = OverlayClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.TerminateGameSession
// (Final, Native, Public, BlueprintCallable)

void APavlovGameMode::TerminateGameSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.TerminateGameSession");

	APavlovGameMode_TerminateGameSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SwitchTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SwitchTeam(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SwitchTeam");

	APavlovGameMode_SwitchTeam_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.Suicide
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::Suicide(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.Suicide");

	APavlovGameMode_Suicide_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.StopReplayRecording
// (Final, Native, Protected, BlueprintCallable)

void APavlovGameMode::StopReplayRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.StopReplayRecording");

	APavlovGameMode_StopReplayRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.StartReplayRecording
// (Final, Native, Protected, BlueprintCallable)

void APavlovGameMode::StartReplayRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.StartReplayRecording");

	APavlovGameMode_StartReplayRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SpawnPlayer
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SpawnPlayer(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SpawnPlayer");

	APavlovGameMode_SpawnPlayer_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SpawnAndPossesPawns
// (Final, Native, Public, BlueprintCallable)

void APavlovGameMode::SpawnAndPossesPawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SpawnAndPossesPawns");

	APavlovGameMode_SpawnAndPossesPawns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.ShuffleTeams
// (Final, Native, Public, BlueprintCallable)

void APavlovGameMode::ShuffleTeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.ShuffleTeams");

	APavlovGameMode_ShuffleTeams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SetTeamCash
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CashAmmount                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SetTeamCash(int TeamID, int CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SetTeamCash");

	APavlovGameMode_SetTeamCash_Params params;
	params.TeamID = TeamID;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SetRoundState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPavlovRoundState              State                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SetRoundState(EPavlovRoundState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SetRoundState");

	APavlovGameMode_SetRoundState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SetPawnsInvulnerable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SetPawnsInvulnerable(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SetPawnsInvulnerable");

	APavlovGameMode_SetPawnsInvulnerable_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SetMovement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SetMovement(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SetMovement");

	APavlovGameMode_SetMovement_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SetEveryoneCash
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            CashAmmount                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SetEveryoneCash(int CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SetEveryoneCash");

	APavlovGameMode_SetEveryoneCash_Params params;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.SetAttackingTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::SetAttackingTeam(int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.SetAttackingTeam");

	APavlovGameMode_SetAttackingTeam_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.RotateMap
// (Final, Native, Public, BlueprintCallable)

void APavlovGameMode::RotateMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.RotateMap");

	APavlovGameMode_RotateMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.ResetScore
// (Final, Native, Public, BlueprintCallable)

void APavlovGameMode::ResetScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.ResetScore");

	APavlovGameMode_ResetScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.PunishTeamKiller
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPlayerState*      TeamKiller                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::PunishTeamKiller(class APavlovPlayerState* TeamKiller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.PunishTeamKiller");

	APavlovGameMode_PunishTeamKiller_Params params;
	params.TeamKiller = TeamKiller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.PostRoundCleanUp
// (Final, Native, Public, BlueprintCallable)

void APavlovGameMode::PostRoundCleanUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.PostRoundCleanUp");

	APavlovGameMode_PostRoundCleanUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.PerformServerTravel
// (Final, Native, Protected)

void APavlovGameMode::PerformServerTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.PerformServerTravel");

	APavlovGameMode_PerformServerTravel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.OnSteamTicketValidation
// (Final, Native, Protected)
// Parameters:
// struct FString                 SteamUserId                    (Parm, ZeroConstructor)
// ESteamAuthResponse             Response                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OwnerSteamUserId               (Parm, ZeroConstructor)

void APavlovGameMode::OnSteamTicketValidation(const struct FString& SteamUserId, ESteamAuthResponse Response, const struct FString& OwnerSteamUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.OnSteamTicketValidation");

	APavlovGameMode_OnSteamTicketValidation_Params params;
	params.SteamUserId = SteamUserId;
	params.Response = Response;
	params.OwnerSteamUserId = OwnerSteamUserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.OnRoundStateChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// EPavlovRoundState              OldState                       (Parm, ZeroConstructor, IsPlainOldData)
// EPavlovRoundState              NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::OnRoundStateChanged(EPavlovRoundState OldState, EPavlovRoundState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.OnRoundStateChanged");

	APavlovGameMode_OnRoundStateChanged_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.OnPlayerSpawned
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPawn*             Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::OnPlayerSpawned(class APavlovPlayerState* PlayerState, class AController* Controller, class APavlovPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.OnPlayerSpawned");

	APavlovGameMode_OnPlayerSpawned_Params params;
	params.PlayerState = PlayerState;
	params.Controller = Controller;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.OnPlayerKilled
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPawn*             Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::OnPlayerKilled(class APavlovPlayerState* PlayerState, class AController* Controller, class APavlovPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.OnPlayerKilled");

	APavlovGameMode_OnPlayerKilled_Params params;
	params.PlayerState = PlayerState;
	params.Controller = Controller;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.OnPawnKilled
// (Final, Native, Protected)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::OnPawnKilled(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.OnPawnKilled");

	APavlovGameMode_OnPawnKilled_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.OnKillVolumeOverlap
// (Final, Native, Protected)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::OnKillVolumeOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.OnKillVolumeOverlap");

	APavlovGameMode_OnKillVolumeOverlap_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.MakeNavmeshStatic
// (Final, Native, Protected)

void APavlovGameMode::MakeNavmeshStatic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.MakeNavmeshStatic");

	APavlovGameMode_MakeNavmeshStatic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.KickByStringId
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FText                   KickReason                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bBan                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::KickByStringId(const struct FString& ID, const struct FText& KickReason, bool bBan)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.KickByStringId");

	APavlovGameMode_KickByStringId_Params params;
	params.ID = ID;
	params.KickReason = KickReason;
	params.bBan = bBan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.IsTeamDead
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameMode::IsTeamDead(int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.IsTeamDead");

	APavlovGameMode_IsTeamDead_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.IncrementTeamScore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::IncrementTeamScore(int TeamID, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.IncrementTeamScore");

	APavlovGameMode_IncrementTeamScore_Params params;
	params.TeamID = TeamID;
	params.Score = Score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.IncrementPlayerScore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::IncrementPlayerScore(class APlayerState* PlayerState, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.IncrementPlayerScore");

	APavlovGameMode_IncrementPlayerScore_Params params;
	params.PlayerState = PlayerState;
	params.Score = Score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.GiveTeamCash
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CashAmmount                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::GiveTeamCash(int TeamID, int CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GiveTeamCash");

	APavlovGameMode_GiveTeamCash_Params params;
	params.TeamID = TeamID;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.GiveItem
// (Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPawn*             Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlockDuration                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoaded                        (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::GiveItem(class APavlovPawn* Pawn, class UClass* ItemClass, float BlockDuration, bool bLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GiveItem");

	APavlovGameMode_GiveItem_Params params;
	params.Pawn = Pawn;
	params.ItemClass = ItemClass;
	params.BlockDuration = BlockDuration;
	params.bLoaded = bLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.GiveEveryoneCash
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            CashAmmount                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::GiveEveryoneCash(int CashAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GiveEveryoneCash");

	APavlovGameMode_GiveEveryoneCash_Params params;
	params.CashAmmount = CashAmmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.GetTeamStatus
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Casualties                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::GetTeamStatus(int TeamID, int* Num, int* Casualties)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GetTeamStatus");

	APavlovGameMode_GetTeamStatus_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num != nullptr)
		*Num = params.Num;
	if (Casualties != nullptr)
		*Casualties = params.Casualties;
}


// Function Pavlov.PavlovGameMode.GetTeamRealPlayerCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovGameMode::GetTeamRealPlayerCount(int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GetTeamRealPlayerCount");

	APavlovGameMode_GetTeamRealPlayerCount_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.GetRealPlayerCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APavlovGameMode::GetRealPlayerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GetRealPlayerCount");

	APavlovGameMode_GetRealPlayerCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.GetRandomController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamFilter                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRealPlayer                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AController* APavlovGameMode::GetRandomController(int TeamFilter, bool bRealPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.GetRandomController");

	APavlovGameMode_GetRandomController_Params params;
	params.TeamFilter = TeamFilter;
	params.bRealPlayer = bRealPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.CreateDedicatedServerSession
// (Final, Native, Public, BlueprintCallable)

void APavlovGameMode::CreateDedicatedServerSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.CreateDedicatedServerSession");

	APavlovGameMode_CreateDedicatedServerSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.CleanUpItems
// (Final, Native, Public, BlueprintCallable)

void APavlovGameMode::CleanUpItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.CleanUpItems");

	APavlovGameMode_CleanUpItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.CanChangeScore
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovGameMode::CanChangeScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.CanChangeScore");

	APavlovGameMode_CanChangeScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameMode.AddExtraRoundTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ExtraTime                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::AddExtraRoundTime(float ExtraTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.AddExtraRoundTime");

	APavlovGameMode_AddExtraRoundTime_Params params;
	params.ExtraTime = ExtraTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameMode.AddAssist
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void APavlovGameMode::AddAssist(class APavlovPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameMode.AddAssist");

	APavlovGameMode_AddAssist_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.Start
// (Final, Native, Public, BlueprintCallable)

void UPavlovLobby::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.Start");

	UPavlovLobby_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.SetWantToStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovLobby::SetWantToStart(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.SetWantToStart");

	UPavlovLobby_SetWantToStart_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.SetServerSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FServerSettings         NewServerSettings              (ConstParm, Parm, OutParm, ReferenceParm)

void UPavlovLobby::SetServerSettings(const struct FServerSettings& NewServerSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.SetServerSettings");

	UPavlovLobby_SetServerSettings_Params params;
	params.NewServerSettings = NewServerSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.SetPin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Pin                            (Parm, ZeroConstructor)

void UPavlovLobby::SetPin(const struct FString& Pin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.SetPin");

	UPavlovLobby_SetPin_Params params;
	params.Pin = Pin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.SetMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor)

void UPavlovLobby::SetMap(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.SetMap");

	UPavlovLobby_SetMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.SetHostingType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EServerHostingType             NewHostingType                 (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovLobby::SetHostingType(EServerHostingType NewHostingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.SetHostingType");

	UPavlovLobby_SetHostingType_Params params;
	params.NewHostingType = NewHostingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.SetGameMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NewGameMode                    (Parm, ZeroConstructor)

void UPavlovLobby::SetGameMode(const struct FString& NewGameMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.SetGameMode");

	UPavlovLobby_SetGameMode_Params params;
	params.NewGameMode = NewGameMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.SetFriendsOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovLobby::SetFriendsOnly(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.SetFriendsOnly");

	UPavlovLobby_SetFriendsOnly_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.SetFillWithBots
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovLobby::SetFillWithBots(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.SetFillWithBots");

	UPavlovLobby_SetFillWithBots_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.SetCompetitiveMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            CompMode                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovLobby::SetCompetitiveMode(int CompMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.SetCompetitiveMode");

	UPavlovLobby_SetCompetitiveMode_Params params;
	params.CompMode = CompMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.RequestTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovLobby::RequestTeam(int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.RequestTeam");

	UPavlovLobby_RequestTeam_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.MuteMember
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovLobby::MuteMember(int Index, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.MuteMember");

	UPavlovLobby_MuteMember_Params params;
	params.Index = Index;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.KickAndBan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MemberIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovLobby::KickAndBan(int MemberIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.KickAndBan");

	UPavlovLobby_KickAndBan_Params params;
	params.MemberIndex = MemberIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.Kick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MemberIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovLobby::Kick(int MemberIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.Kick");

	UPavlovLobby_Kick_Params params;
	params.MemberIndex = MemberIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovLobby.IsPinProtected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovLobby::IsPinProtected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.IsPinProtected");

	UPavlovLobby_IsPinProtected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovLobby.IsMemberMuted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovLobby::IsMemberMuted(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.IsMemberMuted");

	UPavlovLobby_IsMemberMuted_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovLobby.IsFriendsOnly
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovLobby::IsFriendsOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.IsFriendsOnly");

	UPavlovLobby_IsFriendsOnly_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovLobby.GetRegion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPavlovLobby::GetRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.GetRegion");

	UPavlovLobby_GetRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovLobby.GetPin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPavlovLobby::GetPin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.GetPin");

	UPavlovLobby_GetPin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovLobby.GetMemberTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPavlovLobby::GetMemberTeam(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.GetMemberTeam");

	UPavlovLobby_GetMemberTeam_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovLobby.GetLocalUserIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPavlovLobby::GetLocalUserIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.GetLocalUserIndex");

	UPavlovLobby_GetLocalUserIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovLobby.DoesMemberWantsToStart
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovLobby::DoesMemberWantsToStart(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovLobby.DoesMemberWantsToStart");

	UPavlovLobby_DoesMemberWantsToStart_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.UpdateServerList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Map                            (Parm, ZeroConstructor)
// struct FString                 GameMode                       (Parm, ZeroConstructor)
// bool                           bFriendsOnly                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrivateOnly                   (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::UpdateServerList(const struct FString& Map, const struct FString& GameMode, bool bFriendsOnly, bool bPrivateOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.UpdateServerList");

	UPavlovGameInstance_UpdateServerList_Params params;
	params.Map = Map;
	params.GameMode = GameMode;
	params.bFriendsOnly = bFriendsOnly;
	params.bPrivateOnly = bPrivateOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.SetMuted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::SetMuted(class APavlovPlayerState* PlayerState, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.SetMuted");

	UPavlovGameInstance_SetMuted_Params params;
	params.PlayerState = PlayerState;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.SetMatchmakingState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMatchmakingState              NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::SetMatchmakingState(EMatchmakingState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.SetMatchmakingState");

	UPavlovGameInstance_SetMatchmakingState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.RetrieveMasterServerSessionId
// (Final, Native, Public)

void UPavlovGameInstance::RetrieveMasterServerSessionId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.RetrieveMasterServerSessionId");

	UPavlovGameInstance_RetrieveMasterServerSessionId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.ResetTutorial
// (Final, Exec, Native, Public)

void UPavlovGameInstance::ResetTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.ResetTutorial");

	UPavlovGameInstance_ResetTutorial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.ReportServerState
// (Final, Native, Protected)

void UPavlovGameInstance::ReportServerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.ReportServerState");

	UPavlovGameInstance_ReportServerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.QuickMatch
// (Final, Native, Public, BlueprintCallable)

void UPavlovGameInstance::QuickMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.QuickMatch");

	UPavlovGameInstance_QuickMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.QueryForGameSession
// (Final, Native, Public)

void UPavlovGameInstance::QueryForGameSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.QueryForGameSession");

	UPavlovGameInstance_QueryForGameSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OpenMap_Implementation
// (Final, Native, Public)

void UPavlovGameInstance::OpenMap_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OpenMap_Implementation");

	UPavlovGameInstance_OpenMap_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OpenMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Map                            (Parm, ZeroConstructor)
// struct FString                 Options                        (Parm, ZeroConstructor)

void UPavlovGameInstance::OpenMap(const struct FString& Map, const struct FString& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OpenMap");

	UPavlovGameInstance_OpenMap_Params params;
	params.Map = Map;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnWorkshopSpecificQuery
// (Final, Native, Protected)

void UPavlovGameInstance::OnWorkshopSpecificQuery()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnWorkshopSpecificQuery");

	UPavlovGameInstance_OnWorkshopSpecificQuery_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnSteamLobbyListUpdated
// (Final, Native, Public)

void UPavlovGameInstance::OnSteamLobbyListUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnSteamLobbyListUpdated");

	UPavlovGameInstance_OnSteamLobbyListUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnServerMapDownloaded
// (Final, Native, Protected)
// Parameters:
// bool                           bSucceed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ID                             (Parm, ZeroConstructor)

void UPavlovGameInstance::OnServerMapDownloaded(bool bSucceed, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnServerMapDownloaded");

	UPavlovGameInstance_OnServerMapDownloaded_Params params;
	params.bSucceed = bSucceed;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnNetworkFailure
// (Final, Native, Public)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// class UNetDriver*              NetDriver                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetworkFailure>   FailureType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ErrorString                    (Parm, ZeroConstructor)

void UPavlovGameInstance::OnNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure> FailureType, const struct FString& ErrorString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnNetworkFailure");

	UPavlovGameInstance_OnNetworkFailure_Params params;
	params.World = World;
	params.NetDriver = NetDriver;
	params.FailureType = FailureType;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnLeftLobby
// (Final, Native, Public)
// Parameters:
// ESteamLobbyChatMemberStateChange StateChange                    (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::OnLeftLobby(ESteamLobbyChatMemberStateChange StateChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnLeftLobby");

	UPavlovGameInstance_OnLeftLobby_Params params;
	params.StateChange = StateChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnLadderOverlap
// (Final, Native, Public)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::OnLadderOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnLadderOverlap");

	UPavlovGameInstance_OnLadderOverlap_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnEnterLobby
// (Final, Native, Public)
// Parameters:
// bool                           bFailed                        (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::OnEnterLobby(bool bFailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnEnterLobby");

	UPavlovGameInstance_OnEnterLobby_Params params;
	params.bFailed = bFailed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnClientMapDownloaded
// (Final, Native, Public)
// Parameters:
// bool                           bSucceed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ID                             (Parm, ZeroConstructor)

void UPavlovGameInstance::OnClientMapDownloaded(bool bSucceed, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnClientMapDownloaded");

	UPavlovGameInstance_OnClientMapDownloaded_Params params;
	params.bSucceed = bSucceed;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.OnAuthSessionTicketResponse
// (Final, Native, Public)
// Parameters:
// bool                           bSucceed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 HexAuthTicket                  (Parm, ZeroConstructor)

void UPavlovGameInstance::OnAuthSessionTicketResponse(bool bSucceed, const struct FString& HexAuthTicket)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.OnAuthSessionTicketResponse");

	UPavlovGameInstance_OnAuthSessionTicketResponse_Params params;
	params.bSucceed = bSucceed;
	params.HexAuthTicket = HexAuthTicket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.JoinServer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPavlovServerInfo       ServerInfo                     (ConstParm, Parm, OutParm, ReferenceParm)

void UPavlovGameInstance::JoinServer(const struct FPavlovServerInfo& ServerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.JoinServer");

	UPavlovGameInstance_JoinServer_Params params;
	params.ServerInfo = ServerInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.JoinPinProtectedServer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPavlovServerInfo       ServerInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Pin                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameInstance::JoinPinProtectedServer(const struct FPavlovServerInfo& ServerInfo, const struct FString& Pin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.JoinPinProtectedServer");

	UPavlovGameInstance_JoinPinProtectedServer_Params params;
	params.ServerInfo = ServerInfo;
	params.Pin = Pin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.IsMuted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameInstance::IsMuted(class APavlovPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.IsMuted");

	UPavlovGameInstance_IsMuted_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.InitClientProxies
// (Final, Native, Public)

void UPavlovGameInstance::InitClientProxies()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.InitClientProxies");

	UPavlovGameInstance_InitClientProxies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.HasGameSession
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovGameInstance::HasGameSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.HasGameSession");

	UPavlovGameInstance_HasGameSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.GetTutorial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTutorial*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTutorial* UPavlovGameInstance::GetTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetTutorial");

	UPavlovGameInstance_GetTutorial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.GetOnlineRegion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EOnlineRegion                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EOnlineRegion UPavlovGameInstance::GetOnlineRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetOnlineRegion");

	UPavlovGameInstance_GetOnlineRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.GetOculusScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPavlovGameInstance::GetOculusScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetOculusScale");

	UPavlovGameInstance_GetOculusScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.GetMapListAdvanced
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPavlov_MapCompatibility Compatibility                  (Parm, IsPlainOldData)

void UPavlovGameInstance::GetMapListAdvanced(const struct FPavlov_MapCompatibility& Compatibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetMapListAdvanced");

	UPavlovGameInstance_GetMapListAdvanced_Params params;
	params.Compatibility = Compatibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.GetMapList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPavlov_MapCompatibility Compatibility                  (Parm, IsPlainOldData)
// TArray<class UPavlov_Map*>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPavlov_Map*> UPavlovGameInstance::GetMapList(const struct FPavlov_MapCompatibility& Compatibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetMapList");

	UPavlovGameInstance_GetMapList_Params params;
	params.Compatibility = Compatibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.GetMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UniqueId                       (Parm, ZeroConstructor)
// class UPavlov_Map*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPavlov_Map* UPavlovGameInstance::GetMap(const struct FString& UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.GetMap");

	UPavlovGameInstance_GetMap_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovGameInstance.DisplayNetworkFailureMessage
// (Final, Native, Public)

void UPavlovGameInstance::DisplayNetworkFailureMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.DisplayNetworkFailureMessage");

	UPavlovGameInstance_DisplayNetworkFailureMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.DisplayMessageImpl
// (Final, Native, Public)

void UPavlovGameInstance::DisplayMessageImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.DisplayMessageImpl");

	UPavlovGameInstance_DisplayMessageImpl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.DisplayMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)
// bool                           bDeferredDelay                 (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovGameInstance::DisplayMessage(const struct FString& Message, bool bDeferredDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.DisplayMessage");

	UPavlovGameInstance_DisplayMessage_Params params;
	params.Message = Message;
	params.bDeferredDelay = bDeferredDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.CreateLobby
// (Final, Native, Public, BlueprintCallable)

void UPavlovGameInstance::CreateLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.CreateLobby");

	UPavlovGameInstance_CreateLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.CreateGameSession
// (Final, Native, Public, BlueprintCallable)

void UPavlovGameInstance::CreateGameSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.CreateGameSession");

	UPavlovGameInstance_CreateGameSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.CheckPlacementStatus
// (Final, Native, Public)

void UPavlovGameInstance::CheckPlacementStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.CheckPlacementStatus");

	UPavlovGameInstance_CheckPlacementStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.CancelServerFind
// (Final, Native, Public, BlueprintCallable)

void UPavlovGameInstance::CancelServerFind()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.CancelServerFind");

	UPavlovGameInstance_CancelServerFind_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovGameInstance.CancelQuickmatch
// (Final, Native, Public, BlueprintCallable)

void UPavlovGameInstance::CancelQuickmatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovGameInstance.CancelQuickmatch");

	UPavlovGameInstance_CancelQuickmatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovItemController.UpdateUIState
// (Final, Native, Protected)

void APavlovItemController::UpdateUIState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.UpdateUIState");

	APavlovItemController_UpdateUIState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovItemController.SetWheelEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovItemController::SetWheelEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.SetWheelEnabled");

	APavlovItemController_SetWheelEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovItemController.SetMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovItemController::SetMenu(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.SetMenu");

	APavlovItemController_SetMenu_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovItemController.SetKillfeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovItemController::SetKillfeed(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.SetKillfeed");

	APavlovItemController_SetKillfeed_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovItemController.OnSelectionPicked
// (Final, Native, Protected)
// Parameters:
// class AVRItem*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovItemController::OnSelectionPicked(class AVRItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.OnSelectionPicked");

	APavlovItemController_OnSelectionPicked_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovItemController.IsTwoHandReloadEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovItemController::IsTwoHandReloadEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.IsTwoHandReloadEnabled");

	APavlovItemController_IsTwoHandReloadEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovItemController.IsTwoHandGripEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovItemController::IsTwoHandGripEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.IsTwoHandGripEnabled");

	APavlovItemController_IsTwoHandGripEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovItemController.IsMenuActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APavlovItemController::IsMenuActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.IsMenuActive");

	APavlovItemController_IsMenuActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovItemController.GetOppositeHandController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APavlovItemController*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovItemController* APavlovItemController::GetOppositeHandController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.GetOppositeHandController");

	APavlovItemController_GetOppositeHandController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovItemController.GetFingerPointLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector APavlovItemController::GetFingerPointLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.GetFingerPointLocation");

	APavlovItemController_GetFingerPointLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovItemController.ForceTwoHandGrip
// (Final, Native, Public, BlueprintCallable)

void APavlovItemController::ForceTwoHandGrip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.ForceTwoHandGrip");

	APavlovItemController_ForceTwoHandGrip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovItemController.ClearWheelInstance
// (Final, Native, Public, BlueprintCallable)

void APavlovItemController::ClearWheelInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovItemController.ClearWheelInstance");

	APavlovItemController_ClearWheelInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GhostItemController.OnPointModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EGhostPointMode                OldPointMode                   (Parm, ZeroConstructor, IsPlainOldData)

void AGhostItemController::OnPointModeChanged(EGhostPointMode OldPointMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostItemController.OnPointModeChanged");

	AGhostItemController_OnPointModeChanged_Params params;
	params.OldPointMode = OldPointMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.GhostItemController.ChangePointMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EGhostPointMode                NewPointMode                   (Parm, ZeroConstructor, IsPlainOldData)

void AGhostItemController::ChangePointMode(EGhostPointMode NewPointMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.GhostItemController.ChangePointMode");

	AGhostItemController_ChangePointMode_Params params;
	params.NewPointMode = NewPointMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.UnBoardVehicle
// (Final, Native, Public, BlueprintCallable)

void APavlovPlayerController::UnBoardVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.UnBoardVehicle");

	APavlovPlayerController_UnBoardVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.TryRestoreEquipmentBySnapshot
// (Final, Native, Public, BlueprintCallable)

void APavlovPlayerController::TryRestoreEquipmentBySnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.TryRestoreEquipmentBySnapshot");

	APavlovPlayerController_TryRestoreEquipmentBySnapshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.TestTeamKill
// (Final, Exec, Native, Public)

void APavlovPlayerController::TestTeamKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.TestTeamKill");

	APavlovPlayerController_TestTeamKill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.TakeEquipmentSnapshot
// (Final, Native, Public, BlueprintCallable)

void APavlovPlayerController::TakeEquipmentSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.TakeEquipmentSnapshot");

	APavlovPlayerController_TakeEquipmentSnapshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.SwitchToSpectator
// (Final, Native, Public, BlueprintCallable)

void APavlovPlayerController::SwitchToSpectator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.SwitchToSpectator");

	APavlovPlayerController_SwitchToSpectator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.SwitchTeam
// (Final, Exec, Native, Public, BlueprintCallable)

void APavlovPlayerController::SwitchTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.SwitchTeam");

	APavlovPlayerController_SwitchTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.SwapControllers
// (Final, Exec, Native, Public, BlueprintCallable)

void APavlovPlayerController::SwapControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.SwapControllers");

	APavlovPlayerController_SwapControllers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.Suicide
// (Final, Exec, Native, Public, BlueprintCallable)

void APavlovPlayerController::Suicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.Suicide");

	APavlovPlayerController_Suicide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.SetServerTickRate
// (Final, Exec, Native, Public)
// Parameters:
// int                            Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::SetServerTickRate(int Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.SetServerTickRate");

	APavlovPlayerController_SetServerTickRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.SetHeadMountedDisplayScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::SetHeadMountedDisplayScale(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.SetHeadMountedDisplayScale");

	APavlovPlayerController_SetHeadMountedDisplayScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.SetBuyingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ForDuration                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          BuyZoneMaxDistance             (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::SetBuyingEnabled(float ForDuration, float BuyZoneMaxDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.SetBuyingEnabled");

	APavlovPlayerController_SetBuyingEnabled_Params params;
	params.ForDuration = ForDuration;
	params.BuyZoneMaxDistance = BuyZoneMaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerVote
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class AVote*                   Vote                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bYes                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ServerVote(class AVote* Vote, bool bYes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerVote");

	APavlovPlayerController_ServerVote_Params params;
	params.Vote = Vote;
	params.bYes = bYes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerUnBoardVehicle
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void APavlovPlayerController::ServerUnBoardVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerUnBoardVehicle");

	APavlovPlayerController_ServerUnBoardVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerTestTeamKill
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void APavlovPlayerController::ServerTestTeamKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerTestTeamKill");

	APavlovPlayerController_ServerTestTeamKill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerSwitchTeam
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void APavlovPlayerController::ServerSwitchTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerSwitchTeam");

	APavlovPlayerController_ServerSwitchTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerSuicide
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void APavlovPlayerController::ServerSuicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerSuicide");

	APavlovPlayerController_ServerSuicide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerSetServerTickRate
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ServerSetServerTickRate(int Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerSetServerTickRate");

	APavlovPlayerController_ServerSetServerTickRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerReportZombieBulletHit
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FClientZombieBulletHit  Hit                            (Parm)

void APavlovPlayerController::ServerReportZombieBulletHit(const struct FClientZombieBulletHit& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerReportZombieBulletHit");

	APavlovPlayerController_ServerReportZombieBulletHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerReportVirtualStockChange
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ServerReportVirtualStockChange(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerReportVirtualStockChange");

	APavlovPlayerController_ServerReportVirtualStockChange_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerReportTrigger
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AGun*                    Gun                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTrigger                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          GunState                       (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void APavlovPlayerController::ServerReportTrigger(class AGun* Gun, bool bTrigger, TArray<unsigned char> GunState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerReportTrigger");

	APavlovPlayerController_ServerReportTrigger_Params params;
	params.Gun = Gun;
	params.bTrigger = bTrigger;
	params.GunState = GunState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerReportShatter
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class ADestructible*           Destructible                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantizeNormal Normal                         (Parm)
// struct FVector_NetQuantize     Location                       (Parm)

void APavlovPlayerController::ServerReportShatter(class ADestructible* Destructible, const struct FVector_NetQuantizeNormal& Normal, const struct FVector_NetQuantize& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerReportShatter");

	APavlovPlayerController_ServerReportShatter_Params params;
	params.Destructible = Destructible;
	params.Normal = Normal;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerReportBulletHit
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FClientBulletHit        Hit                            (Parm)

void APavlovPlayerController::ServerReportBulletHit(const struct FClientBulletHit& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerReportBulletHit");

	APavlovPlayerController_ServerReportBulletHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerInstigateVote
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class UClass*                  VoteClass                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Param1                         (Parm, ZeroConstructor)
// int                            Param2                         (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ServerInstigateVote(class UClass* VoteClass, const struct FString& Param1, int Param2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerInstigateVote");

	APavlovPlayerController_ServerInstigateVote_Params params;
	params.VoteClass = VoteClass;
	params.Param1 = Param1;
	params.Param2 = Param2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerEnterDigit
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class ABomb*                   Bomb                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ServerEnterDigit(class ABomb* Bomb, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerEnterDigit");

	APavlovPlayerController_ServerEnterDigit_Params params;
	params.Bomb = Bomb;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerBuy
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ServerBuy(const struct FName& EquipmentName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerBuy");

	APavlovPlayerController_ServerBuy_Params params;
	params.EquipmentName = EquipmentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerBoardVehicle
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class APavlovWheeledVehicle*   Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seat                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ServerBoardVehicle(class APavlovWheeledVehicle* Vehicle, int Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerBoardVehicle");

	APavlovPlayerController_ServerBoardVehicle_Params params;
	params.Vehicle = Vehicle;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerAuthenticate
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FString                 HexTicket                      (Parm, ZeroConstructor)

void APavlovPlayerController::ServerAuthenticate(const struct FString& HexTicket)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerAuthenticate");

	APavlovPlayerController_ServerAuthenticate_Params params;
	params.HexTicket = HexTicket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ServerAbstainToVote
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)

void APavlovPlayerController::ServerAbstainToVote()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ServerAbstainToVote");

	APavlovPlayerController_ServerAbstainToVote_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.PunishTeamKiller
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)

void APavlovPlayerController::PunishTeamKiller()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.PunishTeamKiller");

	APavlovPlayerController_PunishTeamKiller_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.OnAuthTimedout
// (Final, Native, Protected)

void APavlovPlayerController::OnAuthTimedout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.OnAuthTimedout");

	APavlovPlayerController_OnAuthTimedout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.OnAuthTicketReceived
// (Final, Native, Protected)
// Parameters:
// bool                           bSucceed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 HexAuthTicket                  (Parm, ZeroConstructor)

void APavlovPlayerController::OnAuthTicketReceived(bool bSucceed, const struct FString& HexAuthTicket)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.OnAuthTicketReceived");

	APavlovPlayerController_OnAuthTicketReceived_Params params;
	params.bSucceed = bSucceed;
	params.HexAuthTicket = HexAuthTicket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.MulticastDebugPoint
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FString                 Text                           (Parm, ZeroConstructor)

void APavlovPlayerController::MulticastDebugPoint(const struct FVector& Location, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.MulticastDebugPoint");

	APavlovPlayerController_MulticastDebugPoint_Params params;
	params.Location = Location;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ForgiveTeamKiller
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)

void APavlovPlayerController::ForgiveTeamKiller()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ForgiveTeamKiller");

	APavlovPlayerController_ForgiveTeamKiller_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ClientVoiceChat
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class USteamVoiceComponent*    VoiceComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FSteamworksVoicePacket  VoicePacket                    (ConstParm, Parm, ReferenceParm)

void APavlovPlayerController::ClientVoiceChat(class USteamVoiceComponent* VoiceComponent, const struct FSteamworksVoicePacket& VoicePacket)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ClientVoiceChat");

	APavlovPlayerController_ClientVoiceChat_Params params;
	params.VoiceComponent = VoiceComponent;
	params.VoicePacket = VoicePacket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ClientSetBuying
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ClientSetBuying(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ClientSetBuying");

	APavlovPlayerController_ClientSetBuying_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ClientReportMatchEnd
// (Net, NetReliable, Native, Event, Public, NetClient)

void APavlovPlayerController::ClientReportMatchEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ClientReportMatchEnd");

	APavlovPlayerController_ClientReportMatchEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ClientPlayKillPing
// (Net, Native, Event, Public, NetClient, BlueprintCallable)

void APavlovPlayerController::ClientPlayKillPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ClientPlayKillPing");

	APavlovPlayerController_ClientPlayKillPing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ClientOnTeamKilled
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class APavlovPlayerState*      CulpritTeamKiller              (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ClientOnTeamKilled(class APavlovPlayerState* CulpritTeamKiller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ClientOnTeamKilled");

	APavlovPlayerController_ClientOnTeamKilled_Params params;
	params.CulpritTeamKiller = CulpritTeamKiller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ClientInstigateFlash
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// float                          Seconds                        (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::ClientInstigateFlash(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ClientInstigateFlash");

	APavlovPlayerController_ClientInstigateFlash_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ClientDisplayMessage
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void APavlovPlayerController::ClientDisplayMessage(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ClientDisplayMessage");

	APavlovPlayerController_ClientDisplayMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.ClientAuthenticate
// (Net, NetReliable, Native, Event, Protected, NetClient)

void APavlovPlayerController::ClientAuthenticate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.ClientAuthenticate");

	APavlovPlayerController_ClientAuthenticate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.Buy
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   EquipmentName                  (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::Buy(const struct FName& EquipmentName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.Buy");

	APavlovPlayerController_Buy_Params params;
	params.EquipmentName = EquipmentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerController.BoardVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APavlovWheeledVehicle*   Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seat                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovPlayerController::BoardVehicle(class APavlovWheeledVehicle* Vehicle, int Seat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerController.BoardVehicle");

	APavlovPlayerController_BoardVehicle_Params params;
	params.Vehicle = Vehicle;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovPlayerState.Reset
// (Final, Native, Public, BlueprintCallable)

void APavlovPlayerState::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovPlayerState.Reset");

	APavlovPlayerState_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSpectatorPawn.ScrubToLive
// (Final, Native, Public, BlueprintCallable)

void APavlovSpectatorPawn::ScrubToLive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSpectatorPawn.ScrubToLive");

	APavlovSpectatorPawn_ScrubToLive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSpectatorPawn.ScrubRelative
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Seconds                        (Parm, ZeroConstructor, IsPlainOldData)

void APavlovSpectatorPawn::ScrubRelative(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSpectatorPawn.ScrubRelative");

	APavlovSpectatorPawn_ScrubRelative_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSpectatorPawn.ScrubNormalized
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NormalizedTime                 (Parm, ZeroConstructor, IsPlainOldData)

void APavlovSpectatorPawn::ScrubNormalized(float NormalizedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSpectatorPawn.ScrubNormalized");

	APavlovSpectatorPawn_ScrubNormalized_Params params;
	params.NormalizedTime = NormalizedTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSpectatorPawn.Scrub
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void APavlovSpectatorPawn::Scrub(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSpectatorPawn.Scrub");

	APavlovSpectatorPawn_Scrub_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSpectatorPawn.OnScrubChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bScrubing                      (Parm, ZeroConstructor, IsPlainOldData)

void APavlovSpectatorPawn::OnScrubChanged(bool bScrubing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSpectatorPawn.OnScrubChanged");

	APavlovSpectatorPawn_OnScrubChanged_Params params;
	params.bScrubing = bScrubing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSpectatorPawn.OnGotoTime
// (Final, Native, Private)
// Parameters:
// bool                           bWasSuccessful                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void APavlovSpectatorPawn::OnGotoTime(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSpectatorPawn.OnGotoTime");

	APavlovSpectatorPawn_OnGotoTime_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSpectatorPawn.OnDemoPlaybackError
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDemoPlayFailure>  FailureType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ErrorString                    (Parm, ZeroConstructor)

void APavlovSpectatorPawn::OnDemoPlaybackError(TEnumAsByte<EDemoPlayFailure> FailureType, const struct FString& ErrorString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSpectatorPawn.OnDemoPlaybackError");

	APavlovSpectatorPawn_OnDemoPlaybackError_Params params;
	params.FailureType = FailureType;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovSpectatorPawn.GetNormalizedScrubTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APavlovSpectatorPawn::GetNormalizedScrubTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovSpectatorPawn.GetNormalizedScrubTime");

	APavlovSpectatorPawn_GetNormalizedScrubTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.SwapHands
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovStatics::STATIC_SwapHands(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.SwapHands");

	UPavlovStatics_SwapHands_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovStatics.SpawnLocalSound2DByPawn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovStatics::STATIC_SpawnLocalSound2DByPawn(class APawn* Pawn, class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.SpawnLocalSound2DByPawn");

	UPavlovStatics_SpawnLocalSound2DByPawn_Params params;
	params.Pawn = Pawn;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovStatics.SpawnLocalSound2D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovStatics::STATIC_SpawnLocalSound2D(class APlayerController* Controller, class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.SpawnLocalSound2D");

	UPavlovStatics_SpawnLocalSound2D_Params params;
	params.Controller = Controller;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovStatics.SetPlayerEffectsDisabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisabled                      (Parm, ZeroConstructor, IsPlainOldData)

void UPavlovStatics::STATIC_SetPlayerEffectsDisabled(class UObject* WorldContextObject, bool bDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.SetPlayerEffectsDisabled");

	UPavlovStatics_SetPlayerEffectsDisabled_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bDisabled = bDisabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PavlovStatics.IsReplay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovStatics::STATIC_IsReplay(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.IsReplay");

	UPavlovStatics_IsReplay_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.IsPlayingOnlineGame
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovStatics::STATIC_IsPlayingOnlineGame(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.IsPlayingOnlineGame");

	UPavlovStatics_IsPlayingOnlineGame_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.IsOculusTouch
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovStatics::STATIC_IsOculusTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.IsOculusTouch");

	UPavlovStatics_IsOculusTouch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.IsBombDropped
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovStatics::STATIC_IsBombDropped(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.IsBombDropped");

	UPavlovStatics_IsBombDropped_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetWorkshop
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UWorkshop*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorkshop* UPavlovStatics::STATIC_GetWorkshop(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetWorkshop");

	UPavlovStatics_GetWorkshop_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetTutorial
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UTutorial*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTutorial* UPavlovStatics::STATIC_GetTutorial(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetTutorial");

	UPavlovStatics_GetTutorial_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetSpectatorTVCamera
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ASpectatorTVCamera*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASpectatorTVCamera* UPavlovStatics::STATIC_GetSpectatorTVCamera(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetSpectatorTVCamera");

	UPavlovStatics_GetSpectatorTVCamera_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetPlayerEquipment
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Primary                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Secondary                      (Parm, OutParm, ZeroConstructor)

void UPavlovStatics::STATIC_GetPlayerEquipment(class APlayerState* PlayerState, struct FName* Primary, TArray<struct FName>* Secondary)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetPlayerEquipment");

	UPavlovStatics_GetPlayerEquipment_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Primary != nullptr)
		*Primary = params.Primary;
	if (Secondary != nullptr)
		*Secondary = params.Secondary;
}


// Function Pavlov.PavlovStatics.GetPlayerEffects
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AGlobalPlayerEffects*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGlobalPlayerEffects* UPavlovStatics::STATIC_GetPlayerEffects(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetPlayerEffects");

	UPavlovStatics_GetPlayerEffects_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetPawnByPlayerState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPawn*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovPawn* UPavlovStatics::STATIC_GetPawnByPlayerState(class UObject* WorldContextObject, class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetPawnByPlayerState");

	UPavlovStatics_GetPawnByPlayerState_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetPavlovLobby
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UPavlovLobby*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPavlovLobby* UPavlovStatics::STATIC_GetPavlovLobby(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetPavlovLobby");

	UPavlovStatics_GetPavlovLobby_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetPavlovGameUserSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPavlovGameUserSettings* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPavlovGameUserSettings* UPavlovStatics::STATIC_GetPavlovGameUserSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetPavlovGameUserSettings");

	UPavlovStatics_GetPavlovGameUserSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetLocalPlayerState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPlayerState*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovPlayerState* UPavlovStatics::STATIC_GetLocalPlayerState(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetLocalPlayerState");

	UPavlovStatics_GetLocalPlayerState_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetLocalPlayerCameraTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UPavlovStatics::STATIC_GetLocalPlayerCameraTransform(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetLocalPlayerCameraTransform");

	UPavlovStatics_GetLocalPlayerCameraTransform_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.GetBombInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ABomb*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABomb* UPavlovStatics::STATIC_GetBombInstance(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.GetBombInstance");

	UPavlovStatics_GetBombInstance_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.FindClosestBombPlantSpot
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RefLocation                    (Parm, IsPlainOldData)
// class ABombPlantSpot*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABombPlantSpot* UPavlovStatics::STATIC_FindClosestBombPlantSpot(class UObject* WorldContextObject, const struct FVector& RefLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.FindClosestBombPlantSpot");

	UPavlovStatics_FindClosestBombPlantSpot_Params params;
	params.WorldContextObject = WorldContextObject;
	params.RefLocation = RefLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovStatics.ArePawnsHostile
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   A                              (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   B                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPavlovStatics::STATIC_ArePawnsHostile(class UObject* WorldContextObject, class APawn* A, class APawn* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovStatics.ArePawnsHostile");

	UPavlovStatics_ArePawnsHostile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.PavlovWheeledVehicle.SetSteeringInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Input                          (Parm, ZeroConstructor, IsPlainOldData)

void APavlovWheeledVehicle::SetSteeringInput(float Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PavlovWheeledVehicle.SetSteeringInput");

	APavlovWheeledVehicle_SetSteeringInput_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.PlayerCycler.GetNext
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APavlovPlayerState*      PlayerState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class APavlovPawn*             Pawn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerCycler::GetNext(class APavlovPlayerState** PlayerState, class APavlovPawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.PlayerCycler.GetNext");

	UPlayerCycler_GetNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerState != nullptr)
		*PlayerState = params.PlayerState;
	if (Pawn != nullptr)
		*Pawn = params.Pawn;
}


// Function Pavlov.Pliers.ServerReportCut
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class ABomb*                   Bomb                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            WireIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void APliers::ServerReportCut(class ABomb* Bomb, int WireIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Pliers.ServerReportCut");

	APliers_ServerReportCut_Params params;
	params.Bomb = Bomb;
	params.WireIndex = WireIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Pliers.MulticastOnCut
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void APliers::MulticastOnCut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Pliers.MulticastOnCut");

	APliers_MulticastOnCut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Rat.OnRevive
// (Final, Native, Private)
// Parameters:
// class AActor*                  ActorOwner                     (Parm, ZeroConstructor, IsPlainOldData)

void ARat::OnRevive(class AActor* ActorOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Rat.OnRevive");

	ARat_OnRevive_Params params;
	params.ActorOwner = ActorOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Rat.OnKill
// (Final, Native, Private)
// Parameters:
// class AActor*                  ActorOwner                     (Parm, ZeroConstructor, IsPlainOldData)

void ARat::OnKill(class AActor* ActorOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Rat.OnKill");

	ARat_OnKill_Params params;
	params.ActorOwner = ActorOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Rat.ApplyImpact
// (Final, Native, Public, BlueprintCallable)

void ARat::ApplyImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Rat.ApplyImpact");

	ARat_ApplyImpact_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ReplayManager.PlayReplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReplayId                       (Parm, ZeroConstructor)

void UReplayManager::PlayReplay(const struct FString& ReplayId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ReplayManager.PlayReplay");

	UReplayManager_PlayReplay_Params params;
	params.ReplayId = ReplayId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ReplayManager.OnCustomMapDownloaded
// (Final, Native, Protected)
// Parameters:
// bool                           bSucceed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ID                             (Parm, ZeroConstructor)

void UReplayManager::OnCustomMapDownloaded(bool bSucceed, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ReplayManager.OnCustomMapDownloaded");

	UReplayManager_OnCustomMapDownloaded_Params params;
	params.bSucceed = bSucceed;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.ReplayManager.Find
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 GameMode                       (Parm, ZeroConstructor)
// bool                           bCompetitive                   (Parm, ZeroConstructor, IsPlainOldData)

void UReplayManager::Find(const struct FString& GameMode, bool bCompetitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ReplayManager.Find");

	UReplayManager_Find_Params params;
	params.GameMode = GameMode;
	params.bCompetitive = bCompetitive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.RevolverGunState.SetCylinder
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bOpen                          (Parm, ZeroConstructor, IsPlainOldData)

void URevolverGunState::SetCylinder(bool bOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.RevolverGunState.SetCylinder");

	URevolverGunState_SetCylinder_Params params;
	params.bOpen = bOpen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.SkinComponent.RequestSkin
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class USkinAsset*              RequestedSkin                  (Parm, ZeroConstructor, IsPlainOldData)

void USkinComponent::RequestSkin(class USkinAsset* RequestedSkin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SkinComponent.RequestSkin");

	USkinComponent_RequestSkin_Params params;
	params.RequestedSkin = RequestedSkin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.SkinComponent.OnRep_Skin
// (Final, Native, Private)

void USkinComponent::OnRep_Skin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SkinComponent.OnRep_Skin");

	USkinComponent_OnRep_Skin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.SpectatorTag.OnFadeOut
// (Event, Public, BlueprintEvent)

void ASpectatorTag::OnFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SpectatorTag.OnFadeOut");

	ASpectatorTag_OnFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.SpectatorTag.GetPlayerState
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APavlovPlayerState*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APavlovPlayerState* ASpectatorTag::GetPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SpectatorTag.GetPlayerState");

	ASpectatorTag_GetPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.SpectatorTVCamera.OnAttachedToFocusedPawn
// (Event, Public, BlueprintEvent)

void ASpectatorTVCamera::OnAttachedToFocusedPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SpectatorTVCamera.OnAttachedToFocusedPawn");

	ASpectatorTVCamera_OnAttachedToFocusedPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.SpectatorTVCamera.GetSceneCapture
// (Event, Public, BlueprintEvent)
// Parameters:
// class USceneCaptureComponent2D* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneCaptureComponent2D* ASpectatorTVCamera::GetSceneCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SpectatorTVCamera.GetSceneCapture");

	ASpectatorTVCamera_GetSceneCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.SpectatorTVCamera.Cycle
// (Final, Native, Public, BlueprintCallable)

void ASpectatorTVCamera::Cycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SpectatorTVCamera.Cycle");

	ASpectatorTVCamera_Cycle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.SpectatorTVCamera.AddYawInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ASpectatorTVCamera::AddYawInput(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.SpectatorTVCamera.AddYawInput");

	ASpectatorTVCamera_AddYawInput_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Killfeed.Show
// (Final, Native, Public, BlueprintCallable)

void AKillfeed::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Killfeed.Show");

	AKillfeed_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Killfeed.OnDisplayModeUpdated
// (Event, Public, BlueprintEvent)

void AKillfeed::OnDisplayModeUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Killfeed.OnDisplayModeUpdated");

	AKillfeed_OnDisplayModeUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Killfeed.Hide
// (Final, Native, Public, BlueprintCallable)

void AKillfeed::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Killfeed.Hide");

	AKillfeed_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Vote.OnVoteEnded
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bSucceeded                     (Parm, ZeroConstructor, IsPlainOldData)

void AVote::OnVoteEnded(bool bSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Vote.OnVoteEnded");

	AVote_OnVoteEnded_Params params;
	params.bSucceeded = bSucceeded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Vote.MulticastOnVoteEnded
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           bSucceeded                     (Parm, ZeroConstructor, IsPlainOldData)

void AVote::MulticastOnVoteEnded(bool bSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Vote.MulticastOnVoteEnded");

	AVote_MulticastOnVoteEnded_Params params;
	params.bSucceeded = bSucceeded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Watch.OnKillfeedEntry
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FKillfeedEntry          NewEntry                       (ConstParm, Parm, OutParm, ReferenceParm)

void UWatch::OnKillfeedEntry(const struct FKillfeedEntry& NewEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Watch.OnKillfeedEntry");

	UWatch_OnKillfeedEntry_Params params;
	params.NewEntry = NewEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Watch.OnKillConfirmationPush
// (Event, Public, BlueprintEvent)
// Parameters:
// class APavlovPlayerState*      Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void UWatch::OnKillConfirmationPush(class APavlovPlayerState* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Watch.OnKillConfirmationPush");

	UWatch_OnKillConfirmationPush_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Watch.GetWatchAttachComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UWatch::GetWatchAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Watch.GetWatchAttachComponent");

	UWatch_GetWatchAttachComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.ToolTip.GetFadeScalar
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AToolTip::GetFadeScalar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.ToolTip.GetFadeScalar");

	AToolTip_GetFadeScalar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Tutorial.TerminateToolTip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UTutorial::TerminateToolTip(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Tutorial.TerminateToolTip");

	UTutorial_TerminateToolTip_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Tutorial.ShowToolTip
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ContextLocation                (Parm, IsPlainOldData)

void UTutorial::ShowToolTip(const struct FName& ID, class UObject* Context, const struct FVector& ContextLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Tutorial.ShowToolTip");

	UTutorial_ShowToolTip_Params params;
	params.ID = ID;
	params.Context = Context;
	params.ContextLocation = ContextLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Tutorial.Reset
// (Final, Native, Public, BlueprintCallable)

void UTutorial::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Tutorial.Reset");

	UTutorial_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Tutorial.MarkToolTipAsComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UTutorial::MarkToolTipAsComplete(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Tutorial.MarkToolTipAsComplete");

	UTutorial_MarkToolTipAsComplete_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Tutorial.IsToolTipCompleted
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ID                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTutorial::IsToolTipCompleted(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Tutorial.IsToolTipCompleted");

	UTutorial_IsToolTipCompleted_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Tutorial.GetToolTipInstanceCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTutorial::GetToolTipInstanceCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Tutorial.GetToolTipInstanceCount");

	UTutorial_GetToolTipInstanceCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.UberWheel.UpdateSegments
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FWheelSegment>   NewSegments                    (Parm, ZeroConstructor)

void AUberWheel::UpdateSegments(TArray<struct FWheelSegment> NewSegments)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UberWheel.UpdateSegments");

	AUberWheel_UpdateSegments_Params params;
	params.NewSegments = NewSegments;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UberWheel.SetEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AUberWheel::SetEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UberWheel.SetEnabled");

	AUberWheel_SetEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UberWheel.OnUpdateSegment
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FWheelSegment           Segment                        (Parm, OutParm)
// class UUserWidget*             Instance                       (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             ContentInstance                (Parm, ZeroConstructor, IsPlainOldData)

void AUberWheel::OnUpdateSegment(class UUserWidget* Instance, class UUserWidget* ContentInstance, struct FWheelSegment* Segment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UberWheel.OnUpdateSegment");

	AUberWheel_OnUpdateSegment_Params params;
	params.Instance = Instance;
	params.ContentInstance = ContentInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Segment != nullptr)
		*Segment = params.Segment;
}


// Function Pavlov.UberWheel.OnEnabled
// (Event, Public, BlueprintEvent)

void AUberWheel::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UberWheel.OnEnabled");

	AUberWheel_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UberWheel.OnCommit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            Selection                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FWheelSegment           Segment                        (ConstParm, Parm, OutParm, ReferenceParm)

void AUberWheel::OnCommit(int Selection, const struct FWheelSegment& Segment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UberWheel.OnCommit");

	AUberWheel_OnCommit_Params params;
	params.Selection = Selection;
	params.Segment = Segment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.UberWheel.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUberWheel::IsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.UberWheel.IsEnabled");

	AUberWheel_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Waypoint.GetNextWaypointTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWaypoint*               TargetWaypoint                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// class AWaypoint*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWaypoint* AWaypoint::GetNextWaypointTo(class AWaypoint* TargetWaypoint, int Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Waypoint.GetNextWaypointTo");

	AWaypoint_GetNextWaypointTo_Params params;
	params.TargetWaypoint = TargetWaypoint;
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Waypoint.GetClosestWaypoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// bool                           bOnlyLeaf                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseNavMesh                    (Parm, ZeroConstructor, IsPlainOldData)
// class AWaypoint*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWaypoint* AWaypoint::STATIC_GetClosestWaypoint(class UObject* WorldContextObject, const struct FVector& Location, bool bOnlyLeaf, bool bUseNavMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Waypoint.GetClosestWaypoint");

	AWaypoint_GetClosestWaypoint_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.bOnlyLeaf = bOnlyLeaf;
	params.bUseNavMesh = bUseNavMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Workshop.Vote
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUp                            (Parm, ZeroConstructor, IsPlainOldData)

void UWorkshop::Vote(const struct FName& ID, bool bUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.Vote");

	UWorkshop_Vote_Params params;
	params.ID = ID;
	params.bUp = bUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Workshop.Unsubscribe
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWorkshop::Unsubscribe(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.Unsubscribe");

	UWorkshop_Unsubscribe_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Workshop.SubscribeTo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWorkshop::SubscribeTo(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.SubscribeTo");

	UWorkshop_SubscribeTo_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Workshop.RequestUserVote
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UWorkshop::RequestUserVote(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.RequestUserVote");

	UWorkshop_RequestUserVote_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Workshop.QueryForSpecificCustomMaps
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FName>           UniqueIds                      (Parm, ZeroConstructor)

void UWorkshop::QueryForSpecificCustomMaps(TArray<struct FName> UniqueIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.QueryForSpecificCustomMaps");

	UWorkshop_QueryForSpecificCustomMaps_Params params;
	params.UniqueIds = UniqueIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Workshop.QueryForCustomMaps
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// EWorkshopQueryType             QueryType                      (Parm, ZeroConstructor, IsPlainOldData)

void UWorkshop::QueryForCustomMaps(EWorkshopQueryType QueryType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.QueryForCustomMaps");

	UWorkshop_QueryForCustomMaps_Params params;
	params.QueryType = QueryType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Workshop.QueryDownloadProgress
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWorkshop::QueryDownloadProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.QueryDownloadProgress");

	UWorkshop_QueryDownloadProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Workshop.OnCustomMapDownloaded
// (Final, Native, Private)
// Parameters:
// bool                           bSucceed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ID                             (Parm, ZeroConstructor)

void UWorkshop::OnCustomMapDownloaded(bool bSucceed, const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.OnCustomMapDownloaded");

	UWorkshop_OnCustomMapDownloaded_Params params;
	params.bSucceed = bSucceed;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Workshop.OnAfterMount
// (Final, Native, Private)

void UWorkshop::OnAfterMount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.OnAfterMount");

	UWorkshop_OnAfterMount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Workshop.IsSubscribedTo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ID                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWorkshop::IsSubscribedTo(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.IsSubscribedTo");

	UWorkshop_IsSubscribedTo_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Workshop.IsCustomMapId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 CustomMapId                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWorkshop::IsCustomMapId(const struct FString& CustomMapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.IsCustomMapId");

	UWorkshop_IsCustomMapId_Params params;
	params.CustomMapId = CustomMapId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Workshop.GetPreviewTexture
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ID                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UWorkshop::GetPreviewTexture(const struct FName& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.GetPreviewTexture");

	UWorkshop_GetPreviewTexture_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Workshop.GetCurrentDownloadId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UWorkshop::GetCurrentDownloadId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.GetCurrentDownloadId");

	UWorkshop_GetCurrentDownloadId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Workshop.DownloadTest
// (Final, Native, Private)

void UWorkshop::DownloadTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.DownloadTest");

	UWorkshop_DownloadTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Workshop.DownloadCustomMap
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)

void UWorkshop::DownloadCustomMap(const struct FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.DownloadCustomMap");

	UWorkshop_DownloadCustomMap_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Workshop.CheckForDownload
// (Final, Native, Private)

void UWorkshop::CheckForDownload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Workshop.CheckForDownload");

	UWorkshop_CheckForDownload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Zombie.Revive
// (Final, Native, Public, BlueprintCallable)

void AZombie::Revive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Zombie.Revive");

	AZombie_Revive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Zombie.OnRep_Health
// (Final, Native, Private)

void AZombie::OnRep_Health()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Zombie.OnRep_Health");

	AZombie_OnRep_Health_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Zombie.OnRep_Dead
// (Final, Native, Private)

void AZombie::OnRep_Dead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Zombie.OnRep_Dead");

	AZombie_OnRep_Dead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Zombie.Kill
// (Final, Native, Public, BlueprintCallable)

void AZombie::Kill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Zombie.Kill");

	AZombie_Kill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pavlov.Zombie.IsDead
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AZombie::IsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Zombie.IsDead");

	AZombie_IsDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pavlov.Zombie.AddWound
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// EZombieWoundType               Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RefBone                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void AZombie::AddWound(EZombieWoundType Type, const struct FName& RefBone, const struct FVector& Location, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pavlov.Zombie.AddWound");

	AZombie_AddWound_Params params;
	params.Type = Type;
	params.RefBone = RefBone;
	params.Location = Location;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
