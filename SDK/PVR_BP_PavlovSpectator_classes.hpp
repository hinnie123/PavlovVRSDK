#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PavlovSpectator.BP_PavlovSpectator_C
// 0x0048 (0x04A8 - 0x0460)
class ABP_PavlovSpectator_C : public APavlovSpectatorPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (Transient, DuplicateTransient)
	class UBP_TeamSpecCycler_C*                        Team1Cycler;                                              // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_TeamSpecCycler_C*                        Team0Cycler;                                              // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUI_ReplayHUD_C*                             ReplayHUD;                                                // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClippingEnabled;                                          // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               XRayEnabled;                                              // 0x0491(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstPersonMode;                                          // 0x0492(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SaveView;                                                 // 0x0493(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CycleIndex;                                               // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerState*                                LastFPPlayerState;                                        // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CinematicMode;                                            // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04A1(0x0003) MISSED OFFSET
	int                                                ActiveTeam;                                               // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PavlovSpectator.BP_PavlovSpectator_C");
		return ptr;
	}


	void IsPawnRelevant(class APavlovPawn* Pawn, float* Distance, bool* Relevant);
	void SetCameraMode(bool FirstPersonMode);
	void ToggleXRay();
	void TogglePlayerNames();
	void CanBeSpectated(class APlayerState* PlayerState, bool* yes);
	void SpecRelevantPawn();
	void SpecPawn(class APavlovPawn* Pawn);
	void SpecNextPlayer();
	void SetSpectatorTransform(const struct FTransform& T);
	void UserConstructionScript();
	void InpActEvt_Tab_K2Node_InputKeyEvent_60(const struct FKey& Key);
	void InpActEvt_Tab_K2Node_InputKeyEvent_59(const struct FKey& Key);
	void InpActEvt_C_K2Node_InputKeyEvent_58(const struct FKey& Key);
	void InpActEvt_M_K2Node_InputKeyEvent_57(const struct FKey& Key);
	void InpActEvt_One_K2Node_InputKeyEvent_56(const struct FKey& Key);
	void InpActEvt_Two_K2Node_InputKeyEvent_55(const struct FKey& Key);
	void InpActEvt_T_K2Node_InputKeyEvent_54(const struct FKey& Key);
	void InpActEvt_X_K2Node_InputKeyEvent_53(const struct FKey& Key);
	void InpActEvt_I_K2Node_InputKeyEvent_52(const struct FKey& Key);
	void InpActEvt_L_K2Node_InputKeyEvent_51(const struct FKey& Key);
	void InpActEvt_G_K2Node_InputKeyEvent_50(const struct FKey& Key);
	void InpActEvt_G_K2Node_InputKeyEvent_49(const struct FKey& Key);
	void InpActEvt_F1_K2Node_InputKeyEvent_48(const struct FKey& Key);
	void InpActEvt_F2_K2Node_InputKeyEvent_47(const struct FKey& Key);
	void InpActEvt_F3_K2Node_InputKeyEvent_46(const struct FKey& Key);
	void InpActEvt_F4_K2Node_InputKeyEvent_45(const struct FKey& Key);
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_44(const struct FKey& Key);
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_43(const struct FKey& Key);
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_42(const struct FKey& Key);
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_41(const struct FKey& Key);
	void InpActEvt_SpaceBar_K2Node_InputKeyEvent_40(const struct FKey& Key);
	void InpActEvt_Three_K2Node_InputKeyEvent_39(const struct FKey& Key);
	void InpActEvt_F5_K2Node_InputKeyEvent_38(const struct FKey& Key);
	void InpActEvt_F6_K2Node_InputKeyEvent_37(const struct FKey& Key);
	void InpActEvt_F7_K2Node_InputKeyEvent_36(const struct FKey& Key);
	void InpActEvt_F8_K2Node_InputKeyEvent_35(const struct FKey& Key);
	void InpActEvt_Escape_K2Node_InputKeyEvent_34(const struct FKey& Key);
	void InpActEvt_Z_K2Node_InputKeyEvent_33(const struct FKey& Key);
	void InpActEvt_V_K2Node_InputKeyEvent_32(const struct FKey& Key);
	void InpActEvt_Zero_K2Node_InputKeyEvent_31(const struct FKey& Key);
	void ReceivePossessed(class AController** NewController);
	void ReceiveUnpossessed(class AController** OldController);
	void ReceiveTick(float* DeltaSeconds);
	void CycleNextPlayer();
	void OnDemoPlaybackError(TEnumAsByte<EDemoPlayFailure>* FailureType, struct FString* ErrorString);
	void OnScrubChanged(bool* bScrubing);
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_3(float AxisValue);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_5(float AxisValue);
	void InpAxisEvt_MoveUp_K2Node_InputAxisEvent_7(float AxisValue);
	void CustomEvent_1(float Ratio);
	void CustomEvent_2(class APavlovPawn* Pawn, class APavlovPlayerState* PlayerState, int Index, int TeamID);
	void CustomEvent_3(int Index, int TeamID);
	void ExecuteUbergraph_BP_PavlovSpectator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
