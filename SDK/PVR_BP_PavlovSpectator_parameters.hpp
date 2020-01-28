#pragma once

// PavlovVR (Dumped by Hinnie) SDK

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
	class APavlovPawn*                                 Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Relevant;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.SetCameraMode
struct ABP_PavlovSpectator_C_SetCameraMode_Params
{
	bool                                               FirstPersonMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
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
	class APlayerState*                                PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               yes;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.SpecRelevantPawn
struct ABP_PavlovSpectator_C_SpecRelevantPawn_Params
{
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.SpecPawn
struct ABP_PavlovSpectator_C_SpecPawn_Params
{
	class APavlovPawn*                                 Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.SpecNextPlayer
struct ABP_PavlovSpectator_C_SpecNextPlayer_Params
{
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.SetSpectatorTransform
struct ABP_PavlovSpectator_C_SetSpectatorTransform_Params
{
	struct FTransform                                  T;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.UserConstructionScript
struct ABP_PavlovSpectator_C_UserConstructionScript_Params
{
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Tab_K2Node_InputKeyEvent_30
struct ABP_PavlovSpectator_C_InpActEvt_Tab_K2Node_InputKeyEvent_30_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Tab_K2Node_InputKeyEvent_29
struct ABP_PavlovSpectator_C_InpActEvt_Tab_K2Node_InputKeyEvent_29_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_C_K2Node_InputKeyEvent_28
struct ABP_PavlovSpectator_C_InpActEvt_C_K2Node_InputKeyEvent_28_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_M_K2Node_InputKeyEvent_27
struct ABP_PavlovSpectator_C_InpActEvt_M_K2Node_InputKeyEvent_27_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_One_K2Node_InputKeyEvent_26
struct ABP_PavlovSpectator_C_InpActEvt_One_K2Node_InputKeyEvent_26_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Two_K2Node_InputKeyEvent_25
struct ABP_PavlovSpectator_C_InpActEvt_Two_K2Node_InputKeyEvent_25_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_T_K2Node_InputKeyEvent_24
struct ABP_PavlovSpectator_C_InpActEvt_T_K2Node_InputKeyEvent_24_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_X_K2Node_InputKeyEvent_23
struct ABP_PavlovSpectator_C_InpActEvt_X_K2Node_InputKeyEvent_23_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_I_K2Node_InputKeyEvent_22
struct ABP_PavlovSpectator_C_InpActEvt_I_K2Node_InputKeyEvent_22_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_L_K2Node_InputKeyEvent_21
struct ABP_PavlovSpectator_C_InpActEvt_L_K2Node_InputKeyEvent_21_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_G_K2Node_InputKeyEvent_20
struct ABP_PavlovSpectator_C_InpActEvt_G_K2Node_InputKeyEvent_20_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_G_K2Node_InputKeyEvent_19
struct ABP_PavlovSpectator_C_InpActEvt_G_K2Node_InputKeyEvent_19_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F1_K2Node_InputKeyEvent_18
struct ABP_PavlovSpectator_C_InpActEvt_F1_K2Node_InputKeyEvent_18_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F2_K2Node_InputKeyEvent_17
struct ABP_PavlovSpectator_C_InpActEvt_F2_K2Node_InputKeyEvent_17_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F3_K2Node_InputKeyEvent_16
struct ABP_PavlovSpectator_C_InpActEvt_F3_K2Node_InputKeyEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F4_K2Node_InputKeyEvent_15
struct ABP_PavlovSpectator_C_InpActEvt_F4_K2Node_InputKeyEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_14
struct ABP_PavlovSpectator_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_13
struct ABP_PavlovSpectator_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_12
struct ABP_PavlovSpectator_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_11
struct ABP_PavlovSpectator_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_10
struct ABP_PavlovSpectator_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Three_K2Node_InputKeyEvent_9
struct ABP_PavlovSpectator_C_InpActEvt_Three_K2Node_InputKeyEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F5_K2Node_InputKeyEvent_8
struct ABP_PavlovSpectator_C_InpActEvt_F5_K2Node_InputKeyEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F6_K2Node_InputKeyEvent_7
struct ABP_PavlovSpectator_C_InpActEvt_F6_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F7_K2Node_InputKeyEvent_6
struct ABP_PavlovSpectator_C_InpActEvt_F7_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_F8_K2Node_InputKeyEvent_5
struct ABP_PavlovSpectator_C_InpActEvt_F8_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Escape_K2Node_InputKeyEvent_4
struct ABP_PavlovSpectator_C_InpActEvt_Escape_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Z_K2Node_InputKeyEvent_3
struct ABP_PavlovSpectator_C_InpActEvt_Z_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_V_K2Node_InputKeyEvent_2
struct ABP_PavlovSpectator_C_InpActEvt_V_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpActEvt_Zero_K2Node_InputKeyEvent_1
struct ABP_PavlovSpectator_C_InpActEvt_Zero_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.ReceivePossessed
struct ABP_PavlovSpectator_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.ReceiveUnpossessed
struct ABP_PavlovSpectator_C_ReceiveUnpossessed_Params
{
	class AController**                                OldController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.ReceiveTick
struct ABP_PavlovSpectator_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.CycleNextPlayer
struct ABP_PavlovSpectator_C_CycleNextPlayer_Params
{
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.OnDemoPlaybackError
struct ABP_PavlovSpectator_C_OnDemoPlaybackError_Params
{
	TEnumAsByte<EDemoPlayFailure>*                     FailureType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    ErrorString;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.OnScrubChanged
struct ABP_PavlovSpectator_C_OnScrubChanged_Params
{
	bool*                                              bScrubing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1
struct ABP_PavlovSpectator_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_3
struct ABP_PavlovSpectator_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_3_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
struct ABP_PavlovSpectator_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_5
struct ABP_PavlovSpectator_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_5_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_7
struct ABP_PavlovSpectator_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_7_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.CustomEvent_1
struct ABP_PavlovSpectator_C_CustomEvent_1_Params
{
	float                                              Ratio;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.CustomEvent_2
struct ABP_PavlovSpectator_C_CustomEvent_2_Params
{
	class APavlovPawn*                                 Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APavlovPlayerState*                          PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.CustomEvent_3
struct ABP_PavlovSpectator_C_CustomEvent_3_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PavlovSpectator.BP_PavlovSpectator_C.ExecuteUbergraph_BP_PavlovSpectator
struct ABP_PavlovSpectator_C_ExecuteUbergraph_BP_PavlovSpectator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
