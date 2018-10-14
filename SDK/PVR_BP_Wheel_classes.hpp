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

// BlueprintGeneratedClass BP_Wheel.BP_Wheel_C
// 0x000B (0x040B - 0x0400)
class ABP_Wheel_C : public AUberWheel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	TEnumAsByte<EMenuTypeEnum>                         MenuType;                                                 // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBuyMenuMode>                          BuyMenuMode;                                              // 0x0409(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BuyingEnabled;                                            // 0x040A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Wheel.BP_Wheel_C");
		return ptr;
	}


	void EnableMenuFromGhost(class AVRPawn* self2, class AVRPawn* self3);
	void HandleTkCommit(const struct FWheelSegment& WheelSegment, const struct FName& Selection);
	void SwitchToTKMenu();
	void SwitchToRootMenu();
	void CommitAndClose();
	void HandleBuyCommit(int A, const struct FWheelSegment& WheelSegment);
	void SetCenterLabel(const struct FText& CenterLabel);
	void GetBuySegment_List(TEnumAsByte<EBuyMenuMode> Index, TArray<struct FWheelSegment>* Segments);
	void SwitchToBuyMenu();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnBuyingChanged_Event_1(bool bBuying);
	void UpdateBuyMenu();
	void OnEnabled();
	void CustomEvent_1();
	void OnCommit(int* Selection, struct FWheelSegment* Segment);
	void ExecuteUbergraph_BP_Wheel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
