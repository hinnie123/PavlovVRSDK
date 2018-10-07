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

// BlueprintGeneratedClass BP_GlassPanel.BP_GlassPanel_C
// 0x0022 (0x03AA - 0x0388)
class ABP_GlassPanel_C : public ADestructible
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Collision;                                                // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDestructibleComponent*                      DestructibleGlass;                                        // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FrameMesh;                                                // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Broken;                                                   // 0x03A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableCollisionSound;                                    // 0x03A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_GlassPanel.BP_GlassPanel_C"));
		return ptr;
	}


	void OnRep_Broken();
	void UserConstructionScript();
	void BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void UpdateState();
	void PlayHitSound();
	void OnShatter(struct FVector* Normal, struct FVector* Location);
	void ExecuteUbergraph_BP_GlassPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
