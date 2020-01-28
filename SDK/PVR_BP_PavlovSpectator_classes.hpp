#pragma once

// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PavlovSpectator.BP_PavlovSpectator_C
// 0x0048 (0x0418 - 0x03D0)
class ABP_PavlovSpectator_C : public APavlovSpectatorPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_TeamSpecCycler_C*                        Team1Cycler;                                              // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_TeamSpecCycler_C*                        Team0Cycler;                                              // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUI_ReplayHUD_C*                             ReplayHUD;                                                // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               ClippingEnabled;                                          // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               XRayEnabled;                                              // 0x0401(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstPersonMode;                                          // 0x0402(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SaveView;                                                 // 0x0403(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CycleIndex;                                               // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerState*                                LastFPPlayerState;                                        // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CinematicMode;                                            // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	int                                                ActiveTeam;                                               // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
	void InpActEvt_Tab_K2Node_InputKeyEvent_30(const struct FKey& Key);
	void InpActEvt_Tab_K2Node_InputKeyEvent_29(const struct FKey& Key);
	void InpActEvt_C_K2Node_InputKeyEvent_28(const struct FKey& Key);
	void InpActEvt_M_K2Node_InputKeyEvent_27(const struct FKey& Key);
	void InpActEvt_One_K2Node_InputKeyEvent_26(const struct FKey& Key);
	void InpActEvt_Two_K2Node_InputKeyEvent_25(const struct FKey& Key);
	void InpActEvt_T_K2Node_InputKeyEvent_24(const struct FKey& Key);
	void InpActEvt_X_K2Node_InputKeyEvent_23(const struct FKey& Key);
	void InpActEvt_I_K2Node_InputKeyEvent_22(const struct FKey& Key);
	void InpActEvt_L_K2Node_InputKeyEvent_21(const struct FKey& Key);
	void InpActEvt_G_K2Node_InputKeyEvent_20(const struct FKey& Key);
	void InpActEvt_G_K2Node_InputKeyEvent_19(const struct FKey& Key);
	void InpActEvt_F1_K2Node_InputKeyEvent_18(const struct FKey& Key);
	void InpActEvt_F2_K2Node_InputKeyEvent_17(const struct FKey& Key);
	void InpActEvt_F3_K2Node_InputKeyEvent_16(const struct FKey& Key);
	void InpActEvt_F4_K2Node_InputKeyEvent_15(const struct FKey& Key);
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_SpaceBar_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_Three_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_F5_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_F6_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_F7_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_F8_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Escape_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Z_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_V_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Zero_K2Node_InputKeyEvent_1(const struct FKey& Key);
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
	void CustomEvent_2(class APavlovPawn* Pawn, class APavlovPlayerState* PlayerState, int Index, int TeamId);
	void CustomEvent_3(int Index, int TeamId);
	void ExecuteUbergraph_BP_PavlovSpectator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
