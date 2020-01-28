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

// Function Z.AIDamageComponent.SetCanTakeDamage
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// bool                           InCanTakeDamage                (Parm, ZeroConstructor, IsPlainOldData)

void UAIDamageComponent::SetCanTakeDamage(bool InCanTakeDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDamageComponent.SetCanTakeDamage");

	UAIDamageComponent_SetCanTakeDamage_Params params;
	params.InCanTakeDamage = InCanTakeDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDamageComponent.ResetDamageComponent
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// bool                           toState                        (Parm, ZeroConstructor, IsPlainOldData)

void UAIDamageComponent::ResetDamageComponent(bool toState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDamageComponent.ResetDamageComponent");

	UAIDamageComponent_ResetDamageComponent_Params params;
	params.toState = toState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDamageComponent.OnRep_CanTakeDamage
// (Final, Native, Private)

void UAIDamageComponent::OnRep_CanTakeDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDamageComponent.OnRep_CanTakeDamage");

	UAIDamageComponent_OnRep_CanTakeDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDamageComponent.MulticastDamageAplied
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// struct FAIDamageResult         DamageResult                   (ConstParm, Parm, ReferenceParm)

void UAIDamageComponent::MulticastDamageAplied(const struct FAIDamageResult& DamageResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDamageComponent.MulticastDamageAplied");

	UAIDamageComponent_MulticastDamageAplied_Params params;
	params.DamageResult = DamageResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDamageComponent.IncomingDamage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FAIDamageResult         DamageResult                   (ConstParm, Parm, OutParm, ReferenceParm)

void UAIDamageComponent::IncomingDamage(const struct FAIDamageResult& DamageResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDamageComponent.IncomingDamage");

	UAIDamageComponent_IncomingDamage_Params params;
	params.DamageResult = DamageResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDamageComponent.GetCanTakeDamage
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIDamageComponent::GetCanTakeDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDamageComponent.GetCanTakeDamage");

	UAIDamageComponent_GetCanTakeDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.AIDamageComponent.ApplyDamage
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// struct FAIDamageResult         DamageResult                   (ConstParm, Parm, ReferenceParm)

void UAIDamageComponent::ApplyDamage(const struct FAIDamageResult& DamageResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDamageComponent.ApplyDamage");

	UAIDamageComponent_ApplyDamage_Params params;
	params.DamageResult = DamageResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDamageComponentInterface.GetAIDamageComponent
// (Native, Public, Const)
// Parameters:
// class UAIDamageComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIDamageComponent* UAIDamageComponentInterface::GetAIDamageComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDamageComponentInterface.GetAIDamageComponent");

	UAIDamageComponentInterface_GetAIDamageComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.AIDirector.UpdateDynamicNavLinks
// (Final, Native, Private)

void AAIDirector::UpdateDynamicNavLinks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDirector.UpdateDynamicNavLinks");

	AAIDirector_UpdateDynamicNavLinks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDirector.TrickleOutAI_OverTime
// (Final, Native, Public, BlueprintCallable)

void AAIDirector::TrickleOutAI_OverTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDirector.TrickleOutAI_OverTime");

	AAIDirector_TrickleOutAI_OverTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDirector.TrickleOutAI_OnDeath
// (Final, Native, Public, BlueprintCallable)

void AAIDirector::TrickleOutAI_OnDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDirector.TrickleOutAI_OnDeath");

	AAIDirector_TrickleOutAI_OnDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDirector.TrickleOut_AndKill
// (Final, Native, Public)

void AAIDirector::TrickleOut_AndKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDirector.TrickleOut_AndKill");

	AAIDirector_TrickleOut_AndKill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDirector.TrickleInAI
// (Final, Native, Public, BlueprintCallable)

void AAIDirector::TrickleInAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDirector.TrickleInAI");

	AAIDirector_TrickleInAI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDirector.TrickleIn
// (Final, Native, Public)

void AAIDirector::TrickleIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDirector.TrickleIn");

	AAIDirector_TrickleIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDirector.SetDirectorMode
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          TrickleTimeIn                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            NumberOfDesiredActiveAI        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// EAIDirectorMode                NewDirectorState               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// EAISetDirectorResponse         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAISetDirectorResponse AAIDirector::SetDirectorMode(float TrickleTimeIn, int NumberOfDesiredActiveAI, EAIDirectorMode NewDirectorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDirector.SetDirectorMode");

	AAIDirector_SetDirectorMode_Params params;
	params.TrickleTimeIn = TrickleTimeIn;
	params.NumberOfDesiredActiveAI = NumberOfDesiredActiveAI;
	params.NewDirectorState = NewDirectorState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.AIDirector.SetALLAiPooled
// (Final, Native, Public, BlueprintCallable)

void AAIDirector::SetALLAiPooled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDirector.SetALLAiPooled");

	AAIDirector_SetALLAiPooled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDirector.SetAllAIActive
// (Final, Native, Public, BlueprintCallable)

void AAIDirector::SetAllAIActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDirector.SetAllAIActive");

	AAIDirector_SetAllAIActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDirector.SetAIPoolAmount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewPoolAmount                  (Parm, ZeroConstructor, IsPlainOldData)

void AAIDirector::SetAIPoolAmount(int NewPoolAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDirector.SetAIPoolAmount");

	AAIDirector_SetAIPoolAmount_Params params;
	params.NewPoolAmount = NewPoolAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDirector.PopulateNeighborGroups
// (Final, Native, Private)

void AAIDirector::PopulateNeighborGroups()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDirector.PopulateNeighborGroups");

	AAIDirector_PopulateNeighborGroups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDirector.K2_SetPlayersInPlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class ACharacter*>      ListOfPlayersInPlay            (ConstParm, Parm, ZeroConstructor)

void AAIDirector::K2_SetPlayersInPlay(TArray<class ACharacter*> ListOfPlayersInPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDirector.K2_SetPlayersInPlay");

	AAIDirector_K2_SetPlayersInPlay_Params params;
	params.ListOfPlayersInPlay = ListOfPlayersInPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDirector.K2_RemovePlayersInPlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class ACharacter*>      ListOfPlayersToRemove          (ConstParm, Parm, ZeroConstructor)

void AAIDirector::K2_RemovePlayersInPlay(TArray<class ACharacter*> ListOfPlayersToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDirector.K2_RemovePlayersInPlay");

	AAIDirector_K2_RemovePlayersInPlay_Params params;
	params.ListOfPlayersToRemove = ListOfPlayersToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDirector.K2_RemoveAPlayerInPlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ACharacter*              PlayerToRemove                 (Parm, ZeroConstructor, IsPlainOldData)

void AAIDirector::K2_RemoveAPlayerInPlay(class ACharacter* PlayerToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDirector.K2_RemoveAPlayerInPlay");

	AAIDirector_K2_RemoveAPlayerInPlay_Params params;
	params.PlayerToRemove = PlayerToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDirector.K2_AddPlayerToPlayList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ACharacter*              PlayerToAdd                    (Parm, ZeroConstructor, IsPlainOldData)

void AAIDirector::K2_AddPlayerToPlayList(class ACharacter* PlayerToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDirector.K2_AddPlayerToPlayList");

	AAIDirector_K2_AddPlayerToPlayList_Params params;
	params.PlayerToAdd = PlayerToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDirector.InitAIPool
// (Final, Native, Public, BlueprintCallable)

void AAIDirector::InitAIPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDirector.InitAIPool");

	AAIDirector_InitAIPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AIDirector.GetVersion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AAIDirector::GetVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDirector.GetVersion");

	AAIDirector_GetVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.AIDirector.GetAIPoolAmount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AAIDirector::GetAIPoolAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDirector.GetAIPoolAmount");

	AAIDirector_GetAIPoolAmount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.AIDirector.CreateAIPawnAtLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              SpawnLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AAIDirector::CreateAIPawnAtLocation(const struct FTransform& SpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDirector.CreateAIPawnAtLocation");

	AAIDirector_CreateAIPawnAtLocation_Params params;
	params.SpawnLocation = SpawnLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.AIDirector.AIWasKilled
// (Final, Native, Public)
// Parameters:
// class AZAICharacter*           KilledAI                       (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            KillerPlayerState              (Parm, ZeroConstructor, IsPlainOldData)

void AAIDirector::AIWasKilled(class AZAICharacter* KilledAI, class APlayerState* KillerPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AIDirector.AIWasKilled");

	AAIDirector_AIWasKilled_Params params;
	params.KilledAI = KilledAI;
	params.KillerPlayerState = KillerPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AISlotManager.SetNumberOfMaxAISlots
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            NumberOfslots                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UAISlotManager::SetNumberOfMaxAISlots(int NumberOfslots)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AISlotManager.SetNumberOfMaxAISlots");

	UAISlotManager_SetNumberOfMaxAISlots_Params params;
	params.NumberOfslots = NumberOfslots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AISlotManager.SetIsValidTarget
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           IsValid                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UAISlotManager::SetIsValidTarget(bool IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AISlotManager.SetIsValidTarget");

	UAISlotManager_SetIsValidTarget_Params params;
	params.IsValid = IsValid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.AISlotManager.RemoveAICharacterFromSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAISlotManager::RemoveAICharacterFromSlot(class AActor* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AISlotManager.RemoveAICharacterFromSlot");

	UAISlotManager_RemoveAICharacterFromSlot_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.AISlotManager.IsValidTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAISlotManager::IsValidTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AISlotManager.IsValidTarget");

	UAISlotManager_IsValidTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.AISlotManager.IsActorInSlots
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAISlotManager::IsActorInSlots(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AISlotManager.IsActorInSlots");

	UAISlotManager_IsActorInSlots_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.AISlotManager.HasEmptySlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAISlotManager::HasEmptySlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AISlotManager.HasEmptySlot");

	UAISlotManager_HasEmptySlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.AISlotManager.GetNumberOfActiveSlots
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAISlotManager::GetNumberOfActiveSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AISlotManager.GetNumberOfActiveSlots");

	UAISlotManager_GetNumberOfActiveSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.AISlotManager.GetMaxNumberOfAISlots
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAISlotManager::GetMaxNumberOfAISlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AISlotManager.GetMaxNumberOfAISlots");

	UAISlotManager_GetMaxNumberOfAISlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.AISlotManager.AssignSlotToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UAISlotManager::AssignSlotToActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.AISlotManager.AssignSlotToActor");

	UAISlotManager_AssignSlotToActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.BaseAICharacter.GetMovementDirection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovementDirection      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMovementDirection ABaseAICharacter::GetMovementDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.BaseAICharacter.GetMovementDirection");

	ABaseAICharacter_GetMovementDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.ProxyPlayerCharacter.ReviveCharacter
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)

void AProxyPlayerCharacter::ReviveCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ProxyPlayerCharacter.ReviveCharacter");

	AProxyPlayerCharacter_ReviveCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.QueryContext_AllPlayers.ProvideActorsSet
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ResultingActorSet              (Parm, OutParm, ZeroConstructor)

void UQueryContext_AllPlayers::ProvideActorsSet(class UObject* QuerierObject, TArray<class AActor*>* ResultingActorSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.QueryContext_AllPlayers.ProvideActorsSet");

	UQueryContext_AllPlayers_ProvideActorsSet_Params params;
	params.QuerierObject = QuerierObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultingActorSet != nullptr)
		*ResultingActorSet = params.ResultingActorSet;
}


// Function Z.QueryContext_PlayerContext.ProvideSingleActor
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ResultingActor                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQueryContext_PlayerContext::ProvideSingleActor(class UObject* QuerierObject, class AActor** ResultingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.QueryContext_PlayerContext.ProvideSingleActor");

	UQueryContext_PlayerContext_ProvideSingleActor_Params params;
	params.QuerierObject = QuerierObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultingActor != nullptr)
		*ResultingActor = params.ResultingActor;
}


// Function Z.RoundInterface.ResetToDefaultState
// (Event, Public, BlueprintEvent)

void URoundInterface::ResetToDefaultState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.RoundInterface.ResetToDefaultState");

	URoundInterface_ResetToDefaultState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.SlotSystemInterface.GetPlayerSlotManager
// (Native, Public, Const)
// Parameters:
// class UAISlotManager*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAISlotManager* USlotSystemInterface::GetPlayerSlotManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.SlotSystemInterface.GetPlayerSlotManager");

	USlotSystemInterface_GetPlayerSlotManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.ZAICharacter.SetSprinting
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           inIsSprinting                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AZAICharacter::SetSprinting(bool inIsSprinting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.SetSprinting");

	AZAICharacter_SetSprinting_Params params;
	params.inIsSprinting = inIsSprinting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.SetKnockBackState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EZKnockBackState               NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AZAICharacter::SetKnockBackState(EZKnockBackState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.SetKnockBackState");

	AZAICharacter_SetKnockBackState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.SetClimbing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EAIClimbingState               inIsClimbing                   (Parm, ZeroConstructor, IsPlainOldData)

void AZAICharacter::SetClimbing(EAIClimbingState inIsClimbing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.SetClimbing");

	AZAICharacter_SetClimbing_Params params;
	params.inIsClimbing = inIsClimbing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.SetCanSprint
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           inCanSprint                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AZAICharacter::SetCanSprint(bool inCanSprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.SetCanSprint");

	AZAICharacter_SetCanSprint_Params params;
	params.inCanSprint = inCanSprint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.SetAttackState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EAIAttackState                 AttackingState                 (Parm, ZeroConstructor, IsPlainOldData)

void AZAICharacter::SetAttackState(EAIAttackState AttackingState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.SetAttackState");

	AZAICharacter_SetAttackState_Params params;
	params.AttackingState = AttackingState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.ReEnableMovement
// (Final, Native, Private)

void AZAICharacter::ReEnableMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.ReEnableMovement");

	AZAICharacter_ReEnableMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.OnRep_Target
// (Final, Native, Public)

void AZAICharacter::OnRep_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.OnRep_Target");

	AZAICharacter_OnRep_Target_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.OnRep_Sprint
// (Final, Native, Public)

void AZAICharacter::OnRep_Sprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.OnRep_Sprint");

	AZAICharacter_OnRep_Sprint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.OnRep_Climb
// (Final, Native, Public)

void AZAICharacter::OnRep_Climb()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.OnRep_Climb");

	AZAICharacter_OnRep_Climb_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.OnRep_bIsDead
// (Native, Public)

void AZAICharacter::OnRep_bIsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.OnRep_bIsDead");

	AZAICharacter_OnRep_bIsDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.OnRep_Attacking
// (Final, Native, Public)

void AZAICharacter::OnRep_Attacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.OnRep_Attacking");

	AZAICharacter_OnRep_Attacking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.OnRep_AIControllerState
// (Final, Native, Public)

void AZAICharacter::OnRep_AIControllerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.OnRep_AIControllerState");

	AZAICharacter_OnRep_AIControllerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.OnMontangeStarted
// (Final, Native, Private)
// Parameters:
// class UAnimMontage*            Montange                       (Parm, ZeroConstructor, IsPlainOldData)

void AZAICharacter::OnMontangeStarted(class UAnimMontage* Montange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.OnMontangeStarted");

	AZAICharacter_OnMontangeStarted_Params params;
	params.Montange = Montange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.OnMontangeEnded
// (Final, Native, Private)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)

void AZAICharacter::OnMontangeEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.OnMontangeEnded");

	AZAICharacter_OnMontangeEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.OnAnimInit
// (Final, Native, Private)

void AZAICharacter::OnAnimInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.OnAnimInit");

	AZAICharacter_OnAnimInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.NewTargetSelected
// (Final, Native, Public)
// Parameters:
// class AActor*                  NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAISlotManager*          SlotManager                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AZAICharacter::NewTargetSelected(class AActor* NewTarget, class UAISlotManager* SlotManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.NewTargetSelected");

	AZAICharacter_NewTargetSelected_Params params;
	params.NewTarget = NewTarget;
	params.SlotManager = SlotManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.MulticastKnockBack
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// EZKnockBackDirection           Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Flags                          (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             bY                             (Parm, ZeroConstructor, IsPlainOldData)

void AZAICharacter::MulticastKnockBack(EZKnockBackDirection Direction, unsigned char Flags, class AController* bY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.MulticastKnockBack");

	AZAICharacter_MulticastKnockBack_Params params;
	params.Direction = Direction;
	params.Flags = Flags;
	params.bY = bY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.KnockBack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EZKnockBackDirection           Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void AZAICharacter::KnockBack(EZKnockBackDirection Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.KnockBack");

	AZAICharacter_KnockBack_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.K2_KillAI
// (Final, Native, Public, BlueprintCallable)

void AZAICharacter::K2_KillAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.K2_KillAI");

	AZAICharacter_K2_KillAI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.GetTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AZAICharacter::GetTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.GetTarget");

	AZAICharacter_GetTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.ZAICharacter.GetSprinting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AZAICharacter::GetSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.GetSprinting");

	AZAICharacter_GetSprinting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.ZAICharacter.GetMeshAndAnimInstance
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           SkeletalMesh                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  AnimInstance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AZAICharacter::GetMeshAndAnimInstance(int Index, class USkeletalMesh** SkeletalMesh, class UClass** AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.GetMeshAndAnimInstance");

	AZAICharacter_GetMeshAndAnimInstance_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;
	if (AnimInstance != nullptr)
		*AnimInstance = params.AnimInstance;
}


// Function Z.ZAICharacter.GetKnockBackState
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EZKnockBackState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EZKnockBackState AZAICharacter::GetKnockBackState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.GetKnockBackState");

	AZAICharacter_GetKnockBackState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.ZAICharacter.GetCurrentAIstate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EAIState                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAIState AZAICharacter::GetCurrentAIstate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.GetCurrentAIstate");

	AZAICharacter_GetCurrentAIstate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.ZAICharacter.GetClimbingState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EAIClimbingState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAIClimbingState AZAICharacter::GetClimbingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.GetClimbingState");

	AZAICharacter_GetClimbingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.ZAICharacter.GetAttackState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EAIAttackState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAIAttackState AZAICharacter::GetAttackState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.GetAttackState");

	AZAICharacter_GetAttackState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.ZAICharacter.DelayedReturnToNormalCollision
// (Final, Native, Private)

void AZAICharacter::DelayedReturnToNormalCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.DelayedReturnToNormalCollision");

	AZAICharacter_DelayedReturnToNormalCollision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.AttemptRandomSprint
// (Final, Native, Private)

void AZAICharacter::AttemptRandomSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.AttemptRandomSprint");

	AZAICharacter_AttemptRandomSprint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.AttackTargetInRange
// (Final, Native, Private)

void AZAICharacter::AttackTargetInRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.AttackTargetInRange");

	AZAICharacter_AttackTargetInRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAICharacter.AIStateChange
// (Final, Native, Public)
// Parameters:
// EAIState                       NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AZAICharacter::AIStateChange(EAIState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAICharacter.AIStateChange");

	AZAICharacter_AIStateChange_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAIController.SetState
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EAIState                       inState                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AZAIController::SetState(EAIState inState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAIController.SetState");

	AZAIController_SetState_Params params;
	params.inState = inState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAIController.SetCurrentTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AZAIController::SetCurrentTarget(class AActor* InTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAIController.SetCurrentTarget");

	AZAIController_SetCurrentTarget_Params params;
	params.InTarget = InTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.ZAIController.RandomDeviationFindTarget
// (Final, Native, Public)

void AZAIController::RandomDeviationFindTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAIController.RandomDeviationFindTarget");

	AZAIController_RandomDeviationFindTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAIController.OnSlotsCleared
// (Event, Public, BlueprintEvent)

void AZAIController::OnSlotsCleared()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAIController.OnSlotsCleared");

	AZAIController_OnSlotsCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAIController.JumpTo
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Destination                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Arc                            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  JumpFromActor                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AZAIController::JumpTo(const struct FTransform& Destination, float Arc, class AActor* JumpFromActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAIController.JumpTo");

	AZAIController_JumpTo_Params params;
	params.Destination = Destination;
	params.Arc = Arc;
	params.JumpFromActor = JumpFromActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAIController.IsDecelerationgOnPath
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AZAIController::IsDecelerationgOnPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAIController.IsDecelerationgOnPath");

	AZAIController_IsDecelerationgOnPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.ZAIController.HasTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AZAIController::HasTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAIController.HasTarget");

	AZAIController_HasTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.ZAIController.GetState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EAIState                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAIState AZAIController::GetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAIController.GetState");

	AZAIController_GetState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.ZAIController.GetCurrentTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AZAIController::GetCurrentTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAIController.GetCurrentTarget");

	AZAIController_GetCurrentTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.ZAIController.FinishClimb
// (Final, Native, Public, BlueprintCallable)

void AZAIController::FinishClimb()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAIController.FinishClimb");

	AZAIController_FinishClimb_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAIController.FindTarget
// (Final, Native, Public, BlueprintCallable)

void AZAIController::FindTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAIController.FindTarget");

	AZAIController_FindTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAIController.DoJumpLaunch_PrecomputedVelocity
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              Destination                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Arc                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InLaunchVelocity               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  JumpFromActor                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutAscendingTime               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDescendingTime              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AZAIController::DoJumpLaunch_PrecomputedVelocity(const struct FTransform& Destination, float Arc, const struct FVector& InLaunchVelocity, class AActor* JumpFromActor, float* OutAscendingTime, float* OutDescendingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAIController.DoJumpLaunch_PrecomputedVelocity");

	AZAIController_DoJumpLaunch_PrecomputedVelocity_Params params;
	params.Destination = Destination;
	params.Arc = Arc;
	params.InLaunchVelocity = InLaunchVelocity;
	params.JumpFromActor = JumpFromActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAscendingTime != nullptr)
		*OutAscendingTime = params.OutAscendingTime;
	if (OutDescendingTime != nullptr)
		*OutDescendingTime = params.OutDescendingTime;

	return params.ReturnValue;
}


// Function Z.ZAIController.DoJumpLaunch
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              Destination                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Arc                            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  JumpFromActor                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutAscendingTime               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDescendingTime              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AZAIController::DoJumpLaunch(const struct FTransform& Destination, float Arc, class AActor* JumpFromActor, float* OutAscendingTime, float* OutDescendingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAIController.DoJumpLaunch");

	AZAIController_DoJumpLaunch_Params params;
	params.Destination = Destination;
	params.Arc = Arc;
	params.JumpFromActor = JumpFromActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAscendingTime != nullptr)
		*OutAscendingTime = params.OutAscendingTime;
	if (OutDescendingTime != nullptr)
		*OutDescendingTime = params.OutDescendingTime;

	return params.ReturnValue;
}


// Function Z.ZAIController.ClimbTo
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FTransform              LedgeTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 EndPosition                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// uint32_t                       NavLinkID                      (Parm, ZeroConstructor, IsPlainOldData)

void AZAIController::ClimbTo(const struct FTransform& LedgeTransform, const struct FVector& EndPosition, uint32_t NavLinkID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAIController.ClimbTo");

	AZAIController_ClimbTo_Params params;
	params.LedgeTransform = LedgeTransform;
	params.EndPosition = EndPosition;
	params.NavLinkID = NavLinkID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAIController.ClearTarget
// (Final, Native, Public, BlueprintCallable)

void AZAIController::ClearTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAIController.ClearTarget");

	AZAIController_ClearTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZAIController.ClearAITargets
// (Final, Native, Public)

void AZAIController::ClearAITargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZAIController.ClearAITargets");

	AZAIController_ClearAITargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZCharacterMovementComponent.SetSprinting
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           inWantsToSprint                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          DesiredSpeed                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UZCharacterMovementComponent::SetSprinting(bool inWantsToSprint, float DesiredSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZCharacterMovementComponent.SetSprinting");

	UZCharacterMovementComponent_SetSprinting_Params params;
	params.inWantsToSprint = inWantsToSprint;
	params.DesiredSpeed = DesiredSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZCharacterMovementComponent.SetSprintEnabled
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           inbIsSprintEnabled             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UZCharacterMovementComponent::SetSprintEnabled(bool inbIsSprintEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZCharacterMovementComponent.SetSprintEnabled");

	UZCharacterMovementComponent_SetSprintEnabled_Params params;
	params.inbIsSprintEnabled = inbIsSprintEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZCharacterMovementComponent.ServerFinishLanding
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void UZCharacterMovementComponent::ServerFinishLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZCharacterMovementComponent.ServerFinishLanding");

	UZCharacterMovementComponent_ServerFinishLanding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZCharacterMovementComponent.FinishLanding
// (Final, Native, Public)

void UZCharacterMovementComponent::FinishLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZCharacterMovementComponent.FinishLanding");

	UZCharacterMovementComponent_FinishLanding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZCharacterMovementComponent.CanSprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UZCharacterMovementComponent::CanSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZCharacterMovementComponent.CanSprint");

	UZCharacterMovementComponent_CanSprint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.ZCheatManager.TogglePathFollowingDebug
// (Final, Exec, Native, Public)

void UZCheatManager::TogglePathFollowingDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZCheatManager.TogglePathFollowingDebug");

	UZCheatManager_TogglePathFollowingDebug_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZNavLinkComponent.ToggleNavLink
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           IsEnabled                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UZNavLinkComponent::ToggleNavLink(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZNavLinkComponent.ToggleNavLink");

	UZNavLinkComponent_ToggleNavLink_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZNavLinkProxy_Destructible.ToggleNavLinkState
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AZNavLinkProxy_Destructible::ToggleNavLinkState(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZNavLinkProxy_Destructible.ToggleNavLinkState");

	AZNavLinkProxy_Destructible_ToggleNavLinkState_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZNavLinkProxy_Destructible.OnTakeDamage
// (Final, Native, Public)
// Parameters:
// struct FAIDamageResult         DamageTaken                    (Parm)

void AZNavLinkProxy_Destructible::OnTakeDamage(const struct FAIDamageResult& DamageTaken)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZNavLinkProxy_Destructible.OnTakeDamage");

	AZNavLinkProxy_Destructible_OnTakeDamage_Params params;
	params.DamageTaken = DamageTaken;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZNavLinkProxy_Destructible.OnCanTakeDamageChange
// (Final, Native, Public)
// Parameters:
// bool                           CurrentState                   (Parm, ZeroConstructor, IsPlainOldData)

void AZNavLinkProxy_Destructible::OnCanTakeDamageChange(bool CurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZNavLinkProxy_Destructible.OnCanTakeDamageChange");

	AZNavLinkProxy_Destructible_OnCanTakeDamageChange_Params params;
	params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZNavLinkProxy_Destructible.GetAIDamageComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIDamageComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIDamageComponent* AZNavLinkProxy_Destructible::GetAIDamageComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZNavLinkProxy_Destructible.GetAIDamageComponent");

	AZNavLinkProxy_Destructible_GetAIDamageComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Z.ZNavLinkProxy_Jump.RefreshPathVisualizer
// (Final, Native, Public)

void AZNavLinkProxy_Jump::RefreshPathVisualizer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZNavLinkProxy_Jump.RefreshPathVisualizer");

	AZNavLinkProxy_Jump_RefreshPathVisualizer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Z.ZPathFollowingComponent.OnTargetSelectionUpdate
// (Final, Native, Public)
// Parameters:
// class AActor*                  NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAISlotManager*          SlotManager                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UZPathFollowingComponent::OnTargetSelectionUpdate(class AActor* NewTarget, class UAISlotManager* SlotManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function Z.ZPathFollowingComponent.OnTargetSelectionUpdate");

	UZPathFollowingComponent_OnTargetSelectionUpdate_Params params;
	params.NewTarget = NewTarget;
	params.SlotManager = SlotManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
