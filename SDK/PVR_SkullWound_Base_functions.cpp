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

// Function SkullWound_Base.SkullWound_Base_C.GetAttachSocket
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ASkullWound_Base_C::GetAttachSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkullWound_Base.SkullWound_Base_C.GetAttachSocket");

	ASkullWound_Base_C_GetAttachSocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkullWound_Base.SkullWound_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASkullWound_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkullWound_Base.SkullWound_Base_C.UserConstructionScript");

	ASkullWound_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkullWound_Base.SkullWound_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASkullWound_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkullWound_Base.SkullWound_Base_C.ReceiveBeginPlay");

	ASkullWound_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkullWound_Base.SkullWound_Base_C.ExecuteUbergraph_SkullWound_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASkullWound_Base_C::ExecuteUbergraph_SkullWound_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkullWound_Base.SkullWound_Base_C.ExecuteUbergraph_SkullWound_Base");

	ASkullWound_Base_C_ExecuteUbergraph_SkullWound_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
