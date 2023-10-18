#include "Serialization/CustomVersion.h"

const FGuid FFactoryGameCustomVersion::GUID = FGuid(0x0F4E61DC1, 0x7C029ACE, 0x85D7D561, 0x0E42F6A3D); // See symbol ?GUID@FFactoryGameCustomVersion@@2UFGuid@@B in IDA for value <0F4E61DC1h, 7C029ACEh, 85D7D561h, 0E42F6A3Dh>

// Stuff to register custom version for UE4 tracking
FCustomVersionRegistration GRegisterFactoryGameCustomVersion{FFactoryGameCustomVersion::GUID, FFactoryGameCustomVersion::Type::LatestVersion, TEXT("Dev-Framework")};
