// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGItemDescriptor;
#ifdef FACTORYGAME_FGCheatManager_generated_h
#error "FGCheatManager.generated.h already included, missing '#pragma once' in FGCheatManager.h"
#endif
#define FACTORYGAME_FGCheatManager_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGCheatManager_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDumpConnectionString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpConnectionString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDupeComponentToAnotherCircuit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_source); \
		P_GET_PROPERTY(UIntProperty,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DupeComponentToAnotherCircuit(Z_Param_source,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDupeComponentInCircuit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DupeComponentInCircuit(Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleDebuggingOnPipe) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleDebuggingOnPipe(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAllPipes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetAllPipes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEmptyAllPipes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EmptyAllPipes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFillFirstPipeInEachNetwork) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FillFirstPipeInEachNetwork(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleTrainSelfDriving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleTrainSelfDriving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpGamePhases) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpGamePhases(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetGamePhases) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetGamePhases(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebuildFactoryLegsOneTileAroundPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RebuildFactoryLegsOneTileAroundPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAllFactoryLegsToZero) \
	{ \
		P_GET_UBOOL(Z_Param_repopulateEmptyLegs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetAllFactoryLegsToZero(Z_Param_repopulateEmptyLegs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPurgeAllTrainState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PurgeAllTrainState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompleteResearch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CompleteResearch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRandomDebugStartingPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRandomDebugStartingPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDebugStartingPoint) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_startingPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDebugStartingPoint(Z_Param_startingPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListDebugStartingPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ListDebugStartingPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlipVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlipVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrintStaticMeshesHierarchy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PrintStaticMeshesHierarchy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpSchematics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpSchematics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetRecipes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetRecipes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetSchematics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetSchematics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetHubTutorial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetHubTutorial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendInviteToFriend) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_friendName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendInviteToFriend(Z_Param_friendName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowSequenceList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowSequenceList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerPresenceUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerPresenceUpdate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMCP_GetFriends) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MCP_GetFriends(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMCP_LogPresence) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MCP_LogPresence(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMCP_UpdatePresenceString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_string); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MCP_UpdatePresenceString(Z_Param_string); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMCP_UpdatePresence) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MCP_UpdatePresence(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMCP_GetOnlineStatus) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_localPlayerNum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MCP_GetOnlineStatus(Z_Param_localPlayerNum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMCP_Logout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MCP_Logout(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMCP_Login) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_username); \
		P_GET_PROPERTY(UStrProperty,Z_Param_password); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MCP_Login(Z_Param_username,Z_Param_password); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunDebugMetric) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RunDebugMetric(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVehicleInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetVehicleInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListUnlockedRecipesAndSchematics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ListUnlockedRecipesAndSchematics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTradingPostLevel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_inLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTradingPostLevel(Z_Param_inLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListItemPickups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ListItemPickups(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPurgeAllBeaconsFromSave) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PurgeAllBeaconsFromSave(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPurgeInactiveClientsFromSave) \
	{ \
		P_GET_UBOOL(Z_Param_fetchInventories); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PurgeInactiveClientsFromSave(Z_Param_fetchInventories); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpDynamicOptionsSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpDynamicOptionsSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpSignificanceManagedObjects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpSignificanceManagedObjects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpActorRepresentations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpActorRepresentations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableInstancingOnFactory) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableInstancingOnFactory(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpHotbarShortcuts) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpHotbarShortcuts(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpPlayerStates) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpPlayerStates(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAITickDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAITickDistance(Z_Param_distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVisitAllMapAreas) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->VisitAllMapAreas(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateSessionToOSS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSessionToOSS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomizeBuildingsColorSlot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_slotIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RandomizeBuildingsColorSlot(Z_Param_slotIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideAllBuildings_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HideAllBuildings_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideAllBuildings) \
	{ \
		P_GET_UBOOL(Z_Param_inVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideAllBuildings(Z_Param_inVisibility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplayBuildingEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReplayBuildingEffects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpActiveGPUParticles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpActiveGPUParticles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpTicking) \
	{ \
		P_GET_UBOOL(Z_Param_detailed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpTicking(Z_Param_detailed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpAttachedToSkelMesh) \
	{ \
		P_GET_UBOOL(Z_Param_detailed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpAttachedToSkelMesh(Z_Param_detailed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleAudioLandingDebug) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleAudioLandingDebug(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpNonDormantActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpNonDormantActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceSpawnCreatures) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForceSpawnCreatures(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTestSharedInventoryPtr) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TestSharedInventoryPtr(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamePhase) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_phase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamePhase(EGamePhase(Z_Param_phase)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveSchematicsOfTier) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_tier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveSchematicsOfTier(Z_Param_tier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleCameraMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleCameraMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetFuses) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetFuses(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFactoryDetailReplication_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetFactoryDetailReplication_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFactoryDetailReplication) \
	{ \
		P_GET_UBOOL(Z_Param_enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFactoryDetailReplication(Z_Param_enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeSpeedMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimeSpeedMultiplier(Z_Param_speed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeAllConveyors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MergeAllConveyors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplitAllConveyors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SplitAllConveyors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPumpiMode_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PumpiMode_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPumpiMode) \
	{ \
		P_GET_UBOOL(Z_Param_enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PumpiMode(Z_Param_enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenModMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenModMap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSlomo) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_slomo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSlomo(Z_Param_slomo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleAudioDebug) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleAudioDebug(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableAudioDebug) \
	{ \
		P_GET_UBOOL(Z_Param_isEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableAudioDebug(Z_Param_isEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpAllAvailableRecipes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpAllAvailableRecipes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideFactoryOnly_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HideFactoryOnly_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideFactoryOnly) \
	{ \
		P_GET_UBOOL(Z_Param_factoryHidden); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideFactoryOnly(Z_Param_factoryHidden); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowFactoryOnly_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShowFactoryOnly_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowFactoryOnly) \
	{ \
		P_GET_UBOOL(Z_Param_environmentHidden); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowFactoryOnly(Z_Param_environmentHidden); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeOfDay_minute_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->SetTimeOfDay_minute_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeOfDay_hour_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->SetTimeOfDay_hour_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeOfDay) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_hour); \
		P_GET_PROPERTY(UIntProperty,Z_Param_minute); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimeOfDay(Z_Param_hour,Z_Param_minute); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearPardon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearPardon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPardonAllPlayers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PardonAllPlayers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllFoliage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_maxNumInstances); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAllFoliage(Z_Param_maxNumInstances); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyPawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyPawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnablePlayerFOV_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->EnablePlayerFOV_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnablePlayerFOV) \
	{ \
		P_GET_UBOOL(Z_Param_enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnablePlayerFOV(Z_Param_enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableBuildableTick_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->EnableBuildableTick_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableBuildableTick) \
	{ \
		P_GET_UBOOL(Z_Param_enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableBuildableTick(Z_Param_enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebuildPowerCircuits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RebuildPowerCircuits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveAllResearchTrees) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveAllResearchTrees(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveStartingResearch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveStartingResearch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveStorySchematics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveStorySchematics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGivePrototypeSchematics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GivePrototypeSchematics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveCheatSchematics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveCheatSchematics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveAvailableSchematics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveAvailableSchematics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveAllSchematicsAndPhases) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveAllSchematicsAndPhases(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveALLSchematics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveALLSchematics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearGiveItemPopularList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearGiveItemPopularList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerNoClipModeOnFly_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PlayerNoClipModeOnFly_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerNoClipModeOnFly) \
	{ \
		P_GET_UBOOL(Z_Param_ghostMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayerNoClipModeOnFly(Z_Param_ghostMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerFly_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PlayerFly_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerFly) \
	{ \
		P_GET_UBOOL(Z_Param_flyModeEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayerFly(Z_Param_flyModeEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawSphere) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_radius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawSphere(Z_Param_radius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveResourceSinkCoupons) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumCoupons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveResourceSinkCoupons(Z_Param_NumCoupons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveItemsSingle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_resource); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfItems); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveItemsSingle(Z_Param_resource,Z_Param_NumberOfItems); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveItemStacks) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_resource); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfStacks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveItemStacks(Z_Param_resource,Z_Param_NumberOfStacks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurboMode_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TurboMode_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurboProductionMode) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TurboProductionMode(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurboBuildMode_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TurboBuildMode_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurboBuildMode) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TurboBuildMode(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNoMessages_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->NoMessages_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNoMessages) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NoMessages(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNoPower_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->NoPower_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNoPower) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NoPower(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNoCost_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->NoCost_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNoCost) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NoCost(Z_Param_enabled); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGCheatManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDumpConnectionString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpConnectionString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDupeComponentToAnotherCircuit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_source); \
		P_GET_PROPERTY(UIntProperty,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DupeComponentToAnotherCircuit(Z_Param_source,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDupeComponentInCircuit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DupeComponentInCircuit(Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleDebuggingOnPipe) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleDebuggingOnPipe(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAllPipes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetAllPipes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEmptyAllPipes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EmptyAllPipes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFillFirstPipeInEachNetwork) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FillFirstPipeInEachNetwork(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleTrainSelfDriving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleTrainSelfDriving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpGamePhases) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpGamePhases(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetGamePhases) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetGamePhases(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebuildFactoryLegsOneTileAroundPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RebuildFactoryLegsOneTileAroundPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAllFactoryLegsToZero) \
	{ \
		P_GET_UBOOL(Z_Param_repopulateEmptyLegs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetAllFactoryLegsToZero(Z_Param_repopulateEmptyLegs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPurgeAllTrainState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PurgeAllTrainState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompleteResearch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CompleteResearch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRandomDebugStartingPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRandomDebugStartingPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDebugStartingPoint) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_startingPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDebugStartingPoint(Z_Param_startingPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListDebugStartingPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ListDebugStartingPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlipVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlipVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrintStaticMeshesHierarchy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PrintStaticMeshesHierarchy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpSchematics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpSchematics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetRecipes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetRecipes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetSchematics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetSchematics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetHubTutorial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetHubTutorial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendInviteToFriend) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_friendName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendInviteToFriend(Z_Param_friendName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowSequenceList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowSequenceList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerPresenceUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerPresenceUpdate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMCP_GetFriends) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MCP_GetFriends(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMCP_LogPresence) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MCP_LogPresence(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMCP_UpdatePresenceString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_string); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MCP_UpdatePresenceString(Z_Param_string); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMCP_UpdatePresence) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MCP_UpdatePresence(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMCP_GetOnlineStatus) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_localPlayerNum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MCP_GetOnlineStatus(Z_Param_localPlayerNum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMCP_Logout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MCP_Logout(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMCP_Login) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_username); \
		P_GET_PROPERTY(UStrProperty,Z_Param_password); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MCP_Login(Z_Param_username,Z_Param_password); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunDebugMetric) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RunDebugMetric(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVehicleInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetVehicleInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListUnlockedRecipesAndSchematics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ListUnlockedRecipesAndSchematics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTradingPostLevel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_inLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTradingPostLevel(Z_Param_inLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListItemPickups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ListItemPickups(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPurgeAllBeaconsFromSave) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PurgeAllBeaconsFromSave(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPurgeInactiveClientsFromSave) \
	{ \
		P_GET_UBOOL(Z_Param_fetchInventories); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PurgeInactiveClientsFromSave(Z_Param_fetchInventories); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpDynamicOptionsSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpDynamicOptionsSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpSignificanceManagedObjects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpSignificanceManagedObjects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpActorRepresentations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpActorRepresentations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableInstancingOnFactory) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableInstancingOnFactory(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpHotbarShortcuts) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpHotbarShortcuts(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpPlayerStates) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpPlayerStates(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAITickDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAITickDistance(Z_Param_distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVisitAllMapAreas) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->VisitAllMapAreas(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateSessionToOSS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSessionToOSS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomizeBuildingsColorSlot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_slotIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RandomizeBuildingsColorSlot(Z_Param_slotIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideAllBuildings_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HideAllBuildings_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideAllBuildings) \
	{ \
		P_GET_UBOOL(Z_Param_inVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideAllBuildings(Z_Param_inVisibility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplayBuildingEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReplayBuildingEffects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpActiveGPUParticles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpActiveGPUParticles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpTicking) \
	{ \
		P_GET_UBOOL(Z_Param_detailed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpTicking(Z_Param_detailed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpAttachedToSkelMesh) \
	{ \
		P_GET_UBOOL(Z_Param_detailed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpAttachedToSkelMesh(Z_Param_detailed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleAudioLandingDebug) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleAudioLandingDebug(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpNonDormantActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpNonDormantActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceSpawnCreatures) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForceSpawnCreatures(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTestSharedInventoryPtr) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TestSharedInventoryPtr(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamePhase) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_phase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamePhase(EGamePhase(Z_Param_phase)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveSchematicsOfTier) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_tier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveSchematicsOfTier(Z_Param_tier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleCameraMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleCameraMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetFuses) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetFuses(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFactoryDetailReplication_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetFactoryDetailReplication_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFactoryDetailReplication) \
	{ \
		P_GET_UBOOL(Z_Param_enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFactoryDetailReplication(Z_Param_enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeSpeedMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimeSpeedMultiplier(Z_Param_speed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeAllConveyors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MergeAllConveyors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplitAllConveyors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SplitAllConveyors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPumpiMode_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PumpiMode_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPumpiMode) \
	{ \
		P_GET_UBOOL(Z_Param_enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PumpiMode(Z_Param_enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenModMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenModMap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSlomo) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_slomo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSlomo(Z_Param_slomo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleAudioDebug) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleAudioDebug(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableAudioDebug) \
	{ \
		P_GET_UBOOL(Z_Param_isEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableAudioDebug(Z_Param_isEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpAllAvailableRecipes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpAllAvailableRecipes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideFactoryOnly_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HideFactoryOnly_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideFactoryOnly) \
	{ \
		P_GET_UBOOL(Z_Param_factoryHidden); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideFactoryOnly(Z_Param_factoryHidden); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowFactoryOnly_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShowFactoryOnly_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowFactoryOnly) \
	{ \
		P_GET_UBOOL(Z_Param_environmentHidden); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowFactoryOnly(Z_Param_environmentHidden); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeOfDay_minute_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->SetTimeOfDay_minute_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeOfDay_hour_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->SetTimeOfDay_hour_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeOfDay) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_hour); \
		P_GET_PROPERTY(UIntProperty,Z_Param_minute); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimeOfDay(Z_Param_hour,Z_Param_minute); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearPardon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearPardon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPardonAllPlayers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PardonAllPlayers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllFoliage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_maxNumInstances); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAllFoliage(Z_Param_maxNumInstances); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyPawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyPawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnablePlayerFOV_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->EnablePlayerFOV_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnablePlayerFOV) \
	{ \
		P_GET_UBOOL(Z_Param_enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnablePlayerFOV(Z_Param_enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableBuildableTick_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->EnableBuildableTick_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableBuildableTick) \
	{ \
		P_GET_UBOOL(Z_Param_enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableBuildableTick(Z_Param_enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebuildPowerCircuits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RebuildPowerCircuits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveAllResearchTrees) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveAllResearchTrees(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveStartingResearch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveStartingResearch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveStorySchematics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveStorySchematics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGivePrototypeSchematics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GivePrototypeSchematics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveCheatSchematics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveCheatSchematics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveAvailableSchematics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveAvailableSchematics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveAllSchematicsAndPhases) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveAllSchematicsAndPhases(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveALLSchematics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveALLSchematics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearGiveItemPopularList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearGiveItemPopularList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerNoClipModeOnFly_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PlayerNoClipModeOnFly_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerNoClipModeOnFly) \
	{ \
		P_GET_UBOOL(Z_Param_ghostMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayerNoClipModeOnFly(Z_Param_ghostMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerFly_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PlayerFly_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerFly) \
	{ \
		P_GET_UBOOL(Z_Param_flyModeEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayerFly(Z_Param_flyModeEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawSphere) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_radius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawSphere(Z_Param_radius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveResourceSinkCoupons) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumCoupons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveResourceSinkCoupons(Z_Param_NumCoupons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveItemsSingle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_resource); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfItems); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveItemsSingle(Z_Param_resource,Z_Param_NumberOfItems); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveItemStacks) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_resource); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfStacks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveItemStacks(Z_Param_resource,Z_Param_NumberOfStacks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurboMode_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TurboMode_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurboProductionMode) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TurboProductionMode(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurboBuildMode_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TurboBuildMode_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurboBuildMode) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TurboBuildMode(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNoMessages_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->NoMessages_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNoMessages) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NoMessages(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNoPower_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->NoPower_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNoPower) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NoPower(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNoCost_Get) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->NoCost_Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNoCost) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NoCost(Z_Param_enabled); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGCheatManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCheatManager(); \
	friend struct Z_Construct_UClass_UFGCheatManager_Statics; \
public: \
	DECLARE_CLASS(UFGCheatManager, UCheatManager, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCheatManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FactoryGame_Source_FactoryGame_Public_FGCheatManager_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFGCheatManager(); \
	friend struct Z_Construct_UClass_UFGCheatManager_Statics; \
public: \
	DECLARE_CLASS(UFGCheatManager, UCheatManager, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCheatManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FactoryGame_Source_FactoryGame_Public_FGCheatManager_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCheatManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCheatManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCheatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCheatManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCheatManager(UFGCheatManager&&); \
	NO_API UFGCheatManager(const UFGCheatManager&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGCheatManager_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCheatManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCheatManager(UFGCheatManager&&); \
	NO_API UFGCheatManager(const UFGCheatManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCheatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCheatManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCheatManager)


#define FactoryGame_Source_FactoryGame_Public_FGCheatManager_h_18_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGCheatManager_h_15_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGCheatManager_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGCheatManager_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGCheatManager_h_18_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGCheatManager_h_18_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGCheatManager_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGCheatManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGCheatManager_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGCheatManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGCheatManager_h_18_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGCheatManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCheatManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGCheatManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
