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

// BlueprintGeneratedClass BP_Wheel.BP_Wheel_C
// 0x0020 (0x03C0 - 0x03A0)
class ABP_Wheel_C : public AUberWheel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<EMenuTypeEnum>                         MenuType;                                                 // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBuyMenuMode>                          BuyMenuMode;                                              // 0x03A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BuyingEnabled;                                            // 0x03AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x03AB(0x0005) MISSED OFFSET
	struct FName                                       SightRootId;                                              // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                DelayedUpdateTimerHandle;                                 // 0x03B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Wheel.BP_Wheel_C");
		return ptr;
	}


	void DoesPickupSupportsAttachments(const struct FName& EquipmentName, bool* SupportsAttaments);
	void DoesEquipmentSupportsAttachments(const struct FName& EquipmentName, bool* SupportsAttaments);
	void EnqueDelayedUpdate();
	void GetAttachmentList(TArray<struct FWheelSegment>* Segments);
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
	void OnCommit(int* Selection, struct FWheelSegment* Segment);
	void OnEnabled();
	void UpdateBuyMenu();
	void ReceiveBeginPlay();
	void OnBuyingChanged_Event_1(bool bBuying);
	void CustomEvent_1();
	void ExecuteUbergraph_BP_Wheel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
