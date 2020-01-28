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

// AnimBlueprintGeneratedClass FlashNade_AnimBlueprint.FlashNade_AnimBlueprint_C
// 0x0C10 (0x1020 - 0x0410)
class UFlashNade_AnimBlueprint_C : public UGrenadeAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BE01F93A4057D5AD477D20B7A0803468;      // 0x0418(0x0040)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E4560A2947AFFA92255F52BDA68E069D;// 0x0460(0x03A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F7C8EB824EDA16FCEA2B10B225FDAA22;// 0x0800(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_15EA603641C78343584673B154F9816F;// 0x0840(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9DA67E2F4CCF35A0310572B1842E7955;// 0x0978(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6BE7B920424F6572703AFCA269723B20;// 0x0AB0(0x0040)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F51339984401E17E19D927AE9FAD3C22;// 0x0AF0(0x00D8)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_E86EA3564D36B5D36B9706B1982410CB;// 0x0BC8(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4E4417D74818D4498677D1AB5AE2FF25;// 0x0BF8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_7E0D2CF94BB9CCB3E69074B0898ABC75;// 0x0C40(0x0038)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_1A168FF643BD159290C8C4829385A2F7;// 0x0C78(0x00F8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B05ED3DA4D3E7D81DC1F219752949A88;// 0x0D70(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_39F9208944B3544BB45B0391C47AF247;// 0x0DB0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_70B3E4C946A8D5348160CDBB851470D4;// 0x0EE8(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FlashNade_AnimBlueprint.FlashNade_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_FlashNade_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
