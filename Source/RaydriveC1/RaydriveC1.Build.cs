// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RaydriveC1 : ModuleRules
{
	public RaydriveC1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "ChaosVehicles", "PhysicsCore" });
	}
}
