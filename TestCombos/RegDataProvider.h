#ifndef RegDataProviderH
#define RegDataProviderH

#include <System.Classes.hpp>
#include "IDataProvider.h"
//---------------------------------------------------------------------------
class RegDataProvider : public IDataProvider
{
public:
    void __fastcall virtual GetData(TStringList &MyValues);
	__fastcall RegDataProvider();
	__fastcall ~RegDataProvider();
};
#endif
