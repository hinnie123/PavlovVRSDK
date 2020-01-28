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

// BlueprintGeneratedClass BP_Watch.BP_Watch_C
// 0x0008 (0x06F8 - 0x06F0)
class UBP_Watch_C : public UWatch
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Watch.BP_Watch_C");
		return ptr;
	}


	void OnKillConfirmationPush(class APavlovPlayerState** Victim);
	void ExecuteUbergraph_BP_Watch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
