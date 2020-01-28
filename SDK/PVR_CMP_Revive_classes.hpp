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

// BlueprintGeneratedClass CMP_Revive.CMP_Revive_C
// 0x0008 (0x00F8 - 0x00F0)
class UCMP_Revive_C : public UActorComponent
{
public:
	class AController*                                 ReviveController;                                         // 0x00F0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CMP_Revive.CMP_Revive_C");
		return ptr;
	}


	void Revive_Server(bool CheckTeam, int TeamId, const struct FTransform& Transform, bool* Successful_);
	void CanRevive(bool CheckTeam, int TeamId, bool* Revive);
	void InitReviveCMP(class AController* ReviveController);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
