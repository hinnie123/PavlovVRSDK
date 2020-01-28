// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ping.PingIP.SendPing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 IpAddress                      (Parm, ZeroConstructor)

void UPingIP::SendPing(const struct FString& IpAddress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ping.PingIP.SendPing");

	UPingIP_SendPing_Params params;
	params.IpAddress = IpAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ping.PingIP.PollThread
// (Final, Native, Public, BlueprintCallable)

void UPingIP::PollThread()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ping.PingIP.PollThread");

	UPingIP_PollThread_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
