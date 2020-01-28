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

// BlueprintGeneratedClass SearchAndDestroyGameMode.SearchAndDestroyGameMode_C
// 0x0031 (0x0601 - 0x05D0)
class ASearchAndDestroyGameMode_C : public ABaseGameMode_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                MaxRounds;                                                // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RoundNum;                                                 // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BombPlanted;                                              // 0x05E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TeamScored;                                               // 0x05E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x05E2(0x0002) MISSED OFFSET
	int                                                InitialCash;                                              // 0x05E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Team0LoseCount;                                           // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Team1LoseCount;                                           // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstRound;                                               // 0x05F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05F1(0x0003) MISSED OFFSET
	float                                              BuyDuration;                                              // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuyMaxDistance;                                           // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreezeDuration;                                           // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SuddenDeath;                                              // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SearchAndDestroyGameMode.SearchAndDestroyGameMode_C");
		return ptr;
	}


	void ProcessKillRewardAmmount(class APavlovPlayerState* Killer, int Cash, int* FixedCash);
	void GetWinningTeamPure(int* WinningTeam);
	void GetGunKillReward(class AGun* Gun, int* Reward);
	int GetKillReward(class APavlovPlayerState** Killer, class APavlovPlayerState** Victim, struct FDamageTrackInfo* LastHitInfo);
	void ProcessRoundEndCondition();
	void KillEveryone();
	void GetTieredLosingCashAmmount(int LoseStreak, int* CashAmmount);
	void GiveLosingCash(int TeamId);
	void SwitchSides();
	void GiveInitialCash();
	void CleanUpBombing();
	void ReportRoundWin(int TeamId, bool EndRound);
	void GetBombCourierCandidate(class AController** Controller);
	void GiveBombToTeam();
	void SetPlantSpots(bool Enabled);
	void GetWinningTeam(int* WinningTeam);
	void UserConstructionScript();
	void OnRoundStateChanged(EPavlovRoundState* OldState, EPavlovRoundState* NewState);
	void OnWaitingToStart();
	void OnPlayerKilled(class APavlovPlayerState** PlayerState, class AController** Controller, class APavlovPawn** Pawn);
	void GoAheadWithNewRound();
	void EndOrRotateMap();
	void ReceiveBeginPlay();
	void OnBombPlant(class ABombPlantSpot* Spot, class ABomb* Bomb);
	void OnBombDetonation(class ABomb* Bomb);
	void OnBombDefused_Event_1(class ABomb* Bomb, class AController* Defuser);
	void K2_PostLogin(class APlayerController** NewPlayer);
	void K2_OnLogout(class AController** ExitingController);
	void InitBombs();
	void OnPlayerSpawned(class APavlovPlayerState** PlayerState, class AController** Controller, class APavlovPawn** Pawn);
	void AssignPlayerSkin(class APavlovPlayerState** PlayerState, class APavlovPawn** Pawn);
	void ExecuteUbergraph_SearchAndDestroyGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
