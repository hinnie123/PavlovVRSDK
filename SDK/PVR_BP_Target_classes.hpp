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

// BlueprintGeneratedClass BP_Target.BP_Target_C
// 0x01A8 (0x04D0 - 0x0328)
class ABP_Target_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                        TextRender;                                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MiniGameRot_Alpha_56A350164D58CA2ECE8217A667C6806F;       // 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    MiniGameRot__Direction_56A350164D58CA2ECE8217A667C6806F;  // 0x0344(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	class UTimelineComponent*                          MiniGameRot;                                              // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              RotateTarget_Alpha_CB835E914CAAF976A451FEB0B3CAEE36;      // 0x0350(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RotateTarget__Direction_CB835E914CAAF976A451FEB0B3CAEE36; // 0x0354(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RotateTarget;                                             // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MoveTarget_Alpha_50C8736346F964194525618AA8C704FE;        // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    MoveTarget__Direction_50C8736346F964194525618AA8C704FE;   // 0x0364(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	class UTimelineComponent*                          MoveTarget;                                               // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FS_TargetSettings                           TargetSettings;                                           // 0x0370(0x00E0) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  StartingTransform;                                        // 0x0450(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               MoveForward_;                                             // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               KnockedDown_;                                             // 0x0481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RotateForward_;                                           // 0x0482(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0483(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    ResetTarget;                                              // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<E_MiniGameState>                       MiniGameState;                                            // 0x0498(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0499(0x0007) MISSED OFFSET
	class ABP_MiniGameManager_C*                       MiniGameManager;                                          // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGameType>                        MiniGameTargetType;                                       // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_MiniGameType>                        CurrentMiniGame;                                          // 0x04A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x04AA(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    ResetMiniGameTarget;                                      // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UAudioComponent*                             MovingSound;                                              // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TEnumAsByte<E_TargetWepType>                       Target_Weapon_Type;                                       // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_TargetWepType>                       Current_Weapon_Type;                                      // 0x04C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x04CA(0x0002) MISSED OFFSET
	float                                              Hit_Delay;                                                // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Target.BP_Target_C");
		return ptr;
	}


	void Play_SoundFX(const struct FHitResult& Hit_Result);
	void PlayParticleFX(const struct FHitResult& HitResult);
	void PlayMovementSound();
	void ScoreTarget();
	void OnRep_MiniGameState();
	void InitMeshes(class UStaticMeshComponent* MoveCMP, class UStaticMeshComponent* HitCMP);
	void PlayFX(const struct FHitResult& Hit_Result);
	void UserConstructionScript();
	void MoveTarget__FinishedFunc();
	void MoveTarget__UpdateFunc();
	void RotateTarget__FinishedFunc();
	void RotateTarget__UpdateFunc();
	void MiniGameRot__FinishedFunc();
	void MiniGameRot__UpdateFunc();
	void TargetHit(int Points, class ABP_Target_C* HitTarget, int HitType);
	void ReceiveBeginPlay();
	void Move();
	void OnHitCMP_Event(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Stop_Move();
	void HitRotate();
	void Reset_Rotate();
	void Random_Move_Start();
	void Show_Target();
	void Hide_Target();
	void StartMiniGame(bool KillHouse_);
	void EndMiniGame();
	void MGOverRotate();
	void MG_Hit();
	void InitMiniGame(TEnumAsByte<E_MiniGameType> MiniGameRange, TEnumAsByte<E_TargetWepType> TargetWeaponType);
	void SetPracticeMode();
	void Reset_Can_Score();
	void MoveFinished(TEnumAsByte<ETimelineDirection> Selection);
	void MiniGameSettings(float MoveTime);
	void Reset_Target();
	void Play_Hit_FX_Delayed(float Duration, const struct FHitResult& Hit_Result);
	void Reset_Hit_Rotate();
	void ExecuteUbergraph_BP_Target(int EntryPoint);
	void ResetMiniGameTarget__DelegateSignature();
	void ResetTarget__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
