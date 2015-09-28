#include "TextDataProvider.h"
//---------------------------------------------------------------------------
__fastcall TextDataProvider::TextDataProvider()
{
}
//---------------------------------------------------------------------------
__fastcall TextDataProvider::~TextDataProvider()
{
}
//---------------------------------------------------------------------------
void __fastcall TextDataProvider::GetData(TStringList &MyValues)
{
	MyValues.LoadFromFile("items.txt");
}
