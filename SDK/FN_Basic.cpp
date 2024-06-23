// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"


namespace SDK
{
TNameEntryArray* FName::GNames = nullptr;
FUObjectArray* UObject::GObjects = nullptr;

void InitGObjects()
{
	//UObject::GObjects = reinterpret_cast<TUObjectArray*>(uintptr_t(GetModuleHandle(0)) + Offsets::GObjects);
}
//---------------------------------------------------------------------------
bool FWeakObjectPtr::IsValid() const
{
	if (ObjectSerialNumber == 0)
	{
		return false;
	}
	if (ObjectIndex < 0)
	{
		return false;
	}
	auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
	if (!ObjectItem)
	{
		return false;
	}
	if (!SerialNumbersMatch(ObjectItem))
	{
		return false;
	}
	return !(ObjectItem->IsUnreachable() || ObjectItem->IsPendingKill());
}
//---------------------------------------------------------------------------
UObject* FWeakObjectPtr::Get() const
{
	if (IsValid())
	{
		auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
		if (ObjectItem)
		{
			return ObjectItem->Object;
		}
	}
	return nullptr;
}

//---------------------------------------------------------------------------
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
