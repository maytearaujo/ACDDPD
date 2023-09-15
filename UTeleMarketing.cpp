//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UTeleMarketing.h"//Form26

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

#include "UTipoConsultaTeleMarKeting.h"//Form27;
#include "URelatorioDoacaoTel.h"//Form28
#include "UDoacaoTeleMarketing.h"//Form29
#include "UTpConsultaDoacaoTel.h"//Form30
#include "UCadContribuinteTelPF.h" //Form31
#include "UCadContribuinteTelPJ.h" //Form32
#include "URelatorioAniversarioTel.h"//Form33

/* ===== DECLARAÇÃO DAS CLASSES ===== */
#include "Data.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm26 *Form26;


//---------------------------------------------------------------------------
__fastcall TForm26::TForm26(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

AnsiString    VDT24,   VDT25;
//---------------------------------------------------------------------------
/* === FUNÇÕES === */
void DesabilitaF26()
{
Form26->ComboBox1->Enabled = false;
Form26->ComboBox2->Enabled = false;
Form26->ComboBox3->Enabled = false;
Form26->ComboBox4->Enabled = false;

Form26->MaskEdit1->Enabled = false;
Form26->MaskEdit2->Enabled = false;
Form26->MaskEdit3->Enabled = false;
Form26->MaskEdit4->Enabled = false;
Form26->MaskEdit5->Enabled = false;
Form26->MaskEdit6->Enabled = false;
Form26->MaskEdit7->Enabled = false;
Form26->MaskEdit8->Enabled = false;

Form26->Edit1->Enabled = false;
Form26->Edit2->Enabled = false;
Form26->Edit3->Enabled = false;
Form26->Edit4->Enabled = false;
Form26->Edit5->Enabled = false;
Form26->Edit6->Enabled = false;
Form26->Edit7->Enabled = false;
Form26->Edit8->Enabled = false;
Form26->Edit9->Enabled = false;
Form26->Edit10->Enabled = false;
Form26->Edit11->Enabled = false;

Form26->Label1->Enabled = false;
Form26->Label2->Enabled = false;
Form26->Label3->Enabled = false;
Form26->Label4->Enabled = false;
Form26->Label5->Enabled = false;
Form26->Label6->Enabled = false;
Form26->Label7->Enabled = false;
Form26->Label8->Enabled = false;
Form26->Label9->Enabled = false;
Form26->Label10->Enabled = false;
Form26->Label11->Enabled = false;
Form26->Label12->Enabled = false;
Form26->Label13->Enabled = false;
Form26->Label14->Enabled = false;
Form26->Label15->Enabled = false;
Form26->Label16->Enabled = false;
Form26->Label17->Enabled = false;
Form26->Label18->Enabled = false;
Form26->Label19->Enabled = false;
Form26->Label20->Enabled = false;
Form26->Label21->Enabled = false;
Form26->Label22->Enabled = false;
Form26->Label23->Enabled = false;
Form26->Label39->Enabled = false;

}
//---------------------------------------------------------------------------

void HabilitaF26()
{
Form26->ComboBox1->Enabled = true;
Form26->ComboBox2->Enabled = true;
Form26->ComboBox3->Enabled = true;
Form26->ComboBox4->Enabled = true;

Form26->MaskEdit1->Enabled = true;
Form26->MaskEdit2->Enabled = true;
Form26->MaskEdit3->Enabled = true;
Form26->MaskEdit4->Enabled = true;
Form26->MaskEdit5->Enabled = true;
Form26->MaskEdit6->Enabled = true;
Form26->MaskEdit7->Enabled = true;
Form26->MaskEdit8->Enabled = true;

Form26->Edit1->Enabled = true;
Form26->Edit2->Enabled = true;
Form26->Edit3->Enabled = true;
Form26->Edit4->Enabled = true;
Form26->Edit5->Enabled = true;
Form26->Edit6->Enabled = true;
Form26->Edit7->Enabled = true;
Form26->Edit8->Enabled = true;
Form26->Edit9->Enabled = true;
Form26->Edit10->Enabled = true;
Form26->Edit11->Enabled = true;

Form26->Label1->Enabled = true;
Form26->Label2->Enabled = true;
Form26->Label3->Enabled = true;
Form26->Label4->Enabled = true;
Form26->Label5->Enabled = true;
Form26->Label6->Enabled = true;
Form26->Label7->Enabled = true;
Form26->Label8->Enabled = true;
Form26->Label9->Enabled = true;
Form26->Label10->Enabled = true;
Form26->Label11->Enabled = true;
Form26->Label12->Enabled = true;
Form26->Label13->Enabled = true;
Form26->Label14->Enabled = true;
Form26->Label15->Enabled = true;
Form26->Label16->Enabled = true;
Form26->Label17->Enabled = true;
Form26->Label18->Enabled = true;
Form26->Label19->Enabled = true;
Form26->Label20->Enabled = true;
Form26->Label21->Enabled = true;
Form26->Label22->Enabled = true;
Form26->Label23->Enabled = true;
Form26->Label39->Enabled = true;

}
//---------------------------------------------------------------------------

void LimpaTeleMarketing_Copia()
{

Form26->ComboBox1->ItemIndex = -1;
Form26->ComboBox2->ItemIndex = -1;
Form26->ComboBox3->ItemIndex = -1;
Form26->ComboBox4->ItemIndex = -1;

Form26->MaskEdit1->Clear();
Form26->MaskEdit2->Clear();
Form26->MaskEdit3->Clear();
Form26->MaskEdit4->Clear();
Form26->MaskEdit5->Clear();
Form26->MaskEdit6->Clear();
Form26->MaskEdit7->Clear();
Form26->MaskEdit8->Clear();

Form26->Edit1->Clear();
Form26->Edit10->Clear();
Form26->Edit11->Clear();
Form26->Edit2->Clear();
Form26->Edit3->Clear();
Form26->Edit4->Clear();
Form26->Edit5->Clear();
Form26->Edit6->Clear();
Form26->Edit7->Clear();
Form26->Edit8->Clear();
Form26->Edit9->Clear();
}
//---------------------------------------------------------------------------
void ExibeTeleMarketing_Copia()
{
Form26->ComboBox1->Text = Form1->Query1->FieldByName("SexoDoa")->AsString;
Form26->ComboBox2->Text = Form1->Query1->FieldByName("EstCivDoa")->AsString;
Form26->ComboBox3->Text = Form1->Query1->FieldByName("EscDoa")->AsString;
Form26->ComboBox4->Text = Form1->Query1->FieldByName("EstDoa")->AsString;

Form26->MaskEdit1->Text = Form1->Query1->FieldByName("DtCadDoa")->AsString;
Form26->MaskEdit2->Text = Form1->Query1->FieldByName("RGDoa")->AsString;
Form26->MaskEdit3->Text = Form1->Query1->FieldByName("CpfDoa")->AsString;
Form26->MaskEdit4->Text = Form1->Query1->FieldByName("DtNascDoa")->AsString;
Form26->MaskEdit5->Text = Form1->Query1->FieldByName("CepDoa")->AsString;
Form26->MaskEdit6->Text = Form1->Query1->FieldByName("TelDoa")->AsString;
Form26->MaskEdit7->Text = Form1->Query1->FieldByName("CelDoa")->AsString;
Form26->MaskEdit8->Text = Form1->Query1->FieldByName("CnpjDoa")->AsString;

Form26->Edit1->Text = Form1->Query1->FieldByName("NmDoa")->AsString;
Form26->Edit10->Text = Form1->Query1->FieldByName("CdDoa")->AsString;
Form26->Edit11->Text = Form1->Query1->FieldByName("NmRepr")->AsString;
Form26->Edit2->Text = Form1->Query1->FieldByName("MaeDoa")->AsString;
Form26->Edit3->Text = Form1->Query1->FieldByName("PaiDoa")->AsString;
Form26->Edit4->Text = Form1->Query1->FieldByName("NatDoa")->AsString;
Form26->Edit5->Text = Form1->Query1->FieldByName("EndDoa")->AsString;
Form26->Edit6->Text = Form1->Query1->FieldByName("CompDoa")->AsString;
Form26->Edit7->Text = Form1->Query1->FieldByName("BairroDoa")->AsString;
Form26->Edit8->Text = Form1->Query1->FieldByName("CidDoa")->AsString;
Form26->Edit9->Text = Form1->Query1->FieldByName("ObsDoa")->AsString;
}
//---------------------------------------------------------------------------
void SelecionaTeleMarketing_Copia4()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From TeleMarketing");
Form1->Query1->ExecSQL();
Form1->Query1->Open();
}

//---------------------------------------------------------------------------
void __fastcall TForm26::RadioGroup1Click(TObject *Sender)
{
LimpaTeleMarketing_Copia();

/* === CdSocHist =====*/
if (RadioGroup1->ItemIndex == 0)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select * From TeleMarketing Order By CdDoa");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        ExibeTeleMarketing_Copia();
}

/* === CdHist =====*/
if (RadioGroup1->ItemIndex == 1)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select * From TeleMarketing Order By NmDoa");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        ExibeTeleMarketing_Copia();

}
}
//---------------------------------------------------------------------------

void __fastcall TForm26::SpeedButton2Click(TObject *Sender)
{
Form27->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm26::SpeedButton4Click(TObject *Sender)
{
        LimpaTeleMarketing_Copia();
        SelecionaTeleMarketing_Copia4();
        ExibeTeleMarketing_Copia();
}
//---------------------------------------------------------------------------

void __fastcall TForm26::SpeedButton1Click(TObject *Sender)
{
if ( Label39->Caption != "PJ" )
{
/* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
        DATA D24 (MaskEdit1->Text.c_str());

        /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D24.DATAZERO() )
        {
               if (  D24.VERIFICADATA())
               {
                        VDT24 = D24.DT();
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

        //---------------------------------------------------------------------
        /* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
        DATA D25 (MaskEdit4->Text.c_str());

        /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D25.DATAZERO() )
        {
               if (  D25.VERIFICADATA())
               {
                        VDT25 = D25.DT();
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
}

else
{
/* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
        DATA D24 (MaskEdit1->Text.c_str());

        /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D24.DATAZERO() )
        {
               if (  D24.VERIFICADATA())
               {
                        VDT24 = D24.DT();
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


}

if ( MaskEdit1->Text != "  /  /    " && MaskEdit4->Text != "  /  /    ")
        {
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Update TeleMarketing Set DtCadDoa='"+VDT24+"',NmDoa='"+Edit1->Text+"',RgDoa='"+MaskEdit2->Text+"',CpfDoa='"+MaskEdit3->Text+"',CnpjDoa='"+MaskEdit8->Text+"',SexoDoa='"+ComboBox1->Text+"',DtNascDoa='"+VDT25+"',NatDoa='"+Edit4->Text+"',EstCivDoa='"+ComboBox2->Text+"',MaeDoa='"+Edit2->Text+"',PaiDoa='"+Edit3->Text+"',EndDoa='"+Edit5->Text+"',CompDoa='"+Edit6->Text+"',BairroDoa='"+Edit7->Text+"',CepDoa='"+MaskEdit5->Text+"',CidDoa='"+Edit8->Text+"',EstDoa='"+ComboBox4->Text+"',TelDoa='"+MaskEdit6->Text+"',CelDoa='"+MaskEdit7->Text+"',EscDoa='"+ComboBox3->Text+"',ObsDoa='"+Edit9->Text+"',NmRepr='"+Edit11->Text+"' Where CdDoa='"+Edit10->Text+"'");
        Form1->Query1->ExecSQL();
        Form1->Query1->Close();
        }
else
        {
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Update TeleMarketing Set NmDoa='"+Edit1->Text+"',RgDoa='"+MaskEdit2->Text+"',CpfDoa='"+MaskEdit3->Text+"',CnpjDoa='"+MaskEdit8->Text+"',SexoDoa='"+ComboBox1->Text+"',NatDoa='"+Edit4->Text+"',EstCivDoa='"+ComboBox2->Text+"',MaeDoa='"+Edit2->Text+"',PaiDoa='"+Edit3->Text+"',EndDoa='"+Edit5->Text+"',CompDoa='"+Edit6->Text+"',BairroDoa='"+Edit7->Text+"',CepDoa='"+MaskEdit5->Text+"',CidDoa='"+Edit8->Text+"',EstDoa='"+ComboBox4->Text+"',TelDoa='"+MaskEdit6->Text+"',CelDoa='"+MaskEdit7->Text+"',EscDoa='"+ComboBox3->Text+"',ObsDoa='"+Edit9->Text+"',NmRepr='"+Edit11->Text+"' Where CdDoa='"+Edit10->Text+"'");
        Form1->Query1->ExecSQL();
        Form1->Query1->Close();
        }


 ShowMessage("Doação Atualizada");
 SelecionaTeleMarketing_Copia4();
 ExibeTeleMarketing_Copia();
}
//---------------------------------------------------------------------------

void __fastcall TForm26::SpeedButton3Click(TObject *Sender)
{

/* ===== SELECIONA DOACAOTELEMARKETING E CONTA O NÚMERO DE REGISTROS ===== */
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From DoacaoTeleMarketing Where CdSocDoaTel = '"+Edit10->Text+"'");
Form1->Query1->ExecSQL();
Form1->Query1->Open();
int DoacaoTel = Form1->DataSource1->DataSet->RecordCount;


if ( MessageDlg( " Este Sócio Possui os Seguintes Cadastros: \n"
"                " + IntToStr(DoacaoTel) + " Doação(es), \n"
"          Deseja Excluir o Cadastro?",
 mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)

{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Delete From TeleMarketing Where TeleMarketing.CdDoa='"+Edit10->Text+"'");
        Form1->Query1->ExecSQL();

        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Delete From DoacaoTeleMarketing Where DoacaoTeleMarketing.CdSocDoaTel='"+Edit10->Text+"'");
        Form1->Query1->ExecSQL();

        ShowMessage("Exclusão Concluída");
        LimpaTeleMarketing_Copia();
}

else
{
        ShowMessage("Exclusão Cancelada");
}


SelecionaTeleMarketing_Copia4 ();
ExibeTeleMarketing_Copia();
}
//---------------------------------------------------------------------------

void __fastcall TForm26::DBNavigator1Click(TObject *Sender,
      TNavigateBtn Button)
{
        ExibeTeleMarketing_Copia();
}
//---------------------------------------------------------------------------

void __fastcall TForm26::FecharClick(TObject *Sender)
{
Form26->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm26::SairClick(TObject *Sender)
{
Form1->Sair->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm26::CadastrarDoadorTelPFClick(TObject *Sender)
{
Form1->CadastrarDoadorTelPF->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm26::CadastrarDoadorTelPJClick(TObject *Sender)
{
Form1->CadastrarDoadorTelPJ->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm26::ConsultarDoadorTelClick(TObject *Sender)
{
Form1->ConsultarDoadorTel->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm26::AtualizarDoadorTelClick(TObject *Sender)
{
Form1->AtualizarDoadorTel->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm26::ExcluirDoadorTelClick(TObject *Sender)
{
Form1->ExcluirDoadorTel->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm26::CadastrarDoacaoTelClick(TObject *Sender)
{
Form1->CadastrarDoacaoTel->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm26::ConsultarDoacaoTelClick(TObject *Sender)
{
Form1->ConsultarDoacaoTel->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm26::AtualizarDoacaoTelClick(TObject *Sender)
{
Form1->AtualizarDoacaoTel->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm26::ExcluirDoacaoTelClick(TObject *Sender)
{
Form1->ExcluirDoacaoTel->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm26::FormActivate(TObject *Sender)
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
//Form26->Close();
//Form27->Close();
Form28->Close();
Form29->Close();
Form30->Close();
Form31->Close();
Form32->Close();
Form33->Close();

SelecionaTeleMarketing_Copia4();
}
//---------------------------------------------------------------------------

