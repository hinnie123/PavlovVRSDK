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

// Function BP_MiniGameManager.BP_MiniGameManager_C.SetPlayerLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGameType>    MiniGameType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::SetPlayerLoadout(TEnumAsByte<E_MiniGameType> MiniGameType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.SetPlayerLoadout");

	ABP_MiniGameManager_C_SetPlayerLoadout_Params params;
	params.MiniGameType = MiniGameType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OnRep_PlayerPresent
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::OnRep_PlayerPresent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OnRep_PlayerPresent");

	ABP_MiniGameManager_C_OnRep_PlayerPresent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetAnimBP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UABP_MiniGameController_New_C* BP_Mini_Game_Controller        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::GetAnimBP(class UABP_MiniGameController_New_C** BP_Mini_Game_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetAnimBP");

	ABP_MiniGameManager_C_GetAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_Mini_Game_Controller != nullptr)
		*BP_Mini_Game_Controller = params.BP_Mini_Game_Controller;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.ShotFired
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::ShotFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.ShotFired");

	ABP_MiniGameManager_C_ShotFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetAccuracy
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_MiniGameManager_C::GetAccuracy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetAccuracy");

	ABP_MiniGameManager_C_GetAccuracy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.GetTargetTotal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Targets                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MiniGameManager_C::GetTargetTotal(TArray<class AActor*>* Targets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.GetTargetTotal");

	ABP_MiniGameManager_C_GetTargetTotal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.TimerToString
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_MiniGameManager_C::TimerToString()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.TimerToString");

	ABP_MiniGameManager_C_TimerToString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.AddScore
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LastTargetHit                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::AddScore(int Points, bool* LastTargetHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.AddScore");

	ABP_MiniGameManager_C_AddScore_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LastTargetHit != nullptr)
		*LastTargetHit = params.LastTargetHit;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.UserConstructionScript");

	ABP_MiniGameManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.EndMiniGame");

	ABP_MiniGameManager_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.InitMiniGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGameType>    MiniGameRange                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_TargetWepType>   TargetWeaponType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::InitMiniGame(TEnumAsByte<E_MiniGameType> MiniGameRange, TEnumAsByte<E_TargetWepType> TargetWeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.InitMiniGame");

	ABP_MiniGameManager_C_InitMiniGame_Params params;
	params.MiniGameRange = MiniGameRange;
	params.TargetWeaponType = TargetWeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.SetPracticeMode
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::SetPracticeMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.SetPracticeMode");

	ABP_MiniGameManager_C_SetPracticeMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.MiniGameSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MoveTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::MiniGameSettings(float MoveTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.MiniGameSettings");

	ABP_MiniGameManager_C_MiniGameSettings_Params params;
	params.MoveTime = MoveTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.Reset Target
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::Reset_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.Reset Target");

	ABP_MiniGameManager_C_Reset_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.TargetHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Target_C*            HitTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HitType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::TargetHit(int Points, class ABP_Target_C* HitTarget, int HitType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.TargetHit");

	ABP_MiniGameManager_C_TargetHit_Params params;
	params.Points = Points;
	params.HitTarget = HitTarget;
	params.HitType = HitType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KillHouse_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::StartMiniGame(bool KillHouse_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.StartMiniGame");

	ABP_MiniGameManager_C_StartMiniGame_Params params;
	params.KillHouse_ = KillHouse_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.Timer_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::Timer_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.Timer_Event");

	ABP_MiniGameManager_C_Timer_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.StartGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGameType>    MiniGameType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::StartGame(TEnumAsByte<E_MiniGameType> MiniGameType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.StartGame");

	ABP_MiniGameManager_C_StartGame_Params params;
	params.MiniGameType = MiniGameType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.End Game
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::End_Game()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.End Game");

	ABP_MiniGameManager_C_End_Game_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.Cancel MiniGame
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::Cancel_MiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.Cancel MiniGame");

	ABP_MiniGameManager_C_Cancel_MiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGameManager_C::BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGameManager_C_BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.ReceiveTick");

	ABP_MiniGameManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.Close Range
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::Close_Range()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.Close Range");

	ABP_MiniGameManager_C_Close_Range_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.MidRange
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::MidRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.MidRange");

	ABP_MiniGameManager_C_MidRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.Long Range
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::Long_Range()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.Long Range");

	ABP_MiniGameManager_C_Long_Range_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.All Targets
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniGameManager_C::All_Targets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.All Targets");

	ABP_MiniGameManager_C_All_Targets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGameManager_C::BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGameManager_C_BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_MiniGameManager_C_BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.OptionMenuHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::OptionMenuHit(int Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.OptionMenuHit");

	ABP_MiniGameManager_C_OptionMenuHit_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.Play Click FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovItemController*   ItemController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::Play_Click_FX(class APavlovItemController* ItemController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.Play Click FX");

	ABP_MiniGameManager_C_Play_Click_FX_Params params;
	params.ItemController = ItemController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.BndEvt__EndMiniGameOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_MiniGameManager_C::BndEvt__EndMiniGameOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.BndEvt__EndMiniGameOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MiniGameManager_C_BndEvt__EndMiniGameOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniGameManager.BP_MiniGameManager_C.ExecuteUbergraph_BP_MiniGameManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniGameManager_C::ExecuteUbergraph_BP_MiniGameManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniGameManager.BP_MiniGameManager_C.ExecuteUbergraph_BP_MiniGameManager");

	ABP_MiniGameManager_C_ExecuteUbergraph_BP_MiniGameManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
