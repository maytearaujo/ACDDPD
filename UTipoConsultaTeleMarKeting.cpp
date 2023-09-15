//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UTipoConsultaTeleMarKeting.h"//Form27;

/* === FORMULÁRIOS === */
#include "UInicio.h" //Form1
#include "UTeleMarketing.h"//Form26
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm27 *Form27;
//---------------------------------------------------------------------------
__fastcall TForm27::TForm27(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

/* ===== VARIÁVEIS ===== */
AnsiString vcod10 = 0,   VDT22,  VDT23  ;

/* ===== DECLARAÇÃO DAS CLASSES ===== */
#include "Codigo.h"
#include "Data.h"

//---------------------------------------------------------------------------

/* ===== FUNÇOES ===== */

void DesabilitaConsultaTeleMarketing()
{
Form27->RadioButton1->Checked = false;
Form27->RadioButton2->Checked = false;
Form27->RadioButton3->Checked = false;


Form27->MaskEdit1->Clear();
Form27->MaskEdit2->Clear();

Form27->MaskEdit1->Enabled = false;
Form27->MaskEdit2->Enabled = false;


Form27->Edit1->Clear();
Form27->Edit2->Clear();
Form27->Edit3->Clear();
Form27->Edit1->Enabled = false;
Form27->Edit2->Enabled = false;
Form27->Edit3->Enabled = false;

Form27->Label1->Enabled = false;
Form27->Label2->Enabled = false;
}
//---------------------------------------------------------------------------

void ExibeTeleMarketing_Copia2()
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
void SelecionaTeleMarketing_Copia3()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From TeleMarketing");
Form1->Query1->ExecSQL();
Form1->Query1->Open();
}

//---------------------------------------------------------------------------
void __fastcall TForm27::RadioButton1Click(TObject *Sender)
{
if (RadioButton1->Checked ==true)
{
        MaskEdit1->Enabled = true;   MaskEdit1->Clear();  MaskEdit1->SetFocus();
        Edit1->Enabled = false;      Edit1->Clear();      Edit2->Enabled = false;      Edit2->Clear();        Label1->Enabled = false;
        Edit3->Enabled = false;      Edit3->Clear();      MaskEdit2->Enabled = false;  MaskEdit2->Clear();    Label2->Enabled = false;

}        
}
//---------------------------------------------------------------------------
void __fastcall TForm27::RadioButton2Click(TObject *Sender)
{
if (RadioButton2->Checked ==true)
{
        MaskEdit1->Enabled = false;  MaskEdit1->Clear();
        Edit1->Enabled = true;       Edit1->Clear();      Edit2->Enabled = true;       Edit2->Clear();        Label1->Enabled = true;   Edit1->SetFocus();
        Edit3->Enabled = false;      Edit3->Clear();      MaskEdit2->Enabled = false;  MaskEdit2->Clear();    Label2->Enabled = false;

}
}
//---------------------------------------------------------------------------
void __fastcall TForm27::MaskEdit1Exit(TObject *Sender)
{
vcod10 = 0;

if (MaskEdit1->Text != "     ")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit1->Text.c_str());

        try
        {
                vcod10 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código Digitado");
                return;
        }

        if (vcod10 > 0 && vcod10 <= 99999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                vcod10 = 0;
        }

        /* == DESTRUINDO O OBJETO  == */
        C1.~CODIGO();
}
else ShowMessage("Digite um Código Válido");
}
//---------------------------------------------------------------------------
void __fastcall TForm27::FormActivate(TObject *Sender)
{
DesabilitaConsultaTeleMarketing();
}
//---------------------------------------------------------------------------
void __fastcall TForm27::RadioButton3Click(TObject *Sender)
{
if (RadioButton3->Checked ==true)
{
        MaskEdit1->Enabled = false;  MaskEdit1->Clear();
        Edit1->Enabled = false;       Edit1->Clear();      Edit2->Enabled = false;       Edit2->Clear();        Label1->Enabled = false;
        Edit3->Enabled = true;      Edit3->Clear();      MaskEdit2->Enabled = true;  MaskEdit2->Clear();    Label2->Enabled = true;  Edit3->SetFocus();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm27::SpeedButton1Click(TObject *Sender)
{
if(RadioButton1->Checked == false && RadioButton2->Checked == false && RadioButton3->Checked == false)
{       ShowMessage("Escolha um Tipo de Consulta");     }
else
{
        if (RadioButton1->Checked == true)
        {
                if (MaskEdit1->Text != "     ")
                {
                        /* == CRIANDO O OBJETO  == */
                        CODIGO C1(MaskEdit1->Text.c_str());

                        try
                        {
                                vcod10 = StrToInt(C1.mostracodigo());
                        }
                        catch(...)
                        {
                                ShowMessage("Erro!!! Verifique o Código Digitado");
                                return;
                        }

                        if (vcod10 > 0 && vcod10 <= 99999)
                        ;

                        else
                        {
                                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 100.000");
                                vcod10 = 0;
                        }
                }
                else ShowMessage("Digite um Código Válido");

                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
                Form1->Query1->SQL->Add ("Select * From TeleMarketing Where CdDoa = '"+vcod10+"'");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();
        }

        if (RadioButton2->Checked == true)
        {
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add ("Select * From TeleMarketing Where NmDoa = '"+Edit1->Text+"' and MaeDoa = '"+Edit2->Text+"' Order By CdDoa ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
        }

        if (RadioButton3->Checked == true)
        {
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select * From TeleMarketing Where NmDoa = '"+Edit3->Text+"' and CnpjDoa = '"+MaskEdit2->Text+"' Order By CdDoa ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
        }
        

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */
        if ( Form1->DataSource1->DataSet->RecordCount == 0)
        {
                ShowMessage("Cadastrado Não Existente!!!");
                DesabilitaConsultaTeleMarketing();

                Form1->Query1->Close();
                Form1->Query1->SQL->Clear();
//                Form1->Query1->SQL->Add(" Select TeleMarketing.CdDoa,TeleMarketing.NmDoa,TeleMarketing.DtNascDoa,DoacaoTeleMarketing.CdDoaTel,DoacaoTeleMarketing.CdSocDoaTel,DoacaoTeleMarketing.DtDoaTel,DoacaoTeleMarketing.VlDoaTel,DoacaoTeleMarketing.ObsDoaTel From TeleMarketing, DoacaoTeleMarketing Where TeleMarketing.CdDoa = DoacaoTeleMarketing.CdSocDoaTel Order By DoacaoTeleMarketing.CdSocDoaTel ");
                Form1->Query1->SQL->Add("Select * From TeleMarketing");
                Form1->Query1->ExecSQL();
                Form1->Query1->Open();

        }
        else
        {       Form27->Close();        }

}
//        Form1->Query1->Active = true;
        ExibeTeleMarketing_Copia2();
}
//---------------------------------------------------------------------------
void __fastcall TForm27::FormClose(TObject *Sender, TCloseAction &Action)
{
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From TeleMarketing");
Form1->Query1->Active = true;
Form1->Query1->Open();
}
//---------------------------------------------------------------------------

