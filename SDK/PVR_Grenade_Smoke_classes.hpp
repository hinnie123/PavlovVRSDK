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

// BlueprintGeneratedClass Grenade_Smoke.Grenade_Smoke_C
// 0x003F (0x0618 - 0x05D9)
class AGrenade_Smoke_C : public AGrenade_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x05D9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E0(0x0008) (Transient, DuplicateTransient)
	class UPostProcessComponent*                       SmokePP;                                                  // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SmokeParticle;                                            // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSmokeActive;                                             // 0x05F8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05F9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    SmokeMaterial;                                            // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 SmokeCurve;                                               // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmokeOpacity;                                             // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmokeDuration;                                            // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Grenade_Smoke.Grenade_Smoke_C");
		return ptr;
	}


	void OnRep_bSmokeActive();
	void UserConstructionScript();
	void StartSmoke();
	void SpawnSingleParticle(const struct FVector& LocalOffset);
	void OnDetonation();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Grenade_Smoke(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
