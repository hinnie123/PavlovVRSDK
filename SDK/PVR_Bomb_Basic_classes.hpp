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

// BlueprintGeneratedClass Bomb_Basic.Bomb_Basic_C
// 0x0018 (0x0718 - 0x0700)
class ABomb_Basic_C : public ABomb
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0700(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            Widget;                                                   // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        Beacon;                                                   // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bomb_Basic.Bomb_Basic_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnBeep();
	void OnPlanted();
	void Physicalize(bool* bEnabled);
	void ReceiveBeginPlay();
	void OnPlayerOcclusionChange(bool* bNewOccluded);
	void ExecuteUbergraph_Bomb_Basic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
