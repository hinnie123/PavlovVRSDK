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

// BlueprintGeneratedClass BaseGameMode.BaseGameMode_C
// 0x002D (0x05FD - 0x05D0)
class ABaseGameMode_C : public APavlovGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PostMatchDelay;                                           // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRandomStream                               GiveRandStream;                                           // 0x05E4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AutoStart;                                                // 0x05EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CheckedForPlayersOnce;                                    // 0x05ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x05EE(0x0002) MISSED OFFSET
	class UClass*                                      PostMatchOverlay;                                         // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostMatchOverlayDelay;                                    // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Terminating;                                              // 0x05FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseGameMode.BaseGameMode_C");
		return ptr;
	}


	void EndRound();
	class APawn* SpawnDefaultPawnFor(class AController** NewPlayer, class AActor** StartSpot);
	void UserConstructionScript();
	void OnRoundStateChanged(EPavlovRoundState* OldState, EPavlovRoundState* NewState);
	void K2_OnSetMatchState(struct FName* NewState);
	void OnPlayerSpawned(class APavlovPlayerState** PlayerState, class AController** Controller, class APavlovPawn** Pawn);
	void OnWaitingToStart();
	void ReceiveBeginPlay();
	void CheckForPlayers();
	void K2_OnLogout(class AController** ExitingController);
	void ExecuteUbergraph_BaseGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
