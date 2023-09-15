//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UHistorico.h" //Form8

/* === FORMULÁRIOS === */
#include "UInicio.h" //Form1
#include "UCadClienteContribuintePF.h"//Form2
#include "UCadastroFuncionario.h"  //Form3
#include "UCadastroNatural.h" //Form4
#include "UCadClienteContribuintePJ.h" //Form5
#include "UConsAtuaExcSocio.h" //Form6
#include "UTipoConsultaSocio.h" //Form7

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
TForm8 *Form8;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
        : TForm(Owner)
{
}

//-------------------------------------------------------------------------
AnsiString vcod3,        VDT3;

//-------------------------------------------------------------------------
/* ===== FUNÇÕES ===== */
void LimpaHistorico()
{
Form8->Edit2->Clear();
Form8->Edit4->Clear();

Form8->MaskEdit1->Clear();
Form8->MaskEdit2->Clear();
Form8->MaskEdit3->Clear();
Form8->MaskEdit4->Clear();
Form8->Memo1->Clear();
}    
//-------------------------------------------------------------------------

void EscreveHistorico()
{
Form8->Edit4->ReadOnly = false;
Form8->MaskEdit1->ReadOnly = false;
Form8->MaskEdit2->ReadOnly = false;
Form8->Memo1->ReadOnly = false;
}
//-------------------------------------------------------------------------

void NaoEscreveHistorico()
{
Form8->Edit4->ReadOnly = true;
Form8->MaskEdit1->ReadOnly = true;
Form8->MaskEdit2->ReadOnly = true;
Form8->Memo1->ReadOnly = true;
}
//-------------------------------------------------------------------------

void ExibeSocioHistorico()
{
Form8->MaskEdit4->Text = Form1->Query1->FieldByName("CdHist")->AsString;
Form8->MaskEdit2->Text = Form1->Query1->FieldByName("CdSocHist")->AsString;
Form8->MaskEdit1->Text = Form1->Query1->FieldByName("DtHist")->AsString;
Form8->Memo1->Text = Form1->Query1->FieldByName("Hist")->AsString;
Form8->Edit4->Text = Form1->Query1->FieldByName("ObsHist")->AsString;

Form8->Edit2->Text = Form1->Query1->FieldByName("NmSoc")->AsString;
Form8->MaskEdit3->Text = Form1->Query1->FieldByName("DtNasc")->AsString;

}
//-------------------------------------------------------------------------
void SelecionaHistorico()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From Historico");
Form1->Query1->ExecSQL();
Form1->Query1->Open();

Form1->Query1->Last();
}
//-------------------------------------------------------------------------

void SelecionaHistoricoSocio()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Historico.CdHist,Historico.CdSocHist,Historico.DtHist,Historico.Hist,Historico.ObsHist From Socio, Historico Where Socio.CdSoc = Historico.CdSocHist Order By Historico.CdSocHist");
Form1->Query1->ExecSQL();
Form1->Query1->Open();

}

//-------------------------------------------------------------------------

void __fastcall TForm8::MaskEdit1Exit(TObject *Sender)
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



void __fastcall TForm8::MaskEdit2Exit(TObject *Sender)
{
vcod3 = 0;

if (MaskEdit2->Text != "     ")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit2->Text.c_str());

        try
        {
                vcod3 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código Digitado");
                return;
        }

        if (vcod3 > 0 && vcod3 <= 99999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                vcod3 = 0;
        }

}
else ShowMessage("Digite um Código Válido");

        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.NmSoc,Socio.DtNasc From Socio Where Socio.CdSoc = '"+vcod3+"'");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        Form8->Edit2->Text = Form1->Query1->FieldByName("NmSoc")->AsString;
        Form8->MaskEdit3->Text = Form1->Query1->FieldByName("DtNasc")->AsString;

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */
        if (Form1->DataSource1->DataSet->RecordCount == 0)
        {
                ShowMessage("Cadastrado Não Existente");
                MaskEdit2->Clear();
        }

}
//---------------------------------------------------------------------------


void __fastcall TForm8::DBNavigator1Click(TObject *Sender,
      TNavigateBtn Button)
{
ExibeSocioHistorico();
}
//---------------------------------------------------------------------------

void __fastcall TForm8::RadioGroup1Click(TObject *Sender)
{
LimpaHistorico();

/* === CdSocHist =====*/
if (RadioGroup1->ItemIndex == 0)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Historico.CdHist,Historico.CdSocHist,Historico.DtHist,Historico.Hist,Historico.ObsHist From Socio, Historico Where Socio.CdSoc = Historico.CdSocHist Order By Historico.CdHist");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        ExibeSocioHistorico();
}

/* === CdHist =====*/
if (RadioGroup1->ItemIndex == 1)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Historico.CdHist,Historico.CdSocHist,Historico.DtHist,Historico.Hist,Historico.ObsHist From Socio, Historico where Socio.CdSoc = Historico.CdSocHist Order By Historico.CdSocHist");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        ExibeSocioHistorico();

}

/* === DtHist =====*/
if (RadioGroup1->ItemIndex == 2)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Historico.CdHist,Historico.CdSocHist,Historico.DtHist,Historico.Hist,Historico.ObsHist From Socio, Historico where Socio.CdSoc = Historico.CdSocHist Order By Historico.CdSocHist");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        ExibeSocioHistorico();

}

}
//---------------------------------------------------------------------------

void __fastcall TForm8::SpeedButton1Click(TObject *Sender)
{

/* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D1 (MaskEdit1->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */
        if ( D1.DATAZERO() )
        {
               if (  D1.VERIFICADATA())
               {
                        VDT3 = D1.DT();
               }

               else
               {
                        ShowMessage("Verifique a Data do Histórico!!!");
                        MaskEdit1->Clear();
               }
        }

        else
        {
                ShowMessage("Verifique a Data do Histórico!!!");
                MaskEdit1->Clear();
        }

//----------------------------------------------------------------------------
if (MaskEdit2->Text != "")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit2->Text.c_str());

        try
        {
                vcod3 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código do Socio");
                return;
        }

        if (vcod3 > 0 && vcod3 <= 99999999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 999.999.99");
                vcod3 = 0;
        }
}
else ShowMessage("Digite um Código Válido para o Sócio");

//***************************************************************

if (MaskEdit2->Text == "")
        {ShowMessage("Histórico Não Cadastrado!!");}

else
{
        /* === SELECIONA O SÓCIO ==== */
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select * From Socio where CdSoc ='"+vcod3+"'");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */
        if ( Form1->DataSource1->DataSet->RecordCount== 1)
        {
                if( MaskEdit1->Text != "  /  /    ")
                {
                        Form1->Query1->Close();
                        Form1->Query1->SQL->Clear();
                        Form1->Query1->SQL->Add("Insert Into Historico(CdSocHist,DtHist,Hist,ObsHist) values ('"+vcod3+"','"+VDT3+"','"+Memo1->Text+"','"+Edit4->Text+"')");
                        Form1->Query1->ExecSQL();
                }
                else
                {
                        Form1->Query1->Close();
                        Form1->Query1->SQL->Clear();
                        Form1->Query1->SQL->Add("Insert Into Historico(CdSocHist,Hist,ObsHist) values ('"+vcod3+"','"+Memo1->Text+"','"+Edit4->Text+"')");
                        Form1->Query1->ExecSQL();
                }

                LimpaHistorico();
                ShowMessage("Histórico Cadastrado!!");
        }

        else
        {
                ShowMessage("Cadastrado Não Existente!!!");
                MaskEdit2->Clear();
        }
}// else

/*  === CÓDIGO DO PRÓXIMO RESUMO === */
SelecionaHistorico();
Form8->MaskEdit4->Text = Form1->Query1->FieldByName("CdHist")->AsInteger + 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::SpeedButton2Click(TObject *Sender)
{

/* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D1 (MaskEdit1->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D1.DATAZERO() )
        {
               if (  D1.VERIFICADATA())
               {
                        VDT3 = D1.DT();
               }

               else
               {
                        ShowMessage("Verifique a Data do Histórico!!!");
                        MaskEdit1->Clear();
               }
        }

        else
        {
                ShowMessage("Verifique a Data do Histórico!!!");
                MaskEdit1->Clear();
        }

//----------------------------------------------------------------------------
if (MaskEdit2->Text != "")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit2->Text.c_str());

        try
        {
                vcod3 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código do Socio");
                return;
        }

        if (vcod3 > 0 && vcod3 <= 99999999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 999.999.99");
                vcod3 = 0;
        }

}
else ShowMessage("Digite um Código Válido para o Sócio");

//------------------------------------------------------------------

if (MaskEdit2->Text == "")
        {ShowMessage("Histórico Não Atualizado!!");}

else
{
        if( MaskEdit1->Text != "  /  /    ")
        {
                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add("Update Historico Set CdSocHist = '"+vcod3+"',DtHist = '"+VDT3+"',Hist = '"+Memo1->Text+"',ObsHist = '"+Edit4->Text+"' Where CdHist = '"+MaskEdit4->Text+"' ");
                Form1->Query1->ExecSQL();
                Form1->Query1->Close();
        }
        else
        {
                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add("Update Historico Set CdSocHist = '"+vcod3+"',Hist = '"+Memo1->Text+"',ObsHist = '"+Edit4->Text+"' Where CdHist = '"+MaskEdit4->Text+"' ");
                Form1->Query1->ExecSQL();
                Form1->Query1->Close();
        }

        ShowMessage("Histórico Atualizado");

        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Historico.CdHist,Historico.CdSocHist,Historico.DtHist,Historico.Hist,Historico.ObsHist From Socio, Historico where Socio.CdSoc = Historico.CdSocHist Order By Historico.CdSocHist");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        
        LimpaHistorico();
}//else

ExibeSocioHistorico();
}
//---------------------------------------------------------------------------


void __fastcall TForm8::SpeedButton3Click(TObject *Sender)
{
Form9->Show();        
}
//---------------------------------------------------------------------------

void __fastcall TForm8::SpeedButton4Click(TObject *Sender)
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Historico.CdHist,Historico.CdSocHist,Historico.DtHist,Historico.Hist,Historico.ObsHist From Socio, Historico Where Socio.CdSoc = Historico.CdSocHist Order By Historico.CdSocHist");
Form1->Query1->ExecSQL();
Form1->Query1->Open();

ExibeSocioHistorico();
}
//---------------------------------------------------------------------------

void __fastcall TForm8::SpeedButton5Click(TObject *Sender)
{

if (MessageDlg("Deseja Excluir o Histórico?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Delete From Historico Where Historico.CdHist='"+MaskEdit4->Text+"'");
        Form1->Query1->ExecSQL();

        ShowMessage("Exclusão Concluída");
        LimpaHistorico();
       
}
else
        {ShowMessage("Exclusão Cancelada");}

Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Historico.CdHist,Historico.CdSocHist,Historico.DtHist,Historico.Hist,Historico.ObsHist From Socio, Historico where Socio.CdSoc = Historico.CdSocHist Order By Historico.CdSocHist");
Form1->Query1->ExecSQL();
Form1->Query1->Open();

ExibeSocioHistorico();
}
//---------------------------------------------------------------------------

void __fastcall TForm8::SpeedButton6Click(TObject *Sender)
{
LimpaHistorico();

//SE CADASTRAR
if ( SpeedButton1->Visible == true )
{
        /*  === CÓDIGO DO PRÓXIMO SÓCIO === */
        SelecionaHistorico();
        Form8->MaskEdit4->Text = Form1->Query1->FieldByName("CdHist")->AsInteger + 1;
}

//SE ATUALIZAR
if (SpeedButton2->Visible == true)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Historico.CdHist,Historico.CdSocHist,Historico.DtHist,Historico.Hist,Historico.ObsHist From Socio, Historico where Socio.CdSoc = Historico.CdSocHist Order By Historico.CdSocHist");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

}        
}
//---------------------------------------------------------------------------

void __fastcall TForm8::FormActivate(TObject *Sender)
{
/*== FECHA FORMULÁRIOS ==*/
Form2->Close();
Form3->Close();
Form4->Close();
Form5->Close();
Form6->Close();
Form7->Close();
//Form8->Close();
//Form9->Close();
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

SelecionaHistoricoSocio();
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Fechar1Click(TObject *Sender)
{
Form8->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm8::SairClick(TObject *Sender)
{
Form1->Sair->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm8::CadastrarHistoricoClick(TObject *Sender)
{
Form1->CadastrarHistorico->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm8::ConsultarHistoricoClick(TObject *Sender)
{
Form1->ConsultarHistorico->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm8::AtualizarHistoricoClick(TObject *Sender)
{
Form1->AtualizarHistorico->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm8::ExcluirHistoricoClick(TObject *Sender)
{
Form1->ExcluirHistorico->Click();
}
//---------------------------------------------------------------------------

