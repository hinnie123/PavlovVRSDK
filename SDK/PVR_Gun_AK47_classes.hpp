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

// BlueprintGeneratedClass Gun_AK47.Gun_AK47_C
// 0x000C (0x0B48 - 0x0B3C)
class AGun_AK47_C : public AGun_AK_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B3C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gun_AK47.Gun_AK47_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnNotifyEnd_27DD29614B43507E27BE9B93AD44067B(const struct FName& NotifyName);
	void OnNotifyBegin_27DD29614B43507E27BE9B93AD44067B(const struct FName& NotifyName);
	void OnInterrupted_27DD29614B43507E27BE9B93AD44067B(const struct FName& NotifyName);
	void OnBlendOut_27DD29614B43507E27BE9B93AD44067B(const struct FName& NotifyName);
	void OnCompleted_27DD29614B43507E27BE9B93AD44067B(const struct FName& NotifyName);
	void Fired();
	void ExecuteUbergraph_Gun_AK47(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
