// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class FactoryGame : ModuleRules
{
	public FactoryGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bLegacyPublicIncludePaths = true;
		ShadowVariableWarningLevel = WarningLevel.Warning;

		//FactoryGame transitive dependencies
		PublicDependencyModuleNames.AddRange(new[] {
			"Core", "CoreUObject",
			"Engine",
			"InputCore",
			"OnlineSubsystem", "OnlineSubsystemNull", "OnlineSubsystemEOS", "OnlineSubsystemUtils",
			"SignificanceManager",
			"APEX", "ApexDestruction",
			"AnimGraphRuntime",
			"AkAudio", 
			"PhysXVehicles",
			"AssetRegistry",
			"NavigationSystem",
			"ReplicationGraph",
			"AIModule",
			"GameplayTasks",
			"SlateCore", "Slate", "UMG",
			"InstancedSplines",
			"RenderCore",
			"DeveloperSettings",
			"CinematicCamera",
			"PhysicsCore",
			"DummyHeaders"
		});
        
		PrivatePCHHeaderFile = "Public/FactoryGame.h";
        
		PublicDefinitions.Add( "IS_PUBLIC_BUILD=1" ); 
	}
}
