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

// BlueprintGeneratedClass BP_PavlovGhost.BP_PavlovGhost_C
// 0x0039 (0x0B69 - 0x0B30)
class ABP_PavlovGhost_C : public AGhostPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVRSpectatorComponent*                       Spectator;                                                // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              GhostViewFadeOut_GhostViewBlend_955E772042DD99411C8BE784482A441A;// 0x0B50(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    GhostViewFadeOut__Direction_955E772042DD99411C8BE784482A441A;// 0x0B54(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B55(0x0003) MISSED OFFSET
	class UTimelineComponent*                          GhostViewFadeOut;                                         // 0x0B58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    XRayMaterial;                                             // 0x0B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PostTeleportReCenter;                                     // 0x0B68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PavlovGhost.BP_PavlovGhost_C");
		return ptr;
	}


	void SetVRScale(float Scale);
	void UserConstructionScript();
	void GhostViewFadeOut__FinishedFunc();
	void GhostViewFadeOut__UpdateFunc();
	void ReceiveBeginPlay();
	void OnTraveledToSpectatorRoom();
	void OnDestroyed_Event_1(class AActor* DestroyedActor);
	void BndEvt__Spectator_K2Node_ComponentBoundEvent_0_VROnSpectatorScaleSignature__DelegateSignature(float Scale);
	void OnGraceTimeEnded();
	void OnTeamIdChanged(int* TeamId);
	void OnPreTeleport();
	void OnTeleport();
	void ExecuteUbergraph_BP_PavlovGhost(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
