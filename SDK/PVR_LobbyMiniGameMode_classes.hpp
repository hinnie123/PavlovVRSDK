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

// BlueprintGeneratedClass LobbyMiniGameMode.LobbyMiniGameMode_C
// 0x000A (0x05DA - 0x05D0)
class ALobbyMiniGameMode_C : public ABaseGameMode_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<E_MiniGameState>                       MiniGameState;                                            // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGameType>                        MiniGameType;                                             // 0x05D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LobbyMiniGameMode.LobbyMiniGameMode_C");
		return ptr;
	}


	void UserConstructionScript();
	void TargetHit(int Points, class ABP_Target_C* HitTarget, int HitType);
	void MiniGameSettings(float MoveTime);
	void Reset_Target();
	void OnPlayerSpawned(class APavlovPlayerState** PlayerState, class AController** Controller, class APavlovPawn** Pawn);
	void StartMiniGame(bool KillHouse_);
	void InitMiniGame(TEnumAsByte<E_MiniGameType> MiniGameRange, TEnumAsByte<E_TargetWepType> TargetWeaponType);
	void EndMiniGame();
	void SetPracticeMode();
	void OnRoundStateChanged(EPavlovRoundState* OldState, EPavlovRoundState* NewState);
	void Set_Player_Loadout(class APavlovPawn* Pawn, class UClass* Primary, class UClass* Secondary);
	void MiniGameOver(class APavlovPawn* Pawn);
	void OnDestroyed_Event_1(class AActor* DestroyedActor);
	void ExecuteUbergraph_LobbyMiniGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
