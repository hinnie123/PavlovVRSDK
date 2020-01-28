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

// BlueprintGeneratedClass BotMoveTo.BotMoveTo_C
// 0x0039 (0x00D9 - 0x00A0)
class UBotMoveTo_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      To;                                                       // 0x00A8(0x0028) (Edit, BlueprintVisible)
	bool                                               WaitUntilFinished;                                        // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Random;                                                   // 0x00D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00D2(0x0002) MISSED OFFSET
	float                                              Speed;                                                    // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseWaypoints;                                             // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BotMoveTo.BotMoveTo_C");
		return ptr;
	}


	void GetRandomLocation(class AVRPawn* PawnSelf, struct FVector* Location);
	void GetMoveLocation(class APavlovPawn* PawnSelf, struct FVector* Location);
	void GetControllerAndGun(class AActor* Actor, class AGun_Base_C** Gun, class AVRItemController** Controller);
	void OnFail_D8AD614E42922E19A998A988427840D0(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnSuccess_D8AD614E42922E19A998A988427840D0(TEnumAsByte<EPathFollowingResult> MovementResult);
	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_BotMoveTo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
