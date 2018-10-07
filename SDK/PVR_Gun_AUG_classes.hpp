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

// BlueprintGeneratedClass Gun_AUG.Gun_AUG_C
// 0x0028 (0x09D8 - 0x09B0)
class AGun_AUG_C : public AGun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09B0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneCaptureComponent2D*                    ScopeCapture;                                             // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Scope;                                                    // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Gun_AUG.Gun_AUG_C"));
		return ptr;
	}


	void SetScopeCapture(bool Enabled);
	void UserConstructionScript();
	void OnPick(class AVRItemController** ByController);
	void OnDrop();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Gun_AUG(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
