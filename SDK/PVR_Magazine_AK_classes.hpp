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

// BlueprintGeneratedClass Magazine_AK.Magazine_AK_C
// 0x0008 (0x0590 - 0x0588)
class AMagazine_AK_C : public AMagazine_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0588(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Magazine_AK.Magazine_AK_C"));
		return ptr;
	}


	void UserConstructionScript();
	void OnReleasedFromGun();
	void ExecuteUbergraph_Magazine_AK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
