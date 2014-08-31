#pragma once
#include "Object.h"
#include "SanwuByteArray.generated.h"

using namespace UF;
using namespace UC;
/**
*
*/
UCLASS(Blueprintable)
class SANWUBPFUNCTIONLIBRARYPLUGIN_API USanwuByteArray : public UObject
{
	GENERATED_UCLASS_BODY()

	TCHAR* memeary;
	int32 size;
	int32 capilter;

	UFUNCTION(BlueprintCallable, Category = "Sanwu|Socket|ByteArray")
	void ConstructMemeray(int32 count);

	UFUNCTION(BlueprintCallable, Category = "Sanwu|Socket|ByteArray")
	void WriteInt(int32 data);

	UFUNCTION(BlueprintCallable, Category = "Sanwu|Socket|ByteArray")
	void WriteFloat(float data);

	UFUNCTION(BlueprintCallable, Category = "Sanwu|Socket|ByteArray")
	void WriteDouble(double data);

	UFUNCTION(BlueprintCallable, Category = "Sanwu|Socket|ByteArray")
	void WriteString(FString data);

	
};