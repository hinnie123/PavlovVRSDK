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

// BlueprintGeneratedClass SearchAndDestroyGameMode.SearchAndDestroyGameMode_C
// 0x0034 (0x0631 - 0x05FD)
class ASearchAndDestroyGameMode_C : public ABaseGameMode_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x05FD(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0600(0x0008) (Transient, DuplicateTransient)
	int                                                MaxRounds;                                                // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RoundNum;                                                 // 0x060C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BombPlanted;                                              // 0x0610(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TeamScored;                                               // 0x0611(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0612(0x0002) MISSED OFFSET
	int                                                InitialCash;                                              // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Team0LoseCount;                                           // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Team1LoseCount;                                           // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstRound;                                               // 0x0620(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0621(0x0003) MISSED OFFSET
	float                                              BuyDuration;                                              // 0x0624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuyMaxDistance;                                           // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreezeDuration;                                           // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SuddenDeath;                                              // 0x0630(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass SearchAndDestroyGameMode.SearchAndDestroyGameMode_C"));
		return ptr;
	}


	void ProcessRoundEndCondition();
	void KillEveryone();
	void GetTieredLosingCashAmmount(int LoseStreak, int* CashAmmount);
	void GiveLosingCash(int TeamID);
	void SwitchSides();
	void GiveInitialCash();
	void CleanUpBombing();
	void ReportRoundWin(int TeamID, bool EndRound);
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
	void ExecuteUbergraph_SearchAndDestroyGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
