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

// BlueprintGeneratedClass Pliers_Basic.Pliers_Basic_C
// 0x0008 (0x0578 - 0x0570)
class APliers_Basic_C : public APliers
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Pliers_Basic.Pliers_Basic_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Physicalize(bool* bEnabled);
	void ExecuteUbergraph_Pliers_Basic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
