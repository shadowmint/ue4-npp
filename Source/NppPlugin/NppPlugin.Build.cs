// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
using System;
using System.IO;
using System.Text.RegularExpressions;

namespace UnrealBuildTool.Rules
{
	public class NppPlugin : ModuleRules
	{
		public NppPlugin(TargetInfo target)
		{
			PublicIncludePaths.AddRange(new string[] {"NppPlugin/Public", "NppPlugin/Api" });
			PrivateIncludePaths.AddRange(new string[] {"NppPlugin/Private" });
			PublicDependencyModuleNames.AddRange(new string[] {"Core", "CoreUObject", "Engine"});
			PrivateDependencyModuleNames.AddRange(new string[] {});
			DynamicallyLoadedModuleNames.AddRange(new string[] {});
		}
	}
}
