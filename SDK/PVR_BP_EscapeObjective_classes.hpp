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

// BlueprintGeneratedClass BP_EscapeObjective.BP_EscapeObjective_C
// 0x0080 (0x03A8 - 0x0328)
class ABP_EscapeObjective_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        EscapeMesh;                                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RepairMesh;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDestructibleComponent*                      Destructible;                                             // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<E_EscapeObjectiveState>                EscapeState;                                              // 0x0358(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnEscapeStateChanged;                                     // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UDestructibleMesh*                           DestructibleMesh;                                         // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    ResetObjective;                                           // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class USoundBase*                                  DestroySound;                                             // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DestroyOutsideJB;                                         // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	class USoundBase*                                  TouchSound;                                               // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  RepairSound;                                              // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EscapeObjective.BP_EscapeObjective_C");
		return ptr;
	}


	void ToggleDestructibleMesh(bool Hidden);
	void ToggleEscapeMesh(bool Hidden);
	void PlayDestroySound();
	void SetRepairMeshVis(bool Visible);
	void PlayTouchSound();
	void CanRepairObjective(bool* CanRepair);
	void SetBoxCollisionResponse(TEnumAsByte<ECollisionResponse> NewResponse);
	void TryDestroyObjective_Server(class UObject* Object, bool* Destroyed);
	void CanDestroyObjective(class AVRItem* VRItem, bool* CanDestroy);
	void SetObjectiveState(TEnumAsByte<E_EscapeObjectiveState> EscapeState);
	void OnRep_EscapeState();
	void UserConstructionScript();
	void OnEscapeStateChanged_Event(TEnumAsByte<E_EscapeObjectiveState> EscapeState);
	void DestroyObjective_Server();
	void ResetObjective_Event();
	void ReceiveBeginPlay();
	void PlayRepairSound();
	void Init_Client();
	void ExecuteUbergraph_BP_EscapeObjective(int EntryPoint);
	void ResetObjective__DelegateSignature();
	void OnEscapeStateChanged__DelegateSignature(TEnumAsByte<E_EscapeObjectiveState> EscapeState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
