//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "init.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Quitter1Click(TObject *Sender)
{
 Form1->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Blanc1Click(TObject *Sender)
{
Form1->Color = clWhite;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Gris1Click(TObject *Sender)
{
Form1->Color = clGray;
}
//---------------------------------------------------------------------------




