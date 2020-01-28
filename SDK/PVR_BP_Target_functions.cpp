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

// Function BP_Target.BP_Target_C.Play SoundFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit_Result                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_Target_C::Play_SoundFX(const struct FHitResult& Hit_Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.Play SoundFX");

	ABP_Target_C_Play_SoundFX_Params params;
	params.Hit_Result = Hit_Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.PlayParticleFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_Target_C::PlayParticleFX(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.PlayParticleFX");

	ABP_Target_C_PlayParticleFX_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.PlayMovementSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Target_C::PlayMovementSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.PlayMovementSound");

	ABP_Target_C_PlayMovementSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.ScoreTarget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Target_C::ScoreTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.ScoreTarget");

	ABP_Target_C_ScoreTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.OnRep_MiniGameState
// (BlueprintCallable, BlueprintEvent)

void ABP_Target_C::OnRep_MiniGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.OnRep_MiniGameState");

	ABP_Target_C_OnRep_MiniGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.InitMeshes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    MoveCMP                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UStaticMeshComponent*    HitCMP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Target_C::InitMeshes(class UStaticMeshComponent* MoveCMP, class UStaticMeshComponent* HitCMP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.InitMeshes");

	ABP_Target_C_InitMeshes_Params params;
	params.MoveCMP = MoveCMP;
	params.HitCMP = HitCMP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.PlayFX
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit_Result                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Target_C::PlayFX(const struct FHitResult& Hit_Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.PlayFX");

	ABP_Target_C_PlayFX_Params params;
	params.Hit_Result = Hit_Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Target_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.UserConstructionScript");

	ABP_Target_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.MoveTarget__FinishedFunc
// (BlueprintEvent)

void ABP_Target_C::MoveTarget__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.MoveTarget__FinishedFunc");

	ABP_Target_C_MoveTarget__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.MoveTarget__UpdateFunc
// (BlueprintEvent)

void ABP_Target_C::MoveTarget__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.MoveTarget__UpdateFunc");

	ABP_Target_C_MoveTarget__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.RotateTarget__FinishedFunc
// (BlueprintEvent)

void ABP_Target_C::RotateTarget__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.RotateTarget__FinishedFunc");

	ABP_Target_C_RotateTarget__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.RotateTarget__UpdateFunc
// (BlueprintEvent)

void ABP_Target_C::RotateTarget__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.RotateTarget__UpdateFunc");

	ABP_Target_C_RotateTarget__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.MiniGameRot__FinishedFunc
// (BlueprintEvent)

void ABP_Target_C::MiniGameRot__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.MiniGameRot__FinishedFunc");

	ABP_Target_C_MiniGameRot__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.MiniGameRot__UpdateFunc
// (BlueprintEvent)

void ABP_Target_C::MiniGameRot__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.MiniGameRot__UpdateFunc");

	ABP_Target_C_MiniGameRot__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.TargetHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Target_C*            HitTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HitType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Target_C::TargetHit(int Points, class ABP_Target_C* HitTarget, int HitType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.TargetHit");

	ABP_Target_C_TargetHit_Params params;
	params.Points = Points;
	params.HitTarget = HitTarget;
	params.HitType = HitType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Target_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.ReceiveBeginPlay");

	ABP_Target_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.Move
// (BlueprintCallable, BlueprintEvent)

void ABP_Target_C::Move()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.Move");

	ABP_Target_C_Move_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.OnHitCMP_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Target_C::OnHitCMP_Event(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.OnHitCMP_Event");

	ABP_Target_C_OnHitCMP_Event_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.Stop Move
// (BlueprintCallable, BlueprintEvent)

void ABP_Target_C::Stop_Move()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.Stop Move");

	ABP_Target_C_Stop_Move_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.HitRotate
// (BlueprintCallable, BlueprintEvent)

void ABP_Target_C::HitRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.HitRotate");

	ABP_Target_C_HitRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.Reset Rotate
// (BlueprintCallable, BlueprintEvent)

void ABP_Target_C::Reset_Rotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.Reset Rotate");

	ABP_Target_C_Reset_Rotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.Random Move Start
// (BlueprintCallable, BlueprintEvent)

void ABP_Target_C::Random_Move_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.Random Move Start");

	ABP_Target_C_Random_Move_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.Show Target
// (BlueprintCallable, BlueprintEvent)

void ABP_Target_C::Show_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.Show Target");

	ABP_Target_C_Show_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.Hide Target
// (BlueprintCallable, BlueprintEvent)

void ABP_Target_C::Hide_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.Hide Target");

	ABP_Target_C_Hide_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KillHouse_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Target_C::StartMiniGame(bool KillHouse_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.StartMiniGame");

	ABP_Target_C_StartMiniGame_Params params;
	params.KillHouse_ = KillHouse_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Target_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.EndMiniGame");

	ABP_Target_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.MGOverRotate
// (BlueprintCallable, BlueprintEvent)

void ABP_Target_C::MGOverRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.MGOverRotate");

	ABP_Target_C_MGOverRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.MG Hit
// (BlueprintCallable, BlueprintEvent)

void ABP_Target_C::MG_Hit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.MG Hit");

	ABP_Target_C_MG_Hit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.InitMiniGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGameType>    MiniGameRange                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_TargetWepType>   TargetWeaponType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Target_C::InitMiniGame(TEnumAsByte<E_MiniGameType> MiniGameRange, TEnumAsByte<E_TargetWepType> TargetWeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.InitMiniGame");

	ABP_Target_C_InitMiniGame_Params params;
	params.MiniGameRange = MiniGameRange;
	params.TargetWeaponType = TargetWeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.SetPracticeMode
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Target_C::SetPracticeMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.SetPracticeMode");

	ABP_Target_C_SetPracticeMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.Reset Can Score
// (BlueprintCallable, BlueprintEvent)

void ABP_Target_C::Reset_Can_Score()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.Reset Can Score");

	ABP_Target_C_Reset_Can_Score_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.MoveFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETimelineDirection> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Target_C::MoveFinished(TEnumAsByte<ETimelineDirection> Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.MoveFinished");

	ABP_Target_C_MoveFinished_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.MiniGameSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MoveTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Target_C::MiniGameSettings(float MoveTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.MiniGameSettings");

	ABP_Target_C_MiniGameSettings_Params params;
	params.MoveTime = MoveTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.Reset Target
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Target_C::Reset_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.Reset Target");

	ABP_Target_C_Reset_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.Play Hit FX Delayed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit_Result                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Target_C::Play_Hit_FX_Delayed(float Duration, const struct FHitResult& Hit_Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.Play Hit FX Delayed");

	ABP_Target_C_Play_Hit_FX_Delayed_Params params;
	params.Duration = Duration;
	params.Hit_Result = Hit_Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.Reset Hit Rotate
// (BlueprintCallable, BlueprintEvent)

void ABP_Target_C::Reset_Hit_Rotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.Reset Hit Rotate");

	ABP_Target_C_Reset_Hit_Rotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.ExecuteUbergraph_BP_Target
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Target_C::ExecuteUbergraph_BP_Target(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.ExecuteUbergraph_BP_Target");

	ABP_Target_C_ExecuteUbergraph_BP_Target_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.ResetMiniGameTarget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Target_C::ResetMiniGameTarget__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.ResetMiniGameTarget__DelegateSignature");

	ABP_Target_C_ResetMiniGameTarget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Target.BP_Target_C.ResetTarget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Target_C::ResetTarget__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Target.BP_Target_C.ResetTarget__DelegateSignature");

	ABP_Target_C_ResetTarget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
