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

// Function EntryGameMode.EntryGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEntryGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntryGameMode.EntryGameMode_C.UserConstructionScript");

	AEntryGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntryGameMode.EntryGameMode_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KillHouse_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEntryGameMode_C::StartMiniGame(bool KillHouse_)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntryGameMode.EntryGameMode_C.StartMiniGame");

	AEntryGameMode_C_StartMiniGame_Params params;
	params.KillHouse_ = KillHouse_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntryGameMode.EntryGameMode_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void AEntryGameMode_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntryGameMode.EntryGameMode_C.EndMiniGame");

	AEntryGameMode_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntryGameMode.EntryGameMode_C.TargetHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Target_C*            HitTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HitType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEntryGameMode_C::TargetHit(int Points, class ABP_Target_C* HitTarget, int HitType)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntryGameMode.EntryGameMode_C.TargetHit");

	AEntryGameMode_C_TargetHit_Params params;
	params.Points = Points;
	params.HitTarget = HitTarget;
	params.HitType = HitType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntryGameMode.EntryGameMode_C.InitMiniGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGameType>    MiniGameRange                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_TargetWepType>   TargetWeaponType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEntryGameMode_C::InitMiniGame(TEnumAsByte<E_MiniGameType> MiniGameRange, TEnumAsByte<E_TargetWepType> TargetWeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntryGameMode.EntryGameMode_C.InitMiniGame");

	AEntryGameMode_C_InitMiniGame_Params params;
	params.MiniGameRange = MiniGameRange;
	params.TargetWeaponType = TargetWeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntryGameMode.EntryGameMode_C.SetPracticeMode
// (Public, BlueprintCallable, BlueprintEvent)

void AEntryGameMode_C::SetPracticeMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntryGameMode.EntryGameMode_C.SetPracticeMode");

	AEntryGameMode_C_SetPracticeMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntryGameMode.EntryGameMode_C.MiniGameSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MoveTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEntryGameMode_C::MiniGameSettings(float MoveTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntryGameMode.EntryGameMode_C.MiniGameSettings");

	AEntryGameMode_C_MiniGameSettings_Params params;
	params.MoveTime = MoveTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntryGameMode.EntryGameMode_C.Reset Target
// (Public, BlueprintCallable, BlueprintEvent)

void AEntryGameMode_C::Reset_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function EntryGameMode.EntryGameMode_C.Reset Target");

	AEntryGameMode_C_Reset_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntryGameMode.EntryGameMode_C.ExecuteUbergraph_EntryGameMode
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEntryGameMode_C::ExecuteUbergraph_EntryGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EntryGameMode.EntryGameMode_C.ExecuteUbergraph_EntryGameMode");

	AEntryGameMode_C_ExecuteUbergraph_EntryGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
