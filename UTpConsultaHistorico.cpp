//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UTpConsultaHistorico.h"//Form9

/* === FORMULÁRIOS === */
#include "UInicio.h" //Form1
#include "UHistorico.h" //Form8

/* ===== DECLARAÇÃO DAS CLASSES ===== */
#include "Codigo.h"
#include "Data.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
/* ===== VARIÁVEIS ===== */
AnsiString vcod = 0,    VDT15,  VDT16;

//---------------------------------------------------------------------------

/* ===== FUNÇOES ===== */

void DesabilitaTpConsulta2()
{
Form9->RadioButton1->Checked = false;
Form9->RadioButton2->Checked = false;
Form9->RadioButton3->Checked = false;
Form9->RadioButton4->Checked = false;

Form9->MaskEdit1->Enabled = false;
Form9->MaskEdit3->Enabled = false;

Form9->Edit1->Enabled = false;
Form9->Label1->Enabled = false;
Form9->Edit2->Enabled = false;

Form9->Edit3->Enabled = false;
Form9->Label2->Enabled = false;
Form9->MaskEdit2->Enabled = false;

Form9->MaskEdit1->Clear();
Form9->Edit1->Clear();
Form9->Edit2->Clear();
Form9->Edit3->Clear();
Form9->MaskEdit2->Clear();
Form9->MaskEdit3->Clear();
}
//---------------------------------------------------------------------------

void ExibeSocioHistorico_Copia()
{
Form8->MaskEdit4->Text = Form1->Query1->FieldByName("CdHist")->AsString;
Form8->MaskEdit2->Text = Form1->Query1->FieldByName("CdSocHist")->AsString;
Form8->MaskEdit1->Text = Form1->Query1->FieldByName("DtHist")->AsString;
Form8->Memo1->Text = Form1->Query1->FieldByName("Hist")->AsString;
Form8->Edit4->Text = Form1->Query1->FieldByName("ObsHist")->AsString;

Form8->Edit2->Text = Form1->Query1->FieldByName("NmSoc")->AsString;
Form8->MaskEdit3->Text = Form1->Query1->FieldByName("DtNasc")->AsString;

}
//---------------------------------------------------------------------------
void __fastcall TForm9::RadioButton1Click(TObject *Sender)
{
if (RadioButton1->Checked ==true)
{
        MaskEdit1->Enabled = true;        MaskEdit1->Clear();
        MaskEdit1->SetFocus();

        Edit1->Enabled = false;           Edit1->Clear();
        Edit2->Enabled = false;           Edit2->Clear();
        MaskEdit3->Enabled = false;       MaskEdit3->Clear();
        Label1->Enabled = false;
        MaskEdit2->Enabled = false;       MaskEdit2->Clear();
        Edit3->Enabled = false;           Edit3->Clear();
        MaskEdit4->Enabled = false;  MaskEdit5->Clear();
        MaskEdit5->Enabled = false;  MaskEdit2->Clear();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm9::RadioButton2Click(TObject *Sender)
{
if (RadioButton2->Checked ==true)
{
        MaskEdit1->Enabled = false;     MaskEdit1->Clear();
        MaskEdit3->Enabled = false;     MaskEdit3->Clear();

        Edit1->Enabled = true;          Edit1->Clear();
        Edit1->SetFocus();

        Edit2->Enabled = true;          Edit2->Clear();
        Label1->Enabled = true;
        MaskEdit2->Enabled = false;       MaskEdit2->Clear();
        Edit3->Enabled = false;           Edit3->Clear();
        MaskEdit4->Enabled = false;  MaskEdit5->Clear();
        MaskEdit5->Enabled = false;  MaskEdit2->Clear();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm9::MaskEdit1Exit(TObject *Sender)
{
vcod = 0;


if (MaskEdit1->Text != "     ")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit1->Text.c_str());

        try
        {
                vcod = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código Digitado");
                return;
        }

        if (vcod > 0 && vcod <= 99999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                vcod = 0;
        }
}
else ShowMessage("Digite um Código Válido");
}
//---------------------------------------------------------------------------
void __fastcall TForm9::FormActivate(TObject *Sender)
{
DesabilitaTpConsulta2();
}
//---------------------------------------------------------------------------
void __fastcall TForm9::RadioButton3Click(TObject *Sender)
{
if (RadioButton3->Checked ==true)
{
        MaskEdit1->Enabled = false;    MaskEdit1->Clear();
        MaskEdit3->Enabled = false;    MaskEdit3->Clear();

        Edit1->Enabled = false;        Edit1->Clear();
        Edit2->Enabled = false;        Edit2->Clear();
        Label1->Enabled = false;

        Edit3->Enabled = true;        Edit3->Clear();
        Edit3->SetFocus();
        Label2->Enabled = true;
        MaskEdit2->Enabled = true;    MaskEdit2->Clear();
        MaskEdit4->Enabled = false;  MaskEdit5->Clear();
        MaskEdit5->Enabled = false;  MaskEdit2->Clear();

}

}
//---------------------------------------------------------------------------
void __fastcall TForm9::RadioButton4Click(TObject *Sender)
{
if (RadioButton4->Checked ==true)
{
        MaskEdit3->Enabled = true;   MaskEdit3->Clear();
        MaskEdit3->SetFocus();

        MaskEdit1->Enabled = false;  MaskEdit1->Clear();
        MaskEdit2->Enabled = false;  MaskEdit4->Clear();
        MaskEdit4->Enabled = false;  MaskEdit5->Clear();
        MaskEdit5->Enabled = false;  MaskEdit2->Clear();
        Edit1->Enabled = false;      Edit1->Clear();
        Edit2->Enabled = false;      Edit2->Clear();
        Edit3->Enabled = false;      Edit3->Clear();
        Label1->Enabled = false;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm9::MaskEdit3Exit(TObject *Sender)
{
vcod = 0;


if (MaskEdit3->Text != "     ")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit3->Text.c_str());

        try
        {
                vcod = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código Digitado");
                return;
        }

        if (vcod > 0 && vcod <= 99999999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 99999999");
                vcod = 0;
        }

}
else ShowMessage("Digite um Código Válido");

}
//---------------------------------------------------------------------------
void __fastcall TForm9::RadioButton5Click(TObject *Sender)
{
if (RadioButton5->Checked ==true)
{
        MaskEdit1->Enabled = false;  MaskEdit1->Clear();

        Edit1->Enabled = false;      Edit1->Clear();
        Edit2->Enabled = false;      Edit2->Clear();

        Edit3->Enabled = false;      Edit3->Clear();
        MaskEdit2->Enabled = false;  MaskEdit4->Clear();
        Label1->Enabled = false;

        MaskEdit3->Enabled = false;   MaskEdit3->Clear();

        MaskEdit4->Enabled = true;
        MaskEdit5->Enabled = true;  MaskEdit4->SetFocus();

}                                            
}
//---------------------------------------------------------------------------

void __fastcall TForm9::MaskEdit4Exit(TObject *Sender)
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

void __fastcall TForm9::MaskEdit5Exit(TObject *Sender)
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

void __fastcall TForm9::SpeedButton1Click(TObject *Sender)
{

if(RadioButton1->Checked == false && RadioButton2->Checked == false && RadioButton3->Checked == false  && RadioButton4->Checked == false  && RadioButton5->Checked == false)
{
        ShowMessage("Escolha um Tipo de Consulta");
}
else
{
        /* == FAZ UMA ANIMAÇÃO === */
        Animate1->Visible = true;
        Animate1->Active = true;
        Sleep(2000);
        Animate1->Active = false;

        if (RadioButton1->Checked == true)
        {
                if (MaskEdit1->Text != "     ")
                {
                        /* == CRIANDO O OBJETO  == */
                        CODIGO C1(MaskEdit1->Text.c_str());

                        try
                        {
                                vcod = StrToInt(C1.mostracodigo());
                        }
                        catch(...)
                        {
                                ShowMessage("Erro!!! Verifique o Código Digitado");
                                return;
                        }

                        if (vcod > 0 && vcod <= 99999)
                        ;

                        else
                        {
                                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                                vcod = 0;
                        }

                }
                else ShowMessage("Digite um Código Válido");

                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add ("Select * From Historico Join Socio On (Historico.CdSocHist = Socio.CdSoc) Where Historico.CdSocHist ='"+vcod+"' Order By Historico.CdSocHist");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();

        }

        if (RadioButton2->Checked == true)
        {
                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add ("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Historico.CdHist,Historico.CdSocHist,Historico.DtHist,Historico.Hist,Historico.ObsHist From Historico Join Socio On (Historico.CdSocHist = Socio.CdSoc) Where Socio.NmSoc = '"+Edit1->Text+"' and Socio.MaeSoc = '"+Edit2->Text+"' Order By Historico.CdSocHist ");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();
        }

        if (RadioButton3->Checked == true)
        {
                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Historico.CdHist,Historico.CdSocHist,Historico.DtHist,Historico.Hist,Historico.ObsHist From Historico Join Socio On (Historico.CdSocHist = Socio.CdSoc) Where Socio.NmSoc = '"+Edit3->Text+"' and Socio.CnpjSoc = '"+MaskEdit2->Text+"' ");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();
        }

        if (RadioButton4->Checked == true)
        {

                vcod = 0;

                if (MaskEdit3->Text != "     ")
                {
                        /* == CRIANDO O OBJETO  == */
                        CODIGO C1(MaskEdit3->Text.c_str());

                        try
                        {       vcod = StrToInt(C1.mostracodigo());     }
                        catch(...)
                        {
                                ShowMessage("Erro!!! Verifique o Código Digitado");
                                return;
                        }

                        if (vcod > 0 && vcod <= 99999999)
                        ;

                        else
                        {
                                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 99999999");
                                vcod = 0;
                        }

                }
                else    {       ShowMessage("Digite um Código Válido");         }
                
                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add ("Select * From Historico Join Socio On (Historico.CdSocHist = Socio.CdSoc) Where Historico.CdHist ='"+vcod+"' Order By Historico.CdSocHist");
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
                                VDT15 = D1.DT();
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

                //----------------------------------------------------------------------------

                /* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
                DATA D2 (MaskEdit5->Text.c_str());

                /* === VERIFICA SE A DATA É VÁLIDA === */

                if ( D2.DATAZERO() )
                {
                       if (  D2.VERIFICADATA())
                       {
                                VDT16 = D2.DT();
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

                //----------------------------------------------------------------------------


                if ( MaskEdit4->Text !="" && MaskEdit5->Text !="" )
                {

                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add ("Select * From Historico Join Socio On (Historico.CdSocHist = Socio.CdSoc) Where DtHist Between '"+VDT15+"' And '"+VDT16+"' Order By Historico.DtHist");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();
                }
        }

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */
        if ( Form1->DataSource1->DataSet->RecordCount == 0)
        {
                ShowMessage("Cadastrado Não Existente!!!");
                DesabilitaTpConsulta2();

                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Historico.CdHist,Historico.CdSocHist,Historico.DtHist,Historico.Hist,Historico.ObsHist From Socio, Historico where Socio.CdSoc = Historico.CdSocHist Order By Historico.CdSocHist");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();

                Form1->Query1->Active = true;
                ExibeSocioHistorico_Copia();

        }
        else
        {
                ExibeSocioHistorico_Copia();
                Form9->Close();
        }
        Animate1->Visible = false;

}        
}
//---------------------------------------------------------------------------

