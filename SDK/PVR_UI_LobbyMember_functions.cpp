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

// Function UI_LobbyMember.UI_LobbyMember_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_LobbyMember_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbyMember.UI_LobbyMember_C.GetBrush_1"));

	UUI_LobbyMember_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_LobbyMember.UI_LobbyMember_C.Get_KickButton_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_LobbyMember_C::Get_KickButton_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbyMember.UI_LobbyMember_C.Get_KickButton_Visibility_1"));

	UUI_LobbyMember_C_Get_KickButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_LobbyMember.UI_LobbyMember_C.Get_ReadyOverlay_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_LobbyMember_C::Get_ReadyOverlay_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbyMember.UI_LobbyMember_C.Get_ReadyOverlay_Visibility_1"));

	UUI_LobbyMember_C_Get_ReadyOverlay_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_LobbyMember.UI_LobbyMember_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_LobbyMember_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbyMember.UI_LobbyMember_C.OnMouseButtonDown"));

	UUI_LobbyMember_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_LobbyMember.UI_LobbyMember_C.Get_OwnerIcon_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_LobbyMember_C::Get_OwnerIcon_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbyMember.UI_LobbyMember_C.Get_OwnerIcon_Visibility_1"));

	UUI_LobbyMember_C_Get_OwnerIcon_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_LobbyMember.UI_LobbyMember_C.IsMemberTalking
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Talking                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_LobbyMember_C::IsMemberTalking(int Index, bool* Talking)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbyMember.UI_LobbyMember_C.IsMemberTalking"));

	UUI_LobbyMember_C_IsMemberTalking_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Talking != nullptr)
		*Talking = params.Talking;
}


// Function UI_LobbyMember.UI_LobbyMember_C.GetTeamColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            inInt                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_LobbyMember_C::GetTeamColor(int inInt)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbyMember.UI_LobbyMember_C.GetTeamColor"));

	UUI_LobbyMember_C_GetTeamColor_Params params;
	params.inInt = inInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_LobbyMember.UI_LobbyMember_C.Get_AvatarImage_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_LobbyMember_C::Get_AvatarImage_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbyMember.UI_LobbyMember_C.Get_AvatarImage_Brush_1"));

	UUI_LobbyMember_C_Get_AvatarImage_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_LobbyMember.UI_LobbyMember_C.GetColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_LobbyMember_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbyMember.UI_LobbyMember_C.GetColorAndOpacity_1"));

	UUI_LobbyMember_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_LobbyMember.UI_LobbyMember_C.BndEvt__MuteButton_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_LobbyMember_C::BndEvt__MuteButton_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbyMember.UI_LobbyMember_C.BndEvt__MuteButton_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature"));

	UUI_LobbyMember_C_BndEvt__MuteButton_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LobbyMember.UI_LobbyMember_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_165_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_LobbyMember_C::BndEvt__KickButton_K2Node_ComponentBoundEvent_165_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbyMember.UI_LobbyMember_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_165_OnButtonClickedEvent__DelegateSignature"));

	UUI_LobbyMember_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_165_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LobbyMember.UI_LobbyMember_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_LobbyMember_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbyMember.UI_LobbyMember_C.OnMouseLeave"));

	UUI_LobbyMember_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LobbyMember.UI_LobbyMember_C.ExecuteUbergraph_UI_LobbyMember
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_LobbyMember_C::ExecuteUbergraph_UI_LobbyMember(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_LobbyMember.UI_LobbyMember_C.ExecuteUbergraph_UI_LobbyMember"));

	UUI_LobbyMember_C_ExecuteUbergraph_UI_LobbyMember_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
