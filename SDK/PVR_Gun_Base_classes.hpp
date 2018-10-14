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

// BlueprintGeneratedClass Gun_Base.Gun_Base_C
// 0x0090 (0x09B0 - 0x0920)
class AGun_Base_C : public AGun
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0920(0x0008) (Transient, DuplicateTransient)
	class UTwoHandGripComponent*                       TwoHandGrip;                                              // 0x0928(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkinComponent*                              Skin;                                                     // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVRMagazineSlotComponent*                    VRMagazineSlot;                                           // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    MuzzleParticle;                                           // 0x0940(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVRHandleComponent*                          ReloadHandle;                                             // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MagAttachOffset;                                          // 0x0958(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0964(0x0004) MISSED OFFSET
	class UClass*                                      ShellClass;                                               // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EjectShell;                                               // 0x0970(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0971(0x0007) MISSED OFFSET
	struct FName                                       MagazineSocket;                                           // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowChamberMesh;                                          // 0x0980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0981(0x0007) MISSED OFFSET
	struct FName                                       ChamberSocket;                                            // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 ChamberMeshLive;                                          // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 ChamberMeshShell;                                         // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        ChamberMesh;                                              // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ShellEjectSound;                                          // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gun_Base.Gun_Base_C");
		return ptr;
	}


	void UpdateChamberMesh(EVRGunChamberState ChamberState);
	void CreateChamberBullet();
	class UVRHandleComponent* GetChargingHandle();
	void SpawnAndEjectShell(int DetailMode, bool Live);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Physicalize(bool* bEnabled);
	void Fired();
	void AttachMagazine(class AVRMagazine** MagazineToAttach);
	void RecoilDrop();
	void OnRoundEjected(bool* bLive);
	void OnChamberStateChangedEvent(int ChamberIndex, EVRGunChamberState OldState, EVRGunChamberState NewState);
	void CustomEvent_1();
	void ExecuteUbergraph_Gun_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
