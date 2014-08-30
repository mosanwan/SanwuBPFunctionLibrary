#pragma  once
#include "ISanwuBPFunctionLibraryPlugin.h"
class FSanwuBPFunctionLibraryPluginImpl :public ISanwuBPFunctionLibraryPlugin
{
	void StartupModule();
	void ShutdownModule();
};