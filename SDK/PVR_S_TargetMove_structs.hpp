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

// UserDefinedStruct S_TargetMove.S_TargetMove
// 0x0090
struct FS_TargetMove
{
	bool                                               Moving__1_46FA91634C4D80EC7D57738137ECD8F0;               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
	struct FTransform                                  PointA_6_872014F44B8154BF5FC47586AEFA3237;                // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  PointB_7_D6F0C5A24636002D32FE1CBD55D73F8D;                // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MoveRateSecs_10_BCE495054CE81E792EA805850829BB2C;         // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	class USoundBase*                                  StartMovementSound_14_12C0F1CE450C1E86E1FE7A899F7FB8B3;   // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  StopMovementSound_17_0C2A366E48B561DBAC62FB980DDC0A55;    // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           MovementAttn_20_8EAC8A804B5D7B0A9ADDE8AD0A08BC41;         // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
