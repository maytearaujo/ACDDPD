//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UDoacao.h"  //Form10

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
TForm10 *Form10;
//---------------------------------------------------------------------------
__fastcall TForm10::TForm10(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
AnsiString vcod5,  VDoa;
AnsiString VTpDoa, VDT;

//-------------------------------------------------------------------------
/* ===== FUNÇÕES ===== */
void LimpaDoacao()
{
Form10->MaskEdit1->Clear();
Form10->MaskEdit2->Clear();
Form10->MaskEdit3->Clear();
Form10->MaskEdit4->Clear();
Form10->MaskEdit5->Clear();

Form10->Edit1->Clear();
Form10->Edit2->Clear();

Form10->RadioGroup1->ItemIndex = -1;
}

//-------------------------------------------------------------------------
void NaoEscreveDoacao()
{
Form10->MaskEdit2->ReadOnly = true;
Form10->MaskEdit4->ReadOnly = true;
Form10->MaskEdit5->ReadOnly = true;

Form10->Edit2->ReadOnly = true;

Form10->RadioGroup1->ItemIndex = -1;
}
//-------------------------------------------------------------------------

void EscreveDoacao()
{
Form10->MaskEdit2->ReadOnly = false;
Form10->MaskEdit4->ReadOnly = false;
Form10->MaskEdit5->ReadOnly = false;

Form10->Edit2->ReadOnly = false;

Form10->RadioGroup1->ItemIndex = -1;
}
//-------------------------------------------------------------------------
void ExibeSocioDoacao()
{
Form10->MaskEdit1->Text = Form1->Query1->FieldByName("CdDoa")->AsString;
Form10->MaskEdit2->Text = Form1->Query1->FieldByName("CdSocDoa")->AsString;
Form10->Label3->Caption = Form1->Query1->FieldByName("TpDoa")->AsString;
Form10->MaskEdit4->Text = Form1->Query1->FieldByName("DtDoa")->AsString;
Form10->MaskEdit5->Text = Form1->Query1->FieldByName("VlDoa")->AsString;
Form10->Edit2->Text = Form1->Query1->FieldByName("ObsDoa")->AsString;

Form10->Edit1->Text = Form1->Query1->FieldByName("NmSoc")->AsString;
Form10->MaskEdit3->Text = Form1->Query1->FieldByName("DtNasc")->AsString;
}
//---------------------------------------------------------------------------
void SelecionaDoacao()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From Doacao");
Form1->Query1->ExecSQL();
Form1->Query1->Open();

Form1->Query1->Last();
}
//-------------------------------------------------------------------------
void SelecionaSocioDoacao()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add(" Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Doacao.CdDoa,Doacao.CdSocDoa,Doacao.TpDoa,Doacao.DtDoa,Doacao.VlDoa,Doacao.ObsDoa From Socio, Doacao where Socio.CdSoc = Doacao.CdSocDoa Order By Doacao.CdSocDoa ");
Form1->Query1->ExecSQL();
Form1->Query1->Open();
}
//-------------------------------------------------------------------------

void __fastcall TForm10::MaskEdit4Exit(TObject *Sender)
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

void __fastcall TForm10::MaskEdit2Exit(TObject *Sender)
{
vcod5 = 0;

if (MaskEdit2->Text != "     ")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit2->Text.c_str());

        try
        {
                vcod5 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código Digitado");
                return;
        }

        if (vcod5 > 0 && vcod5 <= 99999999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 999.999.99");
                vcod5 = 0;
        }


}
else ShowMessage("Digite um Código Válido");

        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.NmSoc,Socio.DtNasc From Socio Where Socio.CdSoc = '"+vcod5+"'");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        Form10->Edit1->Text = Form1->Query1->FieldByName("NmSoc")->AsString;
        Form10->MaskEdit3->Text = Form1->Query1->FieldByName("DtNasc")->AsString;

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */
        if (Form1->DataSource1->DataSet->RecordCount == 0)
        {
                ShowMessage("Cadastrado Não Existente!!!");
                MaskEdit2->Clear();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm10::DBNavigator1Click(TObject *Sender,
      TNavigateBtn Button)
{       ExibeSocioDoacao();     }
//---------------------------------------------------------------------------

void __fastcall TForm10::RadioGroup2Click(TObject *Sender)
{
LimpaDoacao();

/* === CdSocDoa =====*/
if (RadioGroup2->ItemIndex == 0)
{       SelecionaSocioDoacao();         ExibeSocioDoacao();     }

/* === CdDoa =====*/
if (RadioGroup2->ItemIndex == 1)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Doacao.CdDoa,Doacao.CdSocDoa,Doacao.TpDoa,Doacao.DtDoa,Doacao.VlDoa,Doacao.ObsDoa From Socio, Doacao where Socio.CdSoc = Doacao.CdSocDoa Order By Doacao.CdDoa ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        ExibeSocioDoacao();
}

if (RadioGroup2->ItemIndex == 2)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Doacao.CdDoa,Doacao.CdSocDoa,Doacao.TpDoa,Doacao.DtDoa,Doacao.VlDoa,Doacao.ObsDoa From Socio, Doacao where Socio.CdSoc = Doacao.CdSocDoa Order By Doacao.DtDoa ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        ExibeSocioDoacao();
}

}
//---------------------------------------------------------------------------

void __fastcall TForm10::SpeedButton1Click(TObject *Sender)
{
vcod5 = 0;

//-------------------------------------
if (RadioGroup1->ItemIndex == 0)
{ VTpDoa = "Telemarketing"; }

if (RadioGroup1->ItemIndex == 1)
{ VTpDoa = "Prefeitura"; }

if (RadioGroup1->ItemIndex == 2)
{ VTpDoa = "Pessoalmente"; }

//----------------------------------------------------------------------------

       /* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D1 (MaskEdit4->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D1.DATAZERO() )
        {
               if (  D1.VERIFICADATA())
               {
                        VDT = D1.DT();
               }

               else
               {
                        ShowMessage("Verifique a Data da Doação!!!");
                        MaskEdit4->Clear();
               }
        }

        else
        {
                ShowMessage("Verifique a Data da Doação!!!");
                MaskEdit4->Clear();
        }

//----------------------------------------------------------------------------
if (MaskEdit2->Text != "")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit2->Text.c_str());

        try
        {
                vcod5 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código do Socio");
                return;
        }

        if (vcod5 > 0 && vcod5 <= 99999999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 999.999.99");
                vcod5 = 0;
        }
}
else ShowMessage("Digite um Código Válido para o Sócio");
//---------------------------------------

if (MaskEdit5->Text != "")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit5->Text.c_str());

        try
        {
                VDoa = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Valor da Doação");
                return;
        }

        if (VDoa > 0 && VDoa <= 99999999)
        ;

        else
        {
                ShowMessage("O a Doação Deve Ser Maior que  R$ 0");
                VDoa = 0;
        }
}
//---------------------------------------

if (MaskEdit2->Text == "")
        {       ShowMessage("Doação Não Cadastrada!!");         }

else
{
        /* === SELECIONA O SÓCIO ==== */
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("select * from Socio where CdSoc ='"+vcod5+"'");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */
        if ( Form1->DataSource1->DataSet->RecordCount== 1 )
        {
                if( MaskEdit4->Text != "  /  /    ")
                {
                        Form1->Query1->Close();
                        Form1->Query1->SQL->Clear();
                        Form1->Query1->SQL->Add("Insert Into Doacao (CdSocDoa,TpDoa,DtDoa,VlDoa,ObsDoa) values ('"+vcod5+"','"+VTpDoa+"','"+VDT+"','"+MaskEdit5->Text+"','"+Edit2->Text+"')");
                        Form1->Query1->ExecSQL();
                }
                else
                {
                        Form1->Query1->Close();
                        Form1->Query1->SQL->Clear();
                        Form1->Query1->SQL->Add("Insert Into Doacao (CdSocDoa,TpDoa,VlDoa,ObsDoa) values ('"+vcod5+"','"+VTpDoa+"','"+MaskEdit5->Text+"','"+Edit2->Text+"')");
                        Form1->Query1->ExecSQL();
                }

                LimpaDoacao();
                ShowMessage("Doação Cadastrada!!");
        }

        else
        {
                ShowMessage("Cadastrado Não Existente!!");
                MaskEdit2->Clear();
        }
}// else

/*  === CÓDIGO DO PRÓXIMO SÓCIO === */
SelecionaDoacao();
MaskEdit1->Text = Form1->Query1->FieldByName("CdDoa")->AsInteger + 1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm10::SpeedButton2Click(TObject *Sender)
{       Form11->ShowModal();    }
//---------------------------------------------------------------------------

void __fastcall TForm10::SpeedButton3Click(TObject *Sender)
{

if (RadioGroup1->ItemIndex == 0)
{ VTpDoa = "Telemarketing"; }

if (RadioGroup1->ItemIndex == 1)
{ VTpDoa = "Prefeitura"; }

if (RadioGroup1->ItemIndex == 2)
{ VTpDoa = "Pessoalmente"; }
//----------------------------------------------------

/* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D1 (MaskEdit4->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D1.DATAZERO() )
        {
               if (  D1.VERIFICADATA())
               {
                        VDT = D1.DT();
               }

               else
               {
                        ShowMessage("Verifique a Data da Doação!!!");
                        MaskEdit4->Clear();
               }
        }

        else
        {
                ShowMessage("Verifique a Data da Doação!!!");
                MaskEdit4->Clear();
        }

//----------------------------------------------------------------------------
if (MaskEdit2->Text != "")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit2->Text.c_str());

        try
        {
                vcod5 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código do Socio");
                return;
        }

        if (vcod5 > 0 && vcod5 <= 99999999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 999.999.99");
                vcod5 = 0;
        }

        /* == DESTRUINDO O OBJETO  == */
        C1.~CODIGO();
}
else ShowMessage("Digite um Código Válido para o Sócio");
//----------------------------------------------------
if (MaskEdit5->Text != "")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit5->Text.c_str());

        try
        {
                VDoa = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Valor da Doação");
                return;
        }

        if (VDoa > 0 && VDoa <= 99999999)
        ;

        else
        {
                ShowMessage("A Doação Deve Ser Maior que  R$ 0");
                VDoa = 0;
        }
}
//------------------------------------------------------------------

if (MaskEdit2->Text == "")
        {       ShowMessage("Doação Não Atualizada!!");         }

else
{
         if( MaskEdit4->Text != "  /  /    ")
         {
                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add(" Update Doacao Set CdSocDoa = '"+vcod5+"',TpDoa ='"+VTpDoa+"',DtDoa = '"+VDT+"',VlDoa = '"+VDoa+"',ObsDoa = '"+Edit2->Text+"' Where CdDoa = '"+MaskEdit1->Text+"' ");
                Form1->Query1->ExecSQL();
                Form1->Query1->Close();
         }
         else
         {
                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add(" Update Doacao Set CdSocDoa = '"+vcod5+"',TpDoa ='"+VTpDoa+"',VlDoa = '"+VDoa+"',ObsDoa = '"+Edit2->Text+"' Where CdDoa = '"+MaskEdit1->Text+"' ");
                Form1->Query1->ExecSQL();
                Form1->Query1->Close();
         }

        ShowMessage("Doação Atualizada");

        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add(" Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Doacao.CdDoa,Doacao.CdSocDoa,Doacao.TpDoa,Doacao.DtDoa,Doacao.VlDoa,Doacao.ObsDoa From Socio, Doacao where Socio.CdSoc = Doacao.CdSocDoa Order By Doacao.CdSocDoa ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        LimpaDoacao();
}

ExibeSocioDoacao();        
}
//---------------------------------------------------------------------------

void __fastcall TForm10::SpeedButton4Click(TObject *Sender)
{
vcod5 = 0;

if (MaskEdit1->Text != "     ")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit1->Text.c_str());

        try
        {
                vcod5 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código Digitado");
                return;
        }

        if (vcod5 > 0 && vcod5 <= 99999999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 999.999.99");
                vcod5 = 0;
        }

        /* == DESTRUINDO O OBJETO  == */
        C1.~CODIGO();
}

if (MessageDlg("Deseja Excluir a Doação?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Delete from Doacao where Doacao.CdDoa='"+vcod5+"'");
        Form1->Query1->ExecSQL();

        ShowMessage("Exclusão Concluída");
        LimpaDoacao();
       
}
else
        {       ShowMessage("Exclusão Cancelada");      }

SelecionaSocioDoacao ();
ExibeSocioDoacao();        
}
//---------------------------------------------------------------------------

void __fastcall TForm10::SpeedButton5Click(TObject *Sender)
{
LimpaDoacao();

//SE CADASTRAR
if (SpeedButton1->Visible == true)
{
        /*  === CÓDIGO DO PRÓXIMO SÓCIO === */
        SelecionaDoacao();
        MaskEdit1->Text = Form1->Query1->FieldByName("CdDoa")->AsInteger + 1;
}

//SE ATUALIZAR
if (SpeedButton2->Visible == true)
{
        SelecionaSocioDoacao();
        ExibeSocioDoacao();

}        
}
//---------------------------------------------------------------------------

void __fastcall TForm10::SpeedButton6Click(TObject *Sender)
{
        SelecionaSocioDoacao();
        ExibeSocioDoacao();
        
}
//---------------------------------------------------------------------------

void __fastcall TForm10::FormActivate(TObject *Sender)
{
Form2->Close();
Form3->Close();
Form4->Close();
Form5->Close();
Form6->Close();
Form7->Close();
Form8->Close();
Form9->Close();
//Form10->Close();
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

SelecionaSocioDoacao();
}
//---------------------------------------------------------------------------

void __fastcall TForm10::Fechar1Click(TObject *Sender)
{
Form10->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm10::SairClick(TObject *Sender)
{
Form1->Sair->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm10::CadastrarDoacaoSociosClick(TObject *Sender)
{
Form1->CadastrarDoacaoSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm10::ConsultarDoacaoSociosClick(TObject *Sender)
{
Form1->ConsultarDoacaoSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm10::AtualizarDoacaoSociosClick(TObject *Sender)
{
Form1->AtualizarDoacaoSocios->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm10::ExcluirDoacaoSociosClick(TObject *Sender)
{
Form1->ExcluirDoacaoSocios->Click();
}
//---------------------------------------------------------------------------

