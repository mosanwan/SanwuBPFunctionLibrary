// Copyright 2014 Vladimir Alyamkin. All Rights Reserved.
using UnrealBuildTool;
using System.IO;

namespace UnrealBuildTool.Rules
{
    public class SanwuBPFunctionLibraryPlugin : ModuleRules
    {
        public SanwuBPFunctionLibraryPlugin(TargetInfo Target)
        {

            if (Target == UnrealTargetPlatform.IOS)
            PrivateIncludePaths.AddRange(
                new string[] {
					"SanwuBPFunctionLibraryPlugin/Private"
				});
            PublicIncludePaths.AddRange(
                new string[] { 
                    "SanwuBPFunctionLibraryPlugin/Public"
                });

            PublicDependencyModuleNames.AddRange(
                new string[]
				{
					"Core", 
                    "CoreUObject", 
                    "Engine", 
                    "InputCore",
                    "RHI",
                    "Sockets",
                    "Networking",
                    "HTTP"
				});


        }

    }
}