#include "SanwuBPFunctionLibraryPluginPrivatePCH.h"
#include "SanwuByteArray.h"

USanwuByteArray::USanwuByteArray(const class FPostConstructInitializeProperties& PCIP)
: Super(PCIP)
{
	
}
void USanwuByteArray::ConstructMemeray(int32 count=1024)
{
	memeary = new TCHAR [count];
	
	capilter = count;
	size = 0;
}

void USanwuByteArray::WriteFloat(float data)
{
	if (size + sizeof(float) <= capilter)
	{
		memcpy(memeary, &data, sizeof(float));
		size += sizeof(float);
	}
}

void USanwuByteArray::WriteInt(int32 data)
{
	if (size + sizeof(int32) <= capilter)
	{
		memcpy(memeary, &data, sizeof(int32));
		size += sizeof(int32);
	}
}

void USanwuByteArray::WriteString(FString data)
{
	
	TCHAR *serializedChar = data.GetCharArray().GetData();
	TCHAR_TO_UTF8(serializedChar);
	int32 newSize = FCString::Strlen(serializedChar) * 2;

	if (size + newSize <= capilter)
	{
		memcpy(memeary, serializedChar, newSize);
		size += newSize;
	}
}
void USanwuByteArray::WriteDouble(double data)
{
	if (size + sizeof(double) <= capilter)
	{
		memcpy(memeary, &data, sizeof(double));
		size += sizeof(double);
	}
	else
	{
// 		TCHAR* mem = new TCHAR[capilter + 1024];
// 		memcpy(mem, memeary, size);
// 		delete memeary;		
// 		memeary = mem;
// 		memcpy(memeary, &data, sizeof(double));
// 		size += sizeof(double);	

	}

}