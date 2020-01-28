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

// AnimBlueprintGeneratedClass NadeExplosive_RU_AnimBlueprint.NadeExplosive_RU_AnimBlueprint_C
// 0x0D48 (0x1158 - 0x0410)
class UNadeExplosive_RU_AnimBlueprint_C : public UGrenadeAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_08B7171A48ED3751776989BA9C7331F9;      // 0x0418(0x0040)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2192A0BD44EAEFD8C8B8C4BD153752E6;// 0x0460(0x03A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_97C8F8304AA446A48C6BF9A0C2E95C98;// 0x0800(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5CFB2B624EED59D42CFE81BF4E21992E;// 0x0840(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0883BE784498447B743B2084E39767E1;// 0x0978(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_72DB8DB04A090BC7F93778AB5EF639E2;// 0x0AB0(0x0040)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_59A97EBC4C75C767454920B249AE9399;// 0x0AF0(0x00D8)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_8DF9D7A2479CF2319C407DBDBEF476B2;// 0x0BC8(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8D92624641F45A14FB884FAD187DE5E3;// 0x0BF8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_B9F3077B41B37A09D7ABA7AE3C670EE4;// 0x0C40(0x0038)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_1B0473BC4DD3F88DCDECC597EE29DE38;// 0x0C78(0x00F8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_169024E24F2BF57CD69C79B066E94421;// 0x0D70(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6B8FB678425DFE25EDE3548E8D7D3BF1;// 0x0DB0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CC9746E141BB6AB21C8097A765AB8067;// 0x0EE8(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EAB7F7904E7BC7EC7341DB9FE8B1BCC4;// 0x1020(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass NadeExplosive_RU_AnimBlueprint.NadeExplosive_RU_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_NadeExplosive_RU_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
