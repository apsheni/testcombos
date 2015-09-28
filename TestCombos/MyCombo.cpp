#include "MyCombo.h"
//---------------------------------------------------------------------------
__fastcall TMyComboBox::TMyComboBox(TComponent* Owner)
	: TComboBox(Owner)
{
}

//---------------------------------------------------------------------------
__fastcall TMyComboBox::TMyComboBox(TComponent* Owner, IDataProvider* DataProvider)
	: TComboBox(Owner)
{
	mDataProvider = DataProvider;
}

//---------------------------------------------------------------------------
void __fastcall TMyComboBox::SetDPItems()
{
	TStringList *MyValues = new TStringList;
	mDataProvider->GetData(*MyValues);
	this->Items->AddStrings(MyValues);
	delete MyValues;
}

//---------------------------------------------------------------------------
void __fastcall TMyComboBox::CheckEnter(TObject *Sender, WORD &Key, TShiftState Shift)
{
	if(Key == VK_RETURN)
	{
		this->Items->Add(this->Text);
	}
}

