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

// Function BotMoveTo.BotMoveTo_C.GetRandomLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AVRPawn*                 PawnSelf                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void UBotMoveTo_C::GetRandomLocation(class AVRPawn* PawnSelf, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BotMoveTo.BotMoveTo_C.GetRandomLocation");

	UBotMoveTo_C_GetRandomLocation_Params params;
	params.PawnSelf = PawnSelf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BotMoveTo.BotMoveTo_C.GetMoveLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APavlovPawn*             PawnSelf                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void UBotMoveTo_C::GetMoveLocation(class APavlovPawn* PawnSelf, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BotMoveTo.BotMoveTo_C.GetMoveLocation");

	UBotMoveTo_C_GetMoveLocation_Params params;
	params.PawnSelf = PawnSelf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BotMoveTo.BotMoveTo_C.GetControllerAndGun
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class AGun_Base_C*             Gun                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AVRItemController*       Controller                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBotMoveTo_C::GetControllerAndGun(class AActor* Actor, class AGun_Base_C** Gun, class AVRItemController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BotMoveTo.BotMoveTo_C.GetControllerAndGun");

	UBotMoveTo_C_GetControllerAndGun_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Gun != nullptr)
		*Gun = params.Gun;
	if (Controller != nullptr)
		*Controller = params.Controller;
}


// Function BotMoveTo.BotMoveTo_C.OnFail_D8AD614E42922E19A998A988427840D0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (Parm, ZeroConstructor, IsPlainOldData)

void UBotMoveTo_C::OnFail_D8AD614E42922E19A998A988427840D0(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BotMoveTo.BotMoveTo_C.OnFail_D8AD614E42922E19A998A988427840D0");

	UBotMoveTo_C_OnFail_D8AD614E42922E19A998A988427840D0_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BotMoveTo.BotMoveTo_C.OnSuccess_D8AD614E42922E19A998A988427840D0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (Parm, ZeroConstructor, IsPlainOldData)

void UBotMoveTo_C::OnSuccess_D8AD614E42922E19A998A988427840D0(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BotMoveTo.BotMoveTo_C.OnSuccess_D8AD614E42922E19A998A988427840D0");

	UBotMoveTo_C_OnSuccess_D8AD614E42922E19A998A988427840D0_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BotMoveTo.BotMoveTo_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UBotMoveTo_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BotMoveTo.BotMoveTo_C.ReceiveExecuteAI");

	UBotMoveTo_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BotMoveTo.BotMoveTo_C.ExecuteUbergraph_BotMoveTo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBotMoveTo_C::ExecuteUbergraph_BotMoveTo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BotMoveTo.BotMoveTo_C.ExecuteUbergraph_BotMoveTo");

	UBotMoveTo_C_ExecuteUbergraph_BotMoveTo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
