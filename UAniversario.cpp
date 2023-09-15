//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UAniversario.h"  //Form24

/* === FORMULÁRIOS === */
#include "UInicio.h" //Form1
#include "UCadClienteContribuintePF.h"//Form2
#include "UCadastroFuncionario.h" //Form3
#include "UCadastroNatural.h" //Form4
#include "UCadClienteContribuintePJ.h" //Form5
#include "UConsAtuaExcSocio.h" //Form6
#include "UTipoConsultaSocio.h" //Form7
#include "UHistorico.h"  //Form8
#include "UTpConsultaHistorico.h"//Form9
#include "UDoacao.h"  //Form10
#include "UTpConsultaDoacao.h" //For11
#include "UAtividade.h" //Form12
#include "UTpConsultaAtividade.h"  //Form13
#include "UServico.h" //Form14
#include "UTpConsultaServico.h"//  Form15
#include "URelatorioNatural.h"//Form16
#include "URelatorioContribuinte.h"  //Form17
#include "URelatorioFuncionario.h"//Form18
#include "URelatorioCliente.h"//Form19
#include "URelatorioHistorico.h" //Form20
#include "URelatorioDoacao.h"  //Form21
#include "URelatorioAtividade.h"//Form22
#include "URelatorioServico.h"//Form23

#include "URelatorioAniversario.h" //Form25
#include "UTeleMarketing.h"//Form26
#include "UTipoConsultaTeleMarKeting.h"//Form27;
#include "URelatorioDoacaoTel.h"//Form28
#include "UDoacaoTeleMarketing.h"//Form29
#include "UTpConsultaDoacaoTel.h"//Form30
#include "UCadContribuinteTelPF.h" //Form31
#include "UCadContribuinteTelPJ.h" //Form32
#include "URelatorioAniversarioTel.h"//Form33
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm24 *Form24;
//---------------------------------------------------------------------------
__fastcall TForm24::TForm24(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm24::SpeedButton1Click(TObject *Sender)
{
AnsiString Caminho2 = ExtractFilePath(ParamStr(0));;
/* ===== TeleMarketing ou  Outros Sócios ===== */
if ( RadioButton13->Checked == false && RadioButton14->Checked == false)
{
        ShowMessage("Selecione um tipo de Sócio: TeleMarketing ou  Outros Sócios");
}

else
{
                /* ===== Nenhum Mês  ===== */
                if ( RadioButton1->Checked == false && RadioButton2->Checked == false
                  && RadioButton3->Checked == false && RadioButton4->Checked == false
                  && RadioButton5->Checked == false && RadioButton6->Checked == false
                  && RadioButton7->Checked == false  && RadioButton8->Checked == false
                  && RadioButton9->Checked == false && RadioButton10->Checked == false
                  && RadioButton11->Checked == false && RadioButton12->Checked == false )
                {       ShowMessage("Selecione um Mês");    }

        /* ===== Outros Sócios  ===== */
        if ( RadioButton14->Checked == true )
        {
                /* ===== Janeiro  ===== */
                if ( RadioButton1->Checked == true )
                {
                        Form25->Query1->Close();
                        Form25->Query1->SQL->Clear();
                        Form25->Query1->SQL->Add("SELECT * FROM Socio where EXTRACT( MONTH FROM DtNasc)= 1");
                        /*Select * From Socio, TeleMarketing Where (EXTRACT( MONTH FROM DtNasc) = 12) And (EXTRACT( MONTH FROM DtNascDoa)= 12) Order By TeleMarketing.DtNascDoa,Socio.DtNasc*/
                        /*Form25->Query1->SQL->Add("Select * From Socio, TeleMarketing Where (EXTRACT( MONTH FROM DtNasc) = 12) And (EXTRACT( MONTH FROM DtNascDoa)= 12) Order By TeleMarketing.DtNascDoa,Socio.DtNasc");*/
                        Form25->Query1->ExecSQL();
                        Form25->Query1->Open();

                        Form25->QuickRep1->Page->Orientation = poLandscape;
                        Form25->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form25->QuickRep1->Preview();
                }

                /* ===== Fevereiro  ===== */
                if ( RadioButton2->Checked == true )
                {
                        Form25->Query1->Close();
                        Form25->Query1->SQL->Clear();
                        Form25->Query1->SQL->Add("SELECT * FROM Socio where EXTRACT( MONTH FROM DtNasc)= 2");
                        Form25->Query1->ExecSQL();
                        Form25->Query1->Open();

                        Form25->QuickRep1->Page->Orientation = poLandscape;
                        Form25->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form25->QuickRep1->Preview();
                }


                /* ===== Março ===== */
                if ( RadioButton3->Checked == true )
                {
                        Form25->Query1->Close();
                        Form25->Query1->SQL->Clear();
                        Form25->Query1->SQL->Add("SELECT * FROM Socio where EXTRACT( MONTH FROM DtNasc)= 3");
                        Form25->Query1->ExecSQL();
                        Form25->Query1->Open();

                        Form25->QuickRep1->Page->Orientation = poLandscape;
                        Form25->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form25->QuickRep1->Preview();
                }

                /* =====  Abril ===== */
                if ( RadioButton4->Checked == true )
                {
                        Form25->Query1->Close();
                        Form25->Query1->SQL->Clear();
                        Form25->Query1->SQL->Add("SELECT * FROM Socio where EXTRACT( MONTH FROM DtNasc)= 4");
                        Form25->Query1->ExecSQL();
                        Form25->Query1->Open();

                        Form25->QuickRep1->Page->Orientation = poLandscape;
                        Form25->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form25->QuickRep1->Preview();
                }

                /* =====  Maio ===== */
                if ( RadioButton5->Checked == true )
                {
                        Form25->Query1->Close();
                        Form25->Query1->SQL->Clear();
                        Form25->Query1->SQL->Add("SELECT * FROM Socio where EXTRACT( MONTH FROM DtNasc)= 5");
                        Form25->Query1->ExecSQL();
                        Form25->Query1->Open();

                        Form25->QuickRep1->Page->Orientation = poLandscape;
                        Form25->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form25->QuickRep1->Preview();
                }

                /* ===== Junho  ===== */
                if ( RadioButton6->Checked == true )
                {
                        Form25->Query1->Close();
                        Form25->Query1->SQL->Clear();
                        Form25->Query1->SQL->Add("SELECT * FROM Socio where EXTRACT( MONTH FROM DtNasc)= 6");
                        Form25->Query1->ExecSQL();
                        Form25->Query1->Open();

                        Form25->QuickRep1->Page->Orientation = poLandscape;
                        Form25->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form25->QuickRep1->Preview();
                }

                /* ===== Julho  ===== */
                if ( RadioButton7->Checked == true )
                {
                        Form25->Query1->Close();
                        Form25->Query1->SQL->Clear();
                        Form25->Query1->SQL->Add("SELECT * FROM Socio where EXTRACT( MONTH FROM DtNasc)= 7");
                        Form25->Query1->ExecSQL();
                        Form25->Query1->Open();

                        Form25->QuickRep1->Page->Orientation = poLandscape;
                        Form25->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form25->QuickRep1->Preview();
                }


                /* ===== Agosto  ===== */
                if ( RadioButton8->Checked == true )
                {
                        Form25->Query1->Close();
                        Form25->Query1->SQL->Clear();
                        Form25->Query1->SQL->Add("SELECT * FROM Socio where EXTRACT( MONTH FROM DtNasc)= 8");
                        Form25->Query1->ExecSQL();
                        Form25->Query1->Open();

                        Form25->QuickRep1->Page->Orientation = poLandscape;
                        Form25->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form25->QuickRep1->Preview();
                }

                /* ===== Setembro  ===== */
                if ( RadioButton9->Checked == true )
                {
                        Form25->Query1->Close();
                        Form25->Query1->SQL->Clear();
                        Form25->Query1->SQL->Add("SELECT * FROM Socio where EXTRACT( MONTH FROM DtNasc)= 9");
                        Form25->Query1->ExecSQL();
                        Form25->Query1->Open();

                        Form25->QuickRep1->Page->Orientation = poLandscape;
                        Form25->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form25->QuickRep1->Preview();
                }

                /* ===== Outubro  ===== */
                if ( RadioButton10->Checked == true )
                {
                        Form25->Query1->Close();
                        Form25->Query1->SQL->Clear();
                        Form25->Query1->SQL->Add("SELECT * FROM Socio where EXTRACT( MONTH FROM DtNasc)= 10");
                        Form25->Query1->ExecSQL();
                        Form25->Query1->Open();

                        Form25->QuickRep1->Page->Orientation = poLandscape;
                        Form25->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form25->QuickRep1->Preview();
                }

                /* ===== Novembro  ===== */
                if ( RadioButton11->Checked == true )
                {
                        Form25->Query1->Close();
                        Form25->Query1->SQL->Clear();
                        Form25->Query1->SQL->Add("SELECT * FROM Socio where EXTRACT( MONTH FROM DtNasc)= 11");
                        Form25->Query1->ExecSQL();
                        Form25->Query1->Open();

                        Form25->QuickRep1->Page->Orientation = poLandscape;
                        Form25->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form25->QuickRep1->Preview();
                }

                /* ===== Dezembro  ===== */
                if ( RadioButton12->Checked == true )
                {
                        Form25->Query1->Close();
                        Form25->Query1->SQL->Clear();
                        Form25->Query1->SQL->Add("SELECT * FROM Socio where EXTRACT( MONTH FROM DtNasc)= 12");
                        Form25->Query1->ExecSQL();
                        Form25->Query1->Open();

                        Form25->QuickRep1->Page->Orientation = poLandscape;
                        Form25->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form25->QuickRep1->Preview();
                }


        
        }//TELEMARKETING


        /* ===== TeleMarketing ===== */
        if ( RadioButton13->Checked == true )
        {
                /* ===== Janeiro  ===== */
                if ( RadioButton1->Checked == true )
                {
                        Form33->Query1->Close();
                        Form33->Query1->SQL->Clear();
                        Form33->Query1->SQL->Add("SELECT * FROM TeleMarketing where EXTRACT( MONTH FROM DtNascDoa)= 1");
                        /*Select * From Socio, TeleMarketing Where (EXTRACT( MONTH FROM DtNasc) = 12) And (EXTRACT( MONTH FROM DtNascDoa)= 12) Order By TeleMarketing.DtNascDoa,Socio.DtNasc*/
                        /*Form25->Query1->SQL->Add("Select * From Socio, TeleMarketing Where (EXTRACT( MONTH FROM DtNasc) = 12) And (EXTRACT( MONTH FROM DtNascDoa)= 12) Order By TeleMarketing.DtNascDoa,Socio.DtNasc");*/
                        Form33->Query1->ExecSQL();
                        Form33->Query1->Open();

                        Form33->QuickRep1->Page->Orientation = poLandscape;
                        Form33->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form33->QuickRep1->Preview();
                }

                /* ===== Fevereiro  ===== */
                if ( RadioButton2->Checked == true )
                {
                        Form33->Query1->Close();
                        Form33->Query1->SQL->Clear();
                        Form33->Query1->SQL->Add("SELECT * FROM TeleMarketing where EXTRACT( MONTH FROM DtNascDoa)= 2");
                        Form33->Query1->ExecSQL();
                        Form33->Query1->Open();

                        Form33->QuickRep1->Page->Orientation = poLandscape;
                        Form33->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form33->QuickRep1->Preview();
                }


                /* ===== Março ===== */
                if ( RadioButton3->Checked == true )
                {
                        Form33->Query1->Close();
                        Form33->Query1->SQL->Clear();
                        Form33->Query1->SQL->Add("SELECT * FROM TeleMarketing where EXTRACT( MONTH FROM DtNascDoa)= 3");
                        Form33->Query1->ExecSQL();
                        Form33->Query1->Open();

                        Form33->QuickRep1->Page->Orientation = poLandscape;
                        Form33->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form33->QuickRep1->Preview();
                }

                /* =====  Abril ===== */
                if ( RadioButton4->Checked == true )
                {
                        Form33->Query1->Close();
                        Form33->Query1->SQL->Clear();
                        Form33->Query1->SQL->Add("SELECT * FROM TeleMarketing where EXTRACT( MONTH FROM DtNascDoa)= 4");
                        Form33->Query1->ExecSQL();
                        Form33->Query1->Open();

                        Form33->QuickRep1->Page->Orientation = poLandscape;
                        Form33->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form33->QuickRep1->Preview();
                }

                /* =====  Maio ===== */
                if ( RadioButton5->Checked == true )
                {
                        Form33->Query1->Close();
                        Form33->Query1->SQL->Clear();
                        Form33->Query1->SQL->Add("SELECT * FROM TeleMarketing where EXTRACT( MONTH FROM DtNascDoa)= 5");
                        Form33->Query1->ExecSQL();
                        Form33->Query1->Open();

                        Form33->QuickRep1->Page->Orientation = poLandscape;
                        Form33->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form33->QuickRep1->Preview();
                }

                /* ===== Junho  ===== */
                if ( RadioButton6->Checked == true )
                {
                        Form33->Query1->Close();
                        Form33->Query1->SQL->Clear();
                        Form33->Query1->SQL->Add("SELECT * FROM TeleMarketing where EXTRACT( MONTH FROM DtNascDoa)= 6");
                        Form33->Query1->ExecSQL();
                        Form33->Query1->Open();

                        Form33->QuickRep1->Page->Orientation = poLandscape;
                        Form33->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form33->QuickRep1->Preview();
                }

                /* ===== Julho  ===== */
                if ( RadioButton7->Checked == true )
                {
                        Form33->Query1->Close();
                        Form33->Query1->SQL->Clear();
                        Form33->Query1->SQL->Add("SELECT * FROM TeleMarketing where EXTRACT( MONTH FROM DtNascDoa)= 7");
                        Form33->Query1->ExecSQL();
                        Form33->Query1->Open();

                        Form33->QuickRep1->Page->Orientation = poLandscape;
                        Form33->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form33->QuickRep1->Preview();
                }


                /* ===== Agosto  ===== */
                if ( RadioButton8->Checked == true )
                {
                        Form33->Query1->Close();
                        Form33->Query1->SQL->Clear();
                        Form33->Query1->SQL->Add("SELECT * FROM TeleMarketing where EXTRACT( MONTH FROM DtNascDoa)= 8");
                        Form33->Query1->ExecSQL();
                        Form33->Query1->Open();

                        Form33->QuickRep1->Page->Orientation = poLandscape;
                        Form33->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form33->QuickRep1->Preview();
                }

                /* ===== Setembro  ===== */
                if ( RadioButton9->Checked == true )
                {
                        Form33->Query1->Close();
                        Form33->Query1->SQL->Clear();
                        Form33->Query1->SQL->Add("SELECT * FROM TeleMarketing where EXTRACT( MONTH FROM DtNascDoa)= 9");
                        Form33->Query1->ExecSQL();
                        Form33->Query1->Open();

                        Form33->QuickRep1->Page->Orientation = poLandscape;
                        Form33->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form33->QuickRep1->Preview();
                }

                /* ===== Outubro  ===== */
                if ( RadioButton10->Checked == true )
                {
                        Form33->Query1->Close();
                        Form33->Query1->SQL->Clear();
                        Form33->Query1->SQL->Add("SELECT * FROM TeleMarketing where EXTRACT( MONTH FROM DtNascDoa)= 10");
                        Form33->Query1->ExecSQL();
                        Form33->Query1->Open();

                        Form33->QuickRep1->Page->Orientation = poLandscape;
                        Form33->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form33->QuickRep1->Preview();
                }

                /* ===== Novembro  ===== */
                if ( RadioButton11->Checked == true )
                {
                        Form33->Query1->Close();
                        Form33->Query1->SQL->Clear();
                        Form33->Query1->SQL->Add("SELECT * FROM TeleMarketing where EXTRACT( MONTH FROM DtNascDoa)= 11");
                        Form33->Query1->ExecSQL();
                        Form33->Query1->Open();

                        Form33->QuickRep1->Page->Orientation = poLandscape;
                        Form33->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form33->QuickRep1->Preview();
                }

                /* ===== Dezembro  ===== */
                if ( RadioButton12->Checked == true )
                {
                        Form33->Query1->Close();
                        Form33->Query1->SQL->Clear();
                        Form33->Query1->SQL->Add("SELECT * FROM TeleMarketing where EXTRACT( MONTH FROM DtNascDoa)= 12");
                        Form33->Query1->ExecSQL();
                        Form33->Query1->Open();

                        Form33->QuickRep1->Page->Orientation = poLandscape;
                        Form33->QRImage1->Picture->LoadFromFile(Caminho2+"Logotipo.bmp");
                        Form33->QuickRep1->Preview();
                }
                
        }//OUTROS SÓCIOS

}//ELSE

}

//---------------------------------------------------------------------------

void __fastcall TForm24::FormActivate(TObject *Sender)
{
if (RadioButton13->Checked == true || RadioButton14->Checked == true )
{
        GroupBox1->Enabled = true;
}

/*== FECHA FORMULÁRIOS ==*/
Form2->Close();
Form3->Close();
Form4->Close();
Form5->Close();
Form6->Close();
Form7->Close();
Form8->Close();
Form9->Close();
Form10->Close();
Form11->Close();
Form12->Close();
Form13->Close();
Form14->Close();
Form15->Close();
Form16->Close();
Form17->Close();
Form18->Close();
Form19->Close();
Form20->Close();
Form21->Close();
Form22->Close();
Form23->Close();
//Form24->Close();
//Form25->Close();
Form26->Close();
Form27->Close();
Form28->Close();
Form29->Close();
Form30->Close();
Form31->Close();
Form32->Close();
//Form33->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm24::RadioButton13Click(TObject *Sender)
{
GroupBox1->Enabled = true;        
}
//---------------------------------------------------------------------------

void __fastcall TForm24::RadioButton14Click(TObject *Sender)
{
GroupBox1->Enabled = true;        
}
//---------------------------------------------------------------------------

void __fastcall TForm24::FecharClick(TObject *Sender)
{
Form24->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm24::SairClick(TObject *Sender)
{
Form1->Sair->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm24::RelatorioNaturalClick(TObject *Sender)
{
Form1->RelatorioNatural->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm24::RelatorioContribuinteClick(TObject *Sender)
{
Form1->RelatorioContribuinte->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm24::RelatorioSociosTeleMarketingClick(TObject *Sender)
{
Form1->RelatorioSociosTeleMarketing->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm24::RelatorioDoacaoTeleMarketingClick(TObject *Sender)
{
Form1->RelatorioDoacaoTeleMarketing->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm24::RelatorioFuncionarioClick(TObject *Sender)
{
Form1->RelatorioFuncionario->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm24::RelatorioHistoricoClick(TObject *Sender)
{
Form1->RelatorioHistorico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm24::RelatorioDoacaoClick(TObject *Sender)
{
Form1->RelatorioDoacao->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm24::RelatorioAtividadeClick(TObject *Sender)
{
Form1->RelatorioAtividade->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm24::RelatorioServicoClick(TObject *Sender)
{
Form1->RelatorioServico->Click();
}
//---------------------------------------------------------------------------


