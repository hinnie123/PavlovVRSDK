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

// Class SlateRemote.SlateRemoteSettings
// 0x0028 (0x0050 - 0x0028)
class USlateRemoteSettings : public UObject
{
public:
	bool                                               EnableRemoteServer;                                       // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     EditorServerEndpoint;                                     // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     GameServerEndpoint;                                       // 0x0040(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateRemote.SlateRemoteSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
