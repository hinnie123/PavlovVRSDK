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

// BlueprintGeneratedClass Grenade_Base.Grenade_Base_C
// 0x0019 (0x05D9 - 0x05C0)
class AGrenade_Base_C : public AGrenade
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C0(0x0008) (Transient, DuplicateTransient)
	class UVCollisionEffectComponent*                  VCollisionEffect;                                         // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVRHandleComponent*                          PinHandle;                                                // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnDecal;                                               // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Grenade_Base.Grenade_Base_C"));
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__PinHandle_K2Node_ComponentBoundEvent_0_VRHandleOnVectorInputReceivedSignature__DelegateSignature(const struct FVector& Input, const struct FVector& InputDelta);
	void Cycle();
	void OnDetonation();
	void Physicalize(bool* bEnabled);
	void ExecuteUbergraph_Grenade_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif