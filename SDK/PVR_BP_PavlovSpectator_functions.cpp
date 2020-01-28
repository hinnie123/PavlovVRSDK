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

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.IsPawnRelevant
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPawn*             Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Relevant                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::IsPawnRelevant(class APavlovPawn* Pawn, float* Distance, bool* Relevant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.IsPawnRelevant");

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
// bool                           FirstPersonMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::SetCameraMode(bool FirstPersonMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.SetCameraMode");

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
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.ToggleXRay");

	ABP_PavlovSpectator_C_ToggleXRay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.TogglePlayerNames
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PavlovSpectator_C::TogglePlayerNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.TogglePlayerNames");

	ABP_PavlovSpectator_C_TogglePlayerNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.CanBeSpectated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           yes                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::CanBeSpectated(class APlayerState* PlayerState, bool* yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.CanBeSpectated");

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
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.SpecRelevantPawn");

	ABP_PavlovSpectator_C_SpecRelevantPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.SpecPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPawn*             Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::SpecPawn(class APavlovPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.SpecPawn");

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
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.SpecNextPlayer");

	ABP_PavlovSpectator_C_SpecNextPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.SetSpectatorTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              T                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PavlovSpectator_C::SetSpectatorTransform(const struct FTransform& T)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.SetSpectatorTransform");

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
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.UserConstructionScript");

	ABP_PavlovSpectator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Tab_K2Node_InputKeyEvent_30
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_Tab_K2Node_InputKeyEvent_30(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Tab_K2Node_InputKeyEvent_30");

	ABP_PavlovSpectator_C_InpActEvt_Tab_K2Node_InputKeyEvent_30_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Tab_K2Node_InputKeyEvent_29
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_Tab_K2Node_InputKeyEvent_29(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Tab_K2Node_InputKeyEvent_29");

	ABP_PavlovSpectator_C_InpActEvt_Tab_K2Node_InputKeyEvent_29_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_C_K2Node_InputKeyEvent_28
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_C_K2Node_InputKeyEvent_28(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_C_K2Node_InputKeyEvent_28");

	ABP_PavlovSpectator_C_InpActEvt_C_K2Node_InputKeyEvent_28_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_M_K2Node_InputKeyEvent_27
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_M_K2Node_InputKeyEvent_27(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_M_K2Node_InputKeyEvent_27");

	ABP_PavlovSpectator_C_InpActEvt_M_K2Node_InputKeyEvent_27_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_One_K2Node_InputKeyEvent_26
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_One_K2Node_InputKeyEvent_26(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_One_K2Node_InputKeyEvent_26");

	ABP_PavlovSpectator_C_InpActEvt_One_K2Node_InputKeyEvent_26_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Two_K2Node_InputKeyEvent_25
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_Two_K2Node_InputKeyEvent_25(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Two_K2Node_InputKeyEvent_25");

	ABP_PavlovSpectator_C_InpActEvt_Two_K2Node_InputKeyEvent_25_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_T_K2Node_InputKeyEvent_24
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_T_K2Node_InputKeyEvent_24(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_T_K2Node_InputKeyEvent_24");

	ABP_PavlovSpectator_C_InpActEvt_T_K2Node_InputKeyEvent_24_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_X_K2Node_InputKeyEvent_23
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_X_K2Node_InputKeyEvent_23(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_X_K2Node_InputKeyEvent_23");

	ABP_PavlovSpectator_C_InpActEvt_X_K2Node_InputKeyEvent_23_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_I_K2Node_InputKeyEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_I_K2Node_InputKeyEvent_22(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_I_K2Node_InputKeyEvent_22");

	ABP_PavlovSpectator_C_InpActEvt_I_K2Node_InputKeyEvent_22_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_L_K2Node_InputKeyEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_L_K2Node_InputKeyEvent_21(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_L_K2Node_InputKeyEvent_21");

	ABP_PavlovSpectator_C_InpActEvt_L_K2Node_InputKeyEvent_21_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_G_K2Node_InputKeyEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_G_K2Node_InputKeyEvent_20(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_G_K2Node_InputKeyEvent_20");

	ABP_PavlovSpectator_C_InpActEvt_G_K2Node_InputKeyEvent_20_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_G_K2Node_InputKeyEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_G_K2Node_InputKeyEvent_19(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_G_K2Node_InputKeyEvent_19");

	ABP_PavlovSpectator_C_InpActEvt_G_K2Node_InputKeyEvent_19_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F1_K2Node_InputKeyEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_F1_K2Node_InputKeyEvent_18(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F1_K2Node_InputKeyEvent_18");

	ABP_PavlovSpectator_C_InpActEvt_F1_K2Node_InputKeyEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F2_K2Node_InputKeyEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_F2_K2Node_InputKeyEvent_17(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F2_K2Node_InputKeyEvent_17");

	ABP_PavlovSpectator_C_InpActEvt_F2_K2Node_InputKeyEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F3_K2Node_InputKeyEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_F3_K2Node_InputKeyEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F3_K2Node_InputKeyEvent_16");

	ABP_PavlovSpectator_C_InpActEvt_F3_K2Node_InputKeyEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F4_K2Node_InputKeyEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_F4_K2Node_InputKeyEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F4_K2Node_InputKeyEvent_15");

	ABP_PavlovSpectator_C_InpActEvt_F4_K2Node_InputKeyEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_LeftShift_K2Node_InputKeyEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_14");

	ABP_PavlovSpectator_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_LeftShift_K2Node_InputKeyEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_13");

	ABP_PavlovSpectator_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_12");

	ABP_PavlovSpectator_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_11");

	ABP_PavlovSpectator_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_SpaceBar_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_10");

	ABP_PavlovSpectator_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Three_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_Three_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Three_K2Node_InputKeyEvent_9");

	ABP_PavlovSpectator_C_InpActEvt_Three_K2Node_InputKeyEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F5_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_F5_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F5_K2Node_InputKeyEvent_8");

	ABP_PavlovSpectator_C_InpActEvt_F5_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F6_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_F6_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F6_K2Node_InputKeyEvent_7");

	ABP_PavlovSpectator_C_InpActEvt_F6_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F7_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_F7_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F7_K2Node_InputKeyEvent_6");

	ABP_PavlovSpectator_C_InpActEvt_F7_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F8_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_F8_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F8_K2Node_InputKeyEvent_5");

	ABP_PavlovSpectator_C_InpActEvt_F8_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Escape_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_Escape_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Escape_K2Node_InputKeyEvent_4");

	ABP_PavlovSpectator_C_InpActEvt_Escape_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Z_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_Z_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Z_K2Node_InputKeyEvent_3");

	ABP_PavlovSpectator_C_InpActEvt_Z_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_V_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_V_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_V_K2Node_InputKeyEvent_2");

	ABP_PavlovSpectator_C_InpActEvt_V_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Zero_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PavlovSpectator_C::InpActEvt_Zero_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Zero_K2Node_InputKeyEvent_1");

	ABP_PavlovSpectator_C_InpActEvt_Zero_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.ReceivePossessed");

	ABP_PavlovSpectator_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::ReceiveUnpossessed(class AController** OldController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.ReceiveUnpossessed");

	ABP_PavlovSpectator_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.ReceiveTick");

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
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.CycleNextPlayer");

	ABP_PavlovSpectator_C_CycleNextPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.OnDemoPlaybackError
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDemoPlayFailure>* FailureType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                ErrorString                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PavlovSpectator_C::OnDemoPlaybackError(TEnumAsByte<EDemoPlayFailure>* FailureType, struct FString* ErrorString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.OnDemoPlaybackError");

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
// bool*                          bScrubing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::OnScrubChanged(bool* bScrubing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.OnScrubChanged");

	ABP_PavlovSpectator_C_OnScrubChanged_Params params;
	params.bScrubing = bScrubing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1");

	ABP_PavlovSpectator_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_3
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_3(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_3");

	ABP_PavlovSpectator_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_3_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1");

	ABP_PavlovSpectator_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_5
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_5(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_5");

	ABP_PavlovSpectator_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_5_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_7
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::InpAxisEvt_MoveUp_K2Node_InputAxisEvent_7(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_7");

	ABP_PavlovSpectator_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_7_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Ratio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::CustomEvent_1(float Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.CustomEvent_1");

	ABP_PavlovSpectator_C_CustomEvent_1_Params params;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APavlovPawn*             Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APavlovPlayerState*      PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::CustomEvent_2(class APavlovPawn* Pawn, class APavlovPlayerState* PlayerState, int Index, int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.CustomEvent_2");

	ABP_PavlovSpectator_C_CustomEvent_2_Params params;
	params.Pawn = Pawn;
	params.PlayerState = PlayerState;
	params.Index = Index;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::CustomEvent_3(int Index, int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.CustomEvent_3");

	ABP_PavlovSpectator_C_CustomEvent_3_Params params;
	params.Index = Index;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PavlovSpectator.BP_PavlovSpectator_C.ExecuteUbergraph_BP_PavlovSpectator
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PavlovSpectator_C::ExecuteUbergraph_BP_PavlovSpectator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PavlovSpectator.BP_PavlovSpectator_C.ExecuteUbergraph_BP_PavlovSpectator");

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
