// This file has been automatically generated by the Unreal Header Implementation tool

#include "FWPSaveDataMigrationContext.h"

#if WITH_EDITOR
void FWPSaveDataMigrationContext::CollectSaveGameValidationData(const  UWorldPartitionRuntimeLevelStreamingCell& Cell,  AFGWorldSettings& WorldSettings){ }
void FWPSaveDataMigrationContext::CollectSaveGameValidationDataForPersistentLevel(const ULevel& Level,  AFGWorldSettings& WorldSettings){ }
#endif 
FWPSaveDataMigrationContext::FWPSaveDataMigrationContext(const  AFGWorldSettings &InWorldSettings, const  FSaveHeader& InSaveHeader){ }
FWPSaveDataMigrationContext::~FWPSaveDataMigrationContext(){ }
void FWPSaveDataMigrationContext::MigrateUnpackedData(FUnpackedSaveData& UnpackedSaveData, const bool DataIsFromPersistentLevel){ }
bool FWPSaveDataMigrationContext::ValidateSaveData(FArchive& ReadAr){ return bool(); }
void FWPSaveDataMigrationContext::PerformSaveDataMigration( UFGSaveSession& SaveSession){ }
void FWPSaveDataMigrationContext::SaveValidationData(FArchive& WriteAr,  UFGSaveSession& SaveSession){ }
void FWPSaveDataMigrationContext::MigrateBlobs(const TArray<uint8> &TOCBlob, const TArray<uint8> &DataBlob, const bool DataIsFromPersistentLevel){ }
void FWPSaveDataMigrationContext::MigrateBlobs(const TArray<uint8, TSizedDefaultAllocator<64>> &TOCBlob, const TArray<uint8, TSizedDefaultAllocator<64>> &DataBlo0b, const bool DataIsFromPersistentLevel){ }
void FWPSaveDataMigrationContext::MigrateDestroyedActors(const TArray<FObjectReferenceDisc>& DestroyedActors){ }
void FWPSaveDataMigrationContext::RepackSaveData( UFGSaveSession& SaveSession){ }
