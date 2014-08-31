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
	USanwuSocketObject* socketObj;
	socketObj=ConstructObject<USanwuSocketObject>(USanwuSocketObject::StaticClass());
	return socketObj;
}
USanwuByteArray* USanwuBlueprintFunctionLibrary::CreateByteArray()
{
	USanwuByteArray* byteArray;
	byteArray = ConstructObject<USanwuByteArray>(USanwuByteArray::StaticClass());
	return byteArray;
}