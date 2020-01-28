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

// BlueprintGeneratedClass Gun_Base.Gun_Base_C
// 0x0090 (0x0B30 - 0x0AA0)
class AGun_Base_C : public AGun
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTwoHandGripComponent*                       TwoHandGrip;                                              // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkinComponent*                              Skin;                                                     // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVRMagazineSlotComponent*                    VRMagazineSlot;                                           // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    MuzzleParticle;                                           // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVRHandleComponent*                          ReloadHandle;                                             // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     MagAttachOffset;                                          // 0x0AD8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AE4(0x0004) MISSED OFFSET
	class UClass*                                      ShellClass;                                               // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EjectShell;                                               // 0x0AF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0AF1(0x0007) MISSED OFFSET
	struct FName                                       MagazineSocket;                                           // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowChamberMesh;                                          // 0x0B00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0B01(0x0007) MISSED OFFSET
	struct FName                                       ChamberSocket;                                            // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 ChamberMeshLive;                                          // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 ChamberMeshShell;                                         // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        ChamberMesh;                                              // 0x0B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  ShellEjectSound;                                          // 0x0B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gun_Base.Gun_Base_C");
		return ptr;
	}


	struct FVector GetLocalMagazineOffset();
	void UpdateChamberMesh(EVRGunChamberState ChamberState);
	void CreateChamberBullet();
	class UVRHandleComponent* GetChargingHandle();
	void SpawnAndEjectShell(int DetailMode, bool LIVE);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Physicalize(bool* bEnabled);
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
