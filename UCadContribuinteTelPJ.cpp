//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UCadContribuinteTelPJ.h" //Form32

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
#include "UCadContribuinteTelPF.h" //Form31

#include "URelatorioAniversarioTel.h"//Form33

#include "USobre.h" //AboutBox

/* ===== DECLARAÇÃO DAS CLASSES ===== */
#include "Data.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm32 *Form32;
//---------------------------------------------------------------------------
__fastcall TForm32::TForm32(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
AnsiString VDT10;
//---------------------------------------------------------------------------
/* === FUNÇÕES === */
void DesabilitaF32()
{
Form32->ComboBox1->Enabled = false;

Form32->MaskEdit3->Enabled = false;
Form32->MaskEdit4->Enabled = false;
Form32->MaskEdit5->Enabled = false;
//Form32->MaskEdit6->Enabled = false;

Form32->Edit2->Enabled = false;
Form32->Edit3->Enabled = false;
Form32->Edit4->Enabled = false;
Form32->Edit5->Enabled = false;
Form32->Edit6->Enabled = false;
Form32->Edit7->Enabled = false;

Form32->Label5->Enabled = false;
Form32->Label6->Enabled = false;
Form32->Label7->Enabled = false;
Form32->Label8->Enabled = false;
Form32->Label9->Enabled = false;
Form32->Label10->Enabled = false;
Form32->Label11->Enabled = false;
Form32->Label12->Enabled = false;
Form32->Label13->Enabled = false;
//Form32->Label14->Enabled = false;
Form32->Label15->Enabled = false;

}
//---------------------------------------------------------------------------
void HabilitaF32()
{
Form32->ComboBox1->Enabled = true;

Form32->MaskEdit3->Enabled = true;
Form32->MaskEdit4->Enabled = true;
Form32->MaskEdit5->Enabled = true;
//Form32->MaskEdit6->Enabled = true;

Form32->Edit2->Enabled = true;
Form32->Edit3->Enabled = true;
Form32->Edit4->Enabled = true;
Form32->Edit5->Enabled = true;
Form32->Edit6->Enabled = true;
Form32->Edit7->Enabled = true;

Form32->Label5->Enabled = true;
Form32->Label6->Enabled = true;
Form32->Label7->Enabled = true;
Form32->Label8->Enabled = true;
Form32->Label9->Enabled = true;
Form32->Label10->Enabled = true;
Form32->Label11->Enabled = true;
Form32->Label12->Enabled = true;
Form32->Label13->Enabled = true;
//Form32->Label14->Enabled = true;
Form32->Label15->Enabled = true;
}
//---------------------------------------------------------------------------
void LimpaF32()
{
Form32->ComboBox1->ItemIndex = -1;

Form32->MaskEdit1->Clear();
Form32->MaskEdit2->Clear();
Form32->MaskEdit3->Clear();
Form32->MaskEdit4->Clear();
Form32->MaskEdit5->Clear();

Form32->MaskEdit7->Clear();

Form32->Edit1->Clear();
Form32->Edit2->Clear();
Form32->Edit3->Clear();
Form32->Edit4->Clear();
Form32->Edit5->Clear();
Form32->Edit6->Clear();
Form32->Edit7->Clear();

}
//---------------------------------------------------------------------------

void SelecionaTeleMarketing_Copia1()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From TeleMarketing");
Form1->Query1->ExecSQL();
Form1->Query1->Open();

Form1->Query1->Last();
}
//---------------------------------------------------------------------------
void __fastcall TForm32::FormActivate(TObject *Sender)
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
Form31->Close();
//Form32->Close();
Form33->Close();

LimpaF32();

/*  === CÓDIGO DO PRÓXIMO CADASTRO === */
SelecionaTeleMarketing_Copia1();
MaskEdit7->Text = Form1->Query1->FieldByName("CdDoa")->AsInteger + 1;

DesabilitaF32();
Form32->SpeedButton2->Enabled = false;
Form32->SpeedButton1->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm32::MaskEdit1Exit(TObject *Sender)
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

void __fastcall TForm32::MaskEdit7KeyPress(TObject *Sender, char &Key)
{
ShowMessage("Não Digite o Código!!!");        
}
//---------------------------------------------------------------------------

void __fastcall TForm32::SpeedButton1Click(TObject *Sender)
{

if (Edit1->Text != " " && MaskEdit2->Text != " ")
{
        /* == FAZ UMA ANIMAÇÃO === */
        Animate1->Visible = true;
        Animate1->Active = true;
        Sleep(2000);
        Animate1->Active = false;

        /* ===== SELECIONA NOME E MÃE NA TABELA ===== */
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select * From TeleMarketing Where NmDoa='"+Edit1->Text+"' and CnpjDoa='"+MaskEdit2->Text+"' ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */


        if (Form1->DataSource1->DataSet->RecordCount >=1)
        {
                ShowMessage("Cadastro Existente!!!");
                Form32->Edit1->Clear();
                Form32->MaskEdit2->Clear();
                Form32->Edit1->SetFocus();
        }
        else
        {
                ShowMessage("Continue o Cadastro!!");

                /* ===== DESABILITA VERIFICAR E HABILITA CADASTRAR =====*/
                Form32->SpeedButton1->Enabled = false;
                Form32->SpeedButton2->Enabled = true;

                /* === HABILITA TUDO === */
                HabilitaF32();

                /* === REPRESENTANTE ===*/
                Form32->Edit2->SetFocus();

        }//ELSE
        Animate1->Visible = false;
    }
    else
        ShowMessage("Verifique Se Nome e Nome da Mãe Foram Digitados");        
}
//---------------------------------------------------------------------------

void __fastcall TForm32::SpeedButton2Click(TObject *Sender)
{

       /* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D10 (MaskEdit1->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D10.DATAZERO() )
        {
               if ( D10.VERIFICADATA())
               {
                        VDT10 = D10.DT();
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
/* ===== CADASTRAR CLIENTE OU CONTRIBUINTE PESSOA JURÍDICA ===== */
if ( MaskEdit1->Text != "  /  /    " )
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Insert Into TeleMarketing (DtCadDoa,NmDoa,CnpjDoa,EndDoa,CompDoa,BairroDoa,CepDoa,CidDoa,EstDoa,TelDoa,CelDoa,ObsDoa,TpPesDoa,NmRepr) values ('"+VDT10+"','"+Edit1->Text+"','"+MaskEdit2->Text+"','"+Edit3->Text+"','"+Edit4->Text+"','"+Edit5->Text+"','"+MaskEdit3->Text+"','"+Edit6->Text+"','"+ComboBox1->Text+"','"+MaskEdit4->Text+"','"+MaskEdit5->Text+"','"+Edit7->Text+"','"+"PJ"+"','"+Edit2->Text+"')");
        Form1->Query1->ExecSQL();
}

if ( MaskEdit1->Text == "  /  /    " )
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Insert Into TeleMarketing(NmDoa,CnpjDoa,EndDoa,CompDoa,BairroDoa,CepDoa,CidDoa,EstDoa,TelDoa,CelDoa,ObsDoa,TpPes,NmRepr)values ('"+Edit1->Text+"','"+MaskEdit2->Text+"','"+Edit3->Text+"','"+Edit4->Text+"','"+Edit5->Text+"','"+MaskEdit3->Text+"','"+Edit6->Text+"','"+ComboBox1->Text+"','"+MaskEdit4->Text+"','"+MaskEdit5->Text+"','"+Edit7->Text+"','"+Edit2->Text+"','"+"PJ"+"')");
        Form1->Query1->ExecSQL();
}

LimpaF32();      DesabilitaF32();
Form32->SpeedButton2->Enabled = false;
Form32->SpeedButton1->Enabled = true;

/*  === CÓDIGO DO PRÓXIMO CADASTRO === */
SelecionaTeleMarketing_Copia1();
MaskEdit7->Text = Form1->Query1->FieldByName("CdDoa")->AsInteger + 1;         
}
//---------------------------------------------------------------------------


void __fastcall TForm32::SpeedButton3Click(TObject *Sender)
{
LimpaF32();

        /*  === CÓDIGO DO PRÓXIMO SÓCIO === */
        SelecionaTeleMarketing_Copia1();
        MaskEdit7->Text = Form1->Query1->FieldByName("CdDoa")->AsInteger + 1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm32::FecharClick(TObject *Sender)
{
Form32->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm32::SairClick(TObject *Sender)
{
Form1->Sair->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm32::CadastrarDoadorTelPFClick(TObject *Sender)
{
Form1->CadastrarDoadorTelPF->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm32::CadastrarDoadorTelPJClick(TObject *Sender)
{
Form1->CadastrarDoadorTelPJ->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm32::ConsultarDoadorTelClick(TObject *Sender)
{
Form1->ConsultarDoadorTel->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm32::AtualizarDoadorTelClick(TObject *Sender)
{
Form1->AtualizarDoadorTel->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm32::ExcluirDoadorTelClick(TObject *Sender)
{
Form1->ExcluirDoadorTel->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm32::CadastrarDoacaoTelClick(TObject *Sender)
{
Form1->CadastrarDoacaoTel->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm32::ConsultarDoacaoTelClick(TObject *Sender)
{
Form1->ConsultarDoacaoTel->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm32::AtualizarDoacaoTelClick(TObject *Sender)
{
Form1->AtualizarDoacaoTel->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm32::ExcluirDoacaoTelClick(TObject *Sender)
{
Form1->ExcluirDoacaoTel->Click();
}
//---------------------------------------------------------------------------

