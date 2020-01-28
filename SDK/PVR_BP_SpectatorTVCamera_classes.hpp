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

// BlueprintGeneratedClass BP_SpectatorTVCamera.BP_SpectatorTVCamera_C
// 0x0010 (0x0368 - 0x0358)
class ABP_SpectatorTVCamera_C : public ASpectatorTVCamera
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneCaptureComponent2D*                    SceneCaptureComponent;                                    // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpectatorTVCamera.BP_SpectatorTVCamera_C");
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
