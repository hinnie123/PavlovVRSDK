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

// Function SND_Service.SND_Service_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void USND_Service_C::ReceiveActivationAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function SND_Service.SND_Service_C.ReceiveActivationAI");

	USND_Service_C_ReceiveActivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SND_Service.SND_Service_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void USND_Service_C::ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SND_Service.SND_Service_C.ReceiveTickAI");

	USND_Service_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SND_Service.SND_Service_C.ExecuteUbergraph_SND_Service
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USND_Service_C::ExecuteUbergraph_SND_Service(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SND_Service.SND_Service_C.ExecuteUbergraph_SND_Service");

	USND_Service_C_ExecuteUbergraph_SND_Service_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
