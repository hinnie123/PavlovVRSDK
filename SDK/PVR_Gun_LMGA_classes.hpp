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

// BlueprintGeneratedClass Gun_LMGA.Gun_LMGA_C
// 0x00C8 (0x0BF8 - 0x0B30)
class AGun_LMGA_C : public AGun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box5;                                                     // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box4;                                                     // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box3;                                                     // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box2;                                                     // 0x0B50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box1;                                                     // 0x0B58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0B60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicsConstraintComponent*                 BeltConstraint;                                           // 0x0B68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVRHandleComponent*                          BulletBeltHandle;                                         // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVRHandleComponent*                          DustCoverHandle;                                          // 0x0B78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               DustCoverOpen;                                            // 0x0B80(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BeltInPlace;                                              // 0x0B81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BeltOnHand;                                               // 0x0B82(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0B83(0x0005) MISSED OFFSET
	struct FName                                       BeltBone;                                                 // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeltTipBone;                                              // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DustCoverCloseSound;                                      // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DustCoverOpenSound;                                       // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  BeltGrabSound;                                            // 0x0BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  BeltPlaceSound;                                           // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverHeating;                                              // 0x0BB8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0BBC(0x0004) MISSED OFFSET
	struct FTimerHandle                                CoolOffTimer;                                             // 0x0BC0(0x0008) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                               OverHeated;                                               // 0x0BC8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0BC9(0x0003) MISSED OFFSET
	float                                              CoolOffRate;                                              // 0x0BCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverHeatRate;                                             // 0x0BD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0BD4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    BarrelMat;                                                // 0x0BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CoolOffSound;                                             // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             OverheatingAttachedSound;                                 // 0x0BE8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                HeatTimer;                                                // 0x0BF0(0x0008) (Edit, BlueprintVisible, Net, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gun_LMGA.Gun_LMGA_C");
		return ptr;
	}


	void OnRep_OverHeated();
	void ClearOverheatTimer();
	void AddHeat();
	void OnRep_OverHeating();
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
	void Fired();
	void Used(bool* bJustPicked);
	void CoolOffTimer_Server();
	void CoolOff();
	void Use();
	void Add_Barrel_Heat_Server();
	void ClearOverHeatTimer_Server();
	void PlaySoundFXAttached();
	void Stop_SoundFX();
	void Stop_shooting();
	void AddHeatTimer();
	void ExecuteUbergraph_Gun_LMGA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
