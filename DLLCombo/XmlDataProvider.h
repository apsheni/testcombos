#ifndef XmlDataProviderH
#define XmlDataProviderH

#include <System.Classes.hpp>
#include "IDataProvider.h"
//---------------------------------------------------------------------------
class XmlDataProvider : public IDataProvider
{
public:
    void __fastcall virtual GetData(TStringList &MyValues);
	__declspec(dllexport) __fastcall XmlDataProvider();
	__declspec(dllexport) __fastcall ~XmlDataProvider();
};
#endif
