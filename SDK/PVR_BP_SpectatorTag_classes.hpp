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

// BlueprintGeneratedClass BP_SpectatorTag.BP_SpectatorTag_C
// 0x0008 (0x03F0 - 0x03E8)
class ABP_SpectatorTag_C : public ASpectatorTag
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpectatorTag.BP_SpectatorTag_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnFadeOut();
	void ExecuteUbergraph_BP_SpectatorTag(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
