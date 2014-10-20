#pragma once

#include "Object.h"
#include "Json.h"
#include "JsonWriter.h"
#include "JsonPrintPolicies.h"
#include "SanwuJsonObject.generated.h"

using namespace UF;
using namespace UC;
using namespace UP;

UCLASS(Blueprintable, BlueprintType)
class SANWUBPFUNCTIONLIBRARYPLUGIN_API USanwuJsonObject : public UObject
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "Sanwu | GlobalFunctionLib | Json")
	FString JsonStr ;

	TSharedRef< TJsonWriter<TCHAR, TCondensedJsonPrintPolicy<TCHAR> > > JsonWriter = TJsonWriterFactory<TCHAR, TCondensedJsonPrintPolicy<TCHAR> >::Create(&JsonStr);

	UFUNCTION(BlueprintCallable, Category = "Sanwu | GlobalFunctionLib | Json")
	void WriteString(FString key,FString value);

	UFUNCTION(BlueprintCallable, Category = "Sanwu | GlobalFunctionLib | Json")
	void WriteInt32(FString key, int32 value);

	UFUNCTION(BlueprintCallable, Category = "Sanwu | GlobalFunctionLib | Json")
	void WriteFloat(FString key, float value);

	UFUNCTION(BlueprintCallable, Category = "Sanwu | GlobalFunctionLib | Json")
	void EndWrite();
};