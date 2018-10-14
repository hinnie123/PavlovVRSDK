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

// Function ToolTipController_Base.ToolTipController_Base_C.GetCanvas
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUI_ToolTipCanvas_C*     Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AToolTipController_Base_C::GetCanvas(class UUI_ToolTipCanvas_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTipController_Base.ToolTipController_Base_C.GetCanvas");

	AToolTipController_Base_C_GetCanvas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function ToolTipController_Base.ToolTipController_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AToolTipController_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTipController_Base.ToolTipController_Base_C.UserConstructionScript");

	AToolTipController_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTipController_Base.ToolTipController_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AToolTipController_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTipController_Base.ToolTipController_Base_C.ReceiveBeginPlay");

	AToolTipController_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTipController_Base.ToolTipController_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AToolTipController_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTipController_Base.ToolTipController_Base_C.ReceiveTick");

	AToolTipController_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTipController_Base.ToolTipController_Base_C.ExecuteUbergraph_ToolTipController_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AToolTipController_Base_C::ExecuteUbergraph_ToolTipController_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTipController_Base.ToolTipController_Base_C.ExecuteUbergraph_ToolTipController_Base");

	AToolTipController_Base_C_ExecuteUbergraph_ToolTipController_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
