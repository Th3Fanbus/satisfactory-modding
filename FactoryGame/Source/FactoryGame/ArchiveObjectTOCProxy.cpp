// This file has been automatically generated by the Unreal Header Implementation tool

#include "ArchiveObjectTOCProxy.h"

FArchiveObjectTOCProxy::FArchiveObjectTOCProxy( FArchive& inInnerArchive,  UWorld* world ) : FArchiveProxy(inInnerArchive) { }
FArchive& FArchiveObjectTOCProxy::operator<<(  UObject*& Res ){ return *(new FArchive); }
