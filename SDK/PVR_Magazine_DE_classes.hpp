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

// BlueprintGeneratedClass Magazine_DE.Magazine_DE_C
// 0x0008 (0x0540 - 0x0538)
class AMagazine_DE_C : public AMagazine_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0538(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Magazine_DE.Magazine_DE_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Magazine_DE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
