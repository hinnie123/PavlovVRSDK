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

// Class Ping.PingIP
// 0x0048 (0x0070 - 0x0028)
class UPingIP : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPingComplete;                                           // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPingFailure;                                            // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Ping.PingIP");
		return ptr;
	}


	void SendPing(const struct FString& IpAddress);
	void PollThread();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
