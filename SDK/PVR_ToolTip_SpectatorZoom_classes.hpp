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

// BlueprintGeneratedClass ToolTip_SpectatorZoom.ToolTip_SpectatorZoom_C
// 0x0013 (0x0438 - 0x0425)
class AToolTip_SpectatorZoom_C : public AToolTipController_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)
	struct FTimerHandle                                TimerHandle;                                              // 0x0430(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass ToolTip_SpectatorZoom.ToolTip_SpectatorZoom_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CustomEvent_2(float Scale);
	void ExecuteUbergraph_ToolTip_SpectatorZoom(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif