#pragma once

// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_TargetSettings.S_TargetSettings
// 0x00DC
struct FS_TargetSettings
{
	struct FS_TargetMove                               MoveSettings_33_7866CC214533B7CBE55BA0BD27614185;         // 0x0000(0x0090) (Edit, BlueprintVisible, IsPlainOldData)
	struct FS_TargetHit                                HitSettings_26_05D55427451D5994643CA6AD7BECB8A6;          // 0x0090(0x0038) (Edit, BlueprintVisible, IsPlainOldData)
	class UStaticMeshComponent*                        MoveCMP_30_049C2D7F4572B7EAB9C1349CF076F4EB;              // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        HitCMP_32_93245B6044CC62B1DF695B940C14B08F;               // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MiniGamePoints_38_10BF97CC46AB28E0D6B83592ADE3FF82;       // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
