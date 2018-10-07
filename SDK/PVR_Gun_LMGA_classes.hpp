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

// BlueprintGeneratedClass Gun_LMGA.Gun_LMGA_C
// 0x0078 (0x0A28 - 0x09B0)
class AGun_LMGA_C : public AGun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09B0(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Box5;                                                     // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box4;                                                     // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box3;                                                     // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box2;                                                     // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box1;                                                     // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicsConstraintComponent*                 BeltConstraint;                                           // 0x09E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVRHandleComponent*                          BulletBeltHandle;                                         // 0x09F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVRHandleComponent*                          DustCoverHandle;                                          // 0x09F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DustCoverOpen;                                            // 0x0A00(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BeltInPlace;                                              // 0x0A01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BeltOnHand;                                               // 0x0A02(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0A03(0x0005) MISSED OFFSET
	struct FName                                       BeltBone;                                                 // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeltTipBone;                                              // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DustCoverCloseSound;                                      // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DustCoverOpenSound;                                       // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Gun_LMGA.Gun_LMGA_C"));
		return ptr;
	}


	void IsMagazineEmpty(bool* Empty);
	void NewFunction_1();
	void UserConstructionScript();
	void BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_0_VRHandleOnRotationInputReceivedSignature__DelegateSignature(float InputValueDegrees);
	void BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature();
	void BndEvt__DustCoverHandle_K2Node_ComponentBoundEvent_1_VRHandleOnUngrabSignature__DelegateSignature();
	void ServerReportDustCoverState(bool Open);
	void OnPostDustCoverStateChange();
	void OnDrop();
	void BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature(const struct FVector& Input, const struct FVector& InputDelta);
	void BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_1_VRHandleOnGrabSignature__DelegateSignature();
	void BndEvt__BulletBeltHandle_K2Node_ComponentBoundEvent_2_VRHandleOnUngrabSignature__DelegateSignature();
	void OnPick(class AVRItemController** ByController);
	void OnUnload();
	void ReceiveBeginPlay();
	void OnMagazineChanged(bool* bHasMagazine);
	void Physicalize(bool* bEnabled);
	void ExecuteUbergraph_Gun_LMGA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
