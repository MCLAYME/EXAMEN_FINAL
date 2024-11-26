// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EXAMEN_FINAL : ModuleRules
{
	public EXAMEN_FINAL(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
