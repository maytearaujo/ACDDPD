//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UAtividade.h" //Form12

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
#include "Hora.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm12 *Form12;
//---------------------------------------------------------------------------
__fastcall TForm12::TForm12(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
AnsiString vcod4,       VDT13,  VDT14;  AnsiString vdias;
//---------------------------------------------------------------------------
/* ===== FUNÇÕES ===== */
void LimparAtividade()
{
Form12->MaskEdit1->Clear();
Form12->MaskEdit2->Clear();
Form12->MaskEdit3->Clear();
Form12->MaskEdit4->Clear();
Form12->MaskEdit5->Clear();
Form12->MaskEdit6->Clear();
Form12->MaskEdit7->Clear();

Form12->Edit1->Clear();
Form12->Edit2->Clear();
Form12->Edit3->Clear();

Form12->CheckBox1->Checked = false;
Form12->CheckBox2->Checked = false;
Form12->CheckBox3->Checked = false;
Form12->CheckBox4->Checked = false;
Form12->CheckBox5->Checked = false;
Form12->CheckBox6->Checked = false;
}
//-------------------------------------------------------------------------

void SelecionaAtividade()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From Atividade");
Form1->Query1->ExecSQL();
Form1->Query1->Open();

Form1->Query1->Last();
}
//-------------------------------------------------------------------------
void ExibeSocioAtividade()
{
Form12->MaskEdit1->Text = Form1->Query1->FieldByName("CdAtiv")->AsString;
Form12->MaskEdit2->Text = Form1->Query1->FieldByName("CdSocAtiv")->AsString;
Form12->MaskEdit4->Text = Form1->Query1->FieldByName("DtIniAtiv")->AsString;
Form12->MaskEdit5->Text = Form1->Query1->FieldByName("DtFimAtiv")->AsString;
Form12->MaskEdit6->Text = Form1->Query1->FieldByName("HrIniAtiv")->AsString;
Form12->MaskEdit7->Text = Form1->Query1->FieldByName("HrFimAtiv")->AsString;
Form12->Label8->Caption = Form1->Query1->FieldByName("DiasAtiv")->AsString;
Form12->Edit1->Text = Form1->Query1->FieldByName("NmAtiv")->AsString;
Form12->Edit3->Text = Form1->Query1->FieldByName("ObsAtiv")->AsString;

Form12->Edit2->Text = Form1->Query1->FieldByName("NmSoc")->AsString;
Form12->MaskEdit3->Text = Form1->Query1->FieldByName("DtNasc")->AsString;
}
//------------------------------------------------------------------------
void SelecionaSocioAtividade()
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Atividade.CdAtiv,Atividade.NmAtiv,Atividade.CdSocAtiv,Atividade.DtIniAtiv,Atividade.DtFimAtiv,Atividade.DiasAtiv,Atividade.HrIniAtiv,Atividade.HrFimAtiv,Atividade.ObsAtiv From Socio, Atividade Where Socio.CdSoc = Atividade.CdSocAtiv Order By Atividade.CdSocAtiv");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
}
//-------------------------------------------------------------------------

void __fastcall TForm12::MaskEdit4Exit(TObject *Sender)
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

void __fastcall TForm12::MaskEdit5Exit(TObject *Sender)
{
/* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D1 (MaskEdit5->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */
        if ( D1.DATAZERO() )
        {
               if (  D1.VERIFICADATA())
               ;
               else
               {
                ShowMessage("Verifique a Data Digitada!!!");
                MaskEdit5->Clear();
               }
        }

        else
        {
                ShowMessage("Verifique a Data Digitada!!!");
                MaskEdit5->Clear();
        }        
}
//---------------------------------------------------------------------------

void __fastcall TForm12::MaskEdit2Exit(TObject *Sender)
{
vcod4 = 0;

if (MaskEdit2->Text != "     ")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit2->Text.c_str());

        try
        {
                vcod4 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código Digitado");
                return;
        }

        if (vcod4 > 0 && vcod4 <= 99999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                vcod4 = 0;
        }

}
else ShowMessage("Digite um Código Válido");

        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.NmSoc,Socio.DtNasc From Socio Where Socio.CdSoc = '"+vcod4+"'");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        Form12->Edit2->Text = Form1->Query1->FieldByName("NmSoc")->AsString;
        Form12->MaskEdit3->Text = Form1->Query1->FieldByName("DtNasc")->AsString;

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */
        if (Form1->DataSource1->DataSet->RecordCount == 0)
        {
                ShowMessage("Cadastrado Não Existente!!!");
                MaskEdit2->Clear();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm12::RadioGroup1Click(TObject *Sender)
{
LimparAtividade();

if (RadioGroup1->ItemIndex == 0)
{       SelecionaSocioAtividade();      }

if (RadioGroup1->ItemIndex == 1)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Atividade.CdAtiv,Atividade.NmAtiv,Atividade.CdSocAtiv,Atividade.DtIniAtiv,Atividade.DtFimAtiv,Atividade.DiasAtiv,Atividade.HrIniAtiv,Atividade.HrFimAtiv,Atividade.ObsAtiv From Socio, Atividade Where Socio.CdSoc = Atividade.CdSocAtiv Order By Atividade.CdAtiv");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
}

if (RadioGroup1->ItemIndex == 2)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Atividade.CdAtiv,Atividade.NmAtiv,Atividade.CdSocAtiv,Atividade.DtIniAtiv,Atividade.DtFimAtiv,Atividade.DiasAtiv,Atividade.HrIniAtiv,Atividade.HrFimAtiv,Atividade.ObsAtiv From Socio, Atividade Where Socio.CdSoc = Atividade.CdSocAtiv Order By Atividade.DtIniAtiv");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
}

ExibeSocioAtividade();

}
//---------------------------------------------------------------------------

void __fastcall TForm12::DBNavigator1Click(TObject *Sender,
      TNavigateBtn Button)
{       ExibeSocioAtividade();  }
//---------------------------------------------------------------------------

void __fastcall TForm12::MaskEdit6Exit(TObject *Sender)
{

/* == CRIA O OBJETO QUE RECEBE A HORA DIGITADA == */
HORA H1(MaskEdit6->Text.c_str());

if ( H1.VERIFICAHORA() )
;
else
{
   MaskEdit6->Clear();
   ShowMessage("Verifique a Hora Digitada!!!");
}

}
//---------------------------------------------------------------------------

void __fastcall TForm12::MaskEdit7Exit(TObject *Sender)
{
/* == CRIA O OBJETO QUE RECEBE A HORA DIGITADA == */
HORA H1(MaskEdit7->Text.c_str());

if ( H1.VERIFICAHORA() )
;
else
{
   MaskEdit7->Clear();
   ShowMessage("Verifique a Hora Digitada!!!");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm12::SpeedButton1Click(TObject *Sender)
{

if (CheckBox1->Checked == true)
{ vdias = CheckBox1->Caption; }

if (CheckBox2->Checked == true)
{ vdias = vdias + " " + CheckBox2->Caption; }

if (CheckBox3->Checked == true)
{ vdias = vdias + " " + CheckBox3->Caption; }

if (CheckBox4->Checked == true)
{ vdias = vdias + " " + CheckBox4->Caption; }

if (CheckBox5->Checked == true)
{ vdias = vdias + " " + CheckBox5->Caption; }

if (CheckBox6->Checked == true)
{ vdias = vdias + " " + CheckBox6->Caption; }


//------------------------------------------------------------------------------
if (MaskEdit2->Text != "")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit2->Text.c_str());

        try
        {
                vcod4 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código do Socio");
                return;
        }

        if (vcod4 > 0 && vcod4 <= 99999999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 999.999.99");
                vcod4 = 0;
        }

}
else ShowMessage("Digite um Código Válido para o Sócio");

//----------------------------------------------------------------------------

/* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D1 (MaskEdit4->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */
        if ( D1.DATAZERO() )
        {
               if (  D1.VERIFICADATA())
               {
                        VDT13 = D1.DT();
               }

               else
               {
                        ShowMessage("Verifique a Data de Inicio!!!");
                        MaskEdit4->Clear();
               }
        }

        else
        {
                ShowMessage("Verifique a Data de Inicio!!!");
                MaskEdit4->Clear();
        }

//----------------------------------------------------------------------------
/* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D2 (MaskEdit5->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D2.DATAZERO() )
        {
               if (  D2.VERIFICADATA())
               {
                        VDT14 = D1.DT();
               }

               else
               {
                        ShowMessage("Verifique a Data de Conclusão!!!");
                        MaskEdit5->Clear();
               }
        }

        else
        {
                ShowMessage("Verifique a Data de Conclusão!!!");
                MaskEdit5->Clear();
        }

//----------------------------------------------------------------------------
/* == CRIA O OBJETO QUE RECEBE A HORA DIGITADA == */
HORA H1(MaskEdit6->Text.c_str());

if ( H1.VERIFICAHORA() )
;
else
{
   MaskEdit6->Clear();
   ShowMessage("Verifique o Horário de Inicio!!!");
}
//----------------------------------------------------------------------------
/* == CRIA O OBJETO QUE RECEBE A HORA DIGITADA == */
HORA H2(MaskEdit7->Text.c_str());

if ( H2.VERIFICAHORA() )
;
else
{
   MaskEdit7->Clear();
   ShowMessage("Verifique o Horário de Término!!!");
}
//----------------------------------------------------------------------------

if ( MaskEdit2->Text == "" ||
     MaskEdit4->Text == "  /  /    " ||
     MaskEdit6->Text == "  :  :  " ||
     MaskEdit7->Text == "  :  :  "
   )
        {ShowMessage("Atividade Não Cadastrada!!");}

else
{
        /* === SELECIONA O SÓCIO ==== */
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select * From Socio Where CdSoc ='"+vcod4+"'");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */
        if ( Form1->DataSource1->DataSet->RecordCount== 1)
        {

                if( MaskEdit4->Text != "  /  /    " && MaskEdit5->Text != "  /  /    " && MaskEdit6->Text != "  :  :  " && MaskEdit7->Text != "  :  :  " )
                {
                        Form1->Query1->Close();
                        Form1->Query1->SQL->Clear();
                        Form1->Query1->SQL->Add("Insert Into Atividade (NmAtiv,CdSocAtiv,DtIniAtiv,DtFimAtiv,DiasAtiv,HrIniAtiv,HrFimAtiv,ObsAtiv) Values ('"+Edit1->Text+"', '"+vcod4+"', '"+VDT13+"', '"+VDT14+"', '"+vdias+"', '"+MaskEdit6->Text+"', '"+MaskEdit7->Text+"', '"+Edit3->Text+"')");
                        Form1->Query1->ExecSQL();
                }

                if( MaskEdit4->Text != "  /  /    " && MaskEdit5->Text == "  /  /    " && MaskEdit6->Text != "  :  :  " && MaskEdit7->Text != "  :  :  " )
                {
                        Form1->Query1->Close();
                        Form1->Query1->SQL->Clear();
                        Form1->Query1->SQL->Add("Insert Into Atividade (NmAtiv,CdSocAtiv,DtIniAtiv,DiasAtiv,HrIniAtiv,HrFimAtiv,ObsAtiv) Values ('"+Edit1->Text+"', '"+vcod4+"', '"+VDT13+"', '"+vdias+"', '"+MaskEdit6->Text+"', '"+MaskEdit7->Text+"', '"+Edit3->Text+"')");
                        Form1->Query1->ExecSQL();
                }

                LimparAtividade();
                ShowMessage("Atividade Cadastrada!!");

        }
}

/*  === CÓDIGO DA PRÓXIMA MATRICULA === */
SelecionaAtividade();
MaskEdit1->Text = Form1->Query1->FieldByName("CdAtiv")->AsInteger + 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm12::SpeedButton2Click(TObject *Sender)
{
Form13->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TForm12::SpeedButton3Click(TObject *Sender)
{
if (CheckBox1->Checked == true)
{ vdias = CheckBox1->Caption; }

if (CheckBox2->Checked == true)
{ vdias = vdias + " " + CheckBox2->Caption; }

if (CheckBox3->Checked == true)
{ vdias = vdias + " " + CheckBox3->Caption; }

if (CheckBox4->Checked == true)
{ vdias = vdias + " " + CheckBox4->Caption; }

if (CheckBox5->Checked == true)
{ vdias = vdias + " " + CheckBox5->Caption; }

if (CheckBox6->Checked == true)
{ vdias = vdias + " " + CheckBox6->Caption; }


//------------------------------------------------------------------------------
if (MaskEdit2->Text != "")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit2->Text.c_str());

        try
        {
                vcod4 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código do Socio");
                return;
        }

        if (vcod4 > 0 && vcod4 <= 99999999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 999.999.99");
                vcod4 = 0;
        }

}
else ShowMessage("Digite um Código Válido para o Sócio");

//----------------------------------------------------------------------------

/* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D1 (MaskEdit4->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */
        if ( D1.DATAZERO() )
        {
               if (  D1.VERIFICADATA())
               {
                        VDT13 = D1.DT();
               }

               else
               {
                        ShowMessage("Verifique a Data de Inicio!!!");
                        MaskEdit4->Clear();
               }
        }

        else
        {
                ShowMessage("Verifique a Data de Inicio!!!");
                MaskEdit4->Clear();
        }

//----------------------------------------------------------------------------
/* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D2 (MaskEdit5->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D2.DATAZERO() )
        {
               if (  D2.VERIFICADATA())
               {
                        VDT14 = D1.DT();
               }

               else
               {
                        ShowMessage("Verifique a Data de Conclusão!!!");
                        MaskEdit5->Clear();
               }
        }

        else
        {
                ShowMessage("Verifique a Data de Conclusão!!!");
                MaskEdit5->Clear();
        }

//----------------------------------------------------------------------------
/* == CRIA O OBJETO QUE RECEBE A HORA DIGITADA == */
HORA H1(MaskEdit6->Text.c_str());

if ( H1.VERIFICAHORA() )
;
else
{
   MaskEdit6->Clear();
   ShowMessage("Verifique o Horário de Inicio!!!");
}
//----------------------------------------------------------------------------
/* == CRIA O OBJETO QUE RECEBE A HORA DIGITADA == */
HORA H2(MaskEdit7->Text.c_str());

if ( H2.VERIFICAHORA() )
;
else
{
   MaskEdit7->Clear();
   ShowMessage("Verifique o Horário de Término!!!");
}
//----------------------------------------------------------------------------

if ( MaskEdit2->Text == "" ||
     MaskEdit4->Text == "  /  /    " ||
     MaskEdit6->Text == "  :  :  " ||
     MaskEdit7->Text == "  :  :  "
   )
        {ShowMessage("Atividade Não Atualizada!!");}

else
{
        if( MaskEdit4->Text != "  /  /    " && MaskEdit5->Text != "  /  /    " && MaskEdit6->Text != "  :  :  " && MaskEdit7->Text != "  :  :  " )
        {
                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add("Update Atividade Set NmAtiv = '"+Edit1->Text+"', CdSocAtiv = '"+vcod4+"', DtIniAtiv = '"+VDT13+"', DtFimAtiv = '"+VDT14+"', DiasAtiv = '"+vdias+"', HrIniAtiv = '"+MaskEdit6->Text+"', HrFimAtiv = '"+MaskEdit7->Text+"', ObsAtiv = '"+Edit3->Text+"' Where CdAtiv = '"+MaskEdit1->Text+"'");
                Form1->Query1->ExecSQL();
        }

       if( MaskEdit4->Text != "  /  /    " && MaskEdit5->Text == "  /  /    " && MaskEdit6->Text != "  :  :  " && MaskEdit7->Text != "  :  :  " )
        {
                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add("Update Atividade Set NmAtiv = '"+Edit1->Text+"', CdSocAtiv = '"+vcod4+"', DtIniAtiv = '"+VDT13+"', DiasAtiv = '"+vdias+"', HrIniAtiv = '"+MaskEdit6->Text+"', HrFimAtiv = '"+MaskEdit7->Text+"', ObsAtiv = '"+Edit3->Text+"' Where CdAtiv = '"+MaskEdit1->Text+"'");
                Form1->Query1->ExecSQL();
        }

                LimparAtividade();
                ShowMessage("Atividade Atualizada!!");
                
}
SelecionaSocioAtividade();
ExibeSocioAtividade();        
}
//---------------------------------------------------------------------------

void __fastcall TForm12::SpeedButton4Click(TObject *Sender)
{

if (MessageDlg("Deseja Excluir o Cadastro na Atividade?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Delete from Atividade where Atividade.CdAtiv='"+MaskEdit1->Text+"'");
        Form1->Query1->ExecSQL();

        ShowMessage("Exclusão Concluída");
        LimparAtividade();
}
else
        {ShowMessage("Exclusão Cancelada");}

SelecionaSocioAtividade();
ExibeSocioAtividade();
        
}
//---------------------------------------------------------------------------

void __fastcall TForm12::SpeedButton5Click(TObject *Sender)
{
LimparAtividade();

//SE CADASTRAR
if ( SpeedButton1->Visible == true)
{
        /*  === CÓDIGO DA PRÓXIMA MATRICULA === */
        SelecionaAtividade();
        MaskEdit1->Text = Form1->Query1->FieldByName("CdAtiv")->AsInteger + 1;
}
        
}
//---------------------------------------------------------------------------

void __fastcall TForm12::SpeedButton6Click(TObject *Sender)
{
        LimparAtividade();
        SelecionaSocioAtividade();
        ExibeSocioAtividade();        
}
//---------------------------------------------------------------------------

void __fastcall TForm12::FormActivate(TObject *Sender)
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
//Form12->Close();
//Form13->Close();
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

SelecionaSocioAtividade();
}
//---------------------------------------------------------------------------

void __fastcall TForm12::Fechar1Click(TObject *Sender)
{
Form12->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm12::SairClick(TObject *Sender)
{
Form1->Sair->Click();        
}
//---------------------------------------------------------------------------

void __fastcall TForm12::CadastrarAtividadeClick(TObject *Sender)
{
Form1->CadastrarAtividade->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm12::ConsultarAtividadeClick(TObject *Sender)
{
Form1->ConsultarAtividade->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm12::AtualizarAtividadeClick(TObject *Sender)
{
Form1->AtualizarAtividade->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm12::ExcluirAtividadeClick(TObject *Sender)
{
Form1->ExcluirAtividade->Click();
}
//---------------------------------------------------------------------------

