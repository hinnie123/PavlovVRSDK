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

// BlueprintGeneratedClass Shell_12Gauge.Shell_12Gauge_C
// 0x0008 (0x03D0 - 0x03C8)
class AShell_12Gauge_C : public AShell_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Shell_12Gauge.Shell_12Gauge_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Shell_12Gauge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
