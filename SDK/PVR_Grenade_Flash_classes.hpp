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

// BlueprintGeneratedClass Grenade_Flash.Grenade_Flash_C
// 0x0017 (0x05F0 - 0x05D9)
class AGrenade_Flash_C : public AGrenade_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x05D9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E0(0x0008) (Transient, DuplicateTransient)
	class UCurveFloat*                                 DistanceCurve;                                            // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Grenade_Flash.Grenade_Flash_C"));
		return ptr;
	}


	void UserConstructionScript();
	void OnDetonation();
	void ReceiveBeginPlay();
	void OnPlayerAffectedByFlass(class APavlovPawn* Pawn, float ViewAngle, float Distance);
	void ExecuteUbergraph_Grenade_Flash(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
