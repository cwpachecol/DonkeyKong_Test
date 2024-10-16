// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DonkeyKong_Test : ModuleRules
{
	public DonkeyKong_Test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
