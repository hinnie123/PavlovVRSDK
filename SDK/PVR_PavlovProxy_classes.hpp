#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PavlovProxy.Pavlov_BombSpot
// 0x0008 (0x0390 - 0x0388)
class APavlov_BombSpot : public AActor
{
public:
	bool                                               bIsB;                                                     // 0x0388(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class PavlovProxy.Pavlov_BombSpot"));
		return ptr;
	}

};


// Class PavlovProxy.Pavlov_CosmeticActor
// 0x0000 (0x0388 - 0x0388)
class APavlov_CosmeticActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class PavlovProxy.Pavlov_CosmeticActor"));
		return ptr;
	}

};


// Class PavlovProxy.Pavlov_Destructible
// 0x0000 (0x0388 - 0x0388)
class APavlov_Destructible : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class PavlovProxy.Pavlov_Destructible"));
		return ptr;
	}

};


// Class PavlovProxy.Pavlov_Map
// 0x0088 (0x00B0 - 0x0028)
class UPavlov_Map : public UDataAsset
{
public:
	struct FString                                     UniqueId;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       Label;                                                    // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0050(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UTexture2D*                                  Thumbnail;                                                // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UWorld>                            Map;                                                      // 0x0070(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bHidden;                                                  // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FPavlov_MapCompatibility                    Compatibility;                                            // 0x0091(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	struct FString                                     MapURL;                                                   // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bCustom;                                                  // 0x00A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class PavlovProxy.Pavlov_Map"));
		return ptr;
	}

};


// Class PavlovProxy.Pavlov_GameLogic
// 0x0010 (0x0398 - 0x0388)
class APavlov_GameLogic : public AInfo
{
public:
	EPavlovGameModeType                                GameModeType;                                             // 0x0388(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	class UPavlov_Map*                                 Definition;                                               // 0x0390(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class PavlovProxy.Pavlov_GameLogic"));
		return ptr;
	}


	void OnRoundEnd();
	void OnRoundBegin();
	void MulticastOnRoundStateChanged(bool bStarting);
	EPavlovGameModeType STATIC_GetPavlovGameModeType(class UObject* WorldContextObject);
};


// Class PavlovProxy.Pavlov_KillVolume
// 0x0000 (0x03C0 - 0x03C0)
class APavlov_KillVolume : public ATriggerVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class PavlovProxy.Pavlov_KillVolume"));
		return ptr;
	}

};


// Class PavlovProxy.Pavlov_Ladder
// 0x0010 (0x0398 - 0x0388)
class APavlov_Ladder : public AActor
{
public:
	class UBoxComponent*                               Volume;                                                   // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ClimbSpeed;                                               // 0x0390(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class PavlovProxy.Pavlov_Ladder"));
		return ptr;
	}

};


// Class PavlovProxy.Pavlov_Spawn
// 0x0008 (0x03C0 - 0x03B8)
class APavlov_Spawn : public APlayerStart
{
public:
	int                                                TeamID;                                                   // 0x03B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDynamic;                                                 // 0x03BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyTeam;                                                // 0x03BD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecial;                                                 // 0x03BE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x03BF(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class PavlovProxy.Pavlov_Spawn"));
		return ptr;
	}

};


// Class PavlovProxy.Pavlov_Waypoint
// 0x0000 (0x0388 - 0x0388)
class APavlov_Waypoint : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class PavlovProxy.Pavlov_Waypoint"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
