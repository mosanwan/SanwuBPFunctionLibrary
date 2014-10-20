#pragma once

#include "Object.h"
#include "Delegate.h"
#include "Http.h"
#include "IHttpRequest.h"
#include "SanwuHttpObject.generated.h"

using namespace UF;
using namespace UC;
using namespace EHttpRequestStatus;
/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHttpCompleteEvent, FString ,str);


UCLASS(Blueprintable, BlueprintType)
class SANWUBPFUNCTIONLIBRARYPLUGIN_API USanwuHttpObject : public UObject
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(BlueprintAssignable, Category = "Sanwu|Http")
	FOnHttpCompleteEvent OnHttpCallBack;

	/**Http»Øµ÷º¯Êý. */
	UFUNCTION(BlueprintImplementableEvent, meta = (FriendlyName = "HttpCallBack"), Category = "Sanwu|Http")
	virtual void ReceiveHttpCallBack();

	UFUNCTION(BlueprintCallable,Category = "Sanwu|GlobalFunctionLib|Http")
	void PostData(FString url,FString data);


	void HttpCompleteCallBack(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};
