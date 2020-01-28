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

// Function CMP_ImpairTest.CMP_ImpairTest_C.ImpairPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EImpairedType                  Impair                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCMP_ImpairTest_C::ImpairPlayer(EImpairedType Impair)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMP_ImpairTest.CMP_ImpairTest_C.ImpairPlayer");

	UCMP_ImpairTest_C_ImpairPlayer_Params params;
	params.Impair = Impair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CMP_ImpairTest.CMP_ImpairTest_C.OnRep_ClientImpaired?
// (BlueprintCallable, BlueprintEvent)

void UCMP_ImpairTest_C::OnRep_ClientImpaired_()
{
	static auto fn = UObject::FindObject<UFunction>("Function CMP_ImpairTest.CMP_ImpairTest_C.OnRep_ClientImpaired?");

	UCMP_ImpairTest_C_OnRep_ClientImpaired__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CMP_ImpairTest.CMP_ImpairTest_C.PlayerHandcuffed
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UCMP_ImpairTest_C::PlayerHandcuffed()
{
	static auto fn = UObject::FindObject<UFunction>("Function CMP_ImpairTest.CMP_ImpairTest_C.PlayerHandcuffed");

	UCMP_ImpairTest_C_PlayerHandcuffed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CMP_ImpairTest.CMP_ImpairTest_C.Remove+Destroy
// (BlueprintCallable, BlueprintEvent)

void UCMP_ImpairTest_C::Remove_Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function CMP_ImpairTest.CMP_ImpairTest_C.Remove+Destroy");

	UCMP_ImpairTest_C_Remove_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CMP_ImpairTest.CMP_ImpairTest_C.Remove Impair+Destroy
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UCMP_ImpairTest_C::Remove_Impair_Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function CMP_ImpairTest.CMP_ImpairTest_C.Remove Impair+Destroy");

	UCMP_ImpairTest_C_Remove_Impair_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CMP_ImpairTest.CMP_ImpairTest_C.OnKill_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCMP_ImpairTest_C::OnKill_Event_1(class AActor* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMP_ImpairTest.CMP_ImpairTest_C.OnKill_Event_1");

	UCMP_ImpairTest_C_OnKill_Event_1_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CMP_ImpairTest.CMP_ImpairTest_C.StartImpairTimer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCMP_ImpairTest_C::StartImpairTimer(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMP_ImpairTest.CMP_ImpairTest_C.StartImpairTimer");

	UCMP_ImpairTest_C_StartImpairTimer_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CMP_ImpairTest.CMP_ImpairTest_C.PlayerTased
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UCMP_ImpairTest_C::PlayerTased()
{
	static auto fn = UObject::FindObject<UFunction>("Function CMP_ImpairTest.CMP_ImpairTest_C.PlayerTased");

	UCMP_ImpairTest_C_PlayerTased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CMP_ImpairTest.CMP_ImpairTest_C.Play Sound_Multi
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// EImpairedType                  Impair                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCMP_ImpairTest_C::Play_Sound_Multi(EImpairedType Impair)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMP_ImpairTest.CMP_ImpairTest_C.Play Sound_Multi");

	UCMP_ImpairTest_C_Play_Sound_Multi_Params params;
	params.Impair = Impair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CMP_ImpairTest.CMP_ImpairTest_C.ExecuteUbergraph_CMP_ImpairTest
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCMP_ImpairTest_C::ExecuteUbergraph_CMP_ImpairTest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMP_ImpairTest.CMP_ImpairTest_C.ExecuteUbergraph_CMP_ImpairTest");

	UCMP_ImpairTest_C_ExecuteUbergraph_CMP_ImpairTest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
