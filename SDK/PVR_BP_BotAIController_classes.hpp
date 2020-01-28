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

// BlueprintGeneratedClass BP_BotAIController.BP_BotAIController_C
// 0x0028 (0x0538 - 0x0510)
class ABP_BotAIController_C : public APavlovAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAIPerceptionComponent*                      AIPerception;                                             // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                ClearSurpressedHandle;                                    // 0x0520(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AVRPawn*>                             SuppresionSources_1;                                      // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BotAIController.BP_BotAIController_C");
		return ptr;
	}


	void CheckBomb();
	class UBehaviorTree* GetBehaviorByGameMode();
	void ReloadWeapon();
	void AreControllersFoes(class AController* A, class AController* B, bool* Is_Foe);
	void UserConstructionScript();
	void OnKill_Event_1(class AActor* Owner);
	void OnUnpossess(class APawn** UnpossessedPawn);
	void OnPossess(class APawn** PossessedPawn);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BotAIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
