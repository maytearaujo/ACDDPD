//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UCadContribuinteTelPF.h" //Form31

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
#include "UAniversario.h"  //Form24
#include "URelatorioAniversario.h" //Form25
#include "UTeleMarketing.h"//Form26
#include "UTipoConsultaTeleMarKeting.h"//Form27;
#include "URelatorioDoacaoTel.h"//Form28
#include "UDoacaoTeleMarketing.h"//Form29
#include "UTpConsultaDoacaoTel.h"//Form30

#include "UCadContribuinteTelPJ.h" //Form32
#include "URelatorioAniversarioTel.h"//Form33

#include "USobre.h" //AboutBox

/* ===== DECLARAÇÃO DAS CLASSES ===== */
#include "Data.h"
#include "Codigo.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm31 *Form31;
//---------------------------------------------------------------------------
__fastcall TForm31::TForm31(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
AnsiString VDT4, VDT5,   vcod6;
//---------------------------------------------------------------------------
/* === FUNÇÕES === */
void DesabilitaF31()
{
Form31->ComboBox1->Enabled = false;
Form31->ComboBox2->Enabled = false;
Form31->ComboBox3->Enabled = false;
Form31->ComboBox4->Enabled = false;

Form31->MaskEdit2->Enabled = false;
Form31->MaskEdit3->Enabled = false;
Form31->MaskEdit4->Enabled = false;
Form31->MaskEdit5->Enabled = false;
Form31->MaskEdit6->Enabled = false;
Form31->MaskEdit7->Enabled = false;

Form31->Edit3->Enabled = false;
Form31->Edit4->Enabled = false;
Form31->Edit5->Enabled = false;
Form31->Edit6->Enabled = false;
Form31->Edit7->Enabled = false;
Form31->Edit8->Enabled = false;
Form31->Edit9->Enabled = false;

Form31->Label4->Enabled = false;
Form31->Label5->Enabled = false;
Form31->Label7->Enabled = false;
Form31->Label8->Enabled = false;
Form31->Label9->Enabled = false;
Form31->Label10->Enabled = false;
Form31->Label11->Enabled = false;
Form31->Label12->Enabled = false;
Form31->Label13->Enabled = false;
Form31->Label14->Enabled = false;
Form31->Label15->Enabled = false;
Form31->Label16->Enabled = false;
Form31->Label17->Enabled = false;
Form31->Label18->Enabled = false;
Form31->Label19->Enabled = false;
Form31->Label20->Enabled = false;
Form31->Label21->Enabled = false;
}
//---------------------------------------------------------------------------

void HabilitaF31()
{
Form31->ComboBox1->Enabled = true;
Form31->ComboBox2->Enabled = true;
Form31->ComboBox3->Enabled = true;
Form31->ComboBox4->Enabled = true;

Form31->MaskEdit2->Enabled = true;
Form31->MaskEdit3->Enabled = true;
Form31->MaskEdit4->Enabled = true;
Form31->MaskEdit5->Enabled = true;
Form31->MaskEdit6->Enabled = true;
Form31->MaskEdit7->Enabled = true;

Form31->Edit3->Enabled = true;
Form31->Edit4->Enabled = true;
Form31->Edit5->Enabled = true;
Form31->Edit6->Enabled = true;
Form31->Edit7->Enabled = true;
Form31->Edit8->Enabled = true;
Form31->Edit9->Enabled = true;

Form31->Label4->Enabled = true;
Form31->Label5->Enabled = true;
Form31->Label7->Enabled = true;
Form31->Label8->Enabled = true;
Form31->Label9->Enabled = true;
Form31->Label10->Enabled = true;
Form31->Label11->Enabled = true;
Form31->Label12->Enabled = true;
Form31->Label13->Enabled = true;
Form31->Label14->Enabled = true;
Form31->Label15->Enabled = true;
Form31->Label16->Enabled = true;
Form31->Label17->Enabled = true;
Form31->Label18->Enabled = true;
Form31->Label19->Enabled = true;
Form31->Label20->Enabled = true;
Form31->Label21->Enabled = true;
}
//---------------------------------------------------------------------------

void LimpaF31()
{
Form31->ComboBox1->ItemIndex = -1;
Form31->ComboBox2->ItemIndex = -1;
Form31->ComboBox3->ItemIndex = -1;
Form31->ComboBox4->ItemIndex = -1;

Form31->MaskEdit1->Clear();
Form31->MaskEdit2->Clear();
Form31->MaskEdit3->Clear();
Form31->MaskEdit4->Clear();
Form31->MaskEdit5->Clear();
Form31->MaskEdit6->Clear();
Form31->MaskEdit7->Clear();
Form31->Edit10->Clear();

Form31->Edit1->Clear();
Form31->Edit2->Clear();
Form31->Edit3->Clear();
Form31->Edit4->Clear();
Form31->Edit5->Clear();
Form31->Edit6->Clear();
Form31->Edit7->Clear();
Form31->Edit8->Clear();
Form31->Edit9->Clear();
}
//---------------------------------------------------------------------------

void SelecionaTeleMarketing()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From TeleMarketing");
Form1->Query1->ExecSQL();
Form1->Query1->Open();

Form1->Query1->Last();
}
//---------------------------------------------------------------------------

void __fastcall TForm31::FormActivate(TObject *Sender)
{
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
Form24->Close();
Form25->Close();
Form26->Close();
Form27->Close();
Form28->Close();
Form29->Close();
Form30->Close();
//Form31->Close();
Form32->Close();
Form33->Close();


LimpaF31();

/*  === CODIGO DO PRÓXIMO CADASTRO === */
SelecionaTeleMarketing();
Edit10->Text = Form1->Query1->FieldByName("CdDoa")->AsInteger + 1;

DesabilitaF31();
Form31->SpeedButton2->Enabled = false;
Form31->SpeedButton1->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm31::MaskEdit1Exit(TObject *Sender)
{
/* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D1 (MaskEdit1->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D1.DATAZERO() )
        {
               if (  D1.VERIFICADATA())
               ;
               else
               {
                ShowMessage("Verifique a Data Digitada!!!");
                MaskEdit1->Clear();
               }
        }

        else
        {
                ShowMessage("Verifique a Data Digitada!!!");
                MaskEdit1->Clear();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm31::MaskEdit4Exit(TObject *Sender)
{
/* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D1 (MaskEdit4->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D1.DATAZERO() )
        {
               if (  D1.VERIFICADATA())
               ;
               else
               {
                ShowMessage("Verifique a Data Digitada!!!");
                MaskEdit4->Clear();
               }
        }

        else
        {
                ShowMessage("Verifique a Data Digitada!!!");
                MaskEdit4->Clear();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm31::SpeedButton1Click(TObject *Sender)
{

if (Edit1->Text != " " && Edit2->Text != " ")
{
        /* == FAZ UMA ANIMAÇÃO === */
        Animate1->Visible = true;
        Animate1->Active = true;
        Sleep(2000);
        Animate1->Active = false;

        /* ===== SELECIONA NOME E MÃE NA TABELA ===== */
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select * From TeleMarketing Where NmDoa='"+Edit1->Text+"' and MaeDoa='"+Edit2->Text+"' ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */

        if ( Form1->DataSource1->DataSet->RecordCount>=1)
        {
                ShowMessage("Cadastro Existente!!!");
                Form31->Edit1->Clear();
                Form31->Edit2->Clear();
                Form31->Edit1->SetFocus();
        }
        else
        {
                ShowMessage("Continue o Cadastro!!");

                /* ===== DESABILITA VERIFICAR E HABILITA CADASTRAR =====*/
                Form31->SpeedButton1->Enabled = false;
                Form31->SpeedButton2->Enabled = true;

                /* === HABILITA TUDO === */
                HabilitaF31();

                /* === RG ===*/
                Form31->MaskEdit2->SetFocus();

        }//ELSE
        Animate1->Visible = false;

    }
    else
        ShowMessage("Verifique Se Nome e Nome da Mãe Foram Digitados");        
}
//---------------------------------------------------------------------------

void __fastcall TForm31::SpeedButton2Click(TObject *Sender)
{

       /* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D4 (MaskEdit1->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D4.DATAZERO() )
        {
               if (  D4.VERIFICADATA())
               {
                        VDT4 = D4.DT();
               }

               else
               {
                        ShowMessage("Verifique a Data de Cadastro!!!");
                        MaskEdit1->Clear();
               }
        }

        else
        {
                ShowMessage("Verifique a Data de Cadastro!!!");
                MaskEdit1->Clear();
        }
//----------------------------------------------------------------------------

       /* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D5 (MaskEdit4->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D5.DATAZERO() )
        {
               if (  D5.VERIFICADATA())
               {
                        VDT5 = D5.DT();
               }

               else
               {
                        ShowMessage("Verifique a Data de Nascimento!!!");
                        MaskEdit4->Clear();
               }
        }

        else
        {
                ShowMessage("Verifique a Data de Nascimento!!!");
                MaskEdit4->Clear();
        }

//=============================================================================
/* ===== CADASTRAR CLIENTE OU CONTRIBUINTE PESSOA FÍSICA ===== */
if ( MaskEdit1->Text != "  /  /    " && MaskEdit4->Text != "  /  /    ")
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Insert Into TeleMarketing (DtCadDoa,NmDoa,RgDoa,CpfDoa,SexoDoa,DtNascDoa,NatDoa,EstCivDoa,MaeDoa,PaiDoa,EndDoa,CompDoa,BairroDoa,CepDoa,CidDoa,EstDoa,TelDoa,CelDoa,EscDoa,ObsDoa,TpPesDoa)values ('"+VDT4+"','"+Edit1->Text+"','"+MaskEdit2->Text+"','"+MaskEdit3->Text+"','"+ComboBox1->Text+"','"+VDT5+"','"+Edit4->Text+"','"+ComboBox2->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+Edit5->Text+"','"+Edit6->Text+"','"+Edit7->Text+"','"+MaskEdit5->Text+"','"+Edit8->Text+"','"+ComboBox4->Text+"','"+MaskEdit6->Text+"','"+MaskEdit7->Text+"','"+ComboBox3->Text+"','"+Edit9->Text+"','"+"PF"+"')");
        Form1->Query1->ExecSQL();
}
if ( MaskEdit1->Text != "  /  /    " && MaskEdit4->Text == "  /  /    ")
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Insert Into TeleMarketing(DtCadDoa,NmDoa,RgDoa,CpfDoa,SexoDoa,NatDoa,EstCivDoa,MaeDoa,PaiDoa,EndDoa,CompDoa,BairroDoa,CepDoa,CidDoa,EstDoa,TelDoa,CelDoa,EscDoa,ObsDoa,TpPesDoa)values ('"+VDT4+"','"+Edit1->Text+"','"+MaskEdit2->Text+"','"+MaskEdit3->Text+"','"+ComboBox1->Text+"','"+Edit4->Text+"','"+ComboBox2->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+Edit5->Text+"','"+Edit6->Text+"','"+Edit7->Text+"','"+MaskEdit5->Text+"','"+Edit8->Text+"','"+ComboBox4->Text+"','"+MaskEdit6->Text+"','"+MaskEdit7->Text+"','"+ComboBox3->Text+"','"+Edit9->Text+"','"+"PF"+"')");
        Form1->Query1->ExecSQL();
}

if ( MaskEdit1->Text == "  /  /    " && MaskEdit4->Text != "  /  /    ")
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Insert Into TeleMarketing(NmDoa,RgDoa,CpfDoa,SexoDoa,DtNascDoa,NatDoa,EstCivDoa,MaeDoa,PaiDoa,EndDoa,CompDoa,BairroDoa,CepDoa,CidDoa,EstDoa,TelDoa,CelDoa,EscDoa,ObsDoa,TpPesDoa)values ('"+Edit1->Text+"','"+MaskEdit2->Text+"','"+MaskEdit3->Text+"','"+ComboBox1->Text+"','"+VDT5+"','"+Edit4->Text+"','"+ComboBox2->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+Edit5->Text+"','"+Edit6->Text+"','"+Edit7->Text+"','"+MaskEdit5->Text+"','"+Edit8->Text+"','"+ComboBox4->Text+"','"+MaskEdit6->Text+"','"+MaskEdit7->Text+"','"+ComboBox3->Text+"','"+Edit9->Text+"','"+"PF"+"')");
        Form1->Query1->ExecSQL();
}

if ( MaskEdit1->Text == "  /  /    " && MaskEdit4->Text == "  /  /    ")
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Insert Into TeleMarketing(NmDoa,RgDoa,CpfDoa,SexoDoa,NatDoa,EstCivDoa,MaeDoa,PaiDoa,EndDoa,CompDoa,BairroDoa,CepDoa,CidDoa,EstDoa,TelDoa,CelDoa,EscDoa,ObsDoa,TpPesDoa)values ('"+Edit1->Text+"','"+MaskEdit2->Text+"','"+MaskEdit3->Text+"','"+ComboBox1->Text+"','"+Edit4->Text+"','"+ComboBox2->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+Edit5->Text+"','"+Edit6->Text+"','"+Edit7->Text+"','"+MaskEdit5->Text+"','"+Edit8->Text+"','"+ComboBox4->Text+"','"+MaskEdit6->Text+"','"+MaskEdit7->Text+"','"+ComboBox3->Text+"','"+Edit9->Text+"','"+"PF"+"')");
        Form1->Query1->ExecSQL();
}     

LimpaF31();
DesabilitaF31();
Form31->SpeedButton2->Enabled = false;
Form31->SpeedButton1->Enabled = true;

/*  === CODIGO DO PRÓXIMO CADASTRO === */
SelecionaTeleMarketing();
Edit10->Text = Form1->Query1->FieldByName("CdDoa")->AsInteger + 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm31::SpeedButton3Click(TObject *Sender)
{
LimpaF31();

        /*  === CÓDIGO DO PRÓXIMO SÓCIO === */
        SelecionaTeleMarketing();
        Edit10->Text = Form1->Query1->FieldByName("CdDoa")->AsInteger + 1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm31::FecharClick(TObject *Sender)
{
Form31->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm31::SairClick(TObject *Sender)
{
Form1->Sair->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm31::CadastrarDoadorTelPFClick(TObject *Sender)
{
Form1->CadastrarDoadorTelPF->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm31::CadastrarDoadorTelPJClick(TObject *Sender)
{
Form1->CadastrarDoadorTelPJ->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm31::ConsultarDoadorTelClick(TObject *Sender)
{
Form1->ConsultarDoadorTel->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm31::AtualizarDoadorTelClick(TObject *Sender)
{
Form1->AtualizarDoadorTel->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm31::ExcluirDoadorTelClick(TObject *Sender)
{
Form1->ExcluirDoadorTel->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm31::CadastrarDoacaoTelClick(TObject *Sender)
{
Form1->CadastrarDoacaoTel->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm31::ConsultarDoacaoTelClick(TObject *Sender)
{
Form1->ConsultarDoacaoTel->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm31::AtualizarDoacaoTelClick(TObject *Sender)
{
Form1->AtualizarDoacaoTel->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm31::ExcluirDoacaoTelClick(TObject *Sender)
{
Form1->ExcluirDoacaoTel->Click();
}
//---------------------------------------------------------------------------

