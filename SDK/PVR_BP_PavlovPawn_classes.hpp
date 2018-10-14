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

// BlueprintGeneratedClass BP_PavlovPawn.BP_PavlovPawn_C
// 0x0030 (0x0E90 - 0x0E60)
class ABP_PavlovPawn_C : public APavlovPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E60(0x0008) (Transient, DuplicateTransient)
	class UHitBoxProxyComponent*                       HitBoxProxy;                                              // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             RadioStatic;                                              // 0x0E70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      BagsMesh;                                                 // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        BlackSphere;                                              // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 InputCurve;                                               // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PavlovPawn.BP_PavlovPawn_C");
		return ptr;
	}


	class UHolsterComponent* GetBombHolster();
	TArray<class UHolsterComponent*> GetGrenadeHolsters();
	class UHolsterComponent* GetKnifeHolster();
	class UHolsterComponent* GetSideWeaponHolster();
	class UHolsterComponent* GetMainWeaponHolster();
	bool GetEquipmentByName(struct FName* EquipmentName, struct FEquipmentDefinition* Definition);
	class UVRPocketComponent* GetAmmoPocket();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceivePossessed(class AController** NewController);
	void OnTeamIdChanged();
	void OnCameraClipChanged(bool* bClipping);
	void BlowHelmetOff();
	void SetupWatch(class UWatch** WatchComp);
	void BndEvt__VoiceComponent_K2Node_ComponentBoundEvent_0_SteamOnRadioToggleSignature__DelegateSignature(bool bToggled, bool bLocalPlayer);
	void OnKill_Event_1(class AActor* Owner);
	void ExecuteUbergraph_BP_PavlovPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
