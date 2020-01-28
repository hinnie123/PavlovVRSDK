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

// Function UI_CustomServerEntry.UI_CustomServerEntry_C.Get_ping_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_CustomServerEntry_C::Get_ping_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerEntry.UI_CustomServerEntry_C.Get_ping_ColorAndOpacity_1");

	UUI_CustomServerEntry_C_Get_ping_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CustomServerEntry.UI_CustomServerEntry_C.Connect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_CustomServerEntry_C::Connect()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerEntry.UI_CustomServerEntry_C.Connect");

	UUI_CustomServerEntry_C_Connect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomServerEntry.UI_CustomServerEntry_C.GetTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_CustomServerEntry_C::GetTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerEntry.UI_CustomServerEntry_C.GetTime");

	UUI_CustomServerEntry_C_GetTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CustomServerEntry.UI_CustomServerEntry_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_CustomServerEntry_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerEntry.UI_CustomServerEntry_C.OnMouseButtonUp");

	UUI_CustomServerEntry_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CustomServerEntry.UI_CustomServerEntry_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_CustomServerEntry_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerEntry.UI_CustomServerEntry_C.OnMouseButtonDown");

	UUI_CustomServerEntry_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CustomServerEntry.UI_CustomServerEntry_C.Get_players_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_CustomServerEntry_C::Get_players_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerEntry.UI_CustomServerEntry_C.Get_players_Text_1");

	UUI_CustomServerEntry_C_Get_players_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CustomServerEntry.UI_CustomServerEntry_C.Get_ping_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_CustomServerEntry_C::Get_ping_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerEntry.UI_CustomServerEntry_C.Get_ping_Text_1");

	UUI_CustomServerEntry_C_Get_ping_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CustomServerEntry.UI_CustomServerEntry_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CustomServerEntry_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerEntry.UI_CustomServerEntry_C.OnMouseEnter");

	UUI_CustomServerEntry_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomServerEntry.UI_CustomServerEntry_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CustomServerEntry_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerEntry.UI_CustomServerEntry_C.OnMouseLeave");

	UUI_CustomServerEntry_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomServerEntry.UI_CustomServerEntry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CustomServerEntry_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerEntry.UI_CustomServerEntry_C.Tick");

	UUI_CustomServerEntry_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomServerEntry.UI_CustomServerEntry_C.ExecuteUbergraph_UI_CustomServerEntry
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CustomServerEntry_C::ExecuteUbergraph_UI_CustomServerEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerEntry.UI_CustomServerEntry_C.ExecuteUbergraph_UI_CustomServerEntry");

	UUI_CustomServerEntry_C_ExecuteUbergraph_UI_CustomServerEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomServerEntry.UI_CustomServerEntry_C.OnJoinClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerDetails          Server                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CustomServerEntry_C::OnJoinClicked__DelegateSignature(const struct FServerDetails& Server)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomServerEntry.UI_CustomServerEntry_C.OnJoinClicked__DelegateSignature");

	UUI_CustomServerEntry_C_OnJoinClicked__DelegateSignature_Params params;
	params.Server = Server;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
