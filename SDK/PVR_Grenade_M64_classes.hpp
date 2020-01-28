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

// BlueprintGeneratedClass Grenade_M64.Grenade_M64_C
// 0x000F (0x0588 - 0x0579)
class AGrenade_M64_C : public AGrenade_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0579(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Grenade_M64.Grenade_M64_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDetonation();
	void ExecuteUbergraph_Grenade_M64(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
