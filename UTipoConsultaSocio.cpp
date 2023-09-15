//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UTipoConsultaSocio.h" //Form7

/* === FORMULÁRIOS === */
#include "UInicio.h" //Form1
#include "UConsAtuaExcSocio.h" //Form6

/* ===== DECLARAÇÃO DAS CLASSES ===== */
#include "Codigo.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
/* ===== VARIÁVEIS ===== */
AnsiString vcod2 = 0;
int Registro; 

//---------------------------------------------------------------------------

/* ===== FUNÇOES ===== */

void DesabilitaTpConsulta()
{
Form7->RadioButton1->Checked = false;
Form7->RadioButton2->Checked = false;
Form7->RadioButton3->Checked = false;

Form7->MaskEdit1->Enabled = false;

Form7->Edit1->Enabled = false;



Form7->MaskEdit2->Enabled = false;

Form7->MaskEdit1->Clear();
Form7->Edit1->Clear();

Form7->MaskEdit2->Clear();
}
//---------------------------------------------------------------------------

/* ===== UTILIZA EDIT PARA ATUALIZAR ===== */
void ExibeF6()
{
Form6->Edit1->Text = Form1->Query1->FieldByName("CdSoc")->AsString;
Form6->MaskEdit1->Text = Form1->Query1->FieldByName("DtCad")->AsString;
Form6->ComboBox1->Text = Form1->Query1->FieldByName("TpSoc")->AsString;
Form6->MaskEdit12->Text = Form1->Query1->FieldByName("MatSoc")->AsString;
Form6->Edit5->Text = Form1->Query1->FieldByName("NmSoc")->AsString;
Form6->Edit6->Text = Form1->Query1->FieldByName("MaeSoc")->AsString;
Form6->MaskEdit9->Text = Form1->Query1->FieldByName("RgSoc")->AsString;
Form6->MaskEdit10->Text = Form1->Query1->FieldByName("CpfSoc")->AsString;
Form6->Edit9->Text = Form1->Query1->FieldByName("PaiSoc")->AsString;
Form6->Edit10->Text = Form1->Query1->FieldByName("NmRepr")->AsString;
Form6->MaskEdit14->Text = Form1->Query1->FieldByName("CnpjSoc")->AsString;
Form6->Edit12->Text = Form1->Query1->FieldByName("CargoSoc")->AsString;
Form6->ComboBox5->Text = Form1->Query1->FieldByName("TpFunc")->AsString;
Form6->MaskEdit11->Text = Form1->Query1->FieldByName("SalSoc")->AsString;
Form6->MaskEdit2->Text = Form1->Query1->FieldByName("DtNasc")->AsString;
Form6->Edit16->Text = Form1->Query1->FieldByName("NatSoc")->AsString;
Form6->ComboBox2->Text = Form1->Query1->FieldByName("SexoSoc")->AsString;
Form6->ComboBox3->Text = Form1->Query1->FieldByName("EstCiv")->AsString;
Form6->ComboBox4->Text = Form1->Query1->FieldByName("EscSoc")->AsString;
Form6->Edit20->Text = Form1->Query1->FieldByName("EndSoc")->AsString;
Form6->Edit21->Text = Form1->Query1->FieldByName("CompSoc")->AsString;
Form6->Edit22->Text = Form1->Query1->FieldByName("BairroSoc")->AsString;
Form6->MaskEdit13->Text = Form1->Query1->FieldByName("CepSoc")->AsString;
Form6->Edit24->Text = Form1->Query1->FieldByName("CidSoc")->AsString;
Form6->ComboBox6->Text = Form1->Query1->FieldByName("EstSoc")->AsString;
Form6->MaskEdit3->Text = Form1->Query1->FieldByName("TelSoc")->AsString;
Form6->MaskEdit4->Text = Form1->Query1->FieldByName("CelSoc")->AsString;
Form6->MaskEdit5->Text = Form1->Query1->FieldByName("RamSoc")->AsString;
Form6->Edit29->Text = Form1->Query1->FieldByName("DefSoc")->AsString;
Form6->MaskEdit6->Text = Form1->Query1->FieldByName("QtFilh")->AsString;
Form6->MaskEdit7->Text = Form1->Query1->FieldByName("QtFam")->AsString;
Form6->MaskEdit8->Text = Form1->Query1->FieldByName("QtTrab")->AsString;
Form6->Edit33->Text = Form1->Query1->FieldByName("VlRen")->AsString;
Form6->ComboBox7->Text = Form1->Query1->FieldByName("CasaSoc")->AsString;
Form6->ComboBox8->Text = Form1->Query1->FieldByName("ImovSoc")->AsString;
Form6->Edit36->Text = Form1->Query1->FieldByName("ResidSoc")->AsString;
Form6->Edit37->Text = Form1->Query1->FieldByName("ParSoc")->AsString;
Form6->Edit38->Text = Form1->Query1->FieldByName("ObsSoc")->AsString;
}
//---------------------------------------------------------------------------

void DesabFuncForm6_Copia()
{
Form6->Label22->Enabled = false;
Form6->Edit12->Enabled = false; /* === CargoSoc === */
Form6->Label36->Enabled = false;
Form6->ComboBox5->Enabled = false; /* === TpFunc === */
Form6->Label23->Enabled = false;
Form6->MaskEdit11->Enabled = false; /* === SalSoc === */
}
//---------------------------------------------------------------------------
  /* === DESABILITA NATURAL === */
void DesabNatForm6_Copia()
{
Form6->Label24->Enabled = false;
Form6->Edit29->Enabled = false;    /* === DefSoc   === */
Form6->Label25->Enabled = false;
Form6->MaskEdit6->Enabled = false; /* === QtFilh   === */
Form6->Label26->Enabled = false;
Form6->MaskEdit7->Enabled = false; /* === QtFam    === */
Form6->Label27->Enabled = false;
Form6->MaskEdit8->Enabled = false; /* === QtTrab   === */
Form6->Label28->Enabled = false;
Form6->Edit33->Enabled = false;    /* === VlRen    === */
Form6->Label35->Enabled = false;
Form6->ComboBox7->Enabled = false; /* === CasaSoc  === */
Form6->ComboBox8->Enabled = false; /* === ImovSoc  === */
Form6->Label29->Enabled = false;
Form6->Edit36->Enabled = false ;   /* === ResidSoc === */
Form6->Label30->Enabled = false;
Form6->Edit37->Enabled = false;    /* === ParSoc   === */
}

//---------------------------------------------------------------------------
void DesabPJuridicaF6_Copia()
{
Form6->Label6->Enabled = false;
Form6->Edit10->Enabled = false; /* === NmRepr === */
Form6->Label7->Enabled = false;
Form6->MaskEdit14->Enabled = false; /* === CnpjSoc === */
}

//---------------------------------------------------------------------------
void DesabPFisicaF6_Copia()
{
Form6->Label10->Enabled = false;
Form6->Edit6->Enabled = false;/* === MaeSoc === */

Form6->Label4->Enabled = false;
Form6->MaskEdit9->Enabled = false;/* === RgSoc === */
Form6->Label5->Enabled = false;
Form6->MaskEdit10->Enabled = false; /* === CpfSoc === */

Form6->Label21->Enabled = false;
Form6->MaskEdit12->Enabled = false; /* === MatSoc === */

Form6->Label11->Enabled = false;
Form6->Edit9->Enabled = false;/* === PaiSoc === */

Form6->Label8->Enabled = false;
Form6->MaskEdit2->Enabled = false; /* === DtNasc === */
Form6->Label9->Enabled = false;
Form6->Edit16->Enabled = false;/* === NatSoc === */
Form6->Label32->Enabled = false;
Form6->ComboBox2->Enabled = false; /* === SexoSoc === */
Form6->Label33->Enabled = false;
Form6->ComboBox3->Enabled = false;/* === EstCiv === */
Form6->Label34->Enabled = false;
Form6->ComboBox4->Enabled = false;/* === EscSoc === */
}

//---------------------------------------------------------------------------
void __fastcall TForm7::RadioButton1Click(TObject *Sender)
{
if (RadioButton1->Checked ==true)
{

        MaskEdit1->Clear();        MaskEdit1->Enabled = true;
        MaskEdit1->SetFocus();

        MaskEdit2->Clear();        MaskEdit2->Enabled = false;
        MaskEdit3->Clear();        MaskEdit3->Enabled = false;
        MaskEdit4->Clear();        MaskEdit4->Enabled = false;

        Edit1->Clear();        Edit1->Enabled = false;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm7::RadioButton2Click(TObject *Sender)
{
if (RadioButton2->Checked == true)
{
        Edit1->Clear();        Edit1->Enabled = true;
        Edit1->SetFocus();

        MaskEdit1->Clear();        MaskEdit1->Enabled = false;
        MaskEdit2->Clear();        MaskEdit2->Enabled = false;
        MaskEdit3->Clear();        MaskEdit3->Enabled = false;
        MaskEdit4->Clear();        MaskEdit4->Enabled = false;

}
}
//---------------------------------------------------------------------------
void __fastcall TForm7::RadioButton3Click(TObject *Sender)
{
if (RadioButton3->Checked ==true)
{
        MaskEdit3->Clear();        MaskEdit3->Enabled = true;
        MaskEdit3->SetFocus();

        MaskEdit1->Clear();        MaskEdit1->Enabled = false;
        MaskEdit2->Clear();        MaskEdit2->Enabled = false;
        MaskEdit4->Clear();        MaskEdit4->Enabled = false;

        Edit1->Clear();        Edit1->Enabled = false;
}

}
//---------------------------------------------------------------------------
void __fastcall TForm7::FormActivate(TObject *Sender)
{
DesabilitaTpConsulta();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::MaskEdit1Exit(TObject *Sender)
{

if (MaskEdit1->Text != "     ")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit1->Text.c_str());

        try
        {
                vcod2 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código Digitado");
                return;
        }

        if (vcod2 > 0 && vcod2 <= 99999999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 999.999.99");
                vcod2 = 0;
        }
}
else ShowMessage("Digite um Código Válido");

}
//---------------------------------------------------------------------------
void __fastcall TForm7::FormClose(TObject *Sender, TCloseAction &Action)
{

if ( Registro == 1 || Registro == 0 )
{
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("select * from Socio");
        Form1->Query1->Active = true;
        Form1->Query1->Open();
}


}
//---------------------------------------------------------------------------
void __fastcall TForm7::SpeedButton1Click(TObject *Sender)
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
                vcod2 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código Digitado");
                return;
        }

        if (vcod2 > 0 && vcod2 <= 99999999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 999.999.99");
                vcod2 = 0;
        }
}
else ShowMessage("Digite um Código Válido");

        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("select * from Socio where CdSoc ='"+vcod2+"'");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
        }

        if (RadioButton2->Checked == true)
        {
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("select * from Socio where NmSoc = '"+Edit1->Text+"' ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
        }

        if (RadioButton3->Checked == true)
        {
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("select * from Socio where RGSoc = '"+MaskEdit3->Text+"' ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
        }

        if (RadioButton4->Checked == true)
        {
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("select * from Socio where CPFSoc = '"+MaskEdit3->Text+"' ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
        }

        if (RadioButton5->Checked == true)
        {
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("select * from Socio where CNPJSoc = '"+MaskEdit4->Text+"' ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
        }

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */
        Registro = Form1->DataSource1->DataSet->RecordCount;
        if (Registro == 0 )
        {
                ShowMessage("Cadastro Não Existente!!");
                DesabilitaTpConsulta();
        }
        else
        {
                ShowMessage("Foi(ram) Encontrado(s) \n                " + IntToStr(Registro) + " \n Registro(s) Cadastro(s)!!");
                ExibeF6();
                Form7->Close();
        }

        Animate1->Visible = false;
}
       
}
//---------------------------------------------------------------------------




void __fastcall TForm7::RadioButton4Click(TObject *Sender)
{
if (RadioButton4->Checked ==true)
{
        MaskEdit2->Clear();        MaskEdit2->Enabled = true;
        MaskEdit2->SetFocus();

        MaskEdit1->Clear();        MaskEdit1->Enabled = false;
        MaskEdit3->Clear();        MaskEdit3->Enabled = false;
        MaskEdit4->Clear();        MaskEdit4->Enabled = false;

        Edit1->Clear();        Edit1->Enabled = false;
}

}
//---------------------------------------------------------------------------

void __fastcall TForm7::RadioButton5Click(TObject *Sender)
{
if (RadioButton5->Checked ==true)
{
        MaskEdit4->Clear();        MaskEdit4->Enabled = true;
        MaskEdit4->SetFocus();

        MaskEdit1->Clear();        MaskEdit1->Enabled = false;
        MaskEdit2->Clear();        MaskEdit2->Enabled = false;
        MaskEdit3->Clear();        MaskEdit3->Enabled = false;

        Edit1->Clear();        Edit1->Enabled = false;
}

}
//---------------------------------------------------------------------------

