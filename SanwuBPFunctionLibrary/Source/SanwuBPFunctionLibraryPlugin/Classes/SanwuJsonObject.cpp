#include "SanwuBPFunctionLibraryPluginPrivatePCH.h"
#include "SanwuJsonObject.h"



USanwuJsonObject::USanwuJsonObject(const class FPostConstructInitializeProperties& PCIP)
: Super(PCIP)
{
	//TSharedRef< TJsonWriter<TCHAR, TCondensedJsonPrintPolicy<TCHAR> > > JsonWriter = TJsonWriterFactory<TCHAR, TCondensedJsonPrintPolicy<TCHAR> >::Create(&JsonStr);
}
void USanwuJsonObject::WriteFloat(FString key, float value)
{
	
	JsonWriter->WriteObjectStart();
	JsonWriter->WriteValue(key, value);
	JsonWriter->WriteObjectEnd();
	//JsonWriter->Close();
}
void USanwuJsonObject::WriteInt32(FString key, int32 value)
{
	//TSharedRef< TJsonWriter<TCHAR, TCondensedJsonPrintPolicy<TCHAR> > > JsonWriter = TJsonWriterFactory<TCHAR, TCondensedJsonPrintPolicy<TCHAR> >::Create(&JsonStr);
	JsonWriter->WriteObjectStart();
	JsonWriter->WriteValue(key, value);
	JsonWriter->WriteObjectEnd();
}
void USanwuJsonObject::WriteString(FString key, FString value)
{
	//TSharedRef< TJsonWriter<TCHAR, TCondensedJsonPrintPolicy<TCHAR> > > JsonWriter = TJsonWriterFactory<TCHAR, TCondensedJsonPrintPolicy<TCHAR> >::Create(&JsonStr);
	JsonWriter->WriteObjectStart();
	JsonWriter->WriteValue(key, value);
	JsonWriter->WriteObjectEnd();
}
void USanwuJsonObject::EndWrite()
{
	
}
