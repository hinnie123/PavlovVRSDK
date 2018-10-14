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

// BlueprintGeneratedClass Shell_12Gauge_Alt.Shell_12Gauge_Alt_C
// 0x0008 (0x03D0 - 0x03C8)
class AShell_12Gauge_Alt_C : public AShell_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Shell_12Gauge_Alt.Shell_12Gauge_Alt_C");
		return ptr;
	}


	struct FVector GetImpulseVector();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Shell_12Gauge_Alt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
