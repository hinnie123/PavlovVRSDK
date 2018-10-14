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

// Function DefuseTask.DefuseTask_C.CanDefuse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABomb*                   Bomb                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Pawn                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDefuseTask_C::CanDefuse(class ABomb* Bomb, class AActor* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefuseTask.DefuseTask_C.CanDefuse");

	UDefuseTask_C_CanDefuse_Params params;
	params.Bomb = Bomb;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DefuseTask.DefuseTask_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UDefuseTask_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefuseTask.DefuseTask_C.ReceiveExecuteAI");

	UDefuseTask_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefuseTask.DefuseTask_C.ExecuteUbergraph_DefuseTask
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDefuseTask_C::ExecuteUbergraph_DefuseTask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefuseTask.DefuseTask_C.ExecuteUbergraph_DefuseTask");

	UDefuseTask_C_ExecuteUbergraph_DefuseTask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
