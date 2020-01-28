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

// Function Vankrupt.VCollisionEffectComponent.ResetCooldown
// (Final, Native, Protected)

void UVCollisionEffectComponent::ResetCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VCollisionEffectComponent.ResetCooldown");

	UVCollisionEffectComponent_ResetCooldown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VCollisionEffectComponent.OnActorHit
// (Final, Native, Protected, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UVCollisionEffectComponent::OnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VCollisionEffectComponent.OnActorHit");

	UVCollisionEffectComponent_OnActorHit_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VDecalComponent.Project
// (Final, Native, Public, BlueprintCallable)

void UVDecalComponent::Project()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VDecalComponent.Project");

	UVDecalComponent_Project_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VDecalComponent.CheckTaskCompletion
// (Final, Native, Private)

void UVDecalComponent::CheckTaskCompletion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VDecalComponent.CheckTaskCompletion");

	UVDecalComponent_CheckTaskCompletion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VHealthComponent.Revive
// (Final, Native, Public, BlueprintCallable)

void UVHealthComponent::Revive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.Revive");

	UVHealthComponent_Revive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VHealthComponent.OnTakePointDamage
// (Final, Native, Protected, HasDefaults)
// Parameters:
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ShotFromDirection              (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void UVHealthComponent::OnTakePointDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.OnTakePointDamage");

	UVHealthComponent_OnTakePointDamage_Params params;
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


// Function Vankrupt.VHealthComponent.OnTakeAnyDamage
// (Final, Native, Protected)
// Parameters:
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void UVHealthComponent::OnTakeAnyDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.OnTakeAnyDamage");

	UVHealthComponent_OnTakeAnyDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VHealthComponent.OnRep_Dead
// (Native, Protected)

void UVHealthComponent::OnRep_Dead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.OnRep_Dead");

	UVHealthComponent_OnRep_Dead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VHealthComponent.MulticastOnRevived
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void UVHealthComponent::MulticastOnRevived()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.MulticastOnRevived");

	UVHealthComponent_MulticastOnRevived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VHealthComponent.MulticastOnKilledWithData
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FVKillData              Data                           (Parm)

void UVHealthComponent::MulticastOnKilledWithData(const struct FVKillData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.MulticastOnKilledWithData");

	UVHealthComponent_MulticastOnKilledWithData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VHealthComponent.MulticastOnKilled
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void UVHealthComponent::MulticastOnKilled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.MulticastOnKilled");

	UVHealthComponent_MulticastOnKilled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VHealthComponent.MulticastOnHitEffect
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// EVHitEffect                    Effect                         (Parm, ZeroConstructor, IsPlainOldData)

void UVHealthComponent::MulticastOnHitEffect(EVHitEffect Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.MulticastOnHitEffect");

	UVHealthComponent_MulticastOnHitEffect_Params params;
	params.Effect = Effect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VHealthComponent.Kill
// (Final, Native, Public, BlueprintCallable)

void UVHealthComponent::Kill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.Kill");

	UVHealthComponent_Kill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VHealthComponent.ApplyKillImpulse
// (Final, Native, Protected)

void UVHealthComponent::ApplyKillImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VHealthComponent.ApplyKillImpulse");

	UVHealthComponent_ApplyKillImpulse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VMenu.Show
// (Final, Native, Public, BlueprintCallable)

void AVMenu::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VMenu.Show");

	AVMenu_Show_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VMenu.SetVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void AVMenu::SetVisibility(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VMenu.SetVisibility");

	AVMenu_SetVisibility_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VMenu.Hide
// (Final, Native, Public, BlueprintCallable)

void AVMenu::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VMenu.Hide");

	AVMenu_Hide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VLobby.StartGameImpl
// (Final, Native, Private)

void AVLobby::StartGameImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VLobby.StartGameImpl");

	AVLobby_StartGameImpl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VLobby.OnLeaveLobbyPrompt
// (Final, Native, Private)
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void AVLobby::OnLeaveLobbyPrompt(int Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VLobby.OnLeaveLobbyPrompt");

	AVLobby_OnLeaveLobbyPrompt_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VLobby.OnGoBack
// (Event, Public, BlueprintEvent)

void AVLobby::OnGoBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VLobby.OnGoBack");

	AVLobby_OnGoBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VLobby.MulticastOnLeavingLobby
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AVLobby::MulticastOnLeavingLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VLobby.MulticastOnLeavingLobby");

	AVLobby_MulticastOnLeavingLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VLobby.MulticastOnGameStart
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AVLobby::MulticastOnGameStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VLobby.MulticastOnGameStart");

	AVLobby_MulticastOnGameStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VLobby.LeaveLobbyImpl
// (Final, Native, Private)

void AVLobby::LeaveLobbyImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VLobby.LeaveLobbyImpl");

	AVLobby_LeaveLobbyImpl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VSpawnManagerComponent.SpawnRandomly
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  CharacterClass                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVSpawnParams           Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// class ACharacter*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACharacter* UVSpawnManagerComponent::SpawnRandomly(class UClass* CharacterClass, const struct FVSpawnParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VSpawnManagerComponent.SpawnRandomly");

	UVSpawnManagerComponent_SpawnRandomly_Params params;
	params.CharacterClass = CharacterClass;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Vankrupt.VSpawnManagerComponent.SpawnAt
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              Transform                      (Parm, IsPlainOldData)
// class UClass*                  CharacterClass                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVSpawnParams           Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// class ACharacter*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACharacter* UVSpawnManagerComponent::SpawnAt(const struct FTransform& Transform, class UClass* CharacterClass, const struct FVSpawnParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VSpawnManagerComponent.SpawnAt");

	UVSpawnManagerComponent_SpawnAt_Params params;
	params.Transform = Transform;
	params.CharacterClass = CharacterClass;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Vankrupt.VSpawnManagerComponent.Spawn
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  CharacterClass                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVSpawnParams           Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// class ACharacter*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACharacter* UVSpawnManagerComponent::Spawn(class UClass* CharacterClass, const struct FVSpawnParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VSpawnManagerComponent.Spawn");

	UVSpawnManagerComponent_Spawn_Params params;
	params.CharacterClass = CharacterClass;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Vankrupt.VSpawnManagerComponent.GetSpawnTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AgentId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOccluded                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClosest                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UVSpawnManagerComponent::GetSpawnTransform(int AgentId, bool bOccluded, bool bClosest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VSpawnManagerComponent.GetSpawnTransform");

	UVSpawnManagerComponent_GetSpawnTransform_Params params;
	params.AgentId = AgentId;
	params.bOccluded = bOccluded;
	params.bClosest = bClosest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Vankrupt.VSpawnManagerComponent.GetRandomSpawnTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UVSpawnManagerComponent::GetRandomSpawnTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VSpawnManagerComponent.GetRandomSpawnTransform");

	UVSpawnManagerComponent_GetRandomSpawnTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Vankrupt.VSpawnPoint.IsOccluded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVSpawnPoint::IsOccluded(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VSpawnPoint.IsOccluded");

	AVSpawnPoint_IsOccluded_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Vankrupt.VStatics.RetrieveNews
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 URL                            (Parm, ZeroConstructor)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UVStatics::STATIC_RetrieveNews(class UObject* WorldContextObject, const struct FString& URL, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VStatics.RetrieveNews");

	UVStatics_RetrieveNews_Params params;
	params.WorldContextObject = WorldContextObject;
	params.URL = URL;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VStatics.LeaveGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UVStatics::STATIC_LeaveGame(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VStatics.LeaveGame");

	UVStatics_LeaveGame_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vankrupt.VStatics.IsPlayingOnline
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVStatics::STATIC_IsPlayingOnline(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VStatics.IsPlayingOnline");

	UVStatics_IsPlayingOnline_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Vankrupt.VStatics.FormatTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVStatics::STATIC_FormatTime(class UObject* WorldContextObject, int Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vankrupt.VStatics.FormatTime");

	UVStatics_FormatTime_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
