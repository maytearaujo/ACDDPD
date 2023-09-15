//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UCadastroNatural.h" //Form4

/* === FORMULÁRIOS === */
#include "UInicio.h" //Form1
#include "UCadClienteContribuintePF.h"//Form2
#include "UCadastroFuncionario.h"  //Form3

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

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
AnsiString VDT8, VDT9;
//---------------------------------------------------------------------------
/* === FUNÇÕES === */
void DesabilitaF4()
{
Form4->ComboBox1->Enabled = false;
Form4->ComboBox2->Enabled = false;
Form4->ComboBox3->Enabled = false;
Form4->ComboBox4->Enabled = false;
Form4->ComboBox5->Enabled = false;
Form4->ComboBox6->Enabled = false;

Form4->MaskEdit2->Enabled = false;
Form4->MaskEdit3->Enabled = false;
Form4->MaskEdit4->Enabled = false;
Form4->MaskEdit5->Enabled = false;
Form4->MaskEdit6->Enabled = false;
Form4->MaskEdit7->Enabled = false;
Form4->MaskEdit8->Enabled = false;
Form4->MaskEdit9->Enabled = false;
Form4->MaskEdit10->Enabled = false;

Form4->Edit3->Enabled = false;
Form4->Edit4->Enabled = false;
Form4->Edit5->Enabled = false;
Form4->Edit6->Enabled = false;
Form4->Edit7->Enabled = false;
Form4->Edit8->Enabled = false;
Form4->Edit9->Enabled = false;
Form4->Edit10->Enabled = false;
Form4->Edit11->Enabled = false;
Form4->Edit12->Enabled = false;
Form4->Edit13->Enabled = false;

Form4->Label4->Enabled = false;
Form4->Label5->Enabled = false;
Form4->Label7->Enabled = false;
Form4->Label8->Enabled = false;
Form4->Label9->Enabled = false;
Form4->Label10->Enabled = false;
Form4->Label11->Enabled = false;
Form4->Label12->Enabled = false;
Form4->Label13->Enabled = false;
Form4->Label14->Enabled = false;
Form4->Label15->Enabled = false;
Form4->Label16->Enabled = false;
Form4->Label17->Enabled = false;
Form4->Label18->Enabled = false;
Form4->Label19->Enabled = false;
Form4->Label20->Enabled = false;
Form4->Label21->Enabled = false;
Form4->Label22->Enabled = false;
Form4->Label23->Enabled = false;
Form4->Label24->Enabled = false;
Form4->Label25->Enabled = false;
Form4->Label26->Enabled = false;
Form4->Label27->Enabled = false;
Form4->Label28->Enabled = false;
Form4->Label29->Enabled = false;

}
//---------------------------------------------------------------------------

void HabilitaF4()
{
Form4->ComboBox1->Enabled = true;
Form4->ComboBox2->Enabled = true;
Form4->ComboBox3->Enabled = true;
Form4->ComboBox4->Enabled = true;
Form4->ComboBox5->Enabled = true;
Form4->ComboBox6->Enabled = true;

Form4->MaskEdit2->Enabled = true;
Form4->MaskEdit3->Enabled = true;
Form4->MaskEdit4->Enabled = true;
Form4->MaskEdit5->Enabled = true;
Form4->MaskEdit6->Enabled = true;
Form4->MaskEdit7->Enabled = true;
Form4->MaskEdit8->Enabled = true;
Form4->MaskEdit9->Enabled = true;
Form4->MaskEdit10->Enabled = true;

Form4->Edit3->Enabled = true;
Form4->Edit4->Enabled = true;
Form4->Edit5->Enabled = true;
Form4->Edit6->Enabled = true;
Form4->Edit7->Enabled = true;
Form4->Edit8->Enabled = true;
Form4->Edit9->Enabled = true;
Form4->Edit10->Enabled = true;
Form4->Edit11->Enabled = true;
Form4->Edit12->Enabled = true;
Form4->Edit13->Enabled = true;

Form4->Label4->Enabled = true;
Form4->Label5->Enabled = true;
Form4->Label7->Enabled = true;
Form4->Label8->Enabled = true;
Form4->Label9->Enabled = true;
Form4->Label10->Enabled = true;
Form4->Label11->Enabled = true;
Form4->Label12->Enabled = true;
Form4->Label13->Enabled = true;
Form4->Label14->Enabled = true;
Form4->Label15->Enabled = true;
Form4->Label16->Enabled = true;
Form4->Label17->Enabled = true;
Form4->Label18->Enabled = true;
Form4->Label19->Enabled = true;
Form4->Label20->Enabled = true;
Form4->Label21->Enabled = true;
Form4->Label22->Enabled = true;
Form4->Label23->Enabled = true;
Form4->Label24->Enabled = true;
Form4->Label25->Enabled = true;
Form4->Label26->Enabled = true;
Form4->Label27->Enabled = true;
Form4->Label28->Enabled = true;
Form4->Label29->Enabled = true;

}
//---------------------------------------------------------------------------

void LimpaF4()
{
Form4->ComboBox1->ItemIndex = -1;
Form4->ComboBox2->ItemIndex = -1;
Form4->ComboBox3->ItemIndex = -1;
Form4->ComboBox4->ItemIndex = -1;
Form4->ComboBox5->ItemIndex = -1;
Form4->ComboBox6->ItemIndex = -1;

Form4->MaskEdit1->Clear();
Form4->MaskEdit2->Clear();
Form4->MaskEdit3->Clear();
Form4->MaskEdit4->Clear();
Form4->MaskEdit5->Clear();
Form4->MaskEdit6->Clear();
Form4->MaskEdit7->Clear();
Form4->MaskEdit8->Clear();
Form4->MaskEdit9->Clear();
Form4->MaskEdit10->Clear();
Form4->MaskEdit11->Clear();

Form4->Edit1->Clear();
Form4->Edit2->Clear();
Form4->Edit3->Clear();
Form4->Edit4->Clear();
Form4->Edit5->Clear();
Form4->Edit6->Clear();
Form4->Edit7->Clear();
Form4->Edit8->Clear();
Form4->Edit9->Clear();
Form4->Edit10->Clear();
Form4->Edit11->Clear();
Form4->Edit12->Clear();
Form4->Edit13->Clear();

}
//---------------------------------------------------------------------------
void SelecionaSocio_Copia3()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From Socio");
Form1->Query1->ExecSQL();
Form1->Query1->Open();

Form1->Query1->Last();

}
//---------------------------------------------------------------------------

void __fastcall TForm4::FormActivate(TObject *Sender)
{
/*== FECHA FORMULÁRIOS ==*/
Form2->Close();
Form3->Close();
//Form4->Close();
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


LimpaF4();

/*  === CÓDIGO DO PRÓXIMO CADASTRO === */
SelecionaSocio_Copia3();
MaskEdit11->Text = Form1->Query1->FieldByName("CdSoc")->AsInteger + 1;

DesabilitaF4();
Form4->SpeedButton2->Enabled = false;
Form4->SpeedButton1->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm4::MaskEdit1Exit(TObject *Sender)
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
void __fastcall TForm4::MaskEdit4Exit(TObject *Sender)
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

void __fastcall TForm4::SpeedButton1Click(TObject *Sender)
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

        if (Form1->DataSource1->DataSet->RecordCount >=1)
        {
                ShowMessage("Cadastro Existente!!!");
                Form4->Edit1->Clear();
                Form4->Edit2->Clear();
                Form4->Edit1->SetFocus();
        }
        else
        {
                ShowMessage("Continue o Cadastro!!");

                /* ===== DESABILITA VERIFICAR E HABILITA CADASTRAR =====*/
                Form4->SpeedButton1->Enabled = false;
                Form4->SpeedButton2->Enabled = true;

                /* === HABILITA TUDO === */
                HabilitaF4();

                /* === RG ===*/
                Form4->MaskEdit2->SetFocus();

        }//ELSE
        Animate1->Visible = false;
    }
    else
        ShowMessage("Verifique Se Nome e Nome da Mãe Foram Digitados");        
}
//---------------------------------------------------------------------------

void __fastcall TForm4::SpeedButton2Click(TObject *Sender)
{

       /* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D8 (MaskEdit1->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D8.DATAZERO() )
        {
               if (  D8.VERIFICADATA())
               {
                        VDT8 = D8.DT();
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
       DATA D9 (MaskEdit4->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D9.DATAZERO() )
        {
               if (  D9.VERIFICADATA())
               {
                        VDT9 = D9.DT();
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
/* ===== CADASTRAR Natural ===== */
if ( MaskEdit1->Text != "  /  /    " && MaskEdit4->Text != "  /  /    ")
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Insert Into Socio(DtCad,TpSoc,NmSoc,RgSoc,CpfSoc,SexoSoc,DtNasc,NatSoc,EstCiv,MaeSoc,PaiSoc,EndSoc,CompSoc,BairroSoc,CepSoc,CidSoc,EstSoc,TelSoc,CelSoc,EscSoc,DefSoc,QtFilh,QtFam,QtTrab,VlRen,CasaSoc,ImovSoc,ResidSoc,ParSoc,ObsSoc)values('"+VDT8+"','"+Label2->Caption+"','"+Edit1->Text+"','"+MaskEdit2->Text+"','"+MaskEdit3->Text+"','"+ComboBox1->Text+"','"+VDT9+"','"+Edit4->Text+"','"+ComboBox2->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+Edit5->Text+"','"+Edit6->Text+"','"+Edit7->Text+"','"+MaskEdit5->Text+"','"+Edit8->Text+"','"+ComboBox4->Text+"','"+MaskEdit6->Text+"','"+MaskEdit7->Text+"','"+ComboBox3->Text+"','"+Edit9->Text+"','"+MaskEdit8->Text+"','"+MaskEdit9->Text+"','"+MaskEdit10->Text+"','"+Edit10->Text+"','"+ComboBox5->Text+"','"+ComboBox6->Text+"','"+Edit11->Text+"','"+Edit12->Text+"','"+Edit13->Text+"')");
        Form1->Query1->ExecSQL();
}

if ( MaskEdit1->Text != "  /  /    " && MaskEdit4->Text == "  /  /    ")
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Insert Into Socio(DtCad,TpSoc,NmSoc,RgSoc,CpfSoc,SexoSoc,NatSoc,EstCiv,MaeSoc,PaiSoc,EndSoc,CompSoc,BairroSoc,CepSoc,CidSoc,EstSoc,TelSoc,CelSoc,EscSoc,DefSoc,QtFilh,QtFam,QtTrab,VlRen,CasaSoc,ImovSoc,ResidSoc,ParSoc,ObsSoc)values('"+VDT8+"','"+Label2->Caption+"','"+Edit1->Text+"','"+MaskEdit2->Text+"','"+MaskEdit3->Text+"','"+ComboBox1->Text+"','"+Edit4->Text+"','"+ComboBox2->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+Edit5->Text+"','"+Edit6->Text+"','"+Edit7->Text+"','"+MaskEdit5->Text+"','"+Edit8->Text+"','"+ComboBox4->Text+"','"+MaskEdit6->Text+"','"+MaskEdit7->Text+"','"+ComboBox3->Text+"','"+Edit9->Text+"','"+MaskEdit8->Text+"','"+MaskEdit9->Text+"','"+MaskEdit10->Text+"','"+Edit10->Text+"','"+ComboBox5->Text+"','"+ComboBox6->Text+"','"+Edit11->Text+"','"+Edit12->Text+"','"+Edit13->Text+"')");
        Form1->Query1->ExecSQL();
}

if ( MaskEdit1->Text == "  /  /    " && MaskEdit4->Text != "  /  /    ")
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Insert Into Socio(TpSoc,NmSoc,RgSoc,CpfSoc,SexoSoc,DtNasc,NatSoc,EstCiv,MaeSoc,PaiSoc,EndSoc,CompSoc,BairroSoc,CepSoc,CidSoc,EstSoc,TelSoc,CelSoc,EscSoc,DefSoc,QtFilh,QtFam,QtTrab,VlRen,CasaSoc,ImovSoc,ResidSoc,ParSoc,ObsSoc)values('"+Label2->Caption+"','"+Edit1->Text+"','"+MaskEdit2->Text+"','"+MaskEdit3->Text+"','"+ComboBox1->Text+"','"+VDT9+"','"+Edit4->Text+"','"+ComboBox2->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+Edit5->Text+"','"+Edit6->Text+"','"+Edit7->Text+"','"+MaskEdit5->Text+"','"+Edit8->Text+"','"+ComboBox4->Text+"','"+MaskEdit6->Text+"','"+MaskEdit7->Text+"','"+ComboBox3->Text+"','"+Edit9->Text+"','"+MaskEdit8->Text+"','"+MaskEdit9->Text+"','"+MaskEdit10->Text+"','"+Edit10->Text+"','"+ComboBox5->Text+"','"+ComboBox6->Text+"','"+Edit11->Text+"','"+Edit12->Text+"','"+Edit13->Text+"')");
        Form1->Query1->ExecSQL();
}


if ( MaskEdit1->Text == "  /  /    " && MaskEdit4->Text == "  /  /    ")
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Insert Into Socio(TpSoc,NmSoc,RgSoc,CpfSoc,SexoSoc,NatSoc,EstCiv,MaeSoc,PaiSoc,EndSoc,CompSoc,BairroSoc,CepSoc,CidSoc,EstSoc,TelSoc,CelSoc,EscSoc,DefSoc,QtFilh,QtFam,QtTrab,VlRen,CasaSoc,ImovSoc,ResidSoc,ParSoc,ObsSoc)values('"+Label2->Caption+"','"+Edit1->Text+"','"+MaskEdit2->Text+"','"+MaskEdit3->Text+"','"+ComboBox1->Text+"','"+Edit4->Text+"','"+ComboBox2->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+Edit5->Text+"','"+Edit6->Text+"','"+Edit7->Text+"','"+MaskEdit5->Text+"','"+Edit8->Text+"','"+ComboBox4->Text+"','"+MaskEdit6->Text+"','"+MaskEdit7->Text+"','"+ComboBox3->Text+"','"+Edit9->Text+"','"+MaskEdit8->Text+"','"+MaskEdit9->Text+"','"+MaskEdit10->Text+"','"+Edit10->Text+"','"+ComboBox5->Text+"','"+ComboBox6->Text+"','"+Edit11->Text+"','"+Edit12->Text+"','"+Edit13->Text+"')");
        Form1->Query1->ExecSQL();
}

LimpaF4();      DesabilitaF4();
SpeedButton1->Enabled = true;
SpeedButton2->Enabled = true;

/*  === CÓDIGO DO PRÓXIMO CADASTRO === */
SelecionaSocio_Copia3();
MaskEdit11->Text = Form1->Query1->FieldByName("CdSoc")->AsInteger + 1;        
}
//---------------------------------------------------------------------------


void __fastcall TForm4::SpeedButton3Click(TObject *Sender)
{
LimpaF4();

        /*  === CÓDIGO DO PRÓXIMO SÓCIO === */
        SelecionaSocio_Copia3();
        MaskEdit11->Text = Form1->Query1->FieldByName("CdSoc")->AsInteger + 1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Fechar1Click(TObject *Sender)
{
Form4->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::SairClick(TObject *Sender)
{
Form1->Sair->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::CadastrarFuncionarioClick(TObject *Sender)
{
Form1->CadastrarFuncionario->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::CadastrarNaturalClick(TObject *Sender)
{
Form1->CadastrarNatural->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::CadastrarContribuintePFClick(TObject *Sender)
{
Form1->CadastrarContribuintePF->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::CadastrarContribuintePJClick(TObject *Sender)
{
Form1->CadastrarContribuintePJ->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ConsultarSociosClick(TObject *Sender)
{
Form1->ConsultarSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::AtualizarSociosClick(TObject *Sender)
{
Form1->AtualizarSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ExcluirSociosClick(TObject *Sender)
{
Form1->ExcluirSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::CadastrarDoacaoSociosClick(TObject *Sender)
{
Form1->CadastrarDoacaoSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ConsultarDoacaoSociosClick(TObject *Sender)
{
Form1->ConsultarDoacaoSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::AtualizarDoacaoSociosClick(TObject *Sender)
{
Form1->AtualizarDoacaoSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ExcluirDoacaoSociosClick(TObject *Sender)
{
Form1->ExcluirDoacaoSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::CadastrarHistoricoClick(TObject *Sender)
{
Form1->CadastrarHistorico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ConsultarHistoricoClick(TObject *Sender)
{
Form1->ConsultarHistorico->Click();       
}
//---------------------------------------------------------------------------

void __fastcall TForm4::AtualizarHistoricoClick(TObject *Sender)
{
Form1->AtualizarHistorico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ExcluirHistoricoClick(TObject *Sender)
{
Form1->ExcluirHistorico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::CadastrarAtividadeClick(TObject *Sender)
{
Form1->CadastrarAtividade->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ConsultarAtividadeClick(TObject *Sender)
{
Form1->ConsultarAtividade->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::AtualizarAtividadeClick(TObject *Sender)
{
Form1->AtualizarAtividade->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ExcluirAtividadeClick(TObject *Sender)
{
Form1->ExcluirAtividade->Click();       
}
//---------------------------------------------------------------------------

void __fastcall TForm4::CadastrarServicoClick(TObject *Sender)
{
Form1->CadastrarServico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ConsultarServicoClick(TObject *Sender)
{
Form1->ConsultarServico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::AtualizarServicoClick(TObject *Sender)
{
Form1->AtualizarServico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ExcluirServicoClick(TObject *Sender)
{
Form1->ExcluirServico->Click();
}
//---------------------------------------------------------------------------

