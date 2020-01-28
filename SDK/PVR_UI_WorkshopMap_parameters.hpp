#pragma once

// PavlovVR (Dumped by Hinnie) SDK

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
	float                                              Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WorkshopMap.UI_WorkshopMap_C.OnMouseButtonDown
struct UUI_WorkshopMap_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_WorkshopMap.UI_WorkshopMap_C.SetOfficial
struct UUI_WorkshopMap_C_SetOfficial_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WorkshopMap.UI_WorkshopMap_C.SetActive
struct UUI_WorkshopMap_C_SetActive_Params
{
	bool                                               NewActive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WorkshopMap.UI_WorkshopMap_C.ExecuteUbergraph_UI_WorkshopMap
struct UUI_WorkshopMap_C_ExecuteUbergraph_UI_WorkshopMap_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WorkshopMap.UI_WorkshopMap_C.OnClicked__DelegateSignature
struct UUI_WorkshopMap_C_OnClicked__DelegateSignature_Params
{
	class UUI_WorkshopMap_C*                           WorkshopMap;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
