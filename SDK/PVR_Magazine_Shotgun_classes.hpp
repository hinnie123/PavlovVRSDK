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

// BlueprintGeneratedClass Magazine_Shotgun.Magazine_Shotgun_C
// 0x0010 (0x0598 - 0x0588)
class AMagazine_Shotgun_C : public AMagazine_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0588(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            Sphere;                                                   // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Magazine_Shotgun.Magazine_Shotgun_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoadedIntoGun();
	void OnReleasedFromGun();
	void ExecuteUbergraph_Magazine_Shotgun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
