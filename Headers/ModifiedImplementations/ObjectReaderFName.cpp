// This file has been automatically generated by the Unreal Header Implementation tool

#include "ObjectReaderFName.h"

FObjectReaderFName::FObjectReaderFName(UObject* Obj, TArray<uint8>& InBytes, int32 saveVersion,  UWorld* world, FPackageFileVersion version, bool migrateObjectRefsToPersistent) : FObjectReader(Obj, InBytes) { }
FArchive& FObjectReaderFName::operator<<( UObject*& Res){ return *(new FArchive); }
FArchive& FObjectReaderFName::operator<<(FObjectPtr& Res){ return *(new FArchive); }
FArchive& FObjectReaderFName::operator<<( FName& N){ return *(new FArchive); }
