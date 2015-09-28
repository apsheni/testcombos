#ifndef XmlDataProviderH
#define XmlDataProviderH

#include <System.Classes.hpp>
#include "IDataProvider.h"
//---------------------------------------------------------------------------
class XmlDataProvider : public IDataProvider
{
public:
    void __fastcall virtual GetData(TStringList &MyValues);
	__fastcall XmlDataProvider();
	__fastcall ~XmlDataProvider();
};
#endif
