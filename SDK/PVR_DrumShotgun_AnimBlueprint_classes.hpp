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

// AnimBlueprintGeneratedClass DrumShotgun_AnimBlueprint.DrumShotgun_AnimBlueprint_C
// 0x0460 (0x08A0 - 0x0440)
class UDrumShotgun_AnimBlueprint_C : public UVRGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_416355E142FD995957C5A08853F802D1;      // 0x0448(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6869D5684807FAAFE5BA37BDF51D783E;// 0x0488(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2161316246D9CE68974F2B95B137AA99;// 0x05C0(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8C8B17E940A3AFCEECB99CB53DC0A129;// 0x06F8(0x0040)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_512F0EEF41CC549E921AFCAEB247FD0C;// 0x0738(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1536A28C42A9985A171187B454687DAF;// 0x0768(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DrumShotgun_AnimBlueprint.DrumShotgun_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_DrumShotgun_AnimBlueprint_AnimGraphNode_ModifyBone_1536A28C42A9985A171187B454687DAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DrumShotgun_AnimBlueprint_AnimGraphNode_ModifyBone_2161316246D9CE68974F2B95B137AA99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DrumShotgun_AnimBlueprint_AnimGraphNode_ModifyBone_6869D5684807FAAFE5BA37BDF51D783E();
	void ExecuteUbergraph_DrumShotgun_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
