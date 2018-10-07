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

// BlueprintGeneratedClass Magazine_Base.Magazine_Base_C
// 0x0028 (0x0588 - 0x0560)
class AMagazine_Base_C : public AVRMagazine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyOnRelease;                                        // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0571(0x0007) MISSED OFFSET
	class UStaticMesh*                                 EmptyMesh;                                                // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 NormalMesh;                                               // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Magazine_Base.Magazine_Base_C"));
		return ptr;
	}


	void UpdateMesh();
	void UserConstructionScript();
	void Physicalize(bool* bEnabled);
	void OnReleasedFromGun();
	void ReceiveBeginPlay();
	void Used(bool* bJustPicked);
	void OnBulletsChanged();
	void ExecuteUbergraph_Magazine_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
