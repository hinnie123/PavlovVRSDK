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

// Class HTML5Networking.WebSocketConnection
// 0x0010 (0x336F8 - 0x336E8)
class UWebSocketConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x336E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class HTML5Networking.WebSocketConnection"));
		return ptr;
	}

};


// Class HTML5Networking.WebSocketNetDriver
// 0x0010 (0x0418 - 0x0408)
class UWebSocketNetDriver : public UNetDriver
{
public:
	int                                                WebSocketPort;                                            // 0x0408(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x040C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class HTML5Networking.WebSocketNetDriver"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
