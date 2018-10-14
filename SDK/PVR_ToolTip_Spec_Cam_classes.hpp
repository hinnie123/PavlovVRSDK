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

// BlueprintGeneratedClass ToolTip_Spec_Cam.ToolTip_Spec_Cam_C
// 0x000B (0x0430 - 0x0425)
class AToolTip_Spec_Cam_C : public AToolTipController_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ToolTip_Spec_Cam.ToolTip_Spec_Cam_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CustomEvent_1();
	void ExecuteUbergraph_ToolTip_Spec_Cam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
