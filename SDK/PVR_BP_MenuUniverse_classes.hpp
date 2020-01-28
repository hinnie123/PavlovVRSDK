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

// BlueprintGeneratedClass BP_MenuUniverse.BP_MenuUniverse_C
// 0x0018 (0x03B0 - 0x0398)
class ABP_MenuUniverse_C : public AMenuUniverse
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Widget;                                                   // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuUniverse.BP_MenuUniverse_C");
		return ptr;
	}


	void GetMainUIWidget(class UUI_Main_C** UI_Main);
	void UserConstructionScript();
	void OnViewTargetChangingFrom(class AActor** ViewTarget);
	void OnEnableChanged(bool* bEnabled);
	void ExecuteUbergraph_BP_MenuUniverse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
