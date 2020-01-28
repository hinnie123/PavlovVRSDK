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

// BlueprintGeneratedClass AMMO_Base.AMMO_Base_C
// 0x0024 (0x0504 - 0x04E0)
class AAMMO_Base_C : public AAmmoBox
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        AmmoBox;                                                  // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AmmoType;                                                 // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    AmmoMaterialInstance;                                     // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StartingAmmo;                                             // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AMMO_Base.AMMO_Base_C");
		return ptr;
	}


	void SwapAmmoCountMat();
	void GetAmmoCountMaterial(int AmmoStacks, class UTexture** Texture);
	void SwitchOnName(const struct FName& AmmoName);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnAmmoCountChanged();
	void Physicalize(bool* bEnabled);
	void ExecuteUbergraph_AMMO_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
