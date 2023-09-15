//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UTpConsultaServico.h"//  Form15

/* === FORMULÁRIOS === */
#include "UInicio.h" //Form1
#include "UServico.h" //Form14

/* ===== DECLARAÇÃO DAS CLASSES ===== */
#include "Codigo.h"
#include "Data.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm15 *Form15;
//---------------------------------------------------------------------------
__fastcall TForm15::TForm15(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
/* ===== VARIÁVEIS ===== */
AnsiString vcod9 = 0,   VDT21 ;
//---------------------------------------------------------------------------

/* ===== FUNÇOES ===== */

void DesabilitaTpConsulta5()
{
Form15->RadioButton1->Checked = false;
Form15->RadioButton2->Checked = false;
Form15->RadioButton3->Checked = false;
Form15->RadioButton4->Checked = false;
Form15->RadioButton5->Checked = false;

Form15->MaskEdit1->Clear();
Form15->MaskEdit2->Clear();
Form15->MaskEdit3->Clear();
Form15->MaskEdit4->Clear();

Form15->MaskEdit1->Enabled = false;
Form15->MaskEdit2->Enabled = false;
Form15->MaskEdit3->Enabled = false;
Form15->MaskEdit4->Enabled = false;


Form15->Edit1->Clear();
Form15->Edit2->Clear();
Form15->Edit3->Clear();
Form15->Edit1->Enabled = false;
Form15->Edit2->Enabled = false;
Form15->Edit3->Enabled = false;

Form15->Label1->Enabled = false;
Form15->Label2->Enabled = false;

}
//-------------------------------------------------------------------------
void SelecionaSocioServico_Copia2()
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Servico.CdServ,Servico.CdSocServ,Servico.TpServ,Servico.DtPedServ,Servico.DtEntServ,Servico.HrIniServ,Servico.HrFimServ,Servico.EstabServ,Servico.RespServ,Servico.MedServ,Servico.QtDegServ,Servico.EventServ,Servico.VlServ,Servico.CheqServ,Servico.ModServ,Servico.DefServ,Servico.ObsServ From Socio, Servico Where Socio.CdSoc = Servico.CdSocServ Order By Servico.CdSocServ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
}
//-------------------------------------------------------------------------
void ExibeSocioServico_Copia2()
{
Form14->MaskEdit1->Text = Form1->Query1->FieldByName("CdServ")->AsString;
Form14->MaskEdit2->Text = Form1->Query1->FieldByName("CdSocServ")->AsString;
Form14->Label20->Caption = Form1->Query1->FieldByName("TpServ")->AsString;
Form14->MaskEdit3->Text = Form1->Query1->FieldByName("DtPedServ")->AsString;
Form14->MaskEdit4->Text = Form1->Query1->FieldByName("DtEntServ")->AsString;
Form14->MaskEdit5->Text = Form1->Query1->FieldByName("HrIniServ")->AsString;
Form14->MaskEdit6->Text = Form1->Query1->FieldByName("HrFimServ")->AsString;
Form14->Edit1->Text = Form1->Query1->FieldByName("EstabServ")->AsString;
Form14->Edit2->Text = Form1->Query1->FieldByName("RespServ")->AsString;
Form14->Edit3->Text = Form1->Query1->FieldByName("EventServ")->AsString;
Form14->MaskEdit7->Text = Form1->Query1->FieldByName("QtDegServ")->AsString;
Form14->Edit4->Text = Form1->Query1->FieldByName("MedServ")->AsString;
Form14->MaskEdit8->Text = Form1->Query1->FieldByName("VlServ")->AsString;
Form14->Edit5->Text = Form1->Query1->FieldByName("CheqServ")->AsString;
Form14->Edit6->Text = Form1->Query1->FieldByName("ModServ")->AsString;
Form14->Edit7->Text = Form1->Query1->FieldByName("DefServ")->AsString;
Form14->Edit8->Text = Form1->Query1->FieldByName("ObsServ")->AsString;

Form14->Edit9->Text = Form1->Query1->FieldByName("NmSoc")->AsString;
Form14->MaskEdit9->Text = Form1->Query1->FieldByName("DtNasc")->AsString;
}
//-------------------------------------------------------------------------
void __fastcall TForm15::RadioButton1Click(TObject *Sender)
{
if (RadioButton1->Checked == true)
{
        MaskEdit1->Enabled = true;   MaskEdit1->Clear();  MaskEdit1->SetFocus();
        Edit1->Enabled = false;      Edit1->Clear();      Edit2->Enabled = false;      Edit2->Clear();        Label1->Enabled = false;
        Edit3->Enabled = false;      Edit3->Clear();      MaskEdit2->Enabled = false;  MaskEdit2->Clear();    Label2->Enabled = false;
        MaskEdit3->Enabled = false;  MaskEdit3->Clear();
        MaskEdit4->Enabled = false;  MaskEdit4->Clear();

}
}
//---------------------------------------------------------------------------
void __fastcall TForm15::RadioButton2Click(TObject *Sender)
{
if (RadioButton2->Checked ==true)
{
        MaskEdit1->Enabled = false;  MaskEdit1->Clear();
        Edit1->Enabled = true;       Edit1->Clear();      Edit2->Enabled = true;       Edit2->Clear();        Label1->Enabled = true;   Edit1->SetFocus();
        Edit3->Enabled = false;      Edit3->Clear();      MaskEdit2->Enabled = false;  MaskEdit2->Clear();    Label2->Enabled = false;
        MaskEdit3->Enabled = false;  MaskEdit3->Clear();
        MaskEdit4->Enabled = false;  MaskEdit4->Clear();

}
}
//---------------------------------------------------------------------------
void __fastcall TForm15::RadioButton3Click(TObject *Sender)
{
if (RadioButton3->Checked ==true)
{
        MaskEdit1->Enabled = false;  MaskEdit1->Clear();
        Edit1->Enabled = false;       Edit1->Clear();      Edit2->Enabled = false;       Edit2->Clear();        Label1->Enabled = false;
        Edit3->Enabled = true;      Edit3->Clear();      MaskEdit2->Enabled = true;  MaskEdit2->Clear();    Label2->Enabled = true;  Edit3->SetFocus();
        MaskEdit3->Enabled = false;  MaskEdit3->Clear();
        MaskEdit4->Enabled = false;  MaskEdit4->Clear();  

}
}
//---------------------------------------------------------------------------
void __fastcall TForm15::RadioButton4Click(TObject *Sender)
{
if (RadioButton4->Checked ==true)
{
MaskEdit1->Enabled = false;  MaskEdit1->Clear();
Edit1->Enabled = false;       Edit1->Clear();     Edit2->Enabled = false;       Edit2->Clear();        Label1->Enabled = false;
Edit3->Enabled = false;      Edit3->Clear();        MaskEdit2->Enabled = false;  MaskEdit2->Clear();    Label2->Enabled = false;
MaskEdit3->Enabled = true;  MaskEdit3->Clear();  MaskEdit3->SetFocus();
MaskEdit4->Enabled = false;  MaskEdit4->Clear();  

}

}
//---------------------------------------------------------------------------
void __fastcall TForm15::RadioButton5Click(TObject *Sender)
{
if (RadioButton5->Checked ==true)
{
MaskEdit1->Enabled = false;  MaskEdit1->Clear();
Edit1->Enabled = false;       Edit1->Clear();     Edit2->Enabled = false;       Edit2->Clear();        Label1->Enabled = false;
Edit3->Enabled = false;      Edit3->Clear();        MaskEdit2->Enabled = false;  MaskEdit2->Clear();    Label2->Enabled = false;
MaskEdit3->Enabled = false;  MaskEdit3->Clear();
MaskEdit4->Enabled = true;  MaskEdit4->Clear();         MaskEdit4->SetFocus();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm15::FormActivate(TObject *Sender)
{
DesabilitaTpConsulta5();
}
//---------------------------------------------------------------------------
void __fastcall TForm15::MaskEdit1Exit(TObject *Sender)
{
vcod9 = 0;

if (MaskEdit1->Text != "     ")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit1->Text.c_str());

        try
        {
                vcod9 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código Digitado");
                return;
        }

        if (vcod9 > 0 && vcod9 <= 99999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                vcod9 = 0;
        }

        /* == DESTRUINDO O OBJETO  == */
        C1.~CODIGO();
}
else ShowMessage("Digite um Código Válido");
}
//---------------------------------------------------------------------------
void __fastcall TForm15::MaskEdit3Exit(TObject *Sender)
{
vcod9 = 0;

if (MaskEdit3->Text != "     ")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit3->Text.c_str());

        try
        {
                vcod9 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código Digitado");
                return;
        }

        if (vcod9 > 0 && vcod9 <= 99999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                vcod9 = 0;
        }


        /* == DESTRUINDO O OBJETO  == */
        C1.~CODIGO();
}
else ShowMessage("Digite um Código Válido");
}
//---------------------------------------------------------------------------
void __fastcall TForm15::MaskEdit4Exit(TObject *Sender)
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
void __fastcall TForm15::SpeedButton1Click(TObject *Sender)
{

if(RadioButton1->Checked == false && RadioButton2->Checked == false && RadioButton3->Checked == false  && RadioButton4->Checked == false && RadioButton5->Checked == false)
{
        ShowMessage("Escolha um Tipo de Consulta");
}
else
{
        if (RadioButton1->Checked == true)
        {
                vcod9 = 0;

                if (MaskEdit1->Text != "     ")
                {
                        /* == CRIANDO O OBJETO  == */
                        CODIGO C1(MaskEdit1->Text.c_str());

                        try
                        {       vcod9 = StrToInt(C1.mostracodigo());    }
                        catch(...)
                        {
                                ShowMessage("Erro!!! Verifique o Código Digitado");
                                return;
                        }

                        if (vcod9 > 0 && vcod9 <= 99999)
                        ;

                        else
                        {
                                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                                vcod9 = 0;
                        }
                }
                else ShowMessage("Digite um Código Válido");

                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add ("Select * From Servico Join Socio On (Servico.CdSocServ = Socio.CdSoc) Where Servico.CdSocServ = '"+vcod9+"' Order By Servico.CdSocServ");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();

        }

        if (RadioButton2->Checked == true)
        {
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add ("Select * From Servico Join Socio On (Servico.CdSocServ = Socio.CdSoc) Where Socio.NmSoc = '"+Edit1->Text+"' and Socio.MaeSoc = '"+Edit2->Text+"' Order By Servico.CdSocServ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
        }

        if (RadioButton3->Checked == true)
        {
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add ("Select * From Servico Join Socio On (Servico.CdSocServ = Socio.CdSoc) Where Socio.NmSoc = '"+Edit3->Text+"' and Socio.CnpjSoc = '"+MaskEdit2->Text+"' Order By Servico.CdSocServ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
        }

        if (RadioButton4->Checked == true)
        {
                vcod9 = 0;

                if (MaskEdit3->Text != "     ")
                {
                        /* == CRIANDO O OBJETO  == */
                        CODIGO C1(MaskEdit3->Text.c_str());

                        try
                        {       vcod9 = StrToInt(C1.mostracodigo());    }
                        catch(...)
                        {
                                ShowMessage("Erro!!! Verifique o Código Digitado");
                                return;
                        }

                        if (vcod9 > 0 && vcod9 <= 99999)
                        ;

                        else
                        {
                                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                                vcod9 = 0;
                        }

                }
                else ShowMessage("Digite um Código Válido");

                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add ("Select * From Servico Join Socio On (Servico.CdSocServ = Socio.CdSoc) Where Servico.CdServ = '"+vcod9+"' Order By Servico.CdSocServ");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();
        }

        if (RadioButton5->Checked == true)
        {
                        //-------------------------------------------------------------
                /* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
                DATA D1 (MaskEdit4->Text.c_str());

                /* === VERIFICA SE A DATA É VÁLIDA === */

                if ( D1.DATAZERO() )
                {
                       if (  D1.VERIFICADATA())
                       {
                                VDT21 = D1.DT();
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
                if ( MaskEdit4->Text != "" )
                {
                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add ("Select * From Servico Join Socio On (Servico.CdSocServ = Socio.CdSoc) Where Servico.DtPedServ = '"+VDT21+"' Order By Servico.CdSocServ");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();
                }
        }

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */
        if ( Form1->DataSource1->DataSet->RecordCount == 0)
        {
                ShowMessage("Cadastrado Não Existente!!!");
                DesabilitaTpConsulta5();

                SelecionaSocioServico_Copia2();

        }
        else
        {
               // ExibeSocioDoacao_Copia();
                Form15->Close();
        }
}
Form1->Query1->Active = true;
ExibeSocioServico_Copia2();

}
//---------------------------------------------------------------------------

