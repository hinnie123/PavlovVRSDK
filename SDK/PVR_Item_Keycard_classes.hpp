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

// BlueprintGeneratedClass Item_Keycard.Item_Keycard_C
// 0x0010 (0x04E0 - 0x04D0)
class AItem_Keycard_C : public AVRItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Keycard.Item_Keycard_C");
		return ptr;
	}


	void UserConstructionScript();
	void Physicalize(bool* bEnabled);
	void ExecuteUbergraph_Item_Keycard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
