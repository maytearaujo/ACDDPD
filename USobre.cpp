//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "USobre.h" //AboutBox
//--------------------------------------------------------------------- 
#pragma resource "*.dfm"
TAboutBox *AboutBox;
//--------------------------------------------------------------------- 
__fastcall TAboutBox::TAboutBox(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------
void __fastcall TAboutBox::SpeedButton1Click(TObject *Sender)
{
AboutBox->Close();
}
//---------------------------------------------------------------------------


void __fastcall TAboutBox::FormCreate(TObject *Sender)
{
/* ===== EXIBE BRASIL ===== */
AnsiString Caminho;

Caminho = ExtractFilePath(ParamStr(0));

AboutBox->Image1->Picture->LoadFromFile(Caminho+"Brasil.bmp");        
}
//---------------------------------------------------------------------------

