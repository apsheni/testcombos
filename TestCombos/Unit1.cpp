//---------------------------------------------------------------------------
#pragma hdrstop

#include <vcl.h>
#include "Unit1.h"
#include "MyCombo.h"
#include "RegDataProvider.h"
#include "TextDataProvider.h"
#include "XmlDataProvider.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	TMyComboBox *ComboBox1 = new TMyComboBox(this, new XmlDataProvider);
	ComboBox1->Parent = this;
	ComboBox1->Left = 50;
	ComboBox1->Top = 200;
	ComboBox1->Text = "xml";
	ComboBox1->SetDPItems();
	ComboBox1->OnKeyDown = ComboBox1->CheckEnter;

	TMyComboBox *ComboBox2 = new TMyComboBox(this, new RegDataProvider);
	ComboBox2->Parent = this;
	ComboBox2->Left = 50;
	ComboBox2->Top = 100;
	ComboBox2->Text = "registry";
	ComboBox2->SetDPItems();
	ComboBox2->OnKeyDown = ComboBox2->CheckEnter;

	TMyComboBox *ComboBox3 = new TMyComboBox(this, new TextDataProvider);
	ComboBox3->Parent = this;
	ComboBox3->Left = 50;
	ComboBox3->Top = 150;
	ComboBox3->Text = "text";
	ComboBox3->SetDPItems();
	ComboBox3->OnKeyDown = ComboBox3->CheckEnter;
}
