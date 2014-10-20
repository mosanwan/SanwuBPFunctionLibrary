

#include "SanwuBPFunctionLibraryPluginPrivatePCH.h"
#include "SanwuHttpObject.h"



USanwuHttpObject::USanwuHttpObject(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	

}
void USanwuHttpObject::PostData(FString url, FString data)
{
	TSharedRef<IHttpRequest>HttpRequest = FHttpModule::Get().CreateRequest();
	HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
	HttpRequest->SetURL(url);
	HttpRequest->SetVerb(TEXT("POST"));
	HttpRequest->SetContentAsString(data);
	HttpRequest->OnProcessRequestComplete().BindUObject(this, &USanwuHttpObject::HttpCompleteCallBack);
	HttpRequest->ProcessRequest();
}
void USanwuHttpObject::HttpCompleteCallBack(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	FString MessageBody = "0";
	if (!Response.IsValid())
	{
		MessageBody = "Error:Unabled to process HTTP Request~";
	}else if (EHttpResponseCodes::IsOk(Response->GetResponseCode()))
	{
		MessageBody = Response->GetContentAsString();
	}
	else
	{
		MessageBody = FString::Printf(TEXT("HttpError :%d"), Response->GetResponseCode());
	}

	OnHttpCallBack.Broadcast(MessageBody);

}