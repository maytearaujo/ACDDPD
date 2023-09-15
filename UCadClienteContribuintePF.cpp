//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UCadClienteContribuintePF.h"//Form2

/* === FORMULÁRIOS === */
#include "UInicio.h" //Form1

#include "UCadastroFuncionario.h" //Form3
#include "UCadastroNatural.h" //Form4
#include "UCadClienteContribuintePJ.h" //Form5
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
#include "Codigo.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
AnsiString VDT29, VDT30,   vcod13;
//---------------------------------------------------------------------------
/* === FUNÇÕES === */
void DesabilitaF2()
{
Form2->ComboBox1->Enabled = false;
Form2->ComboBox2->Enabled = false;
Form2->ComboBox3->Enabled = false;
Form2->ComboBox4->Enabled = false;

Form2->MaskEdit2->Enabled = false;
Form2->MaskEdit3->Enabled = false;
Form2->MaskEdit4->Enabled = false;
Form2->MaskEdit5->Enabled = false;
Form2->MaskEdit6->Enabled = false;
Form2->MaskEdit7->Enabled = false;

Form2->Edit3->Enabled = false;
Form2->Edit4->Enabled = false;
Form2->Edit5->Enabled = false;
Form2->Edit6->Enabled = false;
Form2->Edit7->Enabled = false;
Form2->Edit8->Enabled = false;
Form2->Edit9->Enabled = false;

Form2->Label4->Enabled = false;
Form2->Label5->Enabled = false;
Form2->Label7->Enabled = false;
Form2->Label8->Enabled = false;
Form2->Label9->Enabled = false;
Form2->Label10->Enabled = false;
Form2->Label11->Enabled = false;
Form2->Label12->Enabled = false;
Form2->Label13->Enabled = false;
Form2->Label14->Enabled = false;
Form2->Label15->Enabled = false;
Form2->Label16->Enabled = false;
Form2->Label17->Enabled = false;
Form2->Label18->Enabled = false;
Form2->Label19->Enabled = false;
Form2->Label20->Enabled = false;
Form2->Label21->Enabled = false;
}
//---------------------------------------------------------------------------

void HabilitaF2()
{
Form2->ComboBox1->Enabled = true;
Form2->ComboBox2->Enabled = true;
Form2->ComboBox3->Enabled = true;
Form2->ComboBox4->Enabled = true;

Form2->MaskEdit2->Enabled = true;
Form2->MaskEdit3->Enabled = true;
Form2->MaskEdit4->Enabled = true;
Form2->MaskEdit5->Enabled = true;
Form2->MaskEdit6->Enabled = true;
Form2->MaskEdit7->Enabled = true;

Form2->Edit3->Enabled = true;
Form2->Edit4->Enabled = true;
Form2->Edit5->Enabled = true;
Form2->Edit6->Enabled = true;
Form2->Edit7->Enabled = true;
Form2->Edit8->Enabled = true;
Form2->Edit9->Enabled = true;

Form2->Label4->Enabled = true;
Form2->Label5->Enabled = true;
Form2->Label7->Enabled = true;
Form2->Label8->Enabled = true;
Form2->Label9->Enabled = true;
Form2->Label10->Enabled = true;
Form2->Label11->Enabled = true;
Form2->Label12->Enabled = true;
Form2->Label13->Enabled = true;
Form2->Label14->Enabled = true;
Form2->Label15->Enabled = true;
Form2->Label16->Enabled = true;
Form2->Label17->Enabled = true;
Form2->Label18->Enabled = true;
Form2->Label19->Enabled = true;
Form2->Label20->Enabled = true;
Form2->Label21->Enabled = true;
}
//---------------------------------------------------------------------------

void LimpaF2()
{
Form2->ComboBox1->ItemIndex = -1;
Form2->ComboBox2->ItemIndex = -1;
Form2->ComboBox3->ItemIndex = -1;
Form2->ComboBox4->ItemIndex = -1;

Form2->MaskEdit1->Clear();
Form2->MaskEdit2->Clear();
Form2->MaskEdit3->Clear();
Form2->MaskEdit4->Clear();
Form2->MaskEdit5->Clear();
Form2->MaskEdit6->Clear();
Form2->MaskEdit7->Clear();
Form2->Edit10->Clear();

Form2->Edit1->Clear();
Form2->Edit2->Clear();
Form2->Edit3->Clear();
Form2->Edit4->Clear();
Form2->Edit5->Clear();
Form2->Edit6->Clear();
Form2->Edit7->Clear();
Form2->Edit8->Clear();
Form2->Edit9->Clear();
}
//---------------------------------------------------------------------------

void SelecionaSocio_Copia4()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From Socio");
Form1->Query1->ExecSQL();
Form1->Query1->Open();

Form1->Query1->Last();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormActivate(TObject *Sender)
{
/*== FECHA FORMULÁRIOS ==*/
//Form2->Close();
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
Form32->Close();
Form33->Close();


LimpaF2();

/*  === CODIGO DO PRÓXIMO CADASTRO === */
SelecionaSocio_Copia4();
Edit10->Text = Form1->Query1->FieldByName("CdSoc")->AsInteger + 1;

DesabilitaF2();
Form2->SpeedButton2->Enabled = false;
Form2->SpeedButton1->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::MaskEdit1Exit(TObject *Sender)
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
void __fastcall TForm2::MaskEdit4Exit(TObject *Sender)
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

void __fastcall TForm2::SpeedButton1Click(TObject *Sender)
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
        Form1->Query1->SQL->Add("Select * From Socio Where NmSoc='"+Edit1->Text+"' and MaeSoc='"+Edit2->Text+"' ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */

        if ( Form1->DataSource1->DataSet->RecordCount>=1)
        {
                ShowMessage("Cadastro Existente!!!");
                Form2->Edit1->Clear();
                Form2->Edit2->Clear();
                Form2->Edit1->SetFocus();
        }
        else
        {
                ShowMessage("Continue o Cadastro!!");

                /* ===== DESABILITA VERIFICAR E HABILITA CADASTRAR =====*/
                Form2->SpeedButton1->Enabled = false;
                Form2->SpeedButton2->Enabled = true;

                /* === HABILITA TUDO === */
                HabilitaF2();

                /* === RG ===*/
                Form2->MaskEdit2->SetFocus();

        }//ELSE
        Animate1->Visible = false;

    }
    else
        ShowMessage("Verifique Se Nome e Nome da Mãe Foram Digitados");        
}
//---------------------------------------------------------------------------

void __fastcall TForm2::SpeedButton2Click(TObject *Sender)
{

       /* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D4 (MaskEdit1->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D4.DATAZERO() )
        {
               if (  D4.VERIFICADATA())
               {
                        VDT29 = D4.DT();
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
                        VDT30 = D5.DT();
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
/* ===== CADASTRAR CONTRIBUINTE PESSOA FÍSICA ===== */
if ( MaskEdit1->Text != "  /  /    " && MaskEdit4->Text != "  /  /    ")
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Insert Into Socio (DtCad,TpSoc,NmSoc,RgSoc,CpfSoc,SexoSoc,DtNasc,NatSoc,EstCiv,MaeSoc,PaiSoc,EndSoc,CompSoc,BairroSoc,CepSoc,CidSoc,EstSoc,TelSoc,CelSoc,EscSoc,ObsSoc,TpPes)values ('"+VDT29+"','"+Label2->Caption+"','"+Edit1->Text+"','"+MaskEdit2->Text+"','"+MaskEdit3->Text+"','"+ComboBox1->Text+"','"+VDT30+"','"+Edit4->Text+"','"+ComboBox2->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+Edit5->Text+"','"+Edit6->Text+"','"+Edit7->Text+"','"+MaskEdit5->Text+"','"+Edit8->Text+"','"+ComboBox4->Text+"','"+MaskEdit6->Text+"','"+MaskEdit7->Text+"','"+ComboBox3->Text+"','"+Edit9->Text+"','"+"PF"+"')");
        Form1->Query1->ExecSQL();
}
if ( MaskEdit1->Text != "  /  /    " && MaskEdit4->Text == "  /  /    ")
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Insert Into Socio(DtCad,TpSoc,NmSoc,RgSoc,CpfSoc,SexoSoc,NatSoc,EstCiv,MaeSoc,PaiSoc,EndSoc,CompSoc,BairroSoc,CepSoc,CidSoc,EstSoc,TelSoc,CelSoc,EscSoc,ObsSoc,TpPes)values ('"+VDT29+"','"+Label2->Caption+"','"+Edit1->Text+"','"+MaskEdit2->Text+"','"+MaskEdit3->Text+"','"+ComboBox1->Text+"','"+Edit4->Text+"','"+ComboBox2->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+Edit5->Text+"','"+Edit6->Text+"','"+Edit7->Text+"','"+MaskEdit5->Text+"','"+Edit8->Text+"','"+ComboBox4->Text+"','"+MaskEdit6->Text+"','"+MaskEdit7->Text+"','"+ComboBox3->Text+"','"+Edit9->Text+"','"+"PF"+"')");
        Form1->Query1->ExecSQL();
}

if ( MaskEdit1->Text == "  /  /    " && MaskEdit4->Text != "  /  /    ")
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Insert Into Socio (TpSoc,NmSoc,RgSoc,CpfSoc,SexoSoc,DtNasc,NatSoc,EstCiv,MaeSoc,PaiSoc,EndSoc,CompSoc,BairroSoc,CepSoc,CidSoc,EstSoc,TelSoc,CelSoc,EscSoc,ObsSoc,TpPes)values ('"+Label2->Caption+"','"+Edit1->Text+"','"+MaskEdit2->Text+"','"+MaskEdit3->Text+"','"+ComboBox1->Text+"','"+VDT30+"','"+Edit4->Text+"','"+ComboBox2->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+Edit5->Text+"','"+Edit6->Text+"','"+Edit7->Text+"','"+MaskEdit5->Text+"','"+Edit8->Text+"','"+ComboBox4->Text+"','"+MaskEdit6->Text+"','"+MaskEdit7->Text+"','"+ComboBox3->Text+"','"+Edit9->Text+"','"+"PF"+"')");
        Form1->Query1->ExecSQL();
}

if ( MaskEdit1->Text == "  /  /    " && MaskEdit4->Text == "  /  /    ")
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Insert Into Socio (TpSoc,NmSoc,RgSoc,CpfSoc,SexoSoc,NatSoc,EstCiv,MaeSoc,PaiSoc,EndSoc,CompSoc,BairroSoc,CepSoc,CidSoc,EstSoc,TelSoc,CelSoc,EscSoc,ObsSoc,TpPes)values ('"+Label2->Caption+"','"+Edit1->Text+"','"+MaskEdit2->Text+"','"+MaskEdit3->Text+"','"+ComboBox1->Text+"','"+Edit4->Text+"','"+ComboBox2->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+Edit5->Text+"','"+Edit6->Text+"','"+Edit7->Text+"','"+MaskEdit5->Text+"','"+Edit8->Text+"','"+ComboBox4->Text+"','"+MaskEdit6->Text+"','"+MaskEdit7->Text+"','"+ComboBox3->Text+"','"+Edit9->Text+"','"+"PF"+"')");
        Form1->Query1->ExecSQL();
}     

LimpaF2();
DesabilitaF2();
Form2->SpeedButton2->Enabled = false;
Form2->SpeedButton1->Enabled = true;

/*  === CODIGO DO PRÓXIMO CADASTRO === */
SelecionaSocio_Copia4();
Edit10->Text = Form1->Query1->FieldByName("CdSoc")->AsInteger + 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::SpeedButton3Click(TObject *Sender)
{
LimpaF2();

        /*  === CÓDIGO DO PRÓXIMO SÓCIO === */
        SelecionaSocio_Copia4();
        Edit10->Text = Form1->Query1->FieldByName("CdSoc")->AsInteger + 1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Fechar1Click(TObject *Sender)
{
Form2->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Sair1Click(TObject *Sender)
{
Form1->Sair->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::CadastrarFuncionarioClick(TObject *Sender)
{
Form1->CadastrarFuncionario->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::CadastrarNaturalClick(TObject *Sender)
{
Form1->CadastrarNatural->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::CadastrarContribuintePFClick(TObject *Sender)
{
Form1->CadastrarContribuintePF->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::CadastrarContribuintePJClick(TObject *Sender)
{
Form1->CadastrarContribuintePJ->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ConsultarSociosClick(TObject *Sender)
{
Form1->ConsultarSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::AtualizarSociosClick(TObject *Sender)
{
Form1->AtualizarSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ExcluirSociosClick(TObject *Sender)
{
Form1->ExcluirSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::CadastrarDoacaoSociosClick(TObject *Sender)
{
Form1->CadastrarDoacaoSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ConsultarDoacaoSociosClick(TObject *Sender)
{
Form1->ConsultarDoacaoSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::AtualizarDoacaoSociosClick(TObject *Sender)
{
Form1->AtualizarDoacaoSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ExcluirDoacaoSociosClick(TObject *Sender)
{
Form1->ExcluirDoacaoSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::CadastrarHistoricoClick(TObject *Sender)
{
Form1->CadastrarHistorico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ConsultarHistoricoClick(TObject *Sender)
{
Form1->ConsultarHistorico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::AtualizarHistoricoClick(TObject *Sender)
{
Form1->AtualizarHistorico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ExcluirHistoricoClick(TObject *Sender)
{
Form1->ExcluirHistorico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::CadastrarAtividadeClick(TObject *Sender)
{
Form1->CadastrarAtividade->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ConsultarAtividadeClick(TObject *Sender)
{
Form1->ConsultarAtividade->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::AtualizarAtividadeClick(TObject *Sender)
{
Form1->AtualizarAtividade->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ExcluirAtividadeClick(TObject *Sender)
{
Form1->ExcluirAtividade->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::CadastrarServicoClick(TObject *Sender)
{
Form1->CadastrarServico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ConsultarServicoClick(TObject *Sender)
{
Form1->ConsultarServico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::AtualizarServicoClick(TObject *Sender)
{
Form1->AtualizarServico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ExcluirServicoClick(TObject *Sender)
{
Form1->ExcluirServico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::SairClick(TObject *Sender)
{
Form1->Sair->Click();
}
//---------------------------------------------------------------------------

