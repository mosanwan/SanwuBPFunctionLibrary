// Copyright 2014 Vladimir Alyamkin. All Rights Reserved.

#pragma once
#include "SanwuBPFunctionLibraryPluginPrivatePCH.h"
#include "SanwuBlueprintFunctionLibrary.generated.h"

//class UVaQuoleUIComponent;
using namespace UF;

/**
 * Class that handles view of one web page
 */
UCLASS()
class SANWUBPFUNCTIONLIBRARYPLUGIN_API USanwuBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
	
	/**
	* get project singleton 
	*获取项目的单例类
	*/
	UFUNCTION(BlueprintCallable,Category="Sanwu|GlobalFunctionLib")
	static UObject* GetSingleton();
};
