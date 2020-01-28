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

// Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.Reset Target
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TargetMiniGame_C::Reset_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.Reset Target");

	UBPI_TargetMiniGame_C_Reset_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.MiniGameSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MoveTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_TargetMiniGame_C::MiniGameSettings(float MoveTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.MiniGameSettings");

	UBPI_TargetMiniGame_C_MiniGameSettings_Params params;
	params.MoveTime = MoveTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.SetPracticeMode
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TargetMiniGame_C::SetPracticeMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.SetPracticeMode");

	UBPI_TargetMiniGame_C_SetPracticeMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.InitMiniGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGameType>    MiniGameRange                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_TargetWepType>   TargetWeaponType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_TargetMiniGame_C::InitMiniGame(TEnumAsByte<E_MiniGameType> MiniGameRange, TEnumAsByte<E_TargetWepType> TargetWeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.InitMiniGame");

	UBPI_TargetMiniGame_C_InitMiniGame_Params params;
	params.MiniGameRange = MiniGameRange;
	params.TargetWeaponType = TargetWeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.TargetHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Target_C*            HitTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HitType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_TargetMiniGame_C::TargetHit(int Points, class ABP_Target_C* HitTarget, int HitType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.TargetHit");

	UBPI_TargetMiniGame_C_TargetHit_Params params;
	params.Points = Points;
	params.HitTarget = HitTarget;
	params.HitType = HitType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.EndMiniGame
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TargetMiniGame_C::EndMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.EndMiniGame");

	UBPI_TargetMiniGame_C_EndMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.StartMiniGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KillHouse_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_TargetMiniGame_C::StartMiniGame(bool KillHouse_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TargetMiniGame.BPI_TargetMiniGame_C.StartMiniGame");

	UBPI_TargetMiniGame_C_StartMiniGame_Params params;
	params.KillHouse_ = KillHouse_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
