//---------------------------------------------------------------------------

#ifndef initH
#define initH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants g�r�s par l'EDI
	TMainMenu *MainMenu1;
	TMenuItem *N11;
	TMenuItem *Saisie1;
	TMenuItem *Affichage1;
	TMenuItem *Quitter1;
	TMenuItem *Couleur1;
	TMenuItem *Blanc1;
	TMenuItem *Gris1;
	TMenuItem *Outils1;
	TLabel *Label1;
	TBitBtn *BitBtn1;
	TMenuItem *Aproposde1;
	void __fastcall Quitter1Click(TObject *Sender);
	void __fastcall Blanc1Click(TObject *Sender);
	void __fastcall Gris1Click(TObject *Sender);
	void __fastcall Aproposde1Click(TObject *Sender);
private:	// D�clarations utilisateur
public:		// D�clarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif