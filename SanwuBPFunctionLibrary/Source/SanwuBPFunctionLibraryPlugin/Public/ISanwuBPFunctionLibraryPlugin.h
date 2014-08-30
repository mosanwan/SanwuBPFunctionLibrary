#pragma once
#include "ModuleManager.h"
class ISanwuBPFunctionLibraryPlugin :public IModuleInterface
{
public:
	static inline ISanwuBPFunctionLibraryPlugin& Get()
	{
		return FModuleManager::LoadModuleChecked< ISanwuBPFunctionLibraryPlugin >("SanwuBPFunctionLibraryPlugin");
	}
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("SanwuBPFunctionLibraryPlugin");
	}
};