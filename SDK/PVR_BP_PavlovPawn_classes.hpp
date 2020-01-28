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

// BlueprintGeneratedClass BP_PavlovPawn.BP_PavlovPawn_C
// 0x0064 (0x0FB4 - 0x0F50)
class ABP_PavlovPawn_C : public APavlovPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHitBoxProxyComponent*                       HitBoxProxy;                                              // 0x0F58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             RadioStatic;                                              // 0x0F60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BlackSphere;                                              // 0x0F68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCurveFloat*                                 InputCurve;                                               // 0x0F70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                HOT_Timer;                                                // 0x0F78(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              HOT_Frequency_Secs;                                       // 0x0F80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0F84(0x0004) MISSED OFFSET
	TArray<struct FS_HOTs>                             S_HOTs;                                                   // 0x0F88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              StoppingScalar;                                           // 0x0F98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ParachuteState;                                           // 0x0F9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_Parachute_C*                             Parachute;                                                // 0x0FA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftParachuteStrap;                                       // 0x0FA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RightParachuteStrap;                                      // 0x0FAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningScalar;                                            // 0x0FB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PavlovPawn.BP_PavlovPawn_C");
		return ptr;
	}


	void GetTurnRot(float TurnInput, struct FRotator* NewRot);
	void SetParachuteRot();
	void GetStoppingScalar();
	void NextLocationParachute(struct FVector* NewLocation);
	void AddHOT(float HealAmount);
	class UHolsterComponent* GetBombHolster();
	TArray<class UHolsterComponent*> GetGrenadeHolsters();
	class UHolsterComponent* GetKnifeHolster();
	class UHolsterComponent* GetSideWeaponHolster();
	class UHolsterComponent* GetMainWeaponHolster();
	bool GetEquipmentByName(struct FName* EquipmentName, struct FEquipmentDefinition* definition);
	class UVRPocketComponent* GetAmmoPocket();
	void UserConstructionScript();
	void OnRadioToggle_Event_1(bool bToggled, bool bLocalPlayer, bool CanListen);
	void LootedActor_Client(class AActor* LootActor, bool Dominant_);
	void LootedActor_Server(class AActor* LootActor, bool Dominant_);
	void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem);
	void HOTTick();
	void HOTs_Timer();
	void OnVectorInputReceived_Left(const struct FVector& Input, const struct FVector& InputDelta);
	void OnVectorInputReceived_Right(const struct FVector& Input, const struct FVector& InputDelta);
	void SetupWatch(class UWatch** WatchComp);
	void OnCameraClipChanged(bool* bClipping);
	void DeployParachute();
	void OnHandleUngrab_Right();
	void OnHandleUngrab_Left();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PavlovPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
