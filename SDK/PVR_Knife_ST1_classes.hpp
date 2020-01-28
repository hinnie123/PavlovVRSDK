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

// BlueprintGeneratedClass Knife_ST1.Knife_ST1_C
// 0x0018 (0x0558 - 0x0540)
class AKnife_ST1_C : public AKnife
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0540(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVCollisionEffectComponent*                  VCollisionEffect;                                         // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AVRItemController*                           ControllerSabed;                                          // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Knife_ST1.Knife_ST1_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnBloodyChanged(bool* bNewBloody);
	void OnDrop();
	void Physicalize(bool* bEnabled);
	void OnPick(class AVRItemController** ByController);
	void Used(bool* bJustPicked);
	void Use();
	void ExecuteUbergraph_Knife_ST1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
