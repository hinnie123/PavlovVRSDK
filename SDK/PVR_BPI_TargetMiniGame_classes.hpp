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

// BlueprintGeneratedClass BPI_TargetMiniGame.BPI_TargetMiniGame_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_TargetMiniGame_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_TargetMiniGame.BPI_TargetMiniGame_C");
		return ptr;
	}


	void Reset_Target();
	void MiniGameSettings(float MoveTime);
	void SetPracticeMode();
	void InitMiniGame(TEnumAsByte<E_MiniGameType> MiniGameRange, TEnumAsByte<E_TargetWepType> TargetWeaponType);
	void TargetHit(int Points, class ABP_Target_C* HitTarget, int HitType);
	void EndMiniGame();
	void StartMiniGame(bool KillHouse_);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
