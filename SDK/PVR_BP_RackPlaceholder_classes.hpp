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

// BlueprintGeneratedClass BP_RackPlaceholder.BP_RackPlaceholder_C
// 0x001F (0x03B0 - 0x0391)
class ABP_RackPlaceholder_C : public ABP_LootSpawner_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FString                                     EquipmentName;                                            // 0x03A0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RackPlaceholder.BP_RackPlaceholder_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_RackPlaceholder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
