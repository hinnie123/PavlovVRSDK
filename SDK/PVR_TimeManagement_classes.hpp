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

// Class TimeManagement.FixedFrameRateCustomTimeStep
// 0x0008 (0x0030 - 0x0028)
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
public:
	struct FFrameRate                                  FixedFrameRate;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.FixedFrameRateCustomTimeStep");
		return ptr;
	}

};


// Class TimeManagement.TimeManagementBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.TimeManagementBlueprintLibrary");
		return ptr;
	}


	struct FFrameTime STATIC_TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate);
	struct FFrameNumber STATIC_Subtract_FrameNumberInteger(const struct FFrameNumber& A, int B);
	struct FFrameNumber STATIC_Subtract_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B);
	struct FFrameTime STATIC_SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate);
	struct FFrameTime STATIC_Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate);
	struct FFrameNumber STATIC_Multiply_FrameNumberInteger(const struct FFrameNumber& A, int B);
	bool STATIC_IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate);
	bool STATIC_IsValid_Framerate(const struct FFrameRate& InFrameRate);
	struct FTimecode STATIC_GetTimecode();
	struct FFrameNumber STATIC_Divide_FrameNumberInteger(const struct FFrameNumber& A, int B);
	struct FString STATIC_Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay);
	float STATIC_Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime);
	float STATIC_Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate);
	int STATIC_Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber);
	struct FFrameNumber STATIC_Add_FrameNumberInteger(const struct FFrameNumber& A, int B);
	struct FFrameNumber STATIC_Add_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B);
};


// Class TimeManagement.TimeSynchronizationSource
// 0x0008 (0x0030 - 0x0028)
class UTimeSynchronizationSource : public UObject
{
public:
	bool                                               bUseForSynchronization;                                   // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                FrameOffset;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.TimeSynchronizationSource");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
