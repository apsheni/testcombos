#include "Registry.hpp"
#include "RegDataProvider.h"
//---------------------------------------------------------------------------
__fastcall RegDataProvider::RegDataProvider()
{
}
//---------------------------------------------------------------------------
__fastcall RegDataProvider::~RegDataProvider()
{
}
//---------------------------------------------------------------------------
void __fastcall RegDataProvider::GetData(TStringList &MyValues)
{
	TRegistry *reg=new TRegistry;
	reg->RootKey=HKEY_CURRENT_USER;
	reg->OpenKey("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run",0);
	reg->GetValueNames(&MyValues);
	reg->CloseKey();
	delete reg;
}
