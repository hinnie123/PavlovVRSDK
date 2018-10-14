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

// BlueprintGeneratedClass BP_Killfeed.BP_Killfeed_C
// 0x0010 (0x03E0 - 0x03D0)
class ABP_Killfeed_C : public AKillfeed
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	class UWidgetComponent*                            Widget;                                                   // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Killfeed.BP_Killfeed_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDisplayModeUpdated();
	void ExecuteUbergraph_BP_Killfeed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
