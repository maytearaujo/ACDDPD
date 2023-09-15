//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UCadClienteContribuintePJ.h" //Form5

/* === FORMULÁRIOS === */
#include "UInicio.h" //Form1
#include "UCadClienteContribuintePF.h"//Form2
#include "UCadastroFuncionario.h"  //Form3
#include "UCadastroNatural.h" //Form4

#include "UConsAtuaExcSocio.h" //Form6
#include "UTipoConsultaSocio.h" //Form7
#include "UHistorico.h" //Form8
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
#include "UCadContribuinteTelPJ.h" //Form32
#include "URelatorioAniversarioTel.h"//Form33

#include "USobre.h" //AboutBox

/* ===== DECLARAÇÃO DAS CLASSES ===== */
#include "Data.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
AnsiString VDT31;
//---------------------------------------------------------------------------
/* === FUNÇÕES === */
void DesabilitaF5()
{
Form5->ComboBox1->Enabled = false;

Form5->MaskEdit3->Enabled = false;
Form5->MaskEdit4->Enabled = false;
Form5->MaskEdit5->Enabled = false;
//Form5->MaskEdit6->Enabled = false;

Form5->Edit2->Enabled = false;
Form5->Edit3->Enabled = false;
Form5->Edit4->Enabled = false;
Form5->Edit5->Enabled = false;
Form5->Edit6->Enabled = false;
Form5->Edit7->Enabled = false;

Form5->Label5->Enabled = false;
Form5->Label6->Enabled = false;
Form5->Label7->Enabled = false;
Form5->Label8->Enabled = false;
Form5->Label9->Enabled = false;
Form5->Label10->Enabled = false;
Form5->Label11->Enabled = false;
Form5->Label12->Enabled = false;
Form5->Label13->Enabled = false;
//Form5->Label14->Enabled = false;
Form5->Label15->Enabled = false;

}
//---------------------------------------------------------------------------
void HabilitaF5()
{
Form5->ComboBox1->Enabled = true;

Form5->MaskEdit3->Enabled = true;
Form5->MaskEdit4->Enabled = true;
Form5->MaskEdit5->Enabled = true;
//Form5->MaskEdit6->Enabled = true;

Form5->Edit2->Enabled = true;
Form5->Edit3->Enabled = true;
Form5->Edit4->Enabled = true;
Form5->Edit5->Enabled = true;
Form5->Edit6->Enabled = true;
Form5->Edit7->Enabled = true;

Form5->Label5->Enabled = true;
Form5->Label6->Enabled = true;
Form5->Label7->Enabled = true;
Form5->Label8->Enabled = true;
Form5->Label9->Enabled = true;
Form5->Label10->Enabled = true;
Form5->Label11->Enabled = true;
Form5->Label12->Enabled = true;
Form5->Label13->Enabled = true;
//Form5->Label14->Enabled = true;
Form5->Label15->Enabled = true;
}
//---------------------------------------------------------------------------
void LimpaF5()
{
Form5->ComboBox1->ItemIndex = -1;

Form5->MaskEdit1->Clear();
Form5->MaskEdit2->Clear();
Form5->MaskEdit3->Clear();
Form5->MaskEdit4->Clear();
Form5->MaskEdit5->Clear();

Form5->MaskEdit7->Clear();

Form5->Edit1->Clear();
Form5->Edit2->Clear();
Form5->Edit3->Clear();
Form5->Edit4->Clear();
Form5->Edit5->Clear();
Form5->Edit6->Clear();
Form5->Edit7->Clear();

}
//---------------------------------------------------------------------------

void SelecionaTeleMarketing_Copia5()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From Socio");
Form1->Query1->ExecSQL();
Form1->Query1->Open();

Form1->Query1->Last();
}
//---------------------------------------------------------------------------
void __fastcall TForm5::FormActivate(TObject *Sender)
{
/*== FECHA FORMULÁRIOS ==*/
Form2->Close();
Form3->Close();
Form4->Close();
//Form5->Close();
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
Form32->Close();
Form33->Close();

LimpaF5();

/*  === CÓDIGO DO PRÓXIMO CADASTRO === */
SelecionaTeleMarketing_Copia5();
MaskEdit7->Text = Form1->Query1->FieldByName("CdSoc")->AsInteger + 1;

DesabilitaF5();
Form5->SpeedButton2->Enabled = false;
Form5->SpeedButton1->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::MaskEdit1Exit(TObject *Sender)
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

void __fastcall TForm5::MaskEdit7KeyPress(TObject *Sender, char &Key)
{
ShowMessage("Não Digite o Código!!!");        
}
//---------------------------------------------------------------------------

void __fastcall TForm5::SpeedButton1Click(TObject *Sender)
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
        Form1->Query1->SQL->Add("Select * From Socio Where NmSoc='"+Edit1->Text+"' and CnpjSoc='"+MaskEdit2->Text+"' ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */


        if (Form1->DataSource1->DataSet->RecordCount >=1)
        {
                ShowMessage("Cadastro Existente!!!");
                Form5->Edit1->Clear();
                Form5->MaskEdit2->Clear();
                Form5->Edit1->SetFocus();
        }
        else
        {
                ShowMessage("Continue o Cadastro!!");

                /* ===== DESABILITA VERIFICAR E HABILITA CADASTRAR =====*/
                Form5->SpeedButton1->Enabled = false;
                Form5->SpeedButton2->Enabled = true;

                /* === HABILITA TUDO === */
                HabilitaF5();

                /* === REPRESENTANTE ===*/
                Form5->Edit2->SetFocus();

        }//ELSE
        Animate1->Visible = false;
    }
    else
        ShowMessage("Verifique Se Nome e Nome da Mãe Foram Digitados");
}
//---------------------------------------------------------------------------

void __fastcall TForm5::SpeedButton2Click(TObject *Sender)
{

       /* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D10 (MaskEdit1->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D10.DATAZERO() )
        {
               if ( D10.VERIFICADATA())
               {
                        VDT31 = D10.DT();
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
        Form1->Query1->SQL->Add("Insert Into Socio (DtCad,TpSoc,NmSoc,CnpjSoc,EndSoc,CompSoc,BairroSoc,CepSoc,CidSoc,EstSoc,TelSoc,CelSoc,ObsSoc,NmRepr,TpPes) values ('"+VDT31+"','"+Label2->Caption+"','"+Edit1->Text+"','"+MaskEdit2->Text+"','"+Edit3->Text+"','"+Edit4->Text+"','"+Edit5->Text+"','"+MaskEdit3->Text+"','"+Edit6->Text+"','"+ComboBox1->Text+"','"+MaskEdit4->Text+"','"+MaskEdit5->Text+"','"+Edit7->Text+"','"+Edit2->Text+"','"+"PJ"+"')");
        Form1->Query1->ExecSQL();
}

if ( MaskEdit1->Text == "  /  /    " )
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Insert Into Socio (TpSoc,NmSoc,CnpjSoc,EndSoc,CompSoc,BairroSoc,CepSoc,CidSoc,EstSoc,TelSoc,CelSoc,ObsSoc,NmRepr,TpPes)values ('"+Label2->Caption+"','"+Edit1->Text+"','"+MaskEdit2->Text+"','"+Edit3->Text+"','"+Edit4->Text+"','"+Edit5->Text+"','"+MaskEdit3->Text+"','"+Edit6->Text+"','"+ComboBox1->Text+"','"+MaskEdit4->Text+"','"+MaskEdit5->Text+"','"+Edit7->Text+"','"+Edit2->Text+"','"+"PJ"+"')");
        Form1->Query1->ExecSQL();
}

LimpaF5();      DesabilitaF5();
Form5->SpeedButton2->Enabled = false;
Form5->SpeedButton1->Enabled = true;

/*  === CÓDIGO DO PRÓXIMO CADASTRO === */
SelecionaTeleMarketing_Copia5();
MaskEdit7->Text = Form1->Query1->FieldByName("CdSoc")->AsInteger + 1;         
}
//---------------------------------------------------------------------------


void __fastcall TForm5::SpeedButton3Click(TObject *Sender)
{
LimpaF5();

        /*  === CÓDIGO DO PRÓXIMO SÓCIO === */
        SelecionaTeleMarketing_Copia5();
        MaskEdit7->Text = Form1->Query1->FieldByName("CdSoc")->AsInteger + 1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Fechar1Click(TObject *Sender)
{
Form5->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::SairClick(TObject *Sender)
{
Form1->Sair->Click();        
}
//---------------------------------------------------------------------------

void __fastcall TForm5::CadastrarFuncionarioClick(TObject *Sender)
{
Form1->CadastrarFuncionario->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::CadastrarNaturalClick(TObject *Sender)
{
Form1->CadastrarNatural->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::CadastrarContribuintePFClick(TObject *Sender)
{
Form1->CadastrarContribuintePF->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::CadastrarContribuintePJClick(TObject *Sender)
{
Form1->CadastrarContribuintePJ->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::ConsultarSociosClick(TObject *Sender)
{
Form1->ConsultarSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::AtualizarSociosClick(TObject *Sender)
{
Form1->AtualizarSocios->Click();        
}
//---------------------------------------------------------------------------

void __fastcall TForm5::ExcluirSociosClick(TObject *Sender)
{
Form1->ExcluirSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::CadastrarDoacaoSociosClick(TObject *Sender)
{
Form1->CadastrarDoacaoSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::ConsultarDoacaoSociosClick(TObject *Sender)
{
Form1->ConsultarDoacaoSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::AtualizarDoacaoSociosClick(TObject *Sender)
{
Form1->AtualizarDoacaoSocios->Click();        
}
//---------------------------------------------------------------------------

void __fastcall TForm5::ExcluirDoacaoSociosClick(TObject *Sender)
{
Form1->ExcluirDoacaoSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::CadastrarHistoricoClick(TObject *Sender)
{
Form1->CadastrarHistorico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::ConsultarHistoricoClick(TObject *Sender)
{
Form1->ConsultarHistorico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::AtualizarHistoricoClick(TObject *Sender)
{
Form1->AtualizarHistorico->Click();       
}
//---------------------------------------------------------------------------

void __fastcall TForm5::ExcluirHistoricoClick(TObject *Sender)
{
Form1->ExcluirHistorico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::CadastrarAtividadeClick(TObject *Sender)
{
Form1->CadastrarAtividade->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::ConsultarAtividadeClick(TObject *Sender)
{
Form1->ConsultarAtividade->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::AtualizarAtividadeClick(TObject *Sender)
{
Form1->AtualizarAtividade->Click();        
}
//---------------------------------------------------------------------------

void __fastcall TForm5::ExcluirAtividadeClick(TObject *Sender)
{
Form1->ExcluirAtividade->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::CadastrarServicoClick(TObject *Sender)
{
Form1->CadastrarServico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::ConsultarServicoClick(TObject *Sender)
{
Form1->ConsultarServico->Click();        
}
//---------------------------------------------------------------------------

void __fastcall TForm5::AtualizarServicoClick(TObject *Sender)
{
Form1->AtualizarServico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::ExcluirServicoClick(TObject *Sender)
{
Form1->ExcluirServico->Click();
}
//---------------------------------------------------------------------------

