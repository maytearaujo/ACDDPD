//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UDoacaoTeleMarketing.h"//Form29

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

#include "UTpConsultaDoacaoTel.h"//Form30
#include "UCadContribuinteTelPF.h" //Form31
#include "UCadContribuinteTelPJ.h" //Form32
#include "URelatorioAniversarioTel.h"//Form33

/* ===== DECLARAÇÃO DAS CLASSES ===== */
#include "Data.h"
#include "Codigo.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm29 *Form29;
//---------------------------------------------------------------------------
__fastcall TForm29::TForm29(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
AnsiString    VDT26;
AnsiString vcod11,  VDoa2;

//-------------------------------------------------------------------------
/* ===== FUNÇÕES ===== */
void LimpaDoacaoTel()
{
Form29->MaskEdit1->Clear();
Form29->MaskEdit2->Clear();
Form29->MaskEdit3->Clear();
Form29->MaskEdit4->Clear();
Form29->MaskEdit5->Clear();

Form29->Edit1->Clear();
Form29->Edit2->Clear();

}
//-------------------------------------------------------------------------

void NaoEscreveDoacaoTel()
{
Form29->MaskEdit2->ReadOnly = true;
Form29->MaskEdit4->ReadOnly = true;
Form29->MaskEdit5->ReadOnly = true;

Form29->Edit2->ReadOnly = true;
}
//-------------------------------------------------------------------------
void EscreveDoacaoTel()
{
Form29->MaskEdit2->ReadOnly = false;
Form29->MaskEdit4->ReadOnly = false;
Form29->MaskEdit5->ReadOnly = false;

Form29->Edit2->ReadOnly = false;
}
//---------------------------------------------------------------------------
void ExibeSocioDoacaoTel()
{
Form29->MaskEdit1->Text = Form1->Query1->FieldByName("CdDoaTel")->AsString;
Form29->MaskEdit2->Text = Form1->Query1->FieldByName("CdSocDoaTel")->AsString;
Form29->MaskEdit4->Text = Form1->Query1->FieldByName("DtDoaTel")->AsString;
Form29->MaskEdit5->Text = Form1->Query1->FieldByName("VlDoaTel")->AsString;
Form29->Edit2->Text = Form1->Query1->FieldByName("ObsDoaTel")->AsString;

Form29->Edit1->Text = Form1->Query1->FieldByName("NmDoa")->AsString;
Form29->MaskEdit3->Text = Form1->Query1->FieldByName("DtNascDoa")->AsString;
}
//---------------------------------------------------------------------------
void SelecionaDoacaoTel()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From DoacaoTeleMarketing");
Form1->Query1->ExecSQL();
Form1->Query1->Open();

Form1->Query1->Last();
}
//---------------------------------------------------------------------------

void SelecionaSocioDoacaoTel()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add(" Select TeleMarketing.CdDoa,TeleMarketing.NmDoa,TeleMarketing.DtNascDoa,DoacaoTeleMarketing.CdDoaTel,DoacaoTeleMarketing.CdSocDoaTel,DoacaoTeleMarketing.DtDoaTel,DoacaoTeleMarketing.VlDoaTel,DoacaoTeleMarketing.ObsDoaTel From TeleMarketing, DoacaoTeleMarketing Where TeleMarketing.CdDoa = DoacaoTeleMarketing.CdSocDoaTel Order By DoacaoTeleMarketing.CdSocDoaTel ");
Form1->Query1->ExecSQL();
Form1->Query1->Open();
}
//---------------------------------------------------------------------------

void __fastcall TForm29::MaskEdit4Exit(TObject *Sender)
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

void __fastcall TForm29::MaskEdit2Exit(TObject *Sender)
{
vcod11 = 0;

if (MaskEdit2->Text != "     ")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit2->Text.c_str());

        try
        {
                vcod11 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código Digitado");
                return;
        }

        if (vcod11 > 0 && vcod11 <= 99999999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 999.999.99");
                vcod11 = 0;
        }


}
else ShowMessage("Digite um Código Válido");

        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select TeleMarketing.NmDoa,TeleMarketing.DtNascDoa From TeleMarketing Where TeleMarketing.CdDoa = '"+vcod11+"'");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        Form29->Edit1->Text = Form1->Query1->FieldByName("NmDoa")->AsString;
        Form29->MaskEdit3->Text = Form1->Query1->FieldByName("DtNascDoa")->AsString;

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */
        if (Form1->DataSource1->DataSet->RecordCount == 0)
        {
                ShowMessage("Cadastrado Não Existente!!!");
                MaskEdit2->Clear();
        }        
}
//---------------------------------------------------------------------------

void __fastcall TForm29::DBNavigator1Click(TObject *Sender,
      TNavigateBtn Button)
{
ExibeSocioDoacaoTel();        
}
//---------------------------------------------------------------------------

void __fastcall TForm29::RadioGroup2Click(TObject *Sender)
{
LimpaDoacaoTel();

/* === CdSocDoa =====*/
if (RadioGroup2->ItemIndex == 0)
{       SelecionaSocioDoacaoTel();         ExibeSocioDoacaoTel();     }

/* === CdDoa =====*/
if (RadioGroup2->ItemIndex == 1)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select TeleMarketing.CdDoa,TeleMarketing.NmDoa,TeleMarketing.DtNascDoa,DoacaoTeleMarketing.CdDoaTel,DoacaoTeleMarketing.CdSocDoaTel,DoacaoTeleMarketing.DtDoaTel,DoacaoTeleMarketing.VlDoaTel,DoacaoTeleMarketing.ObsDoaTel From TeleMarketing, DoacaoTeleMarketing Where TeleMarketing.CdDoa = DoacaoTeleMarketing.CdSocDoaTel Order By DoacaoTeleMarketing.CdDoaTel ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        ExibeSocioDoacaoTel();
}

if (RadioGroup2->ItemIndex == 2)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select TeleMarketing.CdDoa,TeleMarketing.NmDoa,TeleMarketing.DtNascDoa,DoacaoTeleMarketing.CdDoaTel,DoacaoTeleMarketing.CdSocDoaTel,DoacaoTeleMarketing.DtDoaTel,DoacaoTeleMarketing.VlDoaTel,DoacaoTeleMarketing.ObsDoaTel From TeleMarketing, DoacaoTeleMarketing Where TeleMarketing.CdDoa = DoacaoTeleMarketing.CdSocDoaTel Order By DoacaoTeleMarketing.DtDoaTel ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        ExibeSocioDoacaoTel();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm29::SpeedButton1Click(TObject *Sender)
{
vcod11 = 0;

//-------------------------------------

       /* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D1 (MaskEdit4->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D1.DATAZERO() )
        {
               if (  D1.VERIFICADATA())
               {
                        VDT26 = D1.DT();
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
                vcod11 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código do Socio");
                return;
        }

        if (vcod11 > 0 && vcod11 <= 99999999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 999.999.99");
                vcod11 = 0;
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
                VDoa2 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Valor da Doação");
                return;
        }

        if (VDoa2 > 0 && VDoa2 <= 99999999)
        ;

        else
        {
                ShowMessage("O a Doação Deve Ser Maior que  R$ 0");
                VDoa2 = 0;
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
        Form1->Query1->SQL->Add("Select * From TeleMarketing Where CdDoa ='"+vcod11+"'");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */
        if ( Form1->DataSource1->DataSet->RecordCount== 1 )
        {
                if( MaskEdit4->Text != "  /  /    ")
                {
                        Form1->Query1->Close();
                        Form1->Query1->SQL->Clear();
                        Form1->Query1->SQL->Add("Insert Into DoacaoTeleMarketing (CdSocDoaTel,DtDoaTel,VlDoaTel,ObsDoaTel) values ('"+vcod11+"','"+VDT26+"','"+MaskEdit5->Text+"','"+Edit2->Text+"')");
                        Form1->Query1->ExecSQL();
                }
                else
                {
                        Form1->Query1->Close();
                        Form1->Query1->SQL->Clear();
                        Form1->Query1->SQL->Add("Insert Into DoacaoTeleMarketing (CdSocDoaTel,VlDoaTel,ObsDoaTel) values ('"+vcod11+"','"+MaskEdit5->Text+"','"+Edit2->Text+"')");
                        Form1->Query1->ExecSQL();
                }

                LimpaDoacaoTel();
                ShowMessage("Doação Cadastrada!!");
        }

        else
        {
                ShowMessage("Cadastrado Não Existente!!");
                MaskEdit2->Clear();
        }
}// else

/*  === CÓDIGO DA PRÓXIMA DOAÇÃO === */
SelecionaDoacaoTel();
MaskEdit1->Text = Form1->Query1->FieldByName("CdDoaTel")->AsInteger + 1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm29::SpeedButton2Click(TObject *Sender)
{
Form30->Caption = "Consulta de Doações TeleMarketing";
Form30->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm29::SpeedButton3Click(TObject *Sender)
{

/* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D1 (MaskEdit4->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D1.DATAZERO() )
        {
               if (  D1.VERIFICADATA())
               {
                        VDT26 = D1.DT();
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
                vcod11 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código do Socio");
                return;
        }

        if (vcod11 > 0 && vcod11 <= 99999999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 999.999.99");
                vcod11 = 0;
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
                VDoa2 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Valor da Doação");
                return;
        }

        if (VDoa2 > 0 && VDoa2 <= 99999999)
        ;

        else
        {
                ShowMessage("A Doação Deve Ser Maior que  R$ 0");
                VDoa2 = 0;
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
                Form1->Query1->SQL->Add(" Update DoacaoTeleMarketing Set CdSocDoaTel = '"+vcod11+"',DtDoaTel = '"+VDT26+"',VlDoaTel = '"+VDoa2+"',ObsDoaTel = '"+Edit2->Text+"' Where CdDoaTel = '"+MaskEdit1->Text+"' ");
                Form1->Query1->ExecSQL();
                Form1->Query1->Close();
         }
         else
         {
                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add(" Update DoacaoTeleMarketing Set CdSocDoaTel = '"+vcod11+"',VlDoaTel = '"+VDoa2+"',ObsDoaTel = '"+Edit2->Text+"' Where CdDoaTel = '"+MaskEdit1->Text+"' ");
                Form1->Query1->ExecSQL();
                Form1->Query1->Close();
         }

        ShowMessage("Doação Atualizada");

        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add(" Select TeleMarketing.CdDoa,TeleMarketing.NmDoa,TeleMarketing.DtNascDoa,DoacaoTeleMarketing.CdDoaTel,DoacaoTeleMarketing.CdSocDoaTel,DoacaoTeleMarketing.DtDoaTel,DoacaoTeleMarketing.VlDoaTel,DoacaoTeleMarketing.ObsDoaTel From TeleMarketing, DoacaoTeleMarketing Where TeleMarketing.CdDoa = DoacaoTeleMarketing.CdSocDoaTel Order By DoacaoTeleMarketing.CdSocDoaTel ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        LimpaDoacaoTel();
}

ExibeSocioDoacaoTel();
}
//---------------------------------------------------------------------------

void __fastcall TForm29::SpeedButton4Click(TObject *Sender)
{
vcod11 = 0;

if (MaskEdit1->Text != "     ")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit1->Text.c_str());

        try
        {
                vcod11 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código Digitado");
                return;
        }

        if (vcod11 > 0 && vcod11 <= 99999999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 999.999.99");
                vcod11 = 0;
        }

        /* == DESTRUINDO O OBJETO  == */
        C1.~CODIGO();
}

if (MessageDlg("Deseja Excluir a Doação?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Delete From DoacaoTeleMarketing Where DoacaoTeleMarketing.CdDoaTel='"+vcod11+"'");
        Form1->Query1->ExecSQL();

        ShowMessage("Exclusão Concluída");
        LimpaDoacaoTel();
       
}
else
        {       ShowMessage("Exclusão Cancelada");      }

SelecionaSocioDoacaoTel();
ExibeSocioDoacaoTel();           
}
//---------------------------------------------------------------------------

void __fastcall TForm29::SpeedButton5Click(TObject *Sender)
{
LimpaDoacaoTel();

//SE CADASTRAR
if (SpeedButton1->Visible == true)
{
        /*  === CÓDIGO DO PRÓXIMO SÓCIO === */
        SelecionaDoacaoTel();
        MaskEdit1->Text = Form1->Query1->FieldByName("CdDoaTel")->AsInteger + 1;
}

//SE ATUALIZAR
if (SpeedButton2->Visible == true)
{
        SelecionaSocioDoacaoTel();
        ExibeSocioDoacaoTel();

}
}
//---------------------------------------------------------------------------

void __fastcall TForm29::SpeedButton6Click(TObject *Sender)
{
        SelecionaSocioDoacaoTel();
        ExibeSocioDoacaoTel();
}
//---------------------------------------------------------------------------

void __fastcall TForm29::FecharClick(TObject *Sender)
{
Form29->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm29::SairClick(TObject *Sender)
{
Form1->Sair->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm29::CadastrarDoadorTelPFClick(TObject *Sender)
{
Form1->CadastrarDoadorTelPF->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm29::CadastrarDoadorTelPJClick(TObject *Sender)
{
Form1->CadastrarDoadorTelPJ->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm29::ConsultarDoadorTelClick(TObject *Sender)
{
Form1->ConsultarDoadorTel->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm29::AtualizarDoadorTelClick(TObject *Sender)
{
Form1->AtualizarDoadorTel->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm29::ExcluirDoadorTelClick(TObject *Sender)
{
Form1->ExcluirDoadorTel->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm29::CadastrarDoacaoTelClick(TObject *Sender)
{
Form1->CadastrarDoacaoTel->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm29::ConsultarDoacaoTelClick(TObject *Sender)
{
Form1->ConsultarDoacaoTel->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm29::AtualizarDoacaoTelClick(TObject *Sender)
{
Form1->AtualizarDoacaoTel->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm29::ExcluirDoacaoTelClick(TObject *Sender)
{
Form1->ExcluirDoacaoTel->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm29::FormActivate(TObject *Sender)
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
//Form29->Close();
//Form30->Close();
Form31->Close();
Form32->Close();
Form33->Close();

SelecionaSocioDoacaoTel();
}
//---------------------------------------------------------------------------

