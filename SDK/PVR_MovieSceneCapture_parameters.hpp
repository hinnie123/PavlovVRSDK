#pragma once

// PavlovVR (0.40.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
struct UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
struct UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
