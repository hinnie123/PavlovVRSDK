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

// Function UI_WorkshopMap.UI_WorkshopMap_C.SetDownloadProgress
struct UUI_WorkshopMap_C_SetDownloadProgress_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WorkshopMap.UI_WorkshopMap_C.OnMouseButtonDown
struct UUI_WorkshopMap_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_WorkshopMap.UI_WorkshopMap_C.SetOfficial
struct UUI_WorkshopMap_C_SetOfficial_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WorkshopMap.UI_WorkshopMap_C.SetActive
struct UUI_WorkshopMap_C_SetActive_Params
{
	bool                                               NewActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WorkshopMap.UI_WorkshopMap_C.ExecuteUbergraph_UI_WorkshopMap
struct UUI_WorkshopMap_C_ExecuteUbergraph_UI_WorkshopMap_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WorkshopMap.UI_WorkshopMap_C.OnClicked__DelegateSignature
struct UUI_WorkshopMap_C_OnClicked__DelegateSignature_Params
{
	class UUI_WorkshopMap_C*                           WorkshopMap;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
