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

// BlueprintGeneratedClass BP_LootSpawner.BP_LootSpawner_C
// 0x0061 (0x0391 - 0x0330)
class ABP_LootSpawner_C : public ALootSpawner
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               GrabVolume;                                               // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FString>                             SpawnableItems;                                           // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MinSpawnTime;                                             // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpawnTime;                                             // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpawnType;                                                // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnWithoutAttachments;                                  // 0x036C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	TArray<struct FName>                               Attachments;                                              // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AVRPawn*                                     SelectingPawn;                                            // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UVRSelectionComponent*                       Selection_CMP;                                            // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               BypassAuthority;                                          // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LootSpawner.BP_LootSpawner_C");
		return ptr;
	}


	bool UseSoftGrabConstraint();
	struct FName GetRandomLoot();
	void Init(float In_MinSpawnTime, float In_MaxSpawnTime, int In_SpawnType, bool In_SpawnWithoutAttachments, TArray<struct FString>* In_SpawnableItems);
	void CanUseAttachment(class APavlovPawn* PavPawn, bool* CanUse_);
	void GetAttachmentSocket(class UClass* vr_item, class AGun_Base_C* gun_base, struct FName* SocketName, int* Type, float* Picatinny_Lenth);
	void EquipLoot(class APavlovPawn* PavPawn, bool Dominant);
	void ClampExtent(const struct FVector& Extents, struct FVector* Clamped_Extent);
	void SetMeshFromLootTable();
	void UserConstructionScript();
	void UnGrabbed(class AVRController* Controller);
	void ReceiveBeginPlay();
	void Grabbed(class AVRController* Controller);
	void Weapon_Taken();
	void InitSpawner(float MinTime, float MaxTime, int SpawnerType, bool SpawnWithoutAttachments, TArray<struct FString>* SpawnableItems);
	void SelectNewItem();
	void LootGrabbed(class ABP_PavlovPawn_C* PavPawn, bool Dominant_);
	void BndEvt__GrabVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void RespawnOnRoundRestart();
	void BndEvt__GrabVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void Reset_Always_Active_DoOnce();
	void OnLootChanged(unsigned char* Index, struct FName* Name);
	void Begin_Play_Loot();
	void ExecuteUbergraph_BP_LootSpawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
