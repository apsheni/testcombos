#ifndef IDataProviderH
#define IDataProviderH

#include <System.Classes.hpp>

//---------------------------------------------------------------------------
class IDataProvider
{
public:
    void __fastcall virtual GetData(TStringList &MyValues) = 0;
protected:
	__fastcall IDataProvider();
	__declspec(dllexport) __fastcall virtual ~IDataProvider();
};
#endif


