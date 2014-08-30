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