//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <stdio.h>
#include "UInicio.h" //Form1

/* === FORMULÁRIOS === */
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
#include "UDoacaoTeleMarketing.h"//Form29
#include "UTpConsultaDoacaoTel.h"//Form30
#include "UCadContribuinteTelPF.h" //Form31
#include "UCadContribuinteTelPJ.h" //Form32
#include "URelatorioAniversarioTel.h"//Form33

#include "USobre.h" //AboutBox

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
//== FRASE SERÁ EXIBIDA NA BARRA DE TÍTULO DO FORULÁRIO ===
AnsiString frase = "Associação Cubatense de Defesa dos Direitos das Pessoas Deficientes";
int contador = frase.Length();
int i = 0;
AnsiString Caminho;

//---------------------------------------------------------------------------
/* ===== FUNÇÕES =====*/

void ExibeSocioHistorico_Copia2()
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
void LimpaHistorico_Copia()
{
Form8->Edit2->Clear();
Form8->Edit4->Clear();

Form8->MaskEdit1->Clear();
Form8->MaskEdit2->Clear();
Form8->MaskEdit3->Clear();
Form8->MaskEdit4->Clear();
Form8->Memo1->Clear();
}
//---------------------------------------------------------------------------
void SelecionaHistorico_Copia()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From Historico");
Form1->Query1->ExecSQL();
Form1->Query1->Open();

Form1->Query1->Last();
}
//---------------------------------------------------------------------------

void LimpaDoacao_Copia()
{
Form10->MaskEdit1->Clear();
Form10->MaskEdit2->Clear();
Form10->MaskEdit3->Clear();
Form10->MaskEdit4->Clear();
Form10->MaskEdit5->Clear();

Form10->Edit1->Clear();
Form10->Edit2->Clear();
Form10->RadioGroup1->ItemIndex = -1;
}

//-------------------------------------------------------------------------
void SelecionaDoacao_Copia()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From Doacao");
Form1->Query1->ExecSQL();
Form1->Query1->Open();

Form1->Query1->Last();
}

//-------------------------------------------------------------------------
void SelecionaSocioDoacao_Copia()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add(" Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Doacao.CdDoa,Doacao.CdSocDoa,Doacao.TpDoa,Doacao.DtDoa,Doacao.VlDoa,Doacao.ObsDoa From Socio, Doacao where Socio.CdSoc = Doacao.CdSocDoa Order By Doacao.CdSocDoa ");
Form1->Query1->ExecSQL();
Form1->Query1->Open();
}
//-------------------------------------------------------------------------
void ExibeSocioDoacao_Copia2()
{
Form10->MaskEdit1->Text = Form1->Query1->FieldByName("CdDoa")->AsString;
Form10->MaskEdit2->Text = Form1->Query1->FieldByName("CdSocDoa")->AsString;

Form10->Label3->Caption = Form1->Query1->FieldByName("TpDoa")->AsString;
Form10->RadioGroup1->ItemIndex = -1;
Form10->RadioGroup1->Enabled = false;

Form10->MaskEdit4->Text = Form1->Query1->FieldByName("DtDoa")->AsString;
Form10->MaskEdit5->Text = Form1->Query1->FieldByName("VlDoa")->AsString;
Form10->Edit2->Text = Form1->Query1->FieldByName("ObsDoa")->AsString;

Form10->Edit1->Text = Form1->Query1->FieldByName("NmSoc")->AsString;
Form10->MaskEdit3->Text = Form1->Query1->FieldByName("DtNasc")->AsString;

}

//-------------------------------------------------------------------------
void NaoEscreveDoacao_Copia()
{
Form10->MaskEdit2->ReadOnly = true;
Form10->MaskEdit4->ReadOnly = true;
Form10->MaskEdit5->ReadOnly = true;

Form10->Edit2->ReadOnly = true;

Form10->RadioGroup1->ItemIndex = -1;
}
//-------------------------------------------------------------------------

void EscreveDoacao_Copia()
{
Form10->MaskEdit2->ReadOnly = false;
Form10->MaskEdit4->ReadOnly = false;
Form10->MaskEdit5->ReadOnly = false;

Form10->Edit2->ReadOnly = false;

Form10->RadioGroup1->ItemIndex = -1;
}
//-------------------------------------------------------------------------
void NaoEscreveHistorico_Copia()
{
Form8->Edit4->ReadOnly = true;
Form8->MaskEdit1->ReadOnly = true;
Form8->MaskEdit2->ReadOnly = true;
Form8->Memo1->ReadOnly = true;
}
//---------------------------------------------------------------------------
void EscreveHistorico_Copia()
{
Form8->Edit4->ReadOnly = false;
Form8->MaskEdit1->ReadOnly = false;
Form8->MaskEdit2->ReadOnly = false;
Form8->Memo1->ReadOnly = false;
}

//-------------------------------------------------------------------------
void DesabPJuridicaF6_Copia2()
{
Form6->Label6->Enabled = false;
Form6->Edit10->Enabled = false; /* === NmRepr === */
Form6->Label7->Enabled = false;
Form6->MaskEdit14->Enabled = false; /* === CnpjSoc === */
}
//----------------------------------------------------------------------------
void DesabPFisicaF6_Copia2()
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
void DesabNatForm6_Copia2()
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
//----------------------------------------------------------------------------
void DesabFuncForm6_Copia2()
{
Form6->Label22->Enabled = false;
Form6->Edit12->Enabled = false; /* === CargoSoc === */
Form6->Label36->Enabled = false;
Form6->ComboBox5->Enabled = false; /* === TpFunc === */
Form6->Label23->Enabled = false;
Form6->MaskEdit11->Enabled = false; /* === SalSoc === */
}
//---------------------------------------------------------------------------
void LimpaF6_Copia()
{

Form6->Edit1->Clear(); /* === CdSoc === */;
Form6->MaskEdit1->Clear();  /* === DtCad === */
Form6->ComboBox1->Text = ' '; /* === TpSoc === */
Form6->MaskEdit12->Clear();/* === MatSoc === */
Form6->Edit5->Clear();/* === NmSoc === */
Form6->Edit6->Clear();/* === MaeSoc === */

Form6->MaskEdit9->Clear();/* === RgSoc === */
Form6->MaskEdit10->Clear(); /* === CpfSoc === */
Form6->Edit9->Clear();/* === PaiSoc === */

Form6->Edit10->Clear(); /* === NmRepr === */
Form6->MaskEdit14->Clear(); /* === CnpjSoc === */

Form6->Edit12->Clear();/* === CargoSoc === */
Form6->ComboBox5->Text = ' '; /* === TpFunc === */
Form6->MaskEdit11->Clear();/* === SalSoc === */

Form6->MaskEdit2->Clear(); /* === DtNasc === */
Form6->Edit16->Clear();/* === NatSoc === */
Form6->ComboBox2->Text = ' '; /* === SexoSoc === */
Form6->ComboBox3->Text = ' '; /* === EstCiv === */
Form6->ComboBox4->Text = ' '; /* === EscSoc === */
Form6->Edit20->Clear(); /* === EndSoc === */
Form6->Edit21->Clear();/* === CompSoc === */
Form6->Edit22->Clear();/* === BairroSoc === */
Form6->MaskEdit13->Clear(); /* === CepSoc === */
Form6->Edit24->Clear(); /* === CidSoc === */
Form6->ComboBox6->Text = ' '; /* === EstSoc === */
Form6->MaskEdit3->Clear(); /* === TelSoc === */
Form6->MaskEdit4->Clear();/* === CelSoc === */
Form6->MaskEdit5->Clear();/* === RamSoc === */

Form6->Edit29->Clear();    /* === DefSoc   === */
Form6->MaskEdit6->Clear(); /* === QtFilh   === */
Form6->MaskEdit7->Clear(); /* === QtFam    === */
Form6->MaskEdit8->Clear(); /* === QtTrab   === */
Form6->Edit33->Clear();    /* === VlRen    === */
Form6->ComboBox7->Text = ' ';  /* === CasaSoc  === */
Form6->ComboBox8->Text = ' ';  /* === ImovSoc  === */
Form6->Edit36->Clear();   /* === ResidSoc === */
Form6->Edit37->Clear();    /* === ParSoc   === */

Form6->Edit38->Clear();/* === ObsSoc === */
}
//---------------------------------------------------------------------------

void SelecionaSocio_Copia()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From Socio");
Form1->Query1->ExecSQL();
Form1->Query1->Open();
}
//---------------------------------------------------------------------------

void ExibeF6_Copia()
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
//----------------------------------------------------------------------------
void NaoEscreveF6()
{
Form6->Edit5->ReadOnly = true; //NmSoc
Form6->Edit6->ReadOnly = true; //MaeSoc
Form6->Edit9->ReadOnly = true; //PaiSoc
Form6->Edit10->ReadOnly = true; //NmRepr
Form6->Edit12->ReadOnly = true; //CargoSoc
Form6->Edit16->ReadOnly = true; //NatSoc/
Form6->Edit20->ReadOnly = true; //EndSoc
Form6->Edit21->ReadOnly = true; //CompSoc
Form6->Edit22->ReadOnly = true; //BairroSoc
Form6->Edit24->ReadOnly = true; //CidSoc
Form6->Edit29->ReadOnly = true; //DefSoc
Form6->Edit33->ReadOnly = true; //VlRen
Form6->Edit36->ReadOnly = true; //ResidSoc
Form6->Edit37->ReadOnly = true; //ParSoc
Form6->Edit38->ReadOnly = true; //ObsSoc

Form6->MaskEdit1->ReadOnly = true; //DtCad
Form6->MaskEdit2->ReadOnly = true; //DtNasc
Form6->MaskEdit3->ReadOnly = true; //TelSoc
Form6->MaskEdit4->ReadOnly = true; //CelSoc
Form6->MaskEdit5->ReadOnly = true; //RamSoc
Form6->MaskEdit6->ReadOnly = true; //QtFilh
Form6->MaskEdit7->ReadOnly = true; //QtFam
Form6->MaskEdit8->ReadOnly = true; //QtTrab
Form6->MaskEdit9->ReadOnly = true; //RgSoc
Form6->MaskEdit10->ReadOnly = true; //CpfSoc
Form6->MaskEdit11->ReadOnly = true; //SalSoc
Form6->MaskEdit12->ReadOnly = true; //MatSoc
Form6->MaskEdit13->ReadOnly = true; //CepSoc
Form6->MaskEdit14->ReadOnly = true; //CnpjSoc

Form6->ComboBox1->Enabled = false; //TpSoc
Form6->ComboBox2->Enabled = false; //SexoSoc
Form6->ComboBox3->Enabled = false; //EstCiv
Form6->ComboBox4->Enabled = false; //EscSoc
Form6->ComboBox5->Enabled = false; //TpFunc
Form6->ComboBox6->Enabled = false; //EstSoc
Form6->ComboBox7->Enabled = false; //CasaSoc
Form6->ComboBox8->Enabled = false; //ImovSoc

}
//---------------------------------------------------------------------------
void EscreveF6()
{
Form6->Edit5->ReadOnly = false; //NmSoc
Form6->Edit6->ReadOnly = false; //MaeSoc
Form6->Edit9->ReadOnly = false; //PaiSoc
Form6->Edit10->ReadOnly = false; //NmRepr
Form6->Edit12->ReadOnly = false; //CargoSoc
Form6->Edit16->ReadOnly = false; //NatSoc/
Form6->Edit20->ReadOnly = false; //EndSoc
Form6->Edit21->ReadOnly = false; //CompSoc
Form6->Edit22->ReadOnly = false; //BairroSoc
Form6->Edit24->ReadOnly = false; //CidSoc
Form6->Edit29->ReadOnly = false; //DefSoc
Form6->Edit33->ReadOnly = false; //VlRen
Form6->Edit36->ReadOnly = false; //ResidSoc
Form6->Edit37->ReadOnly = false; //ParSoc
Form6->Edit38->ReadOnly = false; //ObsSoc

Form6->MaskEdit1->ReadOnly = false; //DtCad
Form6->MaskEdit2->ReadOnly =false ; //DtNasc
Form6->MaskEdit3->ReadOnly = false; //TelSoc
Form6->MaskEdit4->ReadOnly = false; //CelSoc
Form6->MaskEdit5->ReadOnly = false; //RamSoc
Form6->MaskEdit6->ReadOnly = false; //QtFilh
Form6->MaskEdit7->ReadOnly = false; //QtFam
Form6->MaskEdit8->ReadOnly = false; //QtTrab
Form6->MaskEdit9->ReadOnly = false; //RgSoc
Form6->MaskEdit10->ReadOnly = false; //CpfSoc
Form6->MaskEdit11->ReadOnly = false; //SalSoc
Form6->MaskEdit12->ReadOnly = false; //MatSoc
Form6->MaskEdit13->ReadOnly = false; //CepSoc
Form6->MaskEdit14->ReadOnly = false; //CnpjSoc

Form6->ComboBox1->Enabled = true; //TpSoc
Form6->ComboBox2->Enabled = true; //SexoSoc
Form6->ComboBox3->Enabled = true; //EstCiv
Form6->ComboBox4->Enabled = true; //EscSoc
Form6->ComboBox5->Enabled = true; //TpFunc
Form6->ComboBox6->Enabled = true; //EstSoc
Form6->ComboBox7->Enabled = true; //CasaSoc
Form6->ComboBox8->Enabled = true; //ImovSoc
}
//---------------------------------------------------------------------------

void HabNatForm6_Copia()
{
Form6->Label24->Enabled = true;
Form6->Edit29->Enabled = true;    /* === DefSoc   === */
Form6->Label25->Enabled = true;
Form6->MaskEdit6->Enabled = true; /* === QtFilh   === */
Form6->Label26->Enabled = true;
Form6->MaskEdit7->Enabled = true; /* === QtFam    === */
Form6->Label27->Enabled = true;
Form6->MaskEdit8->Enabled = true; /* === QtTrab   === */
Form6->Label28->Enabled = true;
Form6->Edit33->Enabled = true;    /* === VlRen    === */
Form6->Label35->Enabled = true;
Form6->ComboBox7->Enabled = true; /* === CasaSoc  === */
Form6->ComboBox8->Enabled = true; /* === ImovSoc  === */
Form6->Label29->Enabled = true;
Form6->Edit36->Enabled = true;   /* === ResidSoc === */
Form6->Label30->Enabled = true;
Form6->Edit37->Enabled = true;    /* === ParSoc   === */
}
//---------------------------------------------------------------------------

void HabFuncForm6_Copia2()
{
Form6->Label22->Enabled = true;
Form6->Edit12->Enabled = true; /* === CargoSoc === */
Form6->Label36->Enabled = true;
Form6->ComboBox5->Enabled = true; /* === TpFunc === */
Form6->Label23->Enabled = true;
Form6->MaskEdit11->Enabled = true; /* === SalSoc === */
}
//---------------------------------------------------------------------------
void HabPJuridicaF6_Copia()
{
Form6->Label6->Enabled = true;
Form6->Edit10->Enabled = true; /* === NmRepr === */
Form6->Label7->Enabled = true;
Form6->MaskEdit14->Enabled = true; /* === CnpjSoc === */
}
//----------------------------------------------------------------------------
void HabPFisicaF6_Copia()
{
Form6->Label4->Enabled = true;
Form6->MaskEdit9->Enabled = true;/* === RgSoc === */

Form6->Label5->Enabled = true;
Form6->MaskEdit10->Enabled = true; /* === CpfSoc === */

Form6->Label21->Enabled = true;
Form6->MaskEdit12->Enabled = true; /* === MatSoc === */

Form6->Label10->Enabled = true;
Form6->Edit6->Enabled = true;/* === MaeSoc === */

Form6->Label11->Enabled = true;
Form6->Edit9->Enabled = true;/* === PaiSoc === */

Form6->Label8->Enabled = true;
Form6->MaskEdit2->Enabled = true; /* === DtNasc === */
Form6->Label9->Enabled = true;
Form6->Edit16->Enabled = true;/* === NatSoc === */
Form6->Label32->Enabled = true;
Form6->ComboBox2->Enabled = true; /* === SexoSoc === */
Form6->Label33->Enabled = true;
Form6->ComboBox3->Enabled = true;/* === EstCiv === */
Form6->Label34->Enabled = true;
Form6->ComboBox4->Enabled = true;/* === EscSoc === */
}
//---------------------------------------------------------------------------
/* ===== FUNÇÕES ===== */
void LimparAtividade_Copia()
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
//---------------------------------------------------------------------------
void NaoEscreveAtividade_Copia()
{
Form12->MaskEdit2->ReadOnly = true;
Form12->MaskEdit4->ReadOnly = true;
Form12->MaskEdit5->ReadOnly = true;
Form12->MaskEdit6->ReadOnly = true;
Form12->MaskEdit7->ReadOnly = true;

Form12->Edit1->ReadOnly = true;
Form12->Edit3->ReadOnly = true;

Form12->CheckBox1->Checked = false;    Form12->CheckBox1->Enabled = false;
Form12->CheckBox2->Checked = false;    Form12->CheckBox2->Enabled = false;
Form12->CheckBox3->Checked = false;    Form12->CheckBox3->Enabled = false;
Form12->CheckBox4->Checked = false;    Form12->CheckBox4->Enabled = false;
Form12->CheckBox5->Checked = false;    Form12->CheckBox5->Enabled = false;
Form12->CheckBox6->Checked = false;    Form12->CheckBox6->Enabled = false;

}
//---------------------------------------------------------------------------

void EscreveAtividade_Copia()
{
Form12->MaskEdit2->ReadOnly = false;
Form12->MaskEdit4->ReadOnly = false;
Form12->MaskEdit5->ReadOnly = false;
Form12->MaskEdit6->ReadOnly = false;
Form12->MaskEdit7->ReadOnly = false;

Form12->Edit1->ReadOnly = false;
Form12->Edit3->ReadOnly = false;

Form12->CheckBox1->Checked = false;    Form12->CheckBox1->Enabled = true;
Form12->CheckBox2->Checked = false;    Form12->CheckBox2->Enabled = true;
Form12->CheckBox3->Checked = false;    Form12->CheckBox3->Enabled = true;
Form12->CheckBox4->Checked = false;    Form12->CheckBox4->Enabled = true;
Form12->CheckBox5->Checked = false;    Form12->CheckBox5->Enabled = true;
Form12->CheckBox6->Checked = false;    Form12->CheckBox6->Enabled = true;

}
//-------------------------------------------------------------------------

void SelecionaAtividade_Copia()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From Atividade");
Form1->Query1->ExecSQL();
Form1->Query1->Open();

Form1->Query1->Last();
}
//---------------------------------------------------------------------------
void SelecionaSocioAtividade_Copia()
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Atividade.CdAtiv,Atividade.NmAtiv,Atividade.CdSocAtiv,Atividade.DtIniAtiv,Atividade.DtFimAtiv,Atividade.DiasAtiv,Atividade.HrIniAtiv,Atividade.HrFimAtiv,Atividade.ObsAtiv From Socio, Atividade Where Socio.CdSoc = Atividade.CdSocAtiv Order By Atividade.CdSocAtiv");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
}
//-------------------------------------------------------------------------
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
//-------------------------------------------------------------------------
void LimparServico_Copia()
{
Form14->MaskEdit1->Clear();     Form14->Edit1->Clear();
Form14->MaskEdit2->Clear();     Form14->Edit2->Clear();
Form14->MaskEdit3->Clear();     Form14->Edit3->Clear();
Form14->MaskEdit4->Clear();     Form14->Edit4->Clear();
Form14->MaskEdit5->Clear();     Form14->Edit5->Clear();
Form14->MaskEdit6->Clear();     Form14->Edit6->Clear();
Form14->MaskEdit7->Clear();     Form14->Edit7->Clear();
Form14->MaskEdit8->Clear();     Form14->Edit8->Clear();
Form14->MaskEdit9->Clear();     Form14->Edit9->Clear();

Form14->RadioGroup1->ItemIndex = -1;
}
//-------------------------------------------------------------------------
void EscreveServico()
{
                                          Form14->Edit1->ReadOnly = false;
Form14->MaskEdit2->ReadOnly = false;      Form14->Edit2->ReadOnly = false;
Form14->MaskEdit3->ReadOnly = false;      Form14->Edit3->ReadOnly = false;
Form14->MaskEdit4->ReadOnly = false;      Form14->Edit4->ReadOnly = false;
Form14->MaskEdit5->ReadOnly = false;      Form14->Edit5->ReadOnly = false;
Form14->MaskEdit6->ReadOnly = false;      Form14->Edit6->ReadOnly = false;
Form14->MaskEdit7->ReadOnly = false;      Form14->Edit7->ReadOnly = false;
Form14->MaskEdit8->ReadOnly = false;      Form14->Edit8->ReadOnly = false;

Form14->RadioGroup1->Enabled = true;
}
//-------------------------------------------------------------------------
void NaoEscreveServico()
{
                                         Form14->Edit1->ReadOnly = true;
Form14->MaskEdit2->ReadOnly = true;      Form14->Edit2->ReadOnly = true;
Form14->MaskEdit3->ReadOnly = true;      Form14->Edit3->ReadOnly = true;
Form14->MaskEdit4->ReadOnly = true;      Form14->Edit4->ReadOnly = true;
Form14->MaskEdit5->ReadOnly = true;      Form14->Edit5->ReadOnly = true;
Form14->MaskEdit6->ReadOnly = true;      Form14->Edit6->ReadOnly = true;
Form14->MaskEdit7->ReadOnly = true;      Form14->Edit7->ReadOnly = true;
Form14->MaskEdit8->ReadOnly = true;      Form14->Edit8->ReadOnly = true;

Form14->RadioGroup1->Enabled = false;
}
//-------------------------------------------------------------------------
void SelecionaServico_Copia()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From Servico");
Form1->Query1->ExecSQL();
Form1->Query1->Open();

Form1->Query1->Last();
}
//-------------------------------------------------------------------------
void SelecionaSocioServico_Copia()
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Servico.CdServ,Servico.CdSocServ,Servico.TpServ,Servico.DtPedServ,Servico.DtEntServ,Servico.HrIniServ,Servico.HrFimServ,Servico.EstabServ,Servico.RespServ,Servico.MedServ,Servico.QtDegServ,Servico.EventServ,Servico.VlServ,Servico.CheqServ,Servico.ModServ,Servico.DefServ,Servico.ObsServ From Socio, Servico Where Socio.CdSoc = Servico.CdSocServ Order By Servico.CdSocServ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
}
//-------------------------------------------------------------------------
void ExibeSocioServico_Copia()
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
//---------------------------------------------------------------------------
/* === LIMPA TUDO === */
void LimpaTeleMarketing()
{

Form26->ComboBox1->ItemIndex = -1;
Form26->ComboBox2->ItemIndex = -1;
Form26->ComboBox3->ItemIndex = -1;
Form26->ComboBox4->ItemIndex = -1;

Form26->MaskEdit1->Clear();
Form26->MaskEdit2->Clear();
Form26->MaskEdit3->Clear();
Form26->MaskEdit4->Clear();
Form26->MaskEdit5->Clear();
Form26->MaskEdit6->Clear();
Form26->MaskEdit7->Clear();
Form26->MaskEdit8->Clear();

Form26->Edit1->Clear();
Form26->Edit10->Clear();
Form26->Edit11->Clear();
Form26->Edit2->Clear();
Form26->Edit3->Clear();
Form26->Edit4->Clear();
Form26->Edit5->Clear();
Form26->Edit6->Clear();
Form26->Edit7->Clear();
Form26->Edit8->Clear();
Form26->Edit9->Clear();
}
//---------------------------------------------------------------------------
void NaoEscreveTeleMarketing()
{

Form26->ComboBox1->Enabled = false;
Form26->ComboBox2->Enabled = false;
Form26->ComboBox3->Enabled = false;
Form26->ComboBox4->Enabled = false;

Form26->MaskEdit1->ReadOnly = true;
Form26->MaskEdit2->ReadOnly = true;
Form26->MaskEdit3->ReadOnly = true;
Form26->MaskEdit4->ReadOnly = true;
Form26->MaskEdit5->ReadOnly = true;
Form26->MaskEdit6->ReadOnly = true;
Form26->MaskEdit7->ReadOnly = true;
Form26->MaskEdit8->ReadOnly = true;

Form26->Edit1->ReadOnly = true;
Form26->Edit10->ReadOnly = true;
Form26->Edit11->ReadOnly = true;
Form26->Edit2->ReadOnly = true;
Form26->Edit3->ReadOnly = true;
Form26->Edit4->ReadOnly = true;
Form26->Edit5->ReadOnly = true;
Form26->Edit6->ReadOnly = true;
Form26->Edit7->ReadOnly = true;
Form26->Edit8->ReadOnly = true;
Form26->Edit9->ReadOnly = true;
}
//---------------------------------------------------------------------------

void EscreveTeleMarketing()
{

Form26->ComboBox1->Enabled = true;
Form26->ComboBox2->Enabled = true;
Form26->ComboBox3->Enabled = true;
Form26->ComboBox4->Enabled = true;

Form26->MaskEdit1->ReadOnly = false;
Form26->MaskEdit2->ReadOnly = false;
Form26->MaskEdit3->ReadOnly = false;
Form26->MaskEdit4->ReadOnly = false;
Form26->MaskEdit5->ReadOnly = false;
Form26->MaskEdit6->ReadOnly = false;
Form26->MaskEdit7->ReadOnly = false;
Form26->MaskEdit8->ReadOnly = false;

Form26->Edit1->ReadOnly = false;
Form26->Edit11->ReadOnly = false;
Form26->Edit2->ReadOnly = false;
Form26->Edit3->ReadOnly = false;
Form26->Edit4->ReadOnly = false;
Form26->Edit5->ReadOnly = false;
Form26->Edit6->ReadOnly = false;
Form26->Edit7->ReadOnly = false;
Form26->Edit8->ReadOnly = false;
Form26->Edit9->ReadOnly = false;
}
//---------------------------------------------------------------------------

void SelecionaTeleMarketing_Copia2()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From TeleMarketing");
Form1->Query1->ExecSQL();
Form1->Query1->Open();
}
//---------------------------------------------------------------------------
void ExibeTeleMarketing()
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
void LimpaDoacaoTel_Copia()
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
void EscreveDoacaoTel_Copia()
{
Form29->MaskEdit2->ReadOnly = false;
Form29->MaskEdit4->ReadOnly = false;
Form29->MaskEdit5->ReadOnly = false;

Form29->Edit2->ReadOnly = false;

}
//-------------------------------------------------------------------------
void SelecionaDoacaoTel_Copia()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From DoacaoTeleMarketing");
Form1->Query1->ExecSQL();
Form1->Query1->Open();

Form1->Query1->Last();
}
//-------------------------------------------------------------------------

void NaoEscreveDoacaoTel_Copia()
{
Form29->MaskEdit2->ReadOnly = true;
Form29->MaskEdit4->ReadOnly = true;
Form29->MaskEdit5->ReadOnly = true;

Form29->Edit2->ReadOnly = true;
}

//-------------------------------------------------------------------------
void SelecionaSocioDoacaoTel_Copia()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add(" Select TeleMarketing.CdDoa,TeleMarketing.NmDoa,TeleMarketing.DtNascDoa,DoacaoTeleMarketing.CdDoaTel,DoacaoTeleMarketing.CdSocDoaTel,DoacaoTeleMarketing.DtDoaTel,DoacaoTeleMarketing.VlDoaTel,DoacaoTeleMarketing.ObsDoaTel From TeleMarketing, DoacaoTeleMarketing Where TeleMarketing.CdDoa = DoacaoTeleMarketing.CdSocDoaTel Order By DoacaoTeleMarketing.CdSocDoaTel ");
Form1->Query1->ExecSQL();
Form1->Query1->Open();
}

//-------------------------------------------------------------------------
void ExibeSocioDoacaoTel_Copia2()
{
Form29->MaskEdit1->Text = Form1->Query1->FieldByName("CdDoaTel")->AsString;
Form29->MaskEdit2->Text = Form1->Query1->FieldByName("CdSocDoaTel")->AsString;

Form29->MaskEdit4->Text = Form1->Query1->FieldByName("DtDoaTel")->AsString;
Form29->MaskEdit5->Text = Form1->Query1->FieldByName("VlDoaTel")->AsString;
Form29->Edit2->Text = Form1->Query1->FieldByName("ObsDoaTel")->AsString;

Form29->Edit1->Text = Form1->Query1->FieldByName("NmDoa")->AsString;
Form29->MaskEdit3->Text = Form1->Query1->FieldByName("DtNascDoa")->AsString;

}



//-------------------------------------------------------------------------



void __fastcall TForm1::FormCreate(TObject *Sender)
{
Caminho = ExtractFilePath(ParamStr(0));

Animate1->Visible = false;

/* ===== EXIBE O LOGOTIPO E BRASIL ===== */
Form1->Image1->Picture->LoadFromFile(Caminho+"Logotipo.bmp");
Form1->Image2->Picture->LoadFromFile(Caminho+"Brasil.bmp");

/* ===== EXCLUI O ALIAS VIA PROGRAMAÇÃO ===== */
Session->DeleteAlias("ACDDPD");

/* ===== CRIA ALIAS VIA PROGRAMAÇÃO ===== */
Session->AddStandardAlias("ACDDPD",Caminho, "Paradox");
Session->SaveConfigFile();

/* Obs.: ACDDPD é o meu Alias, Caminho é o local do programa neste exato momento,
e o diretório onde estão os arquivos banco de dados (tabelas).
*/

/* === QUERY1 RECEBE O NOME DA BASE DE DADOS === */

Form1->Query1->DatabaseName = "ACDDPD";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{

//LABEL1 RECEBE A HORA ATUAL
Label1->Caption = TimeToStr( Now() );

// QUANDO O PONTEIRO DO MOUSE PASSAR EM CIMA DA HORA EXIBE A DATA ATUAL
Label1->Hint = DateToStr( Now() );
Label1->ShowHint = true;

//== A BARRA DE TÍTULO DO FORULÁRIO RECEBE A VARIÁVEL FRASE ===
if (Form1->Caption == frase)
{
Form1->Caption = "";
i = 0;
}
else
{
Form1->Caption = Form1->Caption + frase.SubString (i,1);
i++;
}        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SairClick(TObject *Sender)
{
//Sair
if (MessageDlg("Deseja Fechar o Programa?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
        Application->Terminate();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::CadastrarFuncionarioClick(TObject *Sender)
{
//Cadastrar 	=>	Funcionário

Form3->HelpContext = 100;

Form3->Position = poDesktopCenter;
Form3->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CadastrarNaturalClick(TObject *Sender)
{
//Cadastrar 	=>	Natural

Form4->HelpContext = 100;

Form4->Position = poDesktopCenter;
Form4->Show();
        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CadastrarDoadorTelPFClick(TObject *Sender)
{
//Cadastrar 	=>	Cliente Pessoa Fisica

Form31->HelpContext = 100;

Form31->Caption = "Cadastro de Contribuinte - TeleMarketing - Pessoa Física";
//Form31->Label2->Caption = "Cliente";
Form31->Position = poDesktopCenter;
Form31->Show();
        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CadastrarContribuintePFClick(TObject *Sender)
{
//Cadastrar 	=>	Contribuinte Pessoa Fisica

Form2->HelpContext = 100;

Form2->Caption = "Cadastro de Contribuinte Pessoa Física";
Form2->Position = poDesktopCenter;
Form2->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::CadastrarDoadorTelPJClick(TObject *Sender)
{
//Cadastrar 	=>	Cliente Pessoa Juridica

Form32->HelpContext = 120;

Form32->Caption = "Cadastro de Contribuinte - TeleMarketing - Pessoa Jurídica";

Form32->Position = poDesktopCenter;
Form32->Show();
        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CadastrarContribuintePJClick(TObject *Sender)
{
//Cadastrar 	=>	Contribuinte Pessoa Juridica

Form5->HelpContext = 120;

Form5->Caption = "Cadastro de Contribuinte Pessoa Jurídica";
//Form32->Label2->Caption = "Contribuinte";
Form5->Position = poDesktopCenter;
Form5->Show();
        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ConsultarSociosClick(TObject *Sender)
{
//Socio	=>	Consultar

Form6->HelpContext = 140;

Form6->Caption = "Consulta de Sócio";

Form6->SpeedButton1->Visible = false; //Atualizar
Form6->SpeedButton2->Visible = true; //Consultar
Form6->SpeedButton3->Visible = false; //Excluir
Form6->SpeedButton4->Visible = false; //Limpar

Form6->Height = 474;

LimpaF6_Copia();      SelecionaSocio_Copia();       ExibeF6_Copia();

HabPJuridicaF6_Copia();     HabPFisicaF6_Copia();
HabNatForm6_Copia();        HabFuncForm6_Copia2();

NaoEscreveF6();
Form6->Position = poDesktopCenter;
Form6->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::AtualizarSociosClick(TObject *Sender)
{
//Socio 	=>	Atualizar

Form6->HelpContext = 160;

Form6->Caption = "Atualização Sócio";
Form6->SpeedButton1->Visible = true; //Atualizar
Form6->SpeedButton2->Visible = true; //Consultar
Form6->SpeedButton3->Visible = false; //Excluir
Form6->SpeedButton4->Visible = true; //Limpar

Form6->Height = 499;


        if ( Form6->ComboBox1->Text == "Funcionário" )
        {
                DesabNatForm6_Copia2();
                DesabPJuridicaF6_Copia2();

                HabPFisicaF6_Copia();
                HabFuncForm6_Copia2();
        }
        
        if ( Form6->ComboBox1->Text == "Natural" )
        {
                DesabFuncForm6_Copia2();
                DesabPJuridicaF6_Copia2();

                HabPFisicaF6_Copia();
                HabNatForm6_Copia();
        }

        if ( Form6->ComboBox1->Text == "Cliente" && Form6->Label39->Caption == "PF")
        {
                DesabNatForm6_Copia2();
                DesabFuncForm6_Copia2();
                DesabPJuridicaF6_Copia2();

                HabPFisicaF6_Copia();
        }

        if ( Form6->ComboBox1->Text == "Cliente" && Form6->Label39->Caption == "PJ")
        {
                DesabNatForm6_Copia2();
                DesabFuncForm6_Copia2();
                DesabPFisicaF6_Copia2();

                HabPJuridicaF6_Copia();
        }

        if (Form6->ComboBox1->Text == "Contribuinte" && Form6->Label39->Caption == "PF")
        {
                DesabNatForm6_Copia2();
                DesabFuncForm6_Copia2();
                DesabPJuridicaF6_Copia2();

                HabPFisicaF6_Copia();
        }

        if (Form6->ComboBox1->Text == "Contribuinte" && Form6->Label39->Caption == "PJ")
        {
                DesabNatForm6_Copia2();
                DesabFuncForm6_Copia2();
                DesabPFisicaF6_Copia2();
                
                HabPJuridicaF6_Copia();
        }

LimpaF6_Copia();      SelecionaSocio_Copia();       ExibeF6_Copia();

EscreveF6();
Form6->Position = poDesktopCenter;
Form6->Show();
        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ExcluirSociosClick(TObject *Sender)
{
//Socio	=>	Excluir

Form6->HelpContext = 180;

Form6->Caption = "Exclusão de Sócio";
Form6->SpeedButton1->Visible = false; //Atualizar
Form6->SpeedButton2->Visible = true; //Consultar
Form6->SpeedButton3->Visible = true; //Excluir
Form6->SpeedButton4->Visible = false; //Limpar
Form6->DBNavigator1->Visible = true;

Form6->Height = 499;

LimpaF6_Copia();      SelecionaSocio_Copia();       ExibeF6_Copia();

HabPJuridicaF6_Copia();     HabPFisicaF6_Copia();
HabNatForm6_Copia();        HabFuncForm6_Copia2();

NaoEscreveF6();
Form6->Position = poDesktopCenter;
Form6->Show();
        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CadastrarHistoricoClick(TObject *Sender)
{
//Historico	=>		cadastrar

Form8->HelpContext = 200;

LimpaHistorico_Copia();    EscreveHistorico_Copia();

Form8->Caption = "Cadastro de Histórico";
Form8->SpeedButton1->Visible = true; //CADASTRAR
Form8->SpeedButton2->Visible = false;//ATUALIZAR
Form8->SpeedButton3->Visible = false;//CONSULTAR
Form8->SpeedButton4->Visible = false;//TODOS
Form8->SpeedButton5->Visible = false;//EXCLUIR
Form8->SpeedButton6->Visible = true;//LIMPAR

Form8->DBNavigator1->Visible = false;
Form8->RadioGroup1->Visible = false;

/*  === CÓDIGO DO PRÓXIMO SÓCIO === */
SelecionaHistorico_Copia();
Form8->MaskEdit4->Text = Form1->Query1->FieldByName("CdHist")->AsInteger + 1;
Form8->Position = poDesktopCenter;
Form8->Show();
        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ConsultarHistoricoClick(TObject *Sender)
{
//Historico	=>	consultar

Form8->HelpContext = 220;

LimpaHistorico_Copia();    NaoEscreveHistorico_Copia();
Form8->Caption = "Consulta de Histórico";
Form8->SpeedButton1->Visible = false; //CADASTRAR
Form8->SpeedButton2->Visible = false;//ATUALIZAR
Form8->SpeedButton3->Visible = true ;//CONSULTAR
Form8->SpeedButton4->Visible = true;//TODOS
Form8->SpeedButton5->Visible = false;//EXCLUIR
Form8->SpeedButton6->Visible = false;//LIMPAR

Form8->DBNavigator1->Visible = true;
Form8->RadioGroup1->Visible = true;

Form8->SpeedButton3->Top = 173 ;//CONSULTAR
Form8->SpeedButton4->Top = 173;//TODOS
Form8->DBNavigator1->Top = 173;
Form8->RadioGroup1->Top = 198;

Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Historico.CdHist,Historico.CdSocHist,Historico.DtHist,Historico.Hist,Historico.ObsHist From Socio, Historico Where Socio.CdSoc = Historico.CdSocHist Order By Historico.CdHist");
Form1->Query1->ExecSQL();
Form1->Query1->Open();

Form1->Query1->Active = true;
ExibeSocioHistorico_Copia2();

Form8->Position = poDesktopCenter;
Form8->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::AtualizarHistoricoClick(TObject *Sender)
{
//Historico	=>	atualizar

Form8->HelpContext = 240;

LimpaHistorico_Copia();    EscreveHistorico_Copia();
Form8->Caption = "Atualização de Histórico";
Form8->SpeedButton1->Visible = false; //CADASTRAR
Form8->SpeedButton2->Visible = true;//ATUALIZAR
Form8->SpeedButton3->Visible = true;//CONSULTAR
Form8->SpeedButton4->Visible = true;//TODOS
Form8->SpeedButton5->Visible = false;//EXCLUIR
Form8->SpeedButton6->Visible = true;//LIMPAR

Form8->DBNavigator1->Visible = true;
Form8->RadioGroup1->Visible = true;

Form8->SpeedButton3->Top = 198;//CONSULTAR
Form8->SpeedButton4->Top = 198;//TODOS
Form8->DBNavigator1->Top = 198;
Form8->RadioGroup1->Top = 223;

        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Historico.CdHist,Historico.CdSocHist,Historico.DtHist,Historico.Hist,Historico.ObsHist From Socio, Historico Where Socio.CdSoc = Historico.CdSocHist Order By Historico.CdHist");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        Form1->Query1->Active = true;
        ExibeSocioHistorico_Copia2();
Form8->Position = poDesktopCenter;
Form8->Show();
        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ExcluirHistoricoClick(TObject *Sender)
{
//Historico	=>		excluir

Form8->HelpContext = 260;

LimpaHistorico_Copia();    NaoEscreveHistorico_Copia();
Form8->Caption = "Exclusão de Histórico";
Form8->SpeedButton1->Visible = false; //CADASTRAR
Form8->SpeedButton2->Visible = false;//ATUALIZAR
Form8->SpeedButton3->Visible = true;//CONSULTAR
Form8->SpeedButton4->Visible = true;//TODOS
Form8->SpeedButton5->Visible = true;//EXCLUIR
Form8->SpeedButton6->Visible = false;//LIMPAR

Form8->DBNavigator1->Visible = true;
Form8->RadioGroup1->Visible = true;

Form8->SpeedButton3->Top = 198;//CONSULTAR
Form8->SpeedButton4->Top = 198;//TODOS
Form8->DBNavigator1->Top = 198;
Form8->RadioGroup1->Top  = 223;



        LimpaHistorico_Copia();
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Historico.CdHist,Historico.CdSocHist,Historico.DtHist,Historico.Hist,Historico.ObsHist From Socio, Historico Where Socio.CdSoc = Historico.CdSocHist Order By Historico.CdHist");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        Form1->Query1->Active = true;
        ExibeSocioHistorico_Copia2();
Form8->Position = poDesktopCenter;
Form8->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::CadastrarDoacaoSociosClick(TObject *Sender)
{
//doaçao	=>	cadastrar

Form10->HelpContext = 280;

LimpaDoacao_Copia();
EscreveDoacao_Copia();
Form10->Caption = "Cadastro de Doação";

Form10->SpeedButton1->Visible = true; //CADASTRAR
Form10->SpeedButton2->Visible = false; //CONSULTAR
Form10->SpeedButton3->Visible = false; //ATUALIZAR
Form10->SpeedButton4->Visible = false; //EXCLUIR
Form10->SpeedButton5->Visible = true; //LIMPAR
Form10->SpeedButton6->Visible = false;  //TODOS

Form10->DBNavigator1->Visible = false;
Form10->RadioGroup2->Visible = false;

Form10->RadioGroup1->Enabled = true;
Form10->RadioGroup1->ItemIndex = -1;
Form10->Label3->Visible = false;       Form10->Label5->Visible = false;

/*  === CÓDIGO DO PRÓXIMO SÓCIO === */
SelecionaDoacao_Copia();
Form10->MaskEdit1->Text = Form1->Query1->FieldByName("CdDoa")->AsInteger + 1;
Form10->Position = poDesktopCenter;
Form10->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::ConsultarDoacaoSociosClick(TObject *Sender)
{
//doaçao	=>	consultar

Form10->HelpContext = 300;

LimpaDoacao_Copia();
NaoEscreveDoacao_Copia();
Form10->Caption = "Consulta de Doação";
Form10->SpeedButton1->Visible = false; //CADASTRAR
Form10->SpeedButton2->Visible = true; //CONSULTAR
Form10->SpeedButton3->Visible = false; //ATUALIZAR
Form10->SpeedButton4->Visible = false; //EXCLUIR
Form10->SpeedButton5->Visible = false; //LIMPAR
Form10->SpeedButton6->Visible = true;  //TODOS

Form10->DBNavigator1->Visible = true;
Form10->RadioGroup2->Visible = true;

Form10->SpeedButton2->Top = 152 ;//CONSULTAR
Form10->SpeedButton6->Top = 152;//TODOS
Form10->DBNavigator1->Top = 152;
Form10->RadioGroup2->Top =  177;

SelecionaSocioDoacao_Copia();
ExibeSocioDoacao_Copia2();

Form10->Label3->Visible = true;       Form10->Label5->Visible = true;
Form10->Position = poDesktopCenter;
Form10->Show();
        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AtualizarDoacaoSociosClick(TObject *Sender)
{
//doaçao	=>	Atualizar

Form10->HelpContext = 320;

LimpaDoacao_Copia();
EscreveDoacao_Copia();
Form10->Caption = "Atualização de Doação";
Form10->SpeedButton1->Visible = false; //CADASTRAR
Form10->SpeedButton2->Visible = true; //CONSULTAR
Form10->SpeedButton3->Visible = true; //ATUALIZAR
Form10->SpeedButton4->Visible = false; //EXCLUIR
Form10->SpeedButton5->Visible = true; //LIMPAR
Form10->SpeedButton6->Visible = true;  //TODOS

Form10->DBNavigator1->Visible = true;
Form10->RadioGroup2->Visible = true;

Form10->SpeedButton2->Top = 177 ;//CONSULTAR
Form10->SpeedButton6->Top = 177;//TODOS
Form10->DBNavigator1->Top = 177;
Form10->RadioGroup2->Top = 202;

SelecionaSocioDoacao_Copia();
ExibeSocioDoacao_Copia2();

Form10->RadioGroup1->Enabled = true;
Form10->RadioGroup1->ItemIndex = -1;
Form10->Label3->Visible = true;       Form10->Label5->Visible = true;
Form10->Position = poDesktopCenter;
Form10->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::ExcluirDoacaoSociosClick(TObject *Sender)
{
//doaçao	=>	excluir

Form10->HelpContext = 340;

LimpaDoacao_Copia();
NaoEscreveDoacao_Copia();
Form10->Caption = "Exclusão de Doação";
Form10->SpeedButton1->Visible = false;  //CADASTRAR
Form10->SpeedButton2->Visible = true;   //CONSULTAR
Form10->SpeedButton3->Visible = false;  //ATUALIZAR
Form10->SpeedButton4->Visible = true;   //EXCLUIR
Form10->SpeedButton5->Visible = false;  //LIMPAR
Form10->SpeedButton6->Visible = true;  //TODOS

Form10->DBNavigator1->Visible = true;
Form10->RadioGroup2->Visible = true;

Form10->SpeedButton2->Top = 177 ;//CONSULTAR
Form10->SpeedButton6->Top = 177;//TODOS
Form10->DBNavigator1->Top = 177;
Form10->RadioGroup2->Top = 202;

SelecionaSocioDoacao_Copia();
ExibeSocioDoacao_Copia2();

Form10->RadioGroup1->ItemIndex = -1;
Form10->RadioGroup1->Enabled = false;
Form10->Label3->Visible = true;       Form10->Label5->Visible = true;
Form10->Position = poDesktopCenter;
Form10->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::CadastrarAtividadeClick(TObject *Sender)
{
//Atividade	=>		cadastrar

Form12->HelpContext = 360;

Form12->Caption = "Cadastro de Sócio em Atividade";
Form12->SpeedButton1->Visible = true; //CADASTRAR
Form12->SpeedButton2->Visible = false; //CONSULTAR
Form12->SpeedButton3->Visible = false; //ATUALIZAR
Form12->SpeedButton4->Visible = false; //EXCLUIR
Form12->SpeedButton5->Visible = true; //LIMPAR
Form12->SpeedButton6->Visible = false;  //TODOS

Form12->Label8->Visible = false;
Form12->Label8->Caption = " ";

Form12->DBNavigator1->Visible = false;
Form12->RadioGroup1->Visible = false;

LimparAtividade_Copia();
EscreveAtividade_Copia();

/*  === CÓDIGO DO PRÓXIMO SÓCIO === */
SelecionaAtividade_Copia();
Form12->MaskEdit1->Text = Form1->Query1->FieldByName("CdAtiv")->AsInteger + 1;
Form12->Position = poDesktopCenter;
Form12->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::ConsultarAtividadeClick(TObject *Sender)
{
//Atividade	=>		consultar

Form12->HelpContext = 380;

Form12->Caption = "Consulta de Atividade";
Form12->SpeedButton1->Visible = false; //CADASTRAR
Form12->SpeedButton2->Visible = true; //CONSULTAR
Form12->SpeedButton3->Visible = false; //ATUALIZAR
Form12->SpeedButton4->Visible = false; //EXCLUIR
Form12->SpeedButton5->Visible = false; //LIMPAR
Form12->SpeedButton6->Visible = true;  //TODOS

Form12->Label8->Visible = true;
Form12->Label8->Caption = " ";

Form12->DBNavigator1->Visible = true;
Form12->RadioGroup1->Visible = true;

Form12->SpeedButton2->Top = 190 ;//CONSULTAR
Form12->SpeedButton6->Top = 190;//TODOS
Form12->DBNavigator1->Top = 190;
Form12->RadioGroup1->Top =  215;

LimparAtividade_Copia();
NaoEscreveAtividade_Copia();
SelecionaSocioAtividade_Copia();
ExibeSocioAtividade_Copia();
Form12->Position = poDesktopCenter;
Form12->Show();
        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AtualizarAtividadeClick(TObject *Sender)
{
//Atividade		=>	Atualizar

Form12->HelpContext = 400;

Form12->Caption = "Atualização de Atividade";
Form12->SpeedButton1->Visible = false; //CADASTRAR
Form12->SpeedButton2->Visible = true; //CONSULTAR
Form12->SpeedButton3->Visible = true; //ATUALIZAR
Form12->SpeedButton4->Visible = false; //EXCLUIR
Form12->SpeedButton5->Visible = true; //LIMPAR
Form12->SpeedButton6->Visible = true;  //TODOS

Form12->Label8->Visible = true;
Form12->Label8->Caption = " ";

Form12->DBNavigator1->Visible = true;
Form12->RadioGroup1->Visible = true;

Form12->SpeedButton2->Top =  215;//CONSULTAR
Form12->SpeedButton6->Top = 215;//TODOS
Form12->DBNavigator1->Top = 215;
Form12->RadioGroup1->Top =  241;

LimparAtividade_Copia();
EscreveAtividade_Copia();
SelecionaSocioAtividade_Copia();
ExibeSocioAtividade_Copia();
Form12->Position = poDesktopCenter;
Form12->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::ExcluirAtividadeClick(TObject *Sender)
{
//Atividade	=>		excluir

Form12->HelpContext = 420;

Form12->Caption = "Exclusão de Atividade";
Form12->SpeedButton1->Visible = false;  //CADASTRAR
Form12->SpeedButton2->Visible = true;   //CONSULTAR
Form12->SpeedButton3->Visible = false;  //ATUALIZAR
Form12->SpeedButton4->Visible = true;   //EXCLUIR
Form12->SpeedButton5->Visible = false;  //LIMPAR
Form12->SpeedButton6->Visible = true;  //TODOS

Form12->Label8->Visible = true;
Form12->Label8->Caption = " ";

Form12->DBNavigator1->Visible = true;
Form12->RadioGroup1->Visible = true;

Form12->SpeedButton2->Top =  215;//CONSULTAR
Form12->SpeedButton6->Top = 215;//TODOS
Form12->DBNavigator1->Top = 215;
Form12->RadioGroup1->Top =  241;

LimparAtividade_Copia();
NaoEscreveAtividade_Copia();
SelecionaSocioAtividade_Copia();
ExibeSocioAtividade_Copia();
Form12->Position = poDesktopCenter;
Form12->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::CadastrarServicoClick(TObject *Sender)
{
//servico		cadastrar

Form14->HelpContext = 440;

Form14->Caption = "Cadastro de Serviço";
Form14->SpeedButton1->Visible = true; //CADASTRAR
Form14->SpeedButton2->Visible = false; //CONSULTAR
Form14->SpeedButton3->Visible = false; //ATUALIZAR
Form14->SpeedButton4->Visible = false; //EXCLUIR
Form14->SpeedButton5->Visible = true; //LIMPAR
Form14->SpeedButton6->Visible = false;  //TODOS

Form14->Label20->Visible = false;
Form14->Label20->Caption = " ";

Form14->DBNavigator1->Visible = false;
Form14->RadioGroup2->Visible = false;

LimparServico_Copia();
EscreveServico();

/*  === CÓDIGO DO PRÓXIMO SÓCIO === */
SelecionaServico_Copia();
Form14->MaskEdit1->Text = Form1->Query1->FieldByName("CdServ")->AsInteger + 1;
Form14->Position = poDesktopCenter;
Form14->Show();
        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ConsultarServicoClick(TObject *Sender)
{
//servico		consultar

Form14->HelpContext = 460;

Form14->Caption = "Consulta de Serviço";
Form14->SpeedButton1->Visible = false; //CADASTRAR
Form14->SpeedButton2->Visible = true; //CONSULTAR
Form14->SpeedButton3->Visible = false; //ATUALIZAR
Form14->SpeedButton4->Visible = false; //EXCLUIR
Form14->SpeedButton5->Visible = false; //LIMPAR
Form14->SpeedButton6->Visible = true;  //TODOS

Form14->Label20->Visible = true;
Form14->Label20->Caption = " ";

Form14->DBNavigator1->Visible = true;
Form14->RadioGroup2->Visible = true;

Form14->SpeedButton2->Top = 395 ;//CONSULTAR
Form14->SpeedButton6->Top = 395;//TODOS
Form14->DBNavigator1->Top = 395;
Form14->RadioGroup2->Top =  420;

LimparServico_Copia();
NaoEscreveServico();

SelecionaSocioServico_Copia();
ExibeSocioServico_Copia();
Form14->Position = poDesktopCenter;
Form14->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::AtualizarServicoClick(TObject *Sender)
{
//servico		atualizar

Form14->HelpContext = 480;

Form14->Caption = "Atualização de Serviço";
Form14->SpeedButton1->Visible = false; //CADASTRAR
Form14->SpeedButton2->Visible = true; //CONSULTAR
Form14->SpeedButton3->Visible = true; //ATUALIZAR
Form14->SpeedButton4->Visible = false; //EXCLUIR
Form14->SpeedButton5->Visible = true; //LIMPAR
Form14->SpeedButton6->Visible = true;  //TODOS

Form14->Label20->Visible = true;
Form14->Label20->Caption = " ";

Form14->DBNavigator1->Visible = true;
Form14->RadioGroup2->Visible = true;

Form14->SpeedButton2->Top =  420;//CONSULTAR
Form14->SpeedButton6->Top = 420;//TODOS
Form14->DBNavigator1->Top = 420;
Form14->RadioGroup2->Top =  446;

LimparServico_Copia();
EscreveServico();

SelecionaSocioServico_Copia();
ExibeSocioServico_Copia();
Form14->Position = poDesktopCenter;
Form14->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::ExcluirServicoClick(TObject *Sender)
{
//servico	=>		excluir

Form14->HelpContext = 500;

Form14->Caption = "Exclusão de Serviço";
Form14->SpeedButton1->Visible = false; //CADASTRAR
Form14->SpeedButton2->Visible = true; //CONSULTAR
Form14->SpeedButton3->Visible = false; //ATUALIZAR
Form14->SpeedButton4->Visible = true; //EXCLUIR
Form14->SpeedButton5->Visible = false; //LIMPAR
Form14->SpeedButton6->Visible = true;  //TODOS

Form14->Label20->Visible = true;
Form14->Label20->Caption = " ";

Form14->DBNavigator1->Visible = true;
Form14->RadioGroup2->Visible = true;

Form14->SpeedButton2->Top =  420;//CONSULTAR
Form14->SpeedButton6->Top = 420;//TODOS
Form14->DBNavigator1->Top = 420;
Form14->RadioGroup2->Top =  446;

LimparServico_Copia();
NaoEscreveServico();

SelecionaSocioServico_Copia();
ExibeSocioServico_Copia();
Form14->Position = poDesktopCenter;
Form14->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::RelatorioNaturalClick(TObject *Sender)
{
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
//Form16->Close();
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

        Form16->Query1->Close();
        Form16->Query1->SQL->Clear();
        Form16->Query1->SQL->Add("Select * From Socio Where TpSoc = 'Natural'");
        Form16->Query1->ExecSQL();
        Form16->Query1->Open();

        Form16->QuickRep1->Page->Orientation = poLandscape;
        Form16->QRImage1->Picture->LoadFromFile(Caminho+"Logotipo.bmp");
        Form16->QuickRep1->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RelatorioContribuinteClick(TObject *Sender)
{
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
//Form17->Close();
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

        Form17->Query1->Close();
        Form17->Query1->SQL->Clear();
        Form17->Query1->SQL->Add("Select * From Socio Where TpSoc = 'Contribuinte'");
        Form17->Query1->ExecSQL();
        Form17->Query1->Open();

        Form17->QuickRep1->Page->Orientation = poLandscape;
        Form17->QRImage1->Picture->LoadFromFile(Caminho+"Logotipo.bmp");
        Form17->QuickRep1->Preview();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::RelatorioFuncionarioClick(TObject *Sender)
{
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
//Form18->Close();
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

        Form18->Query1->Close();
        Form18->Query1->SQL->Clear();
        Form18->Query1->SQL->Add("Select * From Socio Where TpSoc = 'Funcionário'");
        Form18->Query1->ExecSQL();
        Form18->Query1->Open();

        Form18->QuickRep1->Page->Orientation = poLandscape;
        Form18->QRImage1->Picture->LoadFromFile(Caminho+"Logotipo.bmp");
        Form18->QuickRep1->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RelatorioHistoricoClick(TObject *Sender)
{
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
//Form20->Close();
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

        Form20->Query1->Close();
        Form20->Query1->SQL->Clear();
        Form20->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Historico.CdHist,Historico.CdSocHist,Historico.DtHist,Historico.Hist,Historico.ObsHist From Socio, Historico Where Socio.CdSoc = Historico.CdSocHist");
        Form20->Query1->ExecSQL();
        Form20->Query1->Open();

        Form20->QuickRep1->Page->Orientation = poLandscape;
        Form20->QRImage1->Picture->LoadFromFile(Caminho+"Logotipo.bmp");
        Form20->QuickRep1->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RelatorioDoacaoClick(TObject *Sender)
{
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
//Form21->Close();
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

        Form21->Query1->Close();
        Form21->Query1->SQL->Clear();
        Form21->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Doacao.CdDoa,Doacao.CdSocDoa,Doacao.TpDoa,Doacao.DtDoa,Doacao.VlDoa,Doacao.ObsDoa From Socio, Doacao Where Socio.CdSoc = Doacao.CdSocDoa");
        Form21->Query1->ExecSQL();
        Form21->Query1->Open();

        Form21->QuickRep1->Page->Orientation = poLandscape;
        Form21->QRImage1->Picture->LoadFromFile(Caminho+"Logotipo.bmp");
        Form21->QuickRep1->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RelatorioAtividadeClick(TObject *Sender)
{
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
//Form22->Close();
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

        Form22->Query1->Close();
        Form22->Query1->SQL->Clear();
        Form22->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Atividade.CdAtiv,Atividade.NmAtiv,Atividade.CdSocAtiv,Atividade.DtIniAtiv,Atividade.DtFimAtiv,Atividade.DiasAtiv,Atividade.HrIniAtiv,Atividade.HrFimAtiv,Atividade.ObsAtiv From Socio, Atividade Where Socio.CdSoc = Atividade.CdSocAtiv ");
        Form22->Query1->ExecSQL();
        Form22->Query1->Open();

        Form22->QuickRep1->Page->Orientation = poLandscape;
        Form22->QRImage1->Picture->LoadFromFile(Caminho+"Logotipo.bmp");
        Form22->QuickRep1->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RelatorioServicoClick(TObject *Sender)
{
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
//Form23->Close();
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

        Form23->Query1->Close();
        Form23->Query1->SQL->Clear();
        Form23->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Servico.CdServ,Servico.CdSocServ,Servico.TpServ,Servico.DtPedServ,Servico.DtEntServ,Servico.HrIniServ,Servico.HrFimServ,Servico.EstabServ,Servico.RespServ,Servico.MedServ,Servico.QtDegServ,Servico.EventServ,Servico.VlServ,Servico.CheqServ,Servico.ModServ,Servico.DefServ,Servico.ObsServ From Socio, Servico Where Socio.CdSoc = Servico.CdSocServ");
        Form23->Query1->ExecSQL();
        Form23->Query1->Open();
        
        Form23->QuickRep1->Page->Orientation = poLandscape;
        Form23->QRImage1->Picture->LoadFromFile(Caminho+"Logotipo.bmp");
        Form23->QuickRep1->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AparenciaClick(TObject *Sender)
{
//Carrega a caixa de diálogo Cor
        if (ColorDialog1 -> Execute())
        {
                Form1->Panel1->Color = ColorDialog1 -> Color;
                Form2->Panel1->Color = ColorDialog1 -> Color;
                Form3->Panel1->Color = ColorDialog1 -> Color;
                Form4->Panel1->Color = ColorDialog1 -> Color;
                Form5->Panel1->Color = ColorDialog1 -> Color;
                Form6->Panel1->Color = ColorDialog1 -> Color;
                Form7->Panel1->Color = ColorDialog1 -> Color;
                Form8->Panel1->Color = ColorDialog1 -> Color;
                Form9->Panel1->Color = ColorDialog1 -> Color;
                Form10->Panel1->Color = ColorDialog1 -> Color;
                Form11->Panel1->Color = ColorDialog1 -> Color;
                Form12->Panel1->Color = ColorDialog1 -> Color;
                Form13->Panel1->Color = ColorDialog1 -> Color;
                Form14->Panel1->Color = ColorDialog1 -> Color;
                Form15->Panel1->Color = ColorDialog1 -> Color;
                Form16->Color = ColorDialog1 -> Color;
                Form17->Color = ColorDialog1 -> Color;
                Form18->Color = ColorDialog1 -> Color;
                Form19->Color = ColorDialog1 -> Color;
                Form20->Color = ColorDialog1 -> Color;
                Form21->Color = ColorDialog1 -> Color;
                Form22->Color = ColorDialog1 -> Color;
                Form23->Color = ColorDialog1 -> Color;
                Form24->Panel1->Color = ColorDialog1 -> Color;
                Form25->Color = ColorDialog1 -> Color;
                Form26->Panel1->Color = ColorDialog1 -> Color;
                Form27->Panel1->Color = ColorDialog1 -> Color;
                Form28->Color = ColorDialog1 -> Color;
                Form29->Panel1->Color = ColorDialog1 -> Color;
                Form30->Panel1->Color = ColorDialog1 -> Color;
                Form31->Panel1->Color = ColorDialog1 -> Color;
                Form32->Panel1->Color = ColorDialog1 -> Color;
                Form33->Color = ColorDialog1 -> Color;
                
                AboutBox->Color = ColorDialog1 -> Color;
        }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::AjudaCadastroClick(TObject *Sender)
{
/* === EXIBE O ARQUIVO DE AJUDA === */
Application->HelpFile = "Ajuda.hlp";
Application->HelpContext(540);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SobreClick(TObject *Sender)
{
/* == SOBRE O PROGRAMADOR === */
AboutBox->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::RelatorioAniversariantesClick(TObject *Sender)
{
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
//Form24->Close();
Form25->Close();
Form26->Close();
Form27->Close();
Form28->Close();
Form29->Close();
Form30->Close();
Form31->Close();
Form32->Close();
Form33->Close();

Form24->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CopiarClick(TObject *Sender)
{

ShowMessage("Coloque um Disquete Formatado no Drive A:");

/*faz uma animação*/
Animate1->Visible = true;
Animate1->Active = true;
Sleep(3311);
Animate1->Active = false;
Animate1->Visible = false;


try
{
        CopyFile((ExtractFilePath(ParamStr(0))+"\\Atividade.db").c_str(),"a:\\Atividade.db",false);
        CopyFile((ExtractFilePath(ParamStr(0))+"\\Atividade.px").c_str(),"a:\\Atividade.px",false);

        CopyFile((ExtractFilePath(ParamStr(0))+"\\Doacao.db").c_str(),"a:\\Doacao.db",false);
        CopyFile((ExtractFilePath(ParamStr(0))+"\\Doacao.px").c_str(),"a:\\Doacao.px",false);

        CopyFile((ExtractFilePath(ParamStr(0))+"\\Historico.db").c_str(),"a:\\Historico.db",false);
        CopyFile((ExtractFilePath(ParamStr(0))+"\\Historico.px").c_str(),"a:\\Historico.px",false);

        CopyFile((ExtractFilePath(ParamStr(0))+"\\Servico.db").c_str(),"a:\\Servico.db",false);
        CopyFile((ExtractFilePath(ParamStr(0))+"\\Servico.px").c_str(),"a:\\Servico.px",false);

        CopyFile((ExtractFilePath(ParamStr(0))+"\\Socio.db").c_str(),"a:\\Socio.db",false);
        CopyFile((ExtractFilePath(ParamStr(0))+"\\Socio.px").c_str(),"a:\\Socio.px",false);

        CopyFile((ExtractFilePath(ParamStr(0))+"\\TeleMarketing.db").c_str(),"a:\\TeleMarketing.db",false);
        CopyFile((ExtractFilePath(ParamStr(0))+"\\TeleMarketing.px").c_str(),"a:\\TeleMarketing.px",false);

        CopyFile((ExtractFilePath(ParamStr(0))+"\\DoacaoTeleMarketing.db").c_str(),"a:\\DoacaoTeleMarketing.db",false);
        CopyFile((ExtractFilePath(ParamStr(0))+"\\DoacaoTeleMarketing.px").c_str(),"a:\\DoacaoTeleMarketing.px",false);


        ShowMessage("Cópia de Segurança Realizada!!!");
}
catch(...)
{
        ShowMessage("ERRO: Verifique o Disquete!!!");
        return;
}


        
}
//---------------------------------------------------------------------------


void __fastcall TForm1::RestaurarClick(TObject *Sender)
{
ShowMessage("Coloque o Disquete que Contém a Cópia de Segurança no Drive A:");

/*faz uma animação*/
Animate1->Visible = true;
Animate1->Active = true;
Sleep(3311);
Animate1->Active = false;
Animate1->Visible = false;

try
{

        CopyFile("a:\\Atividade.db",(ExtractFilePath(ParamStr(0))+"\\Atividade.db").c_str(),false);
        CopyFile("a:\\Atividade.px",(ExtractFilePath(ParamStr(0))+"\\Atividade.px").c_str(),false);

        CopyFile("a:\\Doacao.db",(ExtractFilePath(ParamStr(0))+"\\Doacao.db").c_str(),false);
        CopyFile("a:\\Doacao.px",(ExtractFilePath(ParamStr(0))+"\\Doacao.px").c_str(),false);

        CopyFile("a:\\Historico.db",(ExtractFilePath(ParamStr(0))+"\\Historico.db").c_str(),false);
        CopyFile("a:\\Historico.px",(ExtractFilePath(ParamStr(0))+"\\Historico.px").c_str(),false);

        CopyFile("a:\\Servico.db",(ExtractFilePath(ParamStr(0))+"\\Servico.db").c_str(),false);
        CopyFile("a:\\Servico.px",(ExtractFilePath(ParamStr(0))+"\\Servico.px").c_str(),false);

        CopyFile("a:\\Socio.db",(ExtractFilePath(ParamStr(0))+"\\Socio.db").c_str(),false);
        CopyFile("a:\\Socio.px",(ExtractFilePath(ParamStr(0))+"\\Socio.px").c_str(),false);

        CopyFile("a:\\TeleMarketing.db",(ExtractFilePath(ParamStr(0))+"\\TeleMarketing.db").c_str(),false);
        CopyFile("a:\\TeleMarketing.px",(ExtractFilePath(ParamStr(0))+"\\TeleMarketing.px").c_str(),false);

        CopyFile("a:\\DoacaoTeleMarketing.db",(ExtractFilePath(ParamStr(0))+"\\DoacaoTeleMarketing.db").c_str(),false);
        CopyFile("a:\\DoacaoTeleMarketing.px",(ExtractFilePath(ParamStr(0))+"\\DoacaoTeleMarketing.px").c_str(),false);


}
catch(...)
{
        ShowMessage("ERRO: Verifique o Disquete!!!");
        return;
}
        
        Form1->Query1->Close();
       // Form1->Query1->Refresh();
        Form1->Query1->SQL->Clear();
//        Form1->Query1->SQL->Add("Select * From Socio,Atividade,Doacao,DoacaoTeleMarketing,Historico,Servico,TeleMarketing Where (CdSocAtiv = CdSoc And CdSocDoa = CdSoc And CdSocHist = CdSoc And CdSocServ = CdSoc) Order By CdSoc");
        Form1->Query1->SQL->Add("Select * From Socio,Atividade,Doacao,DoacaoTeleMarketing,Historico,Servico,TeleMarketing");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        ShowMessage("O Sistema de Cadastro de Sócio \n Será Fechado para Efetivar a Restauração!!!");
        Application->Terminate(); 

}
//---------------------------------------------------------------------------


void __fastcall TForm1::ConsultarDoadorTelClick(TObject *Sender)
{
//TeleMarketing	=>	consultar

Form26->HelpContext = 140;

LimpaTeleMarketing();
NaoEscreveTeleMarketing();
Form26->Caption = "Consulta de TeleMarketing";
Form26->SpeedButton1->Visible = false; //ATUALIZAR
Form26->SpeedButton2->Visible = true; //CONSULTAR
Form26->SpeedButton3->Visible = false; //EXCLUIR
Form26->SpeedButton4->Visible = false; //Limpar

Form26->DBNavigator1->Visible = true;
Form26->RadioGroup1->Visible = true;

SelecionaTeleMarketing_Copia2();
ExibeTeleMarketing();

Form26->Position = poDesktopCenter;
Form26->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AtualizarDoadorTelClick(TObject *Sender)
{
//TeleMarketing	=>	Atualizar

Form26->HelpContext = 140;

LimpaTeleMarketing();
EscreveTeleMarketing();
Form26->Caption = "Atualização TeleMarketing";
Form26->SpeedButton1->Visible = true; //ATUALIZAR
Form26->SpeedButton2->Visible = true; //CONSULTAR
Form26->SpeedButton3->Visible = false; //EXCLUIR
Form26->SpeedButton4->Visible = true; //Limpar

Form26->DBNavigator1->Visible = true;
Form26->RadioGroup1->Visible = true;

/*Form26->SpeedButton2->Top = 152 ;//CONSULTAR
Form26->DBNavigator1->Top = 152;
Form26->RadioGroup1->Top =  177; */

SelecionaTeleMarketing_Copia2();
ExibeTeleMarketing();

Form26->Position = poDesktopCenter;
Form26->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ExcluirDoadorTelClick(TObject *Sender)
{
//TeleMarketing	=>	Excluiar

Form26->HelpContext = 140;

LimpaTeleMarketing();
NaoEscreveTeleMarketing();
Form26->Caption = "Exclusão TeleMarketing";
Form26->SpeedButton1->Visible = false; //ATUALIZAR
Form26->SpeedButton2->Visible = true; //CONSULTAR
Form26->SpeedButton3->Visible = true; //EXCLUIR
Form26->SpeedButton4->Visible = false; //Limpar

Form26->DBNavigator1->Visible = true;
Form26->RadioGroup1->Visible = true;

/*Form26->DBNavigator1->Top = 152;
Form26->RadioGroup1->Top =  177; */

SelecionaTeleMarketing_Copia2();
ExibeTeleMarketing();

Form26->Position = poDesktopCenter;
Form26->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RelatorioSociosTeleMarketingClick(TObject *Sender)
{
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
//Form19->Close();
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

        Form19->Query1->Close();
        Form19->Query1->SQL->Clear();
        Form19->Query1->SQL->Add("Select * From TeleMarketing");
        Form19->Query1->ExecSQL();
        Form19->Query1->Open();

        Form19->QuickRep1->Page->Orientation = poLandscape;
        Form19->QRImage1->Picture->LoadFromFile(Caminho+"Logotipo.bmp");
        Form19->QuickRep1->Preview();             
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CadastrarDoacaoTelClick(TObject *Sender)
{
//doaçao  TeleMarketing	=>	cadastrar

Form29->HelpContext = 280;

LimpaDoacaoTel_Copia();
EscreveDoacaoTel_Copia();
Form29->Caption = "Cadastro de Doação - TeleMarketing";

Form29->SpeedButton1->Visible = true; //CADASTRAR
Form29->SpeedButton2->Visible = false; //CONSULTAR
Form29->SpeedButton3->Visible = false; //ATUALIZAR
Form29->SpeedButton4->Visible = false; //EXCLUIR
Form29->SpeedButton5->Visible = true; //LIMPAR
Form29->SpeedButton6->Visible = false;  //TODOS

Form29->DBNavigator1->Visible = false;
Form29->RadioGroup2->Visible = false;

/*  === CÓDIGO DO PRÓXIMO SÓCIO === */
SelecionaDoacaoTel_Copia();
Form29->MaskEdit1->Text = Form1->Query1->FieldByName("CdDoaTel")->AsInteger + 1;
Form29->Position = poDesktopCenter;
Form29->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ConsultarDoacaoTelClick(TObject *Sender)
{
//doaçao  TeleMarketing	=>	consultar

Form29->HelpContext = 300;

LimpaDoacaoTel_Copia();
NaoEscreveDoacaoTel_Copia();
Form29->Caption = "Consulta de Doação - TeleMarketing";
Form29->SpeedButton1->Visible = false; //CADASTRAR
Form29->SpeedButton2->Visible = true; //CONSULTAR
Form29->SpeedButton3->Visible = false; //ATUALIZAR
Form29->SpeedButton4->Visible = false; //EXCLUIR
Form29->SpeedButton5->Visible = false; //LIMPAR
Form29->SpeedButton6->Visible = true;  //TODOS

Form29->DBNavigator1->Visible = true;
Form29->RadioGroup2->Visible = true;

Form29->SpeedButton2->Top = 115 ;//CONSULTAR
Form29->SpeedButton6->Top = 115;//TODOS
Form29->DBNavigator1->Top = 116;
Form29->RadioGroup2->Top =  139;

SelecionaSocioDoacaoTel_Copia();
ExibeSocioDoacaoTel_Copia2();

Form29->Position = poDesktopCenter;
Form29->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AtualizarDoacaoTelClick(TObject *Sender)
{
//doaçao    TeleMarketing	=>	Atualizar

Form29->HelpContext = 320;

LimpaDoacaoTel_Copia();
EscreveDoacaoTel_Copia();
Form29->Caption = "Atualização de Doação - TeleMarketing";
Form29->SpeedButton1->Visible = false; //CADASTRAR
Form29->SpeedButton2->Visible = true; //CONSULTAR
Form29->SpeedButton3->Visible = true; //ATUALIZAR
Form29->SpeedButton4->Visible = false; //EXCLUIR
Form29->SpeedButton5->Visible = true; //LIMPAR
Form29->SpeedButton6->Visible = true;  //TODOS

Form29->DBNavigator1->Visible = true;
Form29->RadioGroup2->Visible = true;

Form29->SpeedButton2->Top = 139 ;//CONSULTAR
Form29->SpeedButton6->Top = 139;//TODOS
Form29->DBNavigator1->Top = 140;
Form29->RadioGroup2->Top = 165;

SelecionaSocioDoacaoTel_Copia();
ExibeSocioDoacaoTel_Copia2();

Form29->Position = poDesktopCenter;
Form29->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ExcluirDoacaoTelClick(TObject *Sender)
{
//doaçao    TeleMarketing	=>	excluir

Form29->HelpContext = 340;

LimpaDoacaoTel_Copia();
NaoEscreveDoacaoTel_Copia();
Form29->Caption = "Exclusão de Doação - TeleMarketing";
Form29->SpeedButton1->Visible = false;  //CADASTRAR
Form29->SpeedButton2->Visible = true;   //CONSULTAR
Form29->SpeedButton3->Visible = false;  //ATUALIZAR
Form29->SpeedButton4->Visible = true;   //EXCLUIR
Form29->SpeedButton5->Visible = false;  //LIMPAR
Form29->SpeedButton6->Visible = true;  //TODOS

Form29->DBNavigator1->Visible = true;
Form29->RadioGroup2->Visible = true;

Form29->SpeedButton4->Top = 115 ;
Form29->SpeedButton2->Top = 139;//CONSULTAR
Form29->SpeedButton6->Top = 139;//TODOS
Form29->DBNavigator1->Top = 140;
Form29->RadioGroup2->Top = 165;

SelecionaSocioDoacaoTel_Copia();
ExibeSocioDoacaoTel_Copia2();

Form29->Position = poDesktopCenter;
Form29->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RelatorioDoacaoTeleMarketingClick(TObject *Sender)
{
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
Form29->Close();
//Form30->Close();
Form31->Close();
Form32->Close();
Form33->Close();

Form30->Caption = "Relatório de Doações TeleMarketing";
Form30->ShowModal();
}
//---------------------------------------------------------------------------


