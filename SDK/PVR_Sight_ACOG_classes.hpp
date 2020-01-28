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

// BlueprintGeneratedClass Sight_ACOG.Sight_ACOG_C
// 0x0010 (0x0578 - 0x0568)
class ASight_ACOG_C : public ASight_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0568(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Lens;                                                     // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sight_ACOG.Sight_ACOG_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnGunTickChanged(bool* bEnabled);
	void ExecuteUbergraph_Sight_ACOG(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
