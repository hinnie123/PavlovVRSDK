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

// BlueprintGeneratedClass Magazine_P90.Magazine_P90_C
// 0x0010 (0x0548 - 0x0538)
class AMagazine_P90_C : public AMagazine_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0538(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Internal;                                                 // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Magazine_P90.Magazine_P90_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnBulletsChanged();
	void ExecuteUbergraph_Magazine_P90(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
