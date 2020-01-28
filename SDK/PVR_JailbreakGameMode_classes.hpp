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

// BlueprintGeneratedClass JailbreakGameMode.JailbreakGameMode_C
// 0x003D (0x060D - 0x05D0)
class AJailbreakGameMode_C : public ABaseGameMode_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                                CanStartMatch_Timer;                                      // 0x05D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                InmateToGaurdRatio;                                       // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05E4(0x0004) MISSED OFFSET
	TArray<class ABP_JailbreakSpawn_C*>                GaurdSpawns;                                              // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_JailbreakSpawn_C*>                InmateSpawns;                                             // 0x05F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              Escape_ToWin;                                             // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LastRound_;                                               // 0x060C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass JailbreakGameMode.JailbreakGameMode_C");
		return ptr;
	}


	void RespawnPlayers();
	void KillPlayersInRandomOrder();
	void RemoveTags_Kill();
	void ResetTeamScores();
	void GetEscapedCounts(int* EscapedCount);
	void IsEscapedPlayerKilled(class APavlovPlayerState* PlayerState);
	void DidEnoughInmatesEscape(bool* EnoughEscaped_);
	void GetRandomSpawn(TArray<class ABP_JailbreakSpawn_C*>* JBSpawns, struct FTransform* JBSpawn);
	void JailbreakPlayerSpawned(class APavlovPlayerState* PlayerState, class AController* Controller, class APavlovPawn* PavPawn);
	void AssignTeam(class APlayerState* PlayerState, int* Team);
	void RemoveTeamTags(class APlayerState* PlayerState);
	void GetPlayers(TArray<class APlayerState*>* PlayerArray);
	void EquipGear(class APavlovPawn* PavPawn, bool Gaurd);
	void GetTeam(class APlayerState* PlayerState, int* Team);
	void GetPlayerCount(int* Gaurds, int* Inmates, int* Escaped);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnPlayerSpawned(class APavlovPlayerState** PlayerState, class AController** Controller, class APavlovPawn** Pawn);
	void OnRoundStateChanged(EPavlovRoundState* OldState, EPavlovRoundState* NewState);
	void CanStartMatch_();
	void Can_Start_MatchTimer();
	void EndGameTimer();
	void ForceEndGame();
	void InmateEscaped();
	void OnPlayerKilled(class APavlovPlayerState** PlayerState, class AController** Controller, class APavlovPawn** Pawn);
	void K2_OnLogout(class AController** ExitingController);
	void RespawnTimer();
	void RespawnPawns();
	void ExecuteUbergraph_JailbreakGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
