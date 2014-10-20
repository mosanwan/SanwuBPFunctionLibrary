#include "SanwuBPFunctionLibraryPluginPrivatePCH.h"
#include "SanwuBlueprintFunctionLibrary.h"

USanwuBlueprintFunctionLibrary::USanwuBlueprintFunctionLibrary(const class FPostConstructInitializeProperties& PCIP)
: Super(PCIP)
{

}
UObject* USanwuBlueprintFunctionLibrary::GetSingleton()
{
	return GEngine->GameSingleton;
}

USanwuSocketObject* USanwuBlueprintFunctionLibrary::CreateSocketObject()
{
	//创建Socket对象
	USanwuSocketObject* socketObj;
	socketObj=ConstructObject<USanwuSocketObject>(USanwuSocketObject::StaticClass());
	return socketObj;
}


USanwuHttpObject* USanwuBlueprintFunctionLibrary::CreateHttpObject()
{
	//创建Http对象
	USanwuHttpObject* httpObj;
	httpObj = ConstructObject<USanwuHttpObject>(USanwuHttpObject::StaticClass());
	return httpObj;
}

USanwuByteArray* USanwuBlueprintFunctionLibrary::CreateByteArray()
{
	//创建ByteArray对象
	USanwuByteArray* byteArray;
	byteArray = ConstructObject<USanwuByteArray>(USanwuByteArray::StaticClass());
	return byteArray;
}
USanwuJsonObject* USanwuBlueprintFunctionLibrary::CreateJsonObject()
{
	//创建Json对象
	USanwuJsonObject* json;
	json = ConstructObject<USanwuJsonObject>(USanwuJsonObject::StaticClass());
	return json;
}