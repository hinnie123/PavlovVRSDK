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

// BlueprintGeneratedClass EntryGameMode.EntryGameMode_C
// 0x0008 (0x05D8 - 0x05D0)
class AEntryGameMode_C : public ABaseGameMode_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EntryGameMode.EntryGameMode_C");
		return ptr;
	}


	void UserConstructionScript();
	void StartMiniGame(bool KillHouse_);
	void EndMiniGame();
	void TargetHit(int Points, class ABP_Target_C* HitTarget, int HitType);
	void InitMiniGame(TEnumAsByte<E_MiniGameType> MiniGameRange, TEnumAsByte<E_TargetWepType> TargetWeaponType);
	void SetPracticeMode();
	void MiniGameSettings(float MoveTime);
	void Reset_Target();
	void ExecuteUbergraph_EntryGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
