// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Utility_TrashCanLarge_01.Utility_TrashCanLarge_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AUtility_TrashCanLarge_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Utility_TrashCanLarge_01.Utility_TrashCanLarge_01_C.UserConstructionScript");

	AUtility_TrashCanLarge_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Utility_TrashCanLarge_01.Utility_TrashCanLarge_01_C.OnLoot
// (Event, Public, BlueprintEvent)

void AUtility_TrashCanLarge_01_C::OnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Utility_TrashCanLarge_01.Utility_TrashCanLarge_01_C.OnLoot");

	AUtility_TrashCanLarge_01_C_OnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Utility_TrashCanLarge_01.Utility_TrashCanLarge_01_C.ExecuteUbergraph_Utility_TrashCanLarge_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AUtility_TrashCanLarge_01_C::ExecuteUbergraph_Utility_TrashCanLarge_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Utility_TrashCanLarge_01.Utility_TrashCanLarge_01_C.ExecuteUbergraph_Utility_TrashCanLarge_01");

	AUtility_TrashCanLarge_01_C_ExecuteUbergraph_Utility_TrashCanLarge_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
