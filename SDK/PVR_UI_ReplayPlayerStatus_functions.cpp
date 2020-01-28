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

// Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.Get_header_ColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_ReplayPlayerStatus_C::Get_header_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.Get_header_ColorAndOpacity_1");

	UUI_ReplayPlayerStatus_C_Get_header_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.Get_Root_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_ReplayPlayerStatus_C::Get_Root_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.Get_Root_Visibility_1");

	UUI_ReplayPlayerStatus_C_Get_Root_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.Get_CashLabel_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_ReplayPlayerStatus_C::Get_CashLabel_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.Get_CashLabel_Text_1");

	UUI_ReplayPlayerStatus_C_Get_CashLabel_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLeft                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayPlayerStatus_C::Initialize(bool bLeft, int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.Initialize");

	UUI_ReplayPlayerStatus_C_Initialize_Params params;
	params.bLeft = bLeft;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.UpdateEquipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_ReplayPlayerStatus_C::UpdateEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.UpdateEquipment");

	UUI_ReplayPlayerStatus_C_UpdateEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ReplayPlayerStatus_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.Construct");

	UUI_ReplayPlayerStatus_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayPlayerStatus_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.Tick");

	UUI_ReplayPlayerStatus_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.ExecuteUbergraph_UI_ReplayPlayerStatus
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ReplayPlayerStatus_C::ExecuteUbergraph_UI_ReplayPlayerStatus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ReplayPlayerStatus.UI_ReplayPlayerStatus_C.ExecuteUbergraph_UI_ReplayPlayerStatus");

	UUI_ReplayPlayerStatus_C_ExecuteUbergraph_UI_ReplayPlayerStatus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
