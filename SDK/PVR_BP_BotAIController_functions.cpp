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

// Function BP_BotAIController.BP_BotAIController_C.CheckBomb
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BotAIController_C::CheckBomb()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotAIController.BP_BotAIController_C.CheckBomb");

	ABP_BotAIController_C_CheckBomb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BotAIController.BP_BotAIController_C.GetBehaviorByGameMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBehaviorTree*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBehaviorTree* ABP_BotAIController_C::GetBehaviorByGameMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotAIController.BP_BotAIController_C.GetBehaviorByGameMode");

	ABP_BotAIController_C_GetBehaviorByGameMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BotAIController.BP_BotAIController_C.ReloadWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BotAIController_C::ReloadWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotAIController.BP_BotAIController_C.ReloadWeapon");

	ABP_BotAIController_C_ReloadWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BotAIController.BP_BotAIController_C.AreControllersFoes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AController*             A                              (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             B                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Is_Foe                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BotAIController_C::AreControllersFoes(class AController* A, class AController* B, bool* Is_Foe)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotAIController.BP_BotAIController_C.AreControllersFoes");

	ABP_BotAIController_C_AreControllersFoes_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_Foe != nullptr)
		*Is_Foe = params.Is_Foe;
}


// Function BP_BotAIController.BP_BotAIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BotAIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotAIController.BP_BotAIController_C.UserConstructionScript");

	ABP_BotAIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BotAIController.BP_BotAIController_C.OnKill_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BotAIController_C::OnKill_Event_1(class AActor* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotAIController.BP_BotAIController_C.OnKill_Event_1");

	ABP_BotAIController_C_OnKill_Event_1_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BotAIController.BP_BotAIController_C.OnUnpossess
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  UnpossessedPawn                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BotAIController_C::OnUnpossess(class APawn** UnpossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotAIController.BP_BotAIController_C.OnUnpossess");

	ABP_BotAIController_C_OnUnpossess_Params params;
	params.UnpossessedPawn = UnpossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BotAIController.BP_BotAIController_C.OnPossess
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  PossessedPawn                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BotAIController_C::OnPossess(class APawn** PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotAIController.BP_BotAIController_C.OnPossess");

	ABP_BotAIController_C_OnPossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BotAIController.BP_BotAIController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BotAIController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotAIController.BP_BotAIController_C.ReceiveBeginPlay");

	ABP_BotAIController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BotAIController.BP_BotAIController_C.ExecuteUbergraph_BP_BotAIController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BotAIController_C::ExecuteUbergraph_BP_BotAIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotAIController.BP_BotAIController_C.ExecuteUbergraph_BP_BotAIController");

	ABP_BotAIController_C_ExecuteUbergraph_BP_BotAIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
