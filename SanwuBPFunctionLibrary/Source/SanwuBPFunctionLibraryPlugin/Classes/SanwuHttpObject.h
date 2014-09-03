#pragma once

#include "Object.h"
#include "Delegate.h"
#include "SanwuHttpObject.generated.h"

using namespace UF;
using namespace UC;
/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHttpCallBackSignature);

UCLASS(Blueprintable, BlueprintType)
class SANWUBPFUNCTIONLIBRARYPLUGIN_API USanwuHttpObject : public UObject
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(BlueprintAssignable, Category = "Sanwu|Http")
	FHttpCallBackSignature OnHttpCallBack;

	/**Http»Øµ÷º¯Êý. */
	UFUNCTION(BlueprintImplementableEvent, meta = (FriendlyName = "HttpCallBack"), Category = "Sanwu|Http")
	virtual void ReceiveHttpCallBack();
};
