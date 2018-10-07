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

// BlueprintGeneratedClass BP_SpectatorTVCamera.BP_SpectatorTVCamera_C
// 0x0010 (0x03C8 - 0x03B8)
class ABP_SpectatorTVCamera_C : public ASpectatorTVCamera
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)
	class USceneCaptureComponent2D*                    SceneCaptureComponent;                                    // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_SpectatorTVCamera.BP_SpectatorTVCamera_C"));
		return ptr;
	}


	class USceneCaptureComponent2D* GetSceneCapture();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnAttachedToFocusedPawn();
	void ExecuteUbergraph_BP_SpectatorTVCamera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
