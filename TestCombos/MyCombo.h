#ifndef MyComboH
#define MyComboH
//---------------------------------------------------------------------------
#include <Vcl.StdCtrls.hpp>
#include "IDataProvider.h"
//---------------------------------------------------------------------------
class TMyComboBox : public TComboBox
{
public:
	__fastcall TMyComboBox(TComponent* Owner);
	__fastcall TMyComboBox(TComponent* Owner, IDataProvider* DataProvider);
	void __fastcall SetDPItems();
	void __fastcall CheckEnter(TObject *Sender, WORD &Key, TShiftState Shift);
private:
	IDataProvider* mDataProvider;
};
#endif

