//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UTpConsultaDoacaoTel.h"//Form30

/* === FORMULÁRIOS === */
#include "UInicio.h" //Form1
#include "UDoacaoTeleMarketing.h"//Form29
#include "URelatorioDoacaoTel.h"//Form28

/* ===== DECLARAÇÃO DAS CLASSES ===== */
#include "Codigo.h"
#include "Data.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm30 *Form30;
//---------------------------------------------------------------------------
__fastcall TForm30::TForm30(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
/* ===== VARIÁVEIS ===== */
AnsiString vcod12,      VDT27,  VDT28;
AnsiString Caminho3;

//---------------------------------------------------------------------------

/* ===== FUNÇOES ===== */

void DesabilitaTpConsultaTel3()
{
Form30->RadioButton1->Checked = false;
Form30->RadioButton2->Checked = false;
Form30->RadioButton3->Checked = false;
Form30->RadioButton4->Checked = false;
Form30->RadioButton5->Checked = false;

Form30->MaskEdit1->Clear();
Form30->MaskEdit2->Clear();
Form30->MaskEdit3->Clear();
Form30->MaskEdit4->Clear();
Form30->MaskEdit5->Clear();
Form30->MaskEdit1->Enabled = false;
Form30->MaskEdit2->Enabled = false;
Form30->MaskEdit3->Enabled = false;
Form30->MaskEdit4->Enabled = false;
Form30->MaskEdit5->Enabled = false;

Form30->Edit1->Clear();
Form30->Edit2->Clear();
Form30->Edit3->Clear();
Form30->Edit1->Enabled = false;
Form30->Edit2->Enabled = false;
Form30->Edit3->Enabled = false;

Form30->Label1->Enabled = false;
Form30->Label2->Enabled = false;
Form30->Label3->Enabled = false;
}
//---------------------------------------------------------------------------

void ExibeSocioDoacaoTel_Copia()
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
void __fastcall TForm30::RadioButton1Click(TObject *Sender)
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

void __fastcall TForm30::RadioButton2Click(TObject *Sender)
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

void __fastcall TForm30::MaskEdit1Exit(TObject *Sender)
{
vcod12 = 0;

if (MaskEdit1->Text != "     ")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit1->Text.c_str());

        try
        {
                vcod12 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código Digitado");
                return;
        }

        if (vcod12 > 0 && vcod12 <= 99999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                vcod12 = 0;
        }

        /* == DESTRUINDO O OBJETO  == */
        C1.~CODIGO();
}
else ShowMessage("Digite um Código Válido");
}
//---------------------------------------------------------------------------

void __fastcall TForm30::FormActivate(TObject *Sender)
{
DesabilitaTpConsultaTel3();        
}
//---------------------------------------------------------------------------

void __fastcall TForm30::RadioButton3Click(TObject *Sender)
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

void __fastcall TForm30::RadioButton4Click(TObject *Sender)
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

void __fastcall TForm30::MaskEdit3Exit(TObject *Sender)
{
          vcod12 = 0;


if (MaskEdit3->Text != "     ")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit3->Text.c_str());

        try
        {
                vcod12 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código Digitado");
                return;
        }

        if (vcod12 > 0 && vcod12 <= 99999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                vcod12 = 0;
        }


        /* == DESTRUINDO O OBJETO  == */
        C1.~CODIGO();
}
else ShowMessage("Digite um Código Válido");
}
//---------------------------------------------------------------------------

void __fastcall TForm30::MaskEdit4Exit(TObject *Sender)
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

void __fastcall TForm30::MaskEdit5Exit(TObject *Sender)
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

void __fastcall TForm30::RadioButton5Click(TObject *Sender)
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

void __fastcall TForm30::SpeedButton1Click(TObject *Sender)
{

if(RadioButton1->Checked == false && RadioButton2->Checked == false && RadioButton3->Checked == false  && RadioButton4->Checked == false && RadioButton5->Checked == false)
        {
        ShowMessage("Escolha um Tipo de Consulta");
        }
else
{
   if(Form30->Caption == "Consulta de Doações TeleMarketing")
   {


        if (RadioButton1->Checked == true)
        {
                vcod12 = 0;

                if (MaskEdit1->Text != "     ")
                {
                        /* == CRIANDO O OBJETO  == */
                        CODIGO C1(MaskEdit1->Text.c_str());

                        try
                        {
                                vcod12 = StrToInt(C1.mostracodigo());
                        }
                        catch(...)
                        {
                                ShowMessage("Erro!!! Verifique o Código Digitado");
                                return;
                        }

                        if (vcod12 > 0 && vcod12 <= 99999)
                        ;

                        else
                        {
                                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                                vcod12 = 0;
                        }
                }
                else ShowMessage("Digite um Código Válido");

                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add ("Select * From DoacaoTeleMarketing Join TeleMarketing On (DoacaoTeleMarketing.CdSocDoaTel = TeleMarketing.CdDoa) Where DoacaoTeleMarketing.CdSocDoaTel = '"+vcod12+"' Order By DoacaoTeleMarketing.CdSocDoaTel ");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();
        }

        if (RadioButton2->Checked == true)
        {
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add ("Select TeleMarketing.CdDoa,TeleMarketing.NmDoa,TeleMarketing.DtNascDoa,DoacaoTeleMarketing.CdDoaTel,DoacaoTeleMarketing.CdSocDoaTel,DoacaoTeleMarketing.DtDoaTel,DoacaoTeleMarketing.VlDoaTel,DoacaoTeleMarketing.ObsDoaTel From DoacaoTeleMarketing Join TeleMarketing On (DoacaoTeleMarketing.CdSocDoaTel = TeleMarketing.CdDoa) Where TeleMarketing.NmDoa = '"+Edit1->Text+"' and TeleMarketing.MaeDoa = '"+Edit2->Text+"' Order By DoacaoTeleMarketing.CdSocDoaTel ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
        }

        if (RadioButton3->Checked == true)
        {
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add(" Select TeleMarketing.CdDoa,TeleMarketing.NmDoa,TeleMarketing.DtNascDoa,DoacaoTeleMarketing.CdDoaTel,DoacaoTeleMarketing.CdSocDoaTel,DoacaoTeleMarketing.DtDoaTel,DoacaoTeleMarketing.VlDoaTel,DoacaoTeleMarketing.ObsDoaTel From DoacaoTeleMarketing Join TeleMarketing On (DoacaoTeleMarketing.CdSocDoaTel = TeleMarketing.CdDoa) Where TeleMarketing.NmDoa = '"+Edit3->Text+"' and TeleMarketing.CnpjDoa = '"+MaskEdit2->Text+"' Order By DoacaoTeleMarketing.CdSocDoaTel ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
        }

        if (RadioButton4->Checked == true)
        {
                vcod12 = 0;
                if (MaskEdit3->Text != "     ")
                {
                        /* == CRIANDO O OBJETO  == */
                        CODIGO C1(MaskEdit3->Text.c_str());

                        try
                        {
                                vcod12 = StrToInt(C1.mostracodigo());
                        }
                        catch(...)
                        {
                                ShowMessage("Erro!!! Verifique o Código Digitado");
                                return;
                        }

                        if (vcod12 > 0 && vcod12 <= 99999)
                        ;

                        else
                        {
                                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                                vcod12 = 0;
                        }
                }
                else ShowMessage("Digite um Código Válido");

                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add (" Select * From DoacaoTeleMarketing Join TeleMarketing On (DoacaoTeleMarketing.CdSocDoaTel = TeleMarketing.CdDoa) Where DoacaoTeleMarketing.CdDoaTel ='"+vcod12+"' Order By DoacaoTeleMarketing.CdSocDoaTel ");
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
                                VDT27 = D1.DT();
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
                                VDT28 = D2.DT();
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
                Form1->Query1->SQL->Add (" Select * From DoacaoTeleMarketing Join TeleMarketing On (DoacaoTeleMarketing.CdSocDoaTel = TeleMarketing.CdDoa) Where DtDoaTel Between '"+VDT27+"' And '"+VDT28+"' Order By DoacaoTeleMarketing.CdSocDoaTel  ");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();
                }
        }

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */
        if ( Form1->DataSource1->DataSet->RecordCount == 0)
        {
                ShowMessage("Cadastrado Não Existente!!!");
                DesabilitaTpConsultaTel3();

                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add(" Select TeleMarketing.CdDoa,TeleMarketing.NmDoa,TeleMarketing.DtNascDoa,DoacaoTeleMarketing.CdDoaTel,DoacaoTeleMarketing.CdSocDoaTel,DoacaoTeleMarketing.DtDoaTel,DoacaoTeleMarketing.VlDoaTel,DoacaoTeleMarketing.ObsDoaTel From TeleMarketing, DoacaoTeleMarketing Where TeleMarketing.CdDoa = DoacaoTeleMarketing.CdSocDoaTel Order By DoacaoTeleMarketing.CdSocDoaTel ");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();

        }
        else
        {
                Form30->Close();
        }
        Form1->Query1->Active = true;
        ExibeSocioDoacaoTel_Copia();
   }




        /* ====== @@@@@@@@@@@@@ RELATÓRIO @@@@@@@@@@@@@ ======= */
   if(Form30->Caption == "Relatório de Doações TeleMarketing")
   {
        Caminho3 = ExtractFilePath(ParamStr(0));
        if (RadioButton1->Checked == true)
        {
                vcod12 = 0;

                if (MaskEdit1->Text != "     ")
                {
                        /* == CRIANDO O OBJETO  == */
                        CODIGO C1(MaskEdit1->Text.c_str());

                        try
                        {
                                vcod12 = StrToInt(C1.mostracodigo());
                        }
                        catch(...)
                        {
                                ShowMessage("Erro!!! Verifique o Código Digitado");
                                return;
                        }

                        if (vcod12 > 0 && vcod12 <= 99999)
                        ;

                        else
                        {
                                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                                vcod12 = 0;
                        }
                }
                else ShowMessage("Digite um Código Válido");

                Form28->Query1->Close();
                Form28->Query1->SQL->Clear();
                Form28->Query1->SQL->Add ("Select * From DoacaoTeleMarketing Join TeleMarketing On (DoacaoTeleMarketing.CdSocDoaTel = TeleMarketing.CdDoa) Where DoacaoTeleMarketing.CdSocDoaTel = '"+vcod12+"' Order By DoacaoTeleMarketing.CdSocDoaTel ");
                Form28->Query1->ExecSQL();
                Form28->Query1->Open();

        }

        if (RadioButton2->Checked == true)
        {
        Form28->Query1->Close();
        Form28->Query1->SQL->Clear();
        Form28->Query1->SQL->Add ("Select TeleMarketing.CdDoa,TeleMarketing.NmDoa,TeleMarketing.DtNascDoa,DoacaoTeleMarketing.CdDoaTel,DoacaoTeleMarketing.CdSocDoaTel,DoacaoTeleMarketing.DtDoaTel,DoacaoTeleMarketing.VlDoaTel,DoacaoTeleMarketing.ObsDoaTel From DoacaoTeleMarketing Join TeleMarketing On (DoacaoTeleMarketing.CdSocDoaTel = TeleMarketing.CdDoa) Where TeleMarketing.NmDoa = '"+Edit1->Text+"' and TeleMarketing.MaeDoa = '"+Edit2->Text+"' Order By DoacaoTeleMarketing.CdSocDoaTel ");
        Form28->Query1->ExecSQL();
        Form28->Query1->Open();
        }

        if (RadioButton3->Checked == true)
        {
        Form28->Query1->Close();
        Form28->Query1->SQL->Clear();
        Form28->Query1->SQL->Add(" Select TeleMarketing.CdDoa,TeleMarketing.NmDoa,TeleMarketing.DtNascDoa,DoacaoTeleMarketing.CdDoaTel,DoacaoTeleMarketing.CdSocDoaTel,DoacaoTeleMarketing.DtDoaTel,DoacaoTeleMarketing.VlDoaTel,DoacaoTeleMarketing.ObsDoaTel From DoacaoTeleMarketing Join TeleMarketing On (DoacaoTeleMarketing.CdSocDoaTel = TeleMarketing.CdDoa) Where TeleMarketing.NmDoa = '"+Edit3->Text+"' and TeleMarketing.CnpjDoa = '"+MaskEdit2->Text+"' Order By DoacaoTeleMarketing.CdSocDoaTel ");
        Form28->Query1->ExecSQL();
        Form28->Query1->Open();
        }

        if (RadioButton4->Checked == true)
        {
                vcod12 = 0;
                if (MaskEdit3->Text != "     ")
                {
                        /* == CRIANDO O OBJETO  == */
                        CODIGO C1(MaskEdit3->Text.c_str());

                        try
                        {
                                vcod12 = StrToInt(C1.mostracodigo());
                        }
                        catch(...)
                        {
                                ShowMessage("Erro!!! Verifique o Código Digitado");
                                return;
                        }

                        if (vcod12 > 0 && vcod12 <= 99999)
                        ;

                        else
                        {
                                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                                vcod12 = 0;
                        }
                }
                else ShowMessage("Digite um Código Válido");

                Form28->Query1->Close();
                Form28->Query1->SQL->Clear();
                Form28->Query1->SQL->Add (" Select * From DoacaoTeleMarketing Join TeleMarketing On (DoacaoTeleMarketing.CdSocDoaTel = TeleMarketing.CdDoa) Where DoacaoTeleMarketing.CdDoaTel ='"+vcod12+"' Order By DoacaoTeleMarketing.CdSocDoaTel ");
                Form28->Query1->ExecSQL();
                Form28->Query1->Open();
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
                                VDT27 = D1.DT();
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
                                VDT28 = D2.DT();
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
                Form28->Query1->Close();
                Form28->Query1->SQL->Clear();
                Form28->Query1->SQL->Add (" Select * From DoacaoTeleMarketing Join TeleMarketing On (DoacaoTeleMarketing.CdSocDoaTel = TeleMarketing.CdDoa) Where DtDoaTel Between '"+VDT27+"' And '"+VDT28+"' Order By DoacaoTeleMarketing.CdSocDoaTel  ");
                Form28->Query1->ExecSQL();
                Form28->Query1->Open();
                }
        }

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */
        if ( Form28->DataSource1->DataSet->RecordCount == 0)
        {
                ShowMessage("Cadastrado Não Existente!!!");
                DesabilitaTpConsultaTel3();

                Form28->Query1->Close();
                Form28->Query1->SQL->Clear();
                Form28->Query1->SQL->Add(" Select TeleMarketing.CdDoa,TeleMarketing.NmDoa,TeleMarketing.DtNascDoa,DoacaoTeleMarketing.CdDoaTel,DoacaoTeleMarketing.CdSocDoaTel,DoacaoTeleMarketing.DtDoaTel,DoacaoTeleMarketing.VlDoaTel,DoacaoTeleMarketing.ObsDoaTel From TeleMarketing, DoacaoTeleMarketing Where TeleMarketing.CdDoa = DoacaoTeleMarketing.CdSocDoaTel Order By DoacaoTeleMarketing.CdSocDoaTel ");
                Form28->Query1->ExecSQL();
                Form28->Query1->Open();

        }
        else
        {
                Form28->QuickRep1->Page->Orientation = poLandscape;
                Form28->QRImage1->Picture->LoadFromFile(Caminho3+"Logotipo.bmp");
                Form28->QuickRep1->Preview();
        }
        Form28->Query1->Active = true;
   }
}//ELSE
}
//---------------------------------------------------------------------------

