//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UTpConsultaAtividade.h"  //Form13

/* === FORMULÁRIOS === */
#include "UInicio.h" //Form1
#include "UAtividade.h" //Form12


/* ===== DECLARAÇÃO DAS CLASSES ===== */
#include "Codigo.h"
#include "Data.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm13 *Form13;
//---------------------------------------------------------------------------
__fastcall TForm13::TForm13(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
/* ===== VARIÁVEIS ===== */
AnsiString vcod7 = 0,   VDT17,  VDT18  ;

//---------------------------------------------------------------------------

/* ===== FUNÇOES ===== */

void DesabilitaTpConsulta4()
{
Form13->RadioButton1->Checked = false;
Form13->RadioButton2->Checked = false;
Form13->RadioButton4->Checked = false;
Form13->RadioButton5->Checked = false;

Form13->MaskEdit1->Clear();
Form13->MaskEdit3->Clear();
Form13->MaskEdit4->Clear();
Form13->MaskEdit5->Clear();

Form13->MaskEdit1->Enabled = false;
Form13->MaskEdit3->Enabled = false;
Form13->MaskEdit4->Enabled = false;
Form13->MaskEdit5->Enabled = false;

Form13->Edit1->Clear();
Form13->Edit2->Clear();
Form13->Edit1->Enabled = false;
Form13->Edit2->Enabled = false;

Form13->Label1->Enabled = false;
Form13->Label3->Enabled = false;
}
//---------------------------------------------------------------------------[
void ExibeSocioAtividade_Copia()
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

//---------------------------------------------------------------------------[

void __fastcall TForm13::RadioButton1Click(TObject *Sender)
{
if (RadioButton1->Checked ==true)
{
        MaskEdit1->Enabled = true;        MaskEdit1->Clear();
        MaskEdit1->SetFocus();

        Edit1->Enabled = false;           Edit1->Clear();
        Edit2->Enabled = false;           Edit2->Clear();
        MaskEdit3->Enabled = false;       MaskEdit3->Clear();
        Label1->Enabled = false;          Label3->Enabled = false;
        MaskEdit4->Enabled = false;  MaskEdit5->Clear();
        MaskEdit5->Enabled = false;  
}
}
//---------------------------------------------------------------------------

void __fastcall TForm13::RadioButton2Click(TObject *Sender)
{
if (RadioButton2->Checked ==true)
{
        MaskEdit1->Enabled = false;     MaskEdit1->Clear();
        MaskEdit3->Enabled = false;     MaskEdit3->Clear();

        Edit1->Enabled = true;          Edit1->Clear();
        Edit1->SetFocus();

        Edit2->Enabled = true;          Edit2->Clear();
        Label1->Enabled = true;         Label3->Enabled = false;

        MaskEdit4->Enabled = false;  MaskEdit5->Clear();
        MaskEdit5->Enabled = false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm13::RadioButton4Click(TObject *Sender)
{
if (RadioButton4->Checked ==true)
{
        MaskEdit3->Enabled = true;   MaskEdit3->Clear();
        MaskEdit3->SetFocus();

        MaskEdit1->Enabled = false;  MaskEdit1->Clear();
        MaskEdit4->Clear();
        MaskEdit4->Enabled = false;  MaskEdit5->Clear();
        MaskEdit5->Enabled = false;
        Edit1->Enabled = false;      Edit1->Clear();
        Edit2->Enabled = false;      Edit2->Clear();
        Label1->Enabled = false;     Label3->Enabled = false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm13::RadioButton5Click(TObject *Sender)
{
if (RadioButton5->Checked ==true)
{
        MaskEdit1->Enabled = false;  MaskEdit1->Clear();

        Edit1->Enabled = false;      Edit1->Clear();
        Edit2->Enabled = false;      Edit2->Clear();

        MaskEdit4->Clear();
        Label1->Enabled = false;

        MaskEdit3->Enabled = false;   MaskEdit3->Clear();

        MaskEdit4->Enabled = true;    Label3->Enabled = true;
        MaskEdit5->Enabled = true;  MaskEdit4->SetFocus();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm13::MaskEdit1Exit(TObject *Sender)
{
vcod7 = 0;

if (MaskEdit1->Text != "     ")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit1->Text.c_str());

        try
        {
                vcod7 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código Digitado");
                return;
        }

        if (vcod7 > 0 && vcod7 <= 99999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                vcod7 = 0;
        }

        /* == DESTRUINDO O OBJETO  == */
        C1.~CODIGO();
}
else ShowMessage("Digite um Código Válido");
}
//---------------------------------------------------------------------------

void __fastcall TForm13::FormActivate(TObject *Sender)
{       DesabilitaTpConsulta4();        }
//---------------------------------------------------------------------------

void __fastcall TForm13::MaskEdit3Exit(TObject *Sender)
{
vcod7 = 0;

if (MaskEdit3->Text != "     ")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit3->Text.c_str());

        try
        {
                vcod7 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código Digitado");
                return;
        }

        if (vcod7 > 0 && vcod7 <= 99999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                vcod7 = 0;
        }

        /* == DESTRUINDO O OBJETO  == */
        C1.~CODIGO();
}
else ShowMessage("Digite um Código Válido");
}
//---------------------------------------------------------------------------

void __fastcall TForm13::MaskEdit4Exit(TObject *Sender)
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

void __fastcall TForm13::MaskEdit5Exit(TObject *Sender)
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

void __fastcall TForm13::SpeedButton1Click(TObject *Sender)
{
if(RadioButton1->Checked == false && RadioButton2->Checked == false  && RadioButton4->Checked == false && RadioButton5->Checked == false)
{
        ShowMessage("Escolha um Tipo de Consulta");
}
else
{
        if (RadioButton1->Checked == true)
        {
                vcod7 = 0;

                if (MaskEdit1->Text != "     ")
                {
                        /* == CRIANDO O OBJETO  == */
                        CODIGO C1(MaskEdit1->Text.c_str());

                        try
                        {       vcod7 = StrToInt(C1.mostracodigo());    }
                        catch(...)
                        {
                                ShowMessage("Erro!!! Verifique o Código Digitado");
                                return;
                        }

                        if (vcod7 > 0 && vcod7 <= 99999)
                        ;

                        else
                        {
                                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                                vcod7 = 0;
                        }

                }
                else ShowMessage("Digite um Código Válido");

                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add ("Select * From Atividade Join Socio On (Atividade.CdSocAtiv = Socio.CdSoc) Where Atividade.CdSocAtiv = '"+vcod7+"' Order By Atividade.CdSocAtiv");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();
        }

        if (RadioButton2->Checked == true)
        {
                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add ("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Atividade.CdAtiv,Atividade.NmAtiv,Atividade.CdSocAtiv,Atividade.DtIniAtiv,Atividade.DtFimAtiv,Atividade.DiasAtiv,Atividade.HrIniAtiv,Atividade.HrFimAtiv,Atividade.ObsAtiv From Atividade Join Socio On (Atividade.CdSocAtiv = Socio.CdSoc) Where Socio.NmSoc = '"+Edit1->Text+"' and Socio.MaeSoc = '"+Edit1->Text+"' Order By Atividade.CdSocAtiv ");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();

        }

        if (RadioButton4->Checked == true)
        {
                vcod7 = 0;

                if (MaskEdit3->Text != "     ")
                {
                        /* == CRIANDO O OBJETO  == */
                        CODIGO C1(MaskEdit3->Text.c_str());

                        try
                        {       vcod7 = StrToInt(C1.mostracodigo());    }
                        catch(...)
                        {
                                ShowMessage("Erro!!! Verifique o Código Digitado");
                                return;
                        }

                        if (vcod7 > 0 && vcod7 <= 99999)
                        ;

                        else
                        {
                                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                                vcod7 = 0;
                        }
                }
                else ShowMessage("Digite um Código Válido");

                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add ("Select * From Atividade Join Socio On (Atividade.CdSocAtiv = Socio.CdSoc) Where Atividade.CdAtiv = '"+vcod7+"' Order By Atividade.CdSocAtiv");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();
        }

         if (RadioButton5->Checked == true)
        {
                /* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
                DATA D1 (MaskEdit4->Text.c_str());

                /* === VERIFICA SE A DATA É VÁLIDA === */

                if ( D1.DATAZERO() )
                {
                       if (  D1.VERIFICADATA())
                       {
                                VDT17 = D1.DT();
                       }

                       else
                       {
                                ShowMessage("Verifique a Data Inicial!!!");
                                MaskEdit4->Clear();
                       }
                }

                else
                {
                        ShowMessage("Verifique a Data Inicial!!!");
                        MaskEdit4->Clear();
                }
                //-------------------------------------------------------------

                /* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
                DATA D2 (MaskEdit5->Text.c_str());

                /* === VERIFICA SE A DATA É VÁLIDA === */

                if ( D2.DATAZERO() )
                {
                       if (  D2.VERIFICADATA())
                       {
                                VDT18 = D2.DT();
                       }

                       else
                       {
                                ShowMessage("Verifique a Data Final!!!");
                                MaskEdit5->Clear();
                       }
                }

                else
                {
                        ShowMessage("Verifique a Data Final!!!");
                        MaskEdit5->Clear();
                }
                //-------------------------------------------------------------

                if ( MaskEdit4->Text !="" && MaskEdit5->Text !="" )
                {
                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add ("Select * From Atividade Join Socio On (Atividade.CdSocAtiv = Socio.CdSoc) Where Atividade.DtIniAtiv = '"+VDT17+"' And Atividade.DtFimAtiv = '"+VDT18+"' Order By Atividade.DtIniAtiv");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();
                }
        }

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */
        if ( Form1->DataSource1->DataSet->RecordCount == 0)
        {
                ShowMessage("Cadastrado Não Existente!!!");
                DesabilitaTpConsulta4();

                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Atividade.CdAtiv,Atividade.NmAtiv,Atividade.CdSocAtiv,Atividade.DtIniAtiv,Atividade.DtFimAtiv,Atividade.DiasAtiv,Atividade.HrIniAtiv,Atividade.HrFimAtiv,Atividade.ObsAtiv From Socio,Atividade Where Socio.CdSoc = Atividade.CdSocAtiv Order By Atividade.CdSocAtiv ");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();
        }
        else
        {       Form13->Close();        }

}
Form1->Query1->Active = true;
ExibeSocioAtividade_Copia();        
}
//---------------------------------------------------------------------------


