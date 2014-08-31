

#pragma once

#include "Object.h"
#include "SocketSubsystem.h"
#include "IPAddress.h"
#include "Sockets.h"
#include "SanwuByteArray.h"
#include "SanwuSocketObject.generated.h"

using namespace UF;
using namespace UC;
/**
 * 
 */
UCLASS(Blueprintable)
class SANWUBPFUNCTIONLIBRARYPLUGIN_API USanwuSocketObject : public UObject
{
	GENERATED_UCLASS_BODY()

	FSocket* MySocket_ins;

	UFUNCTION(BlueprintCallable,Category="Sanwu|Socket")
	bool ConnectServer(FString ip, int32 port);
	
	UFUNCTION(BlueprintCallable, Category = "Sanwu|Socket")
	bool SendData(USanwuByteArray* byteArray);
};
