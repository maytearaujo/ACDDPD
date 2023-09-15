//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UTpConsultaDoacao.h" //For11

/* === FORMULÁRIOS === */
#include "UInicio.h" //Form1
#include "UDoacao.h" //Form10

/* ===== DECLARAÇÃO DAS CLASSES ===== */
#include "Codigo.h"
#include "Data.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm11 *Form11;
//---------------------------------------------------------------------------
__fastcall TForm11::TForm11(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

/* ===== VARIÁVEIS ===== */
AnsiString vcod1 = 0,   VDT1,  VDT2  ;

//---------------------------------------------------------------------------

/* ===== FUNÇOES ===== */

void DesabilitaTpConsulta3()
{
Form11->RadioButton1->Checked = false;
Form11->RadioButton2->Checked = false;
Form11->RadioButton3->Checked = false;
Form11->RadioButton4->Checked = false;
Form11->RadioButton5->Checked = false;

Form11->MaskEdit1->Clear();
Form11->MaskEdit2->Clear();
Form11->MaskEdit3->Clear();
Form11->MaskEdit4->Clear();
Form11->MaskEdit5->Clear();
Form11->MaskEdit1->Enabled = false;
Form11->MaskEdit2->Enabled = false;
Form11->MaskEdit3->Enabled = false;
Form11->MaskEdit4->Enabled = false;
Form11->MaskEdit5->Enabled = false;

Form11->Edit1->Clear();
Form11->Edit2->Clear();
Form11->Edit3->Clear();
Form11->Edit1->Enabled = false;
Form11->Edit2->Enabled = false;
Form11->Edit3->Enabled = false;

Form11->Label1->Enabled = false;
Form11->Label2->Enabled = false;
Form11->Label3->Enabled = false;
}
//---------------------------------------------------------------------------
void ExibeSocioDoacao_Copia()
{
Form10->MaskEdit1->Text = Form1->Query1->FieldByName("CdDoa")->AsString;
Form10->MaskEdit2->Text = Form1->Query1->FieldByName("CdSocDoa")->AsString;

Form10->RadioGroup1->Items->Text = Form1->Query1->FieldByName("TpDoa")->AsString;
Form10->RadioGroup1->ItemIndex = 0;

Form10->MaskEdit4->Text = Form1->Query1->FieldByName("DtDoa")->AsString;
Form10->MaskEdit5->Text = Form1->Query1->FieldByName("VlDoa")->AsString;
Form10->Edit2->Text = Form1->Query1->FieldByName("ObsDoa")->AsString;

Form10->Edit1->Text = Form1->Query1->FieldByName("NmSoc")->AsString;
Form10->MaskEdit3->Text = Form1->Query1->FieldByName("DtNasc")->AsString;

}
//---------------------------------------------------------------------------

void __fastcall TForm11::RadioButton1Click(TObject *Sender)
{
if (RadioButton1->Checked ==true)
{
        MaskEdit1->Enabled = true;   MaskEdit1->Clear();  MaskEdit1->SetFocus();
        Edit1->Enabled = false;      Edit1->Clear();      Edit2->Enabled = false;      Edit2->Clear();        Label1->Enabled = false;
        Edit3->Enabled = false;      Edit3->Clear();      MaskEdit2->Enabled = false;  MaskEdit2->Clear();    Label2->Enabled = false;
        MaskEdit3->Enabled = false;  MaskEdit3->Clear();
        MaskEdit4->Enabled = false;  MaskEdit4->Clear();  MaskEdit5->Enabled = false;  MaskEdit5->Clear();    Label3->Enabled = false;

}
}
//---------------------------------------------------------------------------

void __fastcall TForm11::RadioButton2Click(TObject *Sender)
{
if (RadioButton2->Checked ==true)
{
        MaskEdit1->Enabled = false;  MaskEdit1->Clear();
        Edit1->Enabled = true;       Edit1->Clear();      Edit2->Enabled = true;       Edit2->Clear();        Label1->Enabled = true;   Edit1->SetFocus();
        Edit3->Enabled = false;      Edit3->Clear();      MaskEdit2->Enabled = false;  MaskEdit2->Clear();    Label2->Enabled = false;
        MaskEdit3->Enabled = false;  MaskEdit3->Clear();
        MaskEdit4->Enabled = false;  MaskEdit4->Clear();  MaskEdit5->Enabled = false;  MaskEdit5->Clear();    Label3->Enabled = false;

}        
}
//---------------------------------------------------------------------------

void __fastcall TForm11::MaskEdit1Exit(TObject *Sender)
{
vcod1 = 0;

if (MaskEdit1->Text != "     ")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit1->Text.c_str());

        try
        {
                vcod1 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código Digitado");
                return;
        }

        if (vcod1 > 0 && vcod1 <= 99999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                vcod1 = 0;
        }

        /* == DESTRUINDO O OBJETO  == */
        C1.~CODIGO();
}
else ShowMessage("Digite um Código Válido");
}
//---------------------------------------------------------------------------

void __fastcall TForm11::FormActivate(TObject *Sender)
{       DesabilitaTpConsulta3();        }
//---------------------------------------------------------------------------

void __fastcall TForm11::RadioButton3Click(TObject *Sender)
{
if (RadioButton3->Checked ==true)
{
        MaskEdit1->Enabled = false;  MaskEdit1->Clear();
        Edit1->Enabled = false;       Edit1->Clear();      Edit2->Enabled = false;       Edit2->Clear();        Label1->Enabled = false;
        Edit3->Enabled = true;      Edit3->Clear();      MaskEdit2->Enabled = true;  MaskEdit2->Clear();    Label2->Enabled = true;  Edit3->SetFocus();
        MaskEdit3->Enabled = false;  MaskEdit3->Clear();
        MaskEdit4->Enabled = false;  MaskEdit4->Clear();  MaskEdit5->Enabled = false;  MaskEdit5->Clear();    Label3->Enabled = false;
}

}
//---------------------------------------------------------------------------

void __fastcall TForm11::RadioButton4Click(TObject *Sender)
{
if (RadioButton4->Checked ==true)
{
MaskEdit1->Enabled = false;  MaskEdit1->Clear();
Edit1->Enabled = false;       Edit1->Clear();     Edit2->Enabled = false;       Edit2->Clear();        Label1->Enabled = false;
Edit3->Enabled = false;      Edit3->Clear();        MaskEdit2->Enabled = false;  MaskEdit2->Clear();    Label2->Enabled = false;
MaskEdit3->Enabled = true;  MaskEdit3->Clear();  MaskEdit3->SetFocus();
MaskEdit4->Enabled = false;  MaskEdit4->Clear();  MaskEdit5->Enabled = false;  MaskEdit5->Clear();    Label3->Enabled = false;
}

}
//---------------------------------------------------------------------------

void __fastcall TForm11::MaskEdit3Exit(TObject *Sender)
{
vcod1 = 0;


if (MaskEdit3->Text != "     ")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit3->Text.c_str());

        try
        {
                vcod1 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código Digitado");
                return;
        }

        if (vcod1 > 0 && vcod1 <= 99999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                vcod1 = 0;
        }


        /* == DESTRUINDO O OBJETO  == */
        C1.~CODIGO();
}
else ShowMessage("Digite um Código Válido");
}
//---------------------------------------------------------------------------

void __fastcall TForm11::MaskEdit4Exit(TObject *Sender)
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

void __fastcall TForm11::MaskEdit5Exit(TObject *Sender)
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

void __fastcall TForm11::RadioButton5Click(TObject *Sender)
{
if (RadioButton5->Checked ==true)
{
MaskEdit1->Enabled = false;  MaskEdit1->Clear();
Edit1->Enabled = false;       Edit1->Clear();     Edit2->Enabled = false;       Edit2->Clear();        Label1->Enabled = false;
Edit3->Enabled = false;      Edit3->Clear();        MaskEdit2->Enabled = false;  MaskEdit2->Clear();    Label2->Enabled = false;
MaskEdit3->Enabled = false;  MaskEdit3->Clear();
MaskEdit4->Enabled = true;  MaskEdit4->Clear();  MaskEdit5->Enabled = true;  MaskEdit5->Clear();    Label3->Enabled = true;      MaskEdit4->SetFocus();
}

}
//---------------------------------------------------------------------------

void __fastcall TForm11::SpeedButton1Click(TObject *Sender)
{
if(RadioButton1->Checked == false && RadioButton2->Checked == false && RadioButton3->Checked == false  && RadioButton4->Checked == false && RadioButton5->Checked == false)
{       ShowMessage("Escolha um Tipo de Consulta");     }
else
{

        if (RadioButton1->Checked == true)
        {
                vcod1 = 0;

                if (MaskEdit1->Text != "     ")
                {
                        /* == CRIANDO O OBJETO  == */
                        CODIGO C1(MaskEdit1->Text.c_str());

                        try
                        {
                                vcod1 = StrToInt(C1.mostracodigo());
                        }
                        catch(...)
                        {
                                ShowMessage("Erro!!! Verifique o Código Digitado");
                                return;
                        }

                        if (vcod1 > 0 && vcod1 <= 99999)
                        ;

                        else
                        {
                                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                                vcod1 = 0;
                        }
                }
                else ShowMessage("Digite um Código Válido");

                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add ("Select * From Doacao Join Socio On (Doacao.CdSocDoa = Socio.CdSoc) Where Doacao.CdSocDoa = '"+vcod1+"' Order By Doacao.CdSocDoa ");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();
        }

        if (RadioButton2->Checked == true)
        {
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add ("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Doacao.CdDoa,Doacao.CdSocDoa,Doacao.TpDoa,Doacao.DtDoa,Doacao.VlDoa,Doacao.ObsDoa From Doacao Join Socio On (Doacao.CdSocDoa = Socio.CdSoc) Where Socio.NmSoc = '"+Edit1->Text+"' and Socio.MaeSoc = '"+Edit2->Text+"' Order By Doacao.CdSocDoa ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
        }

        if (RadioButton3->Checked == true)
        {
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add(" Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Doacao.CdDoa,Doacao.CdSocDoa,Doacao.TpDoa,Doacao.DtDoa,Doacao.VlDoa,Doacao.ObsDoa From Doacao Join Socio On (Doacao.CdSocDoa = Socio.CdSoc) Where Socio.NmSoc = '"+Edit3->Text+"' and Socio.CnpjSoc = '"+MaskEdit2->Text+"' Order By Doacao.CdSocDoa ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
        }

        if (RadioButton4->Checked == true)
        {
                vcod1 = 0;
                if (MaskEdit3->Text != "     ")
                {
                        /* == CRIANDO O OBJETO  == */
                        CODIGO C1(MaskEdit3->Text.c_str());

                        try
                        {
                                vcod1 = StrToInt(C1.mostracodigo());
                        }
                        catch(...)
                        {
                                ShowMessage("Erro!!! Verifique o Código Digitado");
                                return;
                        }

                        if (vcod1 > 0 && vcod1 <= 99999)
                        ;

                        else
                        {
                                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                                vcod1 = 0;
                        }
                }
                else ShowMessage("Digite um Código Válido");

                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add (" Select * From Doacao Join Socio On (Doacao.CdSocDoa = Socio.CdSoc) Where Doacao.CdDoa ='"+vcod1+"' Order By Doacao.CdSocDoa ");
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
                                VDT1 = D1.DT();
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
                                VDT2 = D2.DT();
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
                Form1->Query1->SQL->Add (" Select * From Doacao Join Socio On (Doacao.CdSocDoa = Socio.CdSoc) Where DtDoa Between '"+VDT1+"' And '"+VDT2+"' Order By Doacao.CdSocDoa  ");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();
                }
        }

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */
        if ( Form1->DataSource1->DataSet->RecordCount == 0)
        {
                ShowMessage("Cadastrado Não Existente!!!");
                DesabilitaTpConsulta3();

                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add(" Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Doacao.CdDoa,Doacao.CdSocDoa,Doacao.TpDoa,Doacao.DtDoa,Doacao.VlDoa,Doacao.ObsDoa From Socio, Doacao where Socio.CdSoc = Doacao.CdSocDoa Order By Doacao.CdSocDoa ");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();

        }
        else
        {       Form11->Close();        }

}
        Form1->Query1->Active = true;
        ExibeSocioDoacao_Copia();        
}
//---------------------------------------------------------------------------



