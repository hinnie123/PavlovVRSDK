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

// BlueprintGeneratedClass Shell_12Gauge_Alt.Shell_12Gauge_Alt_C
// 0x000F (0x0380 - 0x0371)
class AShell_12Gauge_Alt_C : public AShell_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

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
