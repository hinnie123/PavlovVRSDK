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

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.IsPawnRelevant
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPawn*             Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Relevant                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::IsPawnRelevant(class APavlovPawn* Pawn, float* Distance, bool* Relevant)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.IsPawnRelevant"));

	ABP_PavlovSpectator_C_IsPawnRelevant_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
	if (Relevant != nullptr)
		*Relevant = params.Relevant;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.SetCameraMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FirstPersonMode                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::SetCameraMode(bool FirstPersonMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.SetCameraMode"));

	ABP_PavlovSpectator_C_SetCameraMode_Params params;
	params.FirstPersonMode = FirstPersonMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.ToggleXRay
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PavlovSpectator_C::ToggleXRay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.ToggleXRay"));

	ABP_PavlovSpectator_C_ToggleXRay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.TogglePlayerNames
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PavlovSpectator_C::TogglePlayerNames()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.TogglePlayerNames"));

	ABP_PavlovSpectator_C_TogglePlayerNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.CanBeSpectated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           yes                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::CanBeSpectated(class APlayerState* PlayerState, bool* yes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.CanBeSpectated"));

	ABP_PavlovSpectator_C_CanBeSpectated_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (yes != nullptr)
		*yes = params.yes;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.SpecRelevantPawn
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PavlovSpectator_C::SpecRelevantPawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.SpecRelevantPawn"));

	ABP_PavlovSpectator_C_SpecRelevantPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.SpecPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPawn*             Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::SpecPawn(class APavlovPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.SpecPawn"));

	ABP_PavlovSpectator_C_SpecPawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.SpecNextPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PavlovSpectator_C::SpecNextPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.SpecNextPlayer"));

	ABP_PavlovSpectator_C_SpecNextPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.SetSpectatorTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              T                              (Parm, IsPlainOldData)

void ABP_PavlovSpectator_C::SetSpectatorTransform(const struct FTransform& T)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.SetSpectatorTransform"));

	ABP_PavlovSpectator_C_SetSpectatorTransform_Params params;
	params.T = T;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PavlovSpectator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.UserConstructionScript"));

	ABP_PavlovSpectator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Tab_K2Node_InputKeyEvent_60
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_Tab_K2Node_InputKeyEvent_60(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Tab_K2Node_InputKeyEvent_60"));

	ABP_PavlovSpectator_C_InpActEvt_Tab_K2Node_InputKeyEvent_60_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Tab_K2Node_InputKeyEvent_59
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_Tab_K2Node_InputKeyEvent_59(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Tab_K2Node_InputKeyEvent_59"));

	ABP_PavlovSpectator_C_InpActEvt_Tab_K2Node_InputKeyEvent_59_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_C_K2Node_InputKeyEvent_58
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_C_K2Node_InputKeyEvent_58(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_C_K2Node_InputKeyEvent_58"));

	ABP_PavlovSpectator_C_InpActEvt_C_K2Node_InputKeyEvent_58_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_M_K2Node_InputKeyEvent_57
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_M_K2Node_InputKeyEvent_57(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_M_K2Node_InputKeyEvent_57"));

	ABP_PavlovSpectator_C_InpActEvt_M_K2Node_InputKeyEvent_57_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_One_K2Node_InputKeyEvent_56
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_One_K2Node_InputKeyEvent_56(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_One_K2Node_InputKeyEvent_56"));

	ABP_PavlovSpectator_C_InpActEvt_One_K2Node_InputKeyEvent_56_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Two_K2Node_InputKeyEvent_55
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_Two_K2Node_InputKeyEvent_55(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Two_K2Node_InputKeyEvent_55"));

	ABP_PavlovSpectator_C_InpActEvt_Two_K2Node_InputKeyEvent_55_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_T_K2Node_InputKeyEvent_54
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_T_K2Node_InputKeyEvent_54(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_T_K2Node_InputKeyEvent_54"));

	ABP_PavlovSpectator_C_InpActEvt_T_K2Node_InputKeyEvent_54_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_X_K2Node_InputKeyEvent_53
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_X_K2Node_InputKeyEvent_53(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_X_K2Node_InputKeyEvent_53"));

	ABP_PavlovSpectator_C_InpActEvt_X_K2Node_InputKeyEvent_53_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_I_K2Node_InputKeyEvent_52
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_I_K2Node_InputKeyEvent_52(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_I_K2Node_InputKeyEvent_52"));

	ABP_PavlovSpectator_C_InpActEvt_I_K2Node_InputKeyEvent_52_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_L_K2Node_InputKeyEvent_51
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_L_K2Node_InputKeyEvent_51(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_L_K2Node_InputKeyEvent_51"));

	ABP_PavlovSpectator_C_InpActEvt_L_K2Node_InputKeyEvent_51_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_G_K2Node_InputKeyEvent_50
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_G_K2Node_InputKeyEvent_50(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_G_K2Node_InputKeyEvent_50"));

	ABP_PavlovSpectator_C_InpActEvt_G_K2Node_InputKeyEvent_50_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_G_K2Node_InputKeyEvent_49
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_G_K2Node_InputKeyEvent_49(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_G_K2Node_InputKeyEvent_49"));

	ABP_PavlovSpectator_C_InpActEvt_G_K2Node_InputKeyEvent_49_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F1_K2Node_InputKeyEvent_48
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_F1_K2Node_InputKeyEvent_48(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F1_K2Node_InputKeyEvent_48"));

	ABP_PavlovSpectator_C_InpActEvt_F1_K2Node_InputKeyEvent_48_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F2_K2Node_InputKeyEvent_47
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_F2_K2Node_InputKeyEvent_47(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F2_K2Node_InputKeyEvent_47"));

	ABP_PavlovSpectator_C_InpActEvt_F2_K2Node_InputKeyEvent_47_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F3_K2Node_InputKeyEvent_46
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_F3_K2Node_InputKeyEvent_46(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F3_K2Node_InputKeyEvent_46"));

	ABP_PavlovSpectator_C_InpActEvt_F3_K2Node_InputKeyEvent_46_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F4_K2Node_InputKeyEvent_45
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_F4_K2Node_InputKeyEvent_45(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F4_K2Node_InputKeyEvent_45"));

	ABP_PavlovSpectator_C_InpActEvt_F4_K2Node_InputKeyEvent_45_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_44
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_LeftShift_K2Node_InputKeyEvent_44(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_44"));

	ABP_PavlovSpectator_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_44_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_43
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_LeftShift_K2Node_InputKeyEvent_43(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_43"));

	ABP_PavlovSpectator_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_43_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_42
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_42(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_42"));

	ABP_PavlovSpectator_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_42_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_41
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_41(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_41"));

	ABP_PavlovSpectator_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_41_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_40
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_SpaceBar_K2Node_InputKeyEvent_40(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_40"));

	ABP_PavlovSpectator_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_40_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Three_K2Node_InputKeyEvent_39
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_Three_K2Node_InputKeyEvent_39(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Three_K2Node_InputKeyEvent_39"));

	ABP_PavlovSpectator_C_InpActEvt_Three_K2Node_InputKeyEvent_39_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F5_K2Node_InputKeyEvent_38
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_F5_K2Node_InputKeyEvent_38(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F5_K2Node_InputKeyEvent_38"));

	ABP_PavlovSpectator_C_InpActEvt_F5_K2Node_InputKeyEvent_38_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F6_K2Node_InputKeyEvent_37
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_F6_K2Node_InputKeyEvent_37(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F6_K2Node_InputKeyEvent_37"));

	ABP_PavlovSpectator_C_InpActEvt_F6_K2Node_InputKeyEvent_37_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F7_K2Node_InputKeyEvent_36
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_F7_K2Node_InputKeyEvent_36(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F7_K2Node_InputKeyEvent_36"));

	ABP_PavlovSpectator_C_InpActEvt_F7_K2Node_InputKeyEvent_36_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F8_K2Node_InputKeyEvent_35
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_F8_K2Node_InputKeyEvent_35(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F8_K2Node_InputKeyEvent_35"));

	ABP_PavlovSpectator_C_InpActEvt_F8_K2Node_InputKeyEvent_35_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Escape_K2Node_InputKeyEvent_34
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_Escape_K2Node_InputKeyEvent_34(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Escape_K2Node_InputKeyEvent_34"));

	ABP_PavlovSpectator_C_InpActEvt_Escape_K2Node_InputKeyEvent_34_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Z_K2Node_InputKeyEvent_33
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_Z_K2Node_InputKeyEvent_33(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Z_K2Node_InputKeyEvent_33"));

	ABP_PavlovSpectator_C_InpActEvt_Z_K2Node_InputKeyEvent_33_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_V_K2Node_InputKeyEvent_32
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_V_K2Node_InputKeyEvent_32(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_V_K2Node_InputKeyEvent_32"));

	ABP_PavlovSpectator_C_InpActEvt_V_K2Node_InputKeyEvent_32_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Zero_K2Node_InputKeyEvent_31
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_PavlovSpectator_C::InpActEvt_Zero_K2Node_InputKeyEvent_31(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Zero_K2Node_InputKeyEvent_31"));

	ABP_PavlovSpectator_C_InpActEvt_Zero_K2Node_InputKeyEvent_31_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.ReceivePossessed"));

	ABP_PavlovSpectator_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            OldController                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::ReceiveUnpossessed(class AController** OldController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.ReceiveUnpossessed"));

	ABP_PavlovSpectator_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.ReceiveTick"));

	ABP_PavlovSpectator_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.CycleNextPlayer
// (BlueprintCallable, BlueprintEvent)

void ABP_PavlovSpectator_C::CycleNextPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.CycleNextPlayer"));

	ABP_PavlovSpectator_C_CycleNextPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.OnDemoPlaybackError
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDemoPlayFailure>* FailureType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                ErrorString                    (Parm, ZeroConstructor)

void ABP_PavlovSpectator_C::OnDemoPlaybackError(TEnumAsByte<EDemoPlayFailure>* FailureType, struct FString* ErrorString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.OnDemoPlaybackError"));

	ABP_PavlovSpectator_C_OnDemoPlaybackError_Params params;
	params.FailureType = FailureType;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.OnScrubChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bScrubing                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::OnScrubChanged(bool* bScrubing)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.OnScrubChanged"));

	ABP_PavlovSpectator_C_OnScrubChanged_Params params;
	params.bScrubing = bScrubing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1"));

	ABP_PavlovSpectator_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_3
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_3(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_3"));

	ABP_PavlovSpectator_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_3_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1"));

	ABP_PavlovSpectator_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_5
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_5(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_5"));

	ABP_PavlovSpectator_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_5_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_7
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::InpAxisEvt_MoveUp_K2Node_InputAxisEvent_7(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_7"));

	ABP_PavlovSpectator_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_7_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Ratio                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::CustomEvent_1(float Ratio)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.CustomEvent_1"));

	ABP_PavlovSpectator_C_CustomEvent_1_Params params;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPawn*             Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPlayerState*      PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::CustomEvent_2(class APavlovPawn* Pawn, class APavlovPlayerState* PlayerState, int Index, int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.CustomEvent_2"));

	ABP_PavlovSpectator_C_CustomEvent_2_Params params;
	params.Pawn = Pawn;
	params.PlayerState = PlayerState;
	params.Index = Index;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::CustomEvent_3(int Index, int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.CustomEvent_3"));

	ABP_PavlovSpectator_C_CustomEvent_3_Params params;
	params.Index = Index;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.ExecuteUbergraph_BP_PavlovSpectator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::ExecuteUbergraph_BP_PavlovSpectator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PavlovSpectator.BP_PavlovSpectator_C.ExecuteUbergraph_BP_PavlovSpectator"));

	ABP_PavlovSpectator_C_ExecuteUbergraph_BP_PavlovSpectator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
