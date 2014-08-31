

#include "SanwuBPFunctionLibraryPluginPrivatePCH.h"
#include "SanwuSocketObject.h"


USanwuSocketObject::USanwuSocketObject(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	ISocketSubsystem* subSocket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
	MySocket_ins = subSocket->CreateSocket(NAME_Stream, TEXT("default"), false);
}
bool USanwuSocketObject::ConnectServer(FString ip, int32 port)
{
	ISocketSubsystem* subSocket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);

	//FSocket* mySocket = subSocket->CreateSocket(NAME_Stream, TEXT("default"), false);


	TSharedRef<FInternetAddr> address = subSocket->CreateInternetAddr();

	bool isValue = true;

	address->SetPort(port);
	address->SetIp(*ip, isValue);

	return MySocket_ins->Connect(*address);
}
bool USanwuSocketObject::SendData(USanwuByteArray* byteArray)
{

// 	FString serialized = TEXT("loadPlayer");
// 	TCHAR *seChar = serialized.GetCharArray().GetData();
// 	int32 size = FCString::Strlen(seChar);
 	int32 send = 0;
	
	bool successful=  MySocket_ins->Send((uint8*)TCHAR_TO_UTF8(byteArray->memeary), byteArray->size, send);
	return successful;
}