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

// BlueprintGeneratedClass Gun_AutoShotgun.Gun_AutoShotgun_C
// 0x0010 (0x0B40 - 0x0B30)
class AGun_AutoShotgun_C : public AGun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVRHandleComponent*                          VRHandle;                                                 // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gun_AutoShotgun.Gun_AutoShotgun_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__VRHandle_K2Node_ComponentBoundEvent_0_VRHandleOnGrabSignature__DelegateSignature();
	void OnPick(class AVRItemController** ByController);
	void OnDrop();
	void ExecuteUbergraph_Gun_AutoShotgun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
