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

// BlueprintGeneratedClass BP_Mining.BP_Mining_C
// 0x0080 (0x03A8 - 0x0328)
class ABP_Mining_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        RockMesh;                                                 // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDestructibleComponent*                      Destructible;                                             // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<E_EscapeObjectiveState>                State;                                                    // 0x0350(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStateChange;                                            // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UDestructibleMesh*                           DestructibleMesh;                                         // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CashReward;                                               // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRespawnTime;                                           // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRespawnTime;                                           // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	struct FTimerHandle                                RespawnTimer;                                             // 0x0380(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    Respawn;                                                  // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class USoundBase*                                  MiningSound;                                              // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MiningFX;                                                 // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mining.BP_Mining_C");
		return ptr;
	}


	void ToggleRockMesh(bool Vis);
	void ToggleDM(bool Visible);
	void TryMine_Server(class ABP_PavlovPawn_C* PavPawn, bool* successful);
	void SetState(TEnumAsByte<E_EscapeObjectiveState> State);
	void OnRep_State();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnStateChange_Event(TEnumAsByte<E_EscapeObjectiveState> State);
	void Mine();
	void Timer_Respawn();
	void Respawn_Event();
	void ExecuteUbergraph_BP_Mining(int EntryPoint);
	void Respawn__DelegateSignature();
	void OnStateChange__DelegateSignature(TEnumAsByte<E_EscapeObjectiveState> State);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
