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

// Function Pliers_Basic.Pliers_Basic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APliers_Basic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pliers_Basic.Pliers_Basic_C.UserConstructionScript");

	APliers_Basic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pliers_Basic.Pliers_Basic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APliers_Basic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pliers_Basic.Pliers_Basic_C.ReceiveBeginPlay");

	APliers_Basic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pliers_Basic.Pliers_Basic_C.Physicalize
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void APliers_Basic_C::Physicalize(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pliers_Basic.Pliers_Basic_C.Physicalize");

	APliers_Basic_C_Physicalize_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pliers_Basic.Pliers_Basic_C.ExecuteUbergraph_Pliers_Basic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APliers_Basic_C::ExecuteUbergraph_Pliers_Basic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pliers_Basic.Pliers_Basic_C.ExecuteUbergraph_Pliers_Basic");

	APliers_Basic_C_ExecuteUbergraph_Pliers_Basic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
