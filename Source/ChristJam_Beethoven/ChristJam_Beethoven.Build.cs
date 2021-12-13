// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ChristJam_Beethoven : ModuleRules
{
	public ChristJam_Beethoven(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
