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

// BlueprintGeneratedClass BP_BRLoot.BP_BRLoot_C
// 0x0020 (0x0418 - 0x03F8)
class ABP_BRLoot_C : public ABP_BRDoor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               HasLoot;                                                  // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	class ABP_BRItemProxy_C*                           ItemProxy;                                                // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BRLoot.BP_BRLoot_C");
		return ptr;
	}


	void GetLootToSpawn(class ABP_PavlovPawn_C* PavPawn, TArray<struct FName>* Loot);
	void SpawnLoot(class ABP_PavlovPawn_C* PavPawn, bool* successful);
	bool CanSpawnLoot();
	void UserConstructionScript();
	void OnDoorStateChanged_Event(TEnumAsByte<E_DoorState>* DoorState);
	void LootGrabbed(class ABP_PavlovPawn_C** PavPawn, bool* Dominant_);
	void OnLootSpawned();
	void ExecuteUbergraph_BP_BRLoot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
