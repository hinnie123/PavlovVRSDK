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

// BlueprintGeneratedClass Magazine_Revolver.Magazine_Revolver_C
// 0x0008 (0x0590 - 0x0588)
class AMagazine_Revolver_C : public AMagazine_Base_C
{
public:
	class UCapsuleComponent*                           Capsule;                                                  // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Magazine_Revolver.Magazine_Revolver_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
