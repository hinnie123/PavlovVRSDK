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

// BlueprintGeneratedClass Grenade_Flash.Grenade_Flash_C
// 0x0027 (0x05A0 - 0x0579)
class AGrenade_Flash_C : public AGrenade_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0579(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCurveFloat*                                 DistanceCurve;                                            // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FlashActorLocation;                                       // 0x0590(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BounceFlashRadius;                                        // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Grenade_Flash.Grenade_Flash_C");
		return ptr;
	}


	float GetFlashEffectiveness(const struct FTransform& Flashed_Comp_Trans, const struct FVector& Flash_Origin);
	void DetonateFlash();
	void UserConstructionScript();
	void OnPlayerAffectedByFlass(class APavlovPawn* Pawn, float ViewAngle, float Distance);
	void ReceiveBeginPlay();
	void OnDetonation();
	void OnPlayerFlashed(class APavlovPawn* Pawn, float Distance, float Effectiveness);
	void ExecuteUbergraph_Grenade_Flash(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
