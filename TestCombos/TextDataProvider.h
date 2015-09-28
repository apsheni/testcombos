#ifndef TextDataProviderH
#define TextDataProviderH

#include <System.Classes.hpp>
#include "IDataProvider.h"
//---------------------------------------------------------------------------
class TextDataProvider : public IDataProvider
{
public:
    void __fastcall virtual GetData(TStringList &MyValues);
	__fastcall TextDataProvider();
	__fastcall ~TextDataProvider();
};
#endif
