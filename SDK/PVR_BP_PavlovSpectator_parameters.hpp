#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.IsPawnRelevant
struct ABP_PavlovSpectator_C_IsPawnRelevant_Params
{
	class APavlovPawn*                                 Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Relevant;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.SetCameraMode
struct ABP_PavlovSpectator_C_SetCameraMode_Params
{
	bool                                               FirstPersonMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.ToggleXRay
struct ABP_PavlovSpectator_C_ToggleXRay_Params
{
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.TogglePlayerNames
struct ABP_PavlovSpectator_C_TogglePlayerNames_Params
{
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.CanBeSpectated
struct ABP_PavlovSpectator_C_CanBeSpectated_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               yes;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.SpecRelevantPawn
struct ABP_PavlovSpectator_C_SpecRelevantPawn_Params
{
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.SpecPawn
struct ABP_PavlovSpectator_C_SpecPawn_Params
{
	class APavlovPawn*                                 Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.SpecNextPlayer
struct ABP_PavlovSpectator_C_SpecNextPlayer_Params
{
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.SetSpectatorTransform
struct ABP_PavlovSpectator_C_SetSpectatorTransform_Params
{
	struct FTransform                                  T;                                                        // (Parm, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.UserConstructionScript
struct ABP_PavlovSpectator_C_UserConstructionScript_Params
{
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Tab_K2Node_InputKeyEvent_60
struct ABP_PavlovSpectator_C_InpActEvt_Tab_K2Node_InputKeyEvent_60_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Tab_K2Node_InputKeyEvent_59
struct ABP_PavlovSpectator_C_InpActEvt_Tab_K2Node_InputKeyEvent_59_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_C_K2Node_InputKeyEvent_58
struct ABP_PavlovSpectator_C_InpActEvt_C_K2Node_InputKeyEvent_58_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_M_K2Node_InputKeyEvent_57
struct ABP_PavlovSpectator_C_InpActEvt_M_K2Node_InputKeyEvent_57_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_One_K2Node_InputKeyEvent_56
struct ABP_PavlovSpectator_C_InpActEvt_One_K2Node_InputKeyEvent_56_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Two_K2Node_InputKeyEvent_55
struct ABP_PavlovSpectator_C_InpActEvt_Two_K2Node_InputKeyEvent_55_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_T_K2Node_InputKeyEvent_54
struct ABP_PavlovSpectator_C_InpActEvt_T_K2Node_InputKeyEvent_54_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_X_K2Node_InputKeyEvent_53
struct ABP_PavlovSpectator_C_InpActEvt_X_K2Node_InputKeyEvent_53_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_I_K2Node_InputKeyEvent_52
struct ABP_PavlovSpectator_C_InpActEvt_I_K2Node_InputKeyEvent_52_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_L_K2Node_InputKeyEvent_51
struct ABP_PavlovSpectator_C_InpActEvt_L_K2Node_InputKeyEvent_51_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_G_K2Node_InputKeyEvent_50
struct ABP_PavlovSpectator_C_InpActEvt_G_K2Node_InputKeyEvent_50_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_G_K2Node_InputKeyEvent_49
struct ABP_PavlovSpectator_C_InpActEvt_G_K2Node_InputKeyEvent_49_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F1_K2Node_InputKeyEvent_48
struct ABP_PavlovSpectator_C_InpActEvt_F1_K2Node_InputKeyEvent_48_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F2_K2Node_InputKeyEvent_47
struct ABP_PavlovSpectator_C_InpActEvt_F2_K2Node_InputKeyEvent_47_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F3_K2Node_InputKeyEvent_46
struct ABP_PavlovSpectator_C_InpActEvt_F3_K2Node_InputKeyEvent_46_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F4_K2Node_InputKeyEvent_45
struct ABP_PavlovSpectator_C_InpActEvt_F4_K2Node_InputKeyEvent_45_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_44
struct ABP_PavlovSpectator_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_44_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_43
struct ABP_PavlovSpectator_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_43_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_42
struct ABP_PavlovSpectator_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_42_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_41
struct ABP_PavlovSpectator_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_41_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_40
struct ABP_PavlovSpectator_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_40_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Three_K2Node_InputKeyEvent_39
struct ABP_PavlovSpectator_C_InpActEvt_Three_K2Node_InputKeyEvent_39_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F5_K2Node_InputKeyEvent_38
struct ABP_PavlovSpectator_C_InpActEvt_F5_K2Node_InputKeyEvent_38_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F6_K2Node_InputKeyEvent_37
struct ABP_PavlovSpectator_C_InpActEvt_F6_K2Node_InputKeyEvent_37_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F7_K2Node_InputKeyEvent_36
struct ABP_PavlovSpectator_C_InpActEvt_F7_K2Node_InputKeyEvent_36_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F8_K2Node_InputKeyEvent_35
struct ABP_PavlovSpectator_C_InpActEvt_F8_K2Node_InputKeyEvent_35_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Escape_K2Node_InputKeyEvent_34
struct ABP_PavlovSpectator_C_InpActEvt_Escape_K2Node_InputKeyEvent_34_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Z_K2Node_InputKeyEvent_33
struct ABP_PavlovSpectator_C_InpActEvt_Z_K2Node_InputKeyEvent_33_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_V_K2Node_InputKeyEvent_32
struct ABP_PavlovSpectator_C_InpActEvt_V_K2Node_InputKeyEvent_32_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Zero_K2Node_InputKeyEvent_31
struct ABP_PavlovSpectator_C_InpActEvt_Zero_K2Node_InputKeyEvent_31_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.ReceivePossessed
struct ABP_PavlovSpectator_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.ReceiveUnpossessed
struct ABP_PavlovSpectator_C_ReceiveUnpossessed_Params
{
	class AController**                                OldController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.ReceiveTick
struct ABP_PavlovSpectator_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.CycleNextPlayer
struct ABP_PavlovSpectator_C_CycleNextPlayer_Params
{
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.OnDemoPlaybackError
struct ABP_PavlovSpectator_C_OnDemoPlaybackError_Params
{
	TEnumAsByte<EDemoPlayFailure>*                     FailureType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    ErrorString;                                              // (Parm, ZeroConstructor)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.OnScrubChanged
struct ABP_PavlovSpectator_C_OnScrubChanged_Params
{
	bool*                                              bScrubing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1
struct ABP_PavlovSpectator_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_3
struct ABP_PavlovSpectator_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_3_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
struct ABP_PavlovSpectator_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_5
struct ABP_PavlovSpectator_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_5_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_7
struct ABP_PavlovSpectator_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_7_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.CustomEvent_1
struct ABP_PavlovSpectator_C_CustomEvent_1_Params
{
	float                                              Ratio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.CustomEvent_2
struct ABP_PavlovSpectator_C_CustomEvent_2_Params
{
	class APavlovPawn*                                 Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPlayerState*                          PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.CustomEvent_3
struct ABP_PavlovSpectator_C_CustomEvent_3_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.ExecuteUbergraph_BP_PavlovSpectator
struct ABP_PavlovSpectator_C_ExecuteUbergraph_BP_PavlovSpectator_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
