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

// BlueprintGeneratedClass BP_Watch.BP_Watch_C
// 0x0008 (0x0998 - 0x0990)
class UBP_Watch_C : public UWatch
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0990(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Watch.BP_Watch_C"));
		return ptr;
	}


	void OnKillConfirmationPush(class APavlovPlayerState** Victim);
	void ExecuteUbergraph_BP_Watch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
