//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UConsAtuaExcSocio.h" //Form6

/* === FORMULÁRIOS === */
#include "UInicio.h" //Form1
#include "UCadClienteContribuintePF.h"//Form2
#include "UCadastroFuncionario.h"  //Form3
#include "UCadastroNatural.h" //Form4
#include "UCadClienteContribuintePJ.h" //Form5

#include "UTipoConsultaSocio.h" //Form7
#include "UHistorico.h" //Form8
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

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
        : TForm(Owner)
{
}
//--------------------------------------------------------------------------
AnsiString    VDT11,   VDT12;
//--------------------------------------------------------------------------
/* === FUNÇOES ===*/

/* ===== UTILIZA EDIT PARA ATUALIZAR ===== */
void ExibeF6()
{
Form6->Label39->Caption = Form1->Query1->FieldByName("TpPes")->AsString;

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

/* === LIMPA TUDO === */  
void LimpaF6()
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
  /* === DESABILITA NATURAL === */
void DesabNatForm6()
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
void HabNatForm6()
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
void DesabFuncForm6()
{
Form6->Label22->Enabled = false;
Form6->Edit12->Enabled = false; /* === CargoSoc === */
Form6->Label36->Enabled = false;
Form6->ComboBox5->Enabled = false; /* === TpFunc === */
Form6->Label23->Enabled = false;
Form6->MaskEdit11->Enabled = false; /* === SalSoc === */
}
//---------------------------------------------------------------------------
void HabFuncForm6()
{
Form6->Label22->Enabled = true;
Form6->Edit12->Enabled = true; /* === CargoSoc === */
Form6->Label36->Enabled = true;
Form6->ComboBox5->Enabled = true; /* === TpFunc === */
Form6->Label23->Enabled = true;
Form6->MaskEdit11->Enabled = true; /* === SalSoc === */
}
//---------------------------------------------------------------------------
void DesabPJuridicaF6()
{
Form6->Label6->Enabled = false;
Form6->Edit10->Enabled = false; /* === NmRepr === */
Form6->Label7->Enabled = false;
Form6->MaskEdit14->Enabled = false; /* === CnpjSoc === */
}
//-----------------------------------------------------------------------------
void HabPJuridicaF6()
{
Form6->Label6->Enabled = true;
Form6->Edit10->Enabled = true; /* === NmRepr === */
Form6->Label7->Enabled = true;
Form6->MaskEdit14->Enabled = true; /* === CnpjSoc === */
}
//-----------------------------------------------------------------------------
void HabPFisicaF6()
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
void DesabPFisicaF6()
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
void SelecionaSocio()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From Socio");
Form1->Query1->ExecSQL();
Form1->Query1->Open();
//Form1->Query1->First();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::MaskEdit1Exit(TObject *Sender)
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
void __fastcall TForm6::MaskEdit2Exit(TObject *Sender)
{
/* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D1 (MaskEdit2->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D1.DATAZERO() )
        {
               if (  D1.VERIFICADATA())
               ;
               else
               {
                ShowMessage("Verifique a Data Digitada!!!");
                MaskEdit2->Clear();
               }
        }

        else
        {
                ShowMessage("Verifique a Data Digitada!!!");
                MaskEdit2->Clear();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm6::FormActivate(TObject *Sender)
{
/*== FECHA FORMULÁRIOS ==*/
Form2->Close();
Form3->Close();
Form4->Close();
Form5->Close();
//Form6->Close();
//Form7->Close();
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
Form30->Close();
Form31->Close();
Form32->Close();
Form33->Close();

SelecionaSocio();

//SE ATUALIZAR
if (Form6->SpeedButton1->Visible == true )
{

        if ( Form6->ComboBox1->Text == "Funcionário" )
        {
                DesabNatForm6();
                DesabPJuridicaF6();

                HabPFisicaF6();
                HabFuncForm6();
        }
        
        if ( Form6->ComboBox1->Text == "Natural" )
        {
                DesabFuncForm6();
                DesabPJuridicaF6();

                HabPFisicaF6();        
                HabNatForm6();
        }

        if ( Form6->ComboBox1->Text == "Cliente" && Label39->Caption == "PF")
        {
                DesabNatForm6();
                DesabFuncForm6();
                DesabPJuridicaF6();

                HabPFisicaF6();
        }

        if ( Form6->ComboBox1->Text == "Cliente" && Label39->Caption == "PJ")
        {
                DesabNatForm6();
                DesabFuncForm6();
                DesabPFisicaF6();

                HabPJuridicaF6();
        }

        if (Form6->ComboBox1->Text == "Contribuinte" && Label39->Caption == "PF")
        {
                DesabNatForm6();
                DesabFuncForm6();
                DesabPJuridicaF6();

                HabPFisicaF6();
        }

        if (Form6->ComboBox1->Text == "Contribuinte" && Label39->Caption == "PJ")
        {
                DesabNatForm6();
                DesabFuncForm6();
                DesabPFisicaF6();
                
                HabPJuridicaF6();
        }
}//SE ATUALIZAR

}
//---------------------------------------------------------------------------
void __fastcall TForm6::Edit1KeyPress(TObject *Sender, char &Key)
{
ShowMessage("Não Digite o Código!!!");
}
//---------------------------------------------------------------------------
void __fastcall TForm6::ComboBox1Change(TObject *Sender)
{
         /* === Cliente === */
if (Form6->ComboBox1->ItemIndex == 0)
{
        DesabNatForm6();
        DesabFuncForm6();
}

        /* === Contribuinte === */
if (Form6->ComboBox1->ItemIndex == 1)
{
        DesabNatForm6();
        DesabFuncForm6();
}

        /* === Funcionário === */
if (Form6->ComboBox1->ItemIndex == 2)
{
        DesabNatForm6();
        HabFuncForm6();
}

        /* === Natural === */
if (Form6->ComboBox1->ItemIndex == 3)
{
        HabNatForm6();
        DesabFuncForm6();
}

}
//---------------------------------------------------------------------------

void __fastcall TForm6::DBNavigator1Click(TObject *Sender,
      TNavigateBtn Button)
{
ExibeF6();

//SE ATUALIZAR
if (Form6->SpeedButton1->Visible == true )
{

        if ( Form6->ComboBox1->Text == "Funcionário" )
        {
                DesabNatForm6();
                DesabPJuridicaF6();

                HabPFisicaF6();
                HabFuncForm6();
        }
        
        if ( Form6->ComboBox1->Text == "Natural" )
        {
                DesabFuncForm6();
                DesabPJuridicaF6();

                HabPFisicaF6();        
                HabNatForm6();
        }

        if ( Form6->ComboBox1->Text == "Cliente" && Label39->Caption == "PF")
        {
                DesabNatForm6();
                DesabFuncForm6();
                DesabPJuridicaF6();

                HabPFisicaF6();
        }

        if ( Form6->ComboBox1->Text == "Cliente" && Label39->Caption == "PJ")
        {
                DesabNatForm6();
                DesabFuncForm6();
                DesabPFisicaF6();

                HabPJuridicaF6();
        }

        if (Form6->ComboBox1->Text == "Contribuinte" && Label39->Caption == "PF")
        {
                DesabNatForm6();
                DesabFuncForm6();
                DesabPJuridicaF6();

                HabPFisicaF6();
        }

        if (Form6->ComboBox1->Text == "Contribuinte" && Label39->Caption == "PJ")
        {
                DesabNatForm6();
                DesabFuncForm6();
                DesabPFisicaF6();
                
                HabPJuridicaF6();
        }
}//SE ATUALIZAR

}
//---------------------------------------------------------------------------

void __fastcall TForm6::SpeedButton1Click(TObject *Sender)
{
if ( Label39->Caption != "PJ" )
{
/* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
        DATA D11 (MaskEdit1->Text.c_str());

        /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D11.DATAZERO() )
        {
               if (  D11.VERIFICADATA())
               {
                        VDT11 = D11.DT();
               }

               else
               {
                        ShowMessage("Verifique a Data de Cadastro!!!");
                        MaskEdit1->Clear();
               }
        }

        else
        {
                ShowMessage("Verifique a Data de Cadastro!!!");
                MaskEdit1->Clear();
        }

        //---------------------------------------------------------------------
        /* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
        DATA D12 (MaskEdit2->Text.c_str());

        /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D12.DATAZERO() )
        {
               if (  D12.VERIFICADATA())
               {
                        VDT12 = D12.DT();
               }

               else
               {
                        ShowMessage("Verifique a Data de Nascimento!!!");
                        MaskEdit2->Clear();
               }
        }

        else
        {
                ShowMessage("Verifique a Data de Nascimento!!!");
                MaskEdit2->Clear();
        }
}

else
{
/* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
        DATA D11 (MaskEdit1->Text.c_str());

        /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D11.DATAZERO() )
        {
               if (  D11.VERIFICADATA())
               {
                        VDT11 = D11.DT();
               }

               else
               {
                        ShowMessage("Verifique a Data de Cadastro!!!");
                        MaskEdit1->Clear();
               }
        }

        else
        {
                ShowMessage("Verifique a Data de Cadastro!!!");
                MaskEdit1->Clear();
        }


}

//=============================================================================
        if (Form6->ComboBox1->Text == "Funcionário")
                {

                        if ( MaskEdit1->Text != "  /  /    " && MaskEdit2->Text != "  /  /    ")
                        {
                                Form1->Query1->Close();
                                Form1->Query1->SQL->Clear();
                                Form1->Query1->SQL->Add("Update Socio Set DtCad ='"+VDT11+"',TpSoc='"+ComboBox1->Text+"',NmSoc='"+Edit5->Text+"',RgSoc='"+MaskEdit9->Text+"',CpfSoc='"+MaskEdit10->Text+"',CnpjSoc='"+ +"',SexoSoc='"+ComboBox2->Text+"',DtNasc='"+VDT12+"',NatSoc='"+Edit16->Text+"',EstCiv='"+ComboBox3->Text+"',MaeSoc='"+Edit6->Text+"',PaiSoc='"+Edit9->Text+"',EndSoc='"+Edit20->Text+"',CompSoc='"+Edit21->Text+"',BairroSoc='"+Edit22->Text+"',CepSoc='"+MaskEdit13->Text+"',CidSoc='"+Edit24->Text+"',EstSoc='"+ComboBox6->Text+"',TelSoc='"+MaskEdit3->Text+"',CelSoc='"+MaskEdit4->Text+"',EscSoc='"+ComboBox4->Text+"',MatSoc='"+MaskEdit12->Text+"',RamSoc='"+MaskEdit5->Text+"',CargoSoc='"+Edit12->Text+"',SalSoc='"+MaskEdit11->Text+"',TpFunc='"+ComboBox5->Text+"',DefSoc='"+ +"',QtFilh='"+ +"',QtFam='"+ +"',QtTrab='"+ +"',VlRen='"+ +"',CasaSoc='"+ +"',ImovSoc='"+ +"',ResidSoc='"+ +"',ParSoc='"+ +"',ObsSoc='"+Edit38->Text+"',NmRepr='"+ +"' where CdSoc='"+Edit1->Text+"'");
                                Form1->Query1->ExecSQL();
                                Form1->Query1->Close();
                        }


                        if ( MaskEdit1->Text != "  /  /    " && MaskEdit2->Text == "  /  /    ")
                        {
                                Form1->Query1->Close();
                                Form1->Query1->SQL->Clear();
                                Form1->Query1->SQL->Add("Update Socio Set DtCad ='"+VDT11+"',TpSoc='"+ComboBox1->Text+"',NmSoc='"+Edit5->Text+"',RgSoc='"+MaskEdit9->Text+"',CpfSoc='"+MaskEdit10->Text+"',CnpjSoc='"+ +"',SexoSoc='"+ComboBox2->Text+"',NatSoc='"+Edit16->Text+"',EstCiv='"+ComboBox3->Text+"',MaeSoc='"+Edit6->Text+"',PaiSoc='"+Edit9->Text+"',EndSoc='"+Edit20->Text+"',CompSoc='"+Edit21->Text+"',BairroSoc='"+Edit22->Text+"',CepSoc='"+MaskEdit13->Text+"',CidSoc='"+Edit24->Text+"',EstSoc='"+ComboBox6->Text+"',TelSoc='"+MaskEdit3->Text+"',CelSoc='"+MaskEdit4->Text+"',EscSoc='"+ComboBox4->Text+"',MatSoc='"+MaskEdit12->Text+"',RamSoc='"+MaskEdit5->Text+"',CargoSoc='"+Edit12->Text+"',SalSoc='"+MaskEdit11->Text+"',TpFunc='"+ComboBox5->Text+"',DefSoc='"+ +"',QtFilh='"+ +"',QtFam='"+ +"',QtTrab='"+ +"',VlRen='"+ +"',CasaSoc='"+ +"',ImovSoc='"+ +"',ResidSoc='"+ +"',ParSoc='"+ +"',ObsSoc='"+Edit38->Text+"',NmRepr='"+ +"' where CdSoc='"+Edit1->Text+"'");
                                Form1->Query1->ExecSQL();
                                Form1->Query1->Close();
                        }


                        if ( MaskEdit1->Text == "  /  /    " && MaskEdit2->Text != "  /  /    ")
                        {
                                Form1->Query1->Close();
                                Form1->Query1->SQL->Clear();
                                Form1->Query1->SQL->Add("Update Socio Set TpSoc='"+ComboBox1->Text+"',NmSoc='"+Edit5->Text+"',RgSoc='"+MaskEdit9->Text+"',CpfSoc='"+MaskEdit10->Text+"',CnpjSoc='"+ +"',SexoSoc='"+ComboBox2->Text+"',DtNasc='"+VDT12+"',NatSoc='"+Edit16->Text+"',EstCiv='"+ComboBox3->Text+"',MaeSoc='"+Edit6->Text+"',PaiSoc='"+Edit9->Text+"',EndSoc='"+Edit20->Text+"',CompSoc='"+Edit21->Text+"',BairroSoc='"+Edit22->Text+"',CepSoc='"+MaskEdit13->Text+"',CidSoc='"+Edit24->Text+"',EstSoc='"+ComboBox6->Text+"',TelSoc='"+MaskEdit3->Text+"',CelSoc='"+MaskEdit4->Text+"',EscSoc='"+ComboBox4->Text+"',MatSoc='"+MaskEdit12->Text+"',RamSoc='"+MaskEdit5->Text+"',CargoSoc='"+Edit12->Text+"',SalSoc='"+MaskEdit11->Text+"',TpFunc='"+ComboBox5->Text+"',DefSoc='"+ +"',QtFilh='"+ +"',QtFam='"+ +"',QtTrab='"+ +"',VlRen='"+ +"',CasaSoc='"+ +"',ImovSoc='"+ +"',ResidSoc='"+ +"',ParSoc='"+ +"',ObsSoc='"+Edit38->Text+"',NmRepr='"+ +"' where CdSoc='"+Edit1->Text+"'");
                                Form1->Query1->ExecSQL();
                                Form1->Query1->Close();
                        }

                        if ( MaskEdit1->Text == "  /  /    " && MaskEdit2->Text == "  /  /    ")
                        {
                                Form1->Query1->Close();
                                Form1->Query1->SQL->Clear();
                                Form1->Query1->SQL->Add("Update Socio Set TpSoc='"+ComboBox1->Text+"',NmSoc='"+Edit5->Text+"',RgSoc='"+MaskEdit9->Text+"',CpfSoc='"+MaskEdit10->Text+"',CnpjSoc='"+ +"',SexoSoc='"+ComboBox2->Text+"',NatSoc='"+Edit16->Text+"',EstCiv='"+ComboBox3->Text+"',MaeSoc='"+Edit6->Text+"',PaiSoc='"+Edit9->Text+"',EndSoc='"+Edit20->Text+"',CompSoc='"+Edit21->Text+"',BairroSoc='"+Edit22->Text+"',CepSoc='"+MaskEdit13->Text+"',CidSoc='"+Edit24->Text+"',EstSoc='"+ComboBox6->Text+"',TelSoc='"+MaskEdit3->Text+"',CelSoc='"+MaskEdit4->Text+"',EscSoc='"+ComboBox4->Text+"',MatSoc='"+MaskEdit12->Text+"',RamSoc='"+MaskEdit5->Text+"',CargoSoc='"+Edit12->Text+"',SalSoc='"+MaskEdit11->Text+"',TpFunc='"+ComboBox5->Text+"',DefSoc='"+ +"',QtFilh='"+ +"',QtFam='"+ +"',QtTrab='"+ +"',VlRen='"+ +"',CasaSoc='"+ +"',ImovSoc='"+ +"',ResidSoc='"+ +"',ParSoc='"+ +"',ObsSoc='"+Edit38->Text+"',NmRepr='"+ +"' where CdSoc='"+Edit1->Text+"'");
                                Form1->Query1->ExecSQL();
                                Form1->Query1->Close();
                        }
                }
//================================================================================
                if (Form6->ComboBox1->Text == "Natural")
                {
                        if ( MaskEdit1->Text != "  /  /    " && MaskEdit2->Text != "  /  /    ")
                        {
                        Form1->Query1->Close();
                        Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Update Socio Set DtCad ='"+VDT11+"',TpSoc='"+ComboBox1->Text+"',NmSoc='"+Edit5->Text+"',RgSoc='"+MaskEdit9->Text+"',CpfSoc='"+MaskEdit10->Text+"',CnpjSoc='" "',SexoSoc='"+ComboBox2->Text+"',DtNasc='"+VDT12+"',NatSoc='"+Edit16->Text+"',EstCiv='"+ComboBox3->Text+"',MaeSoc='"+Edit6->Text+"',PaiSoc='"+Edit9->Text+"',EndSoc='"+Edit20->Text+"',CompSoc='"+Edit21->Text+"',BairroSoc='"+Edit22->Text+"',CepSoc='"+MaskEdit13->Text+"',CidSoc='"+Edit24->Text+"',EstSoc='"+ComboBox6->Text+"',TelSoc='"+MaskEdit3->Text+"',CelSoc='"+MaskEdit4->Text+"',EscSoc='"+ComboBox4->Text+"',MatSoc='"+MaskEdit12->Text+"',RamSoc='"+MaskEdit5->Text+"',CargoSoc='" "',SalSoc='" "',TpFunc='" "',DefSoc='"+Edit29->Text+"',QtFilh='"+MaskEdit6->Text+"',QtFam='"+MaskEdit7->Text+"',QtTrab='"+MaskEdit8->Text+"',VlRen='"+Edit33->Text+"',CasaSoc='"+ComboBox7->Text+"',ImovSoc='"+ComboBox8->Text+"',ResidSoc='"+Edit36->Text+"',ParSoc='"+Edit37->Text+"',ObsSoc='"+Edit38->Text+"',NmRepr='" "'Where CdSoc='"
+Edit1->Text+"'");
                        Form1->Query1->ExecSQL();
                        Form1->Query1->Close();
                        }


                        if ( MaskEdit1->Text != "  /  /    " && MaskEdit2->Text == "  /  /    ")
                        {
                        Form1->Query1->Close();
                        Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Update Socio Set DtCad ='"+VDT11+"',TpSoc='"+ComboBox1->Text+"',NmSoc='"+Edit5->Text+"',RgSoc='"+MaskEdit9->Text+"',CpfSoc='"+MaskEdit10->Text+"',CnpjSoc='" "',SexoSoc='"+ComboBox2->Text+"',NatSoc='"+Edit16->Text+"',EstCiv='"+ComboBox3->Text+"',MaeSoc='"+Edit6->Text+"',PaiSoc='"+Edit9->Text+"',EndSoc='"+Edit20->Text+"',CompSoc='"+Edit21->Text+"',BairroSoc='"+Edit22->Text+"',CepSoc='"+MaskEdit13->Text+"',CidSoc='"+Edit24->Text+"',EstSoc='"+ComboBox6->Text+"',TelSoc='"+MaskEdit3->Text+"',CelSoc='"+MaskEdit4->Text+"',EscSoc='"+ComboBox4->Text+"',MatSoc='"+MaskEdit12->Text+"',RamSoc='"+MaskEdit5->Text+"',CargoSoc='" "',SalSoc='" "',TpFunc='" "',DefSoc='"+Edit29->Text+"',QtFilh='"+MaskEdit6->Text+"',QtFam='"+MaskEdit7->Text+"',QtTrab='"+MaskEdit8->Text+"',VlRen='"+Edit33->Text+"',CasaSoc='"+ComboBox7->Text+"',ImovSoc='"+ComboBox8->Text+"',ResidSoc='"+Edit36->Text+"',ParSoc='"+Edit37->Text+"',ObsSoc='"+Edit38->Text+"',NmRepr='" "'Where CdSoc='"
+Edit1->Text+"'");
                        Form1->Query1->ExecSQL();
                        Form1->Query1->Close();
                        }


                        if ( MaskEdit1->Text == "  /  /    " && MaskEdit2->Text != "  /  /    ")
                        {
                        Form1->Query1->Close();
                        Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Update Socio Set TpSoc='"+ComboBox1->Text+"',NmSoc='"+Edit5->Text+"',RgSoc='"+MaskEdit9->Text+"',CpfSoc='"+MaskEdit10->Text+"',CnpjSoc='" "',SexoSoc='"+ComboBox2->Text+"',DtNasc='"+VDT12+"',NatSoc='"+Edit16->Text+"',EstCiv='"+ComboBox3->Text+"',MaeSoc='"+Edit6->Text+"',PaiSoc='"+Edit9->Text+"',EndSoc='"+Edit20->Text+"',CompSoc='"+Edit21->Text+"',BairroSoc='"+Edit22->Text+"',CepSoc='"+MaskEdit13->Text+"',CidSoc='"+Edit24->Text+"',EstSoc='"+ComboBox6->Text+"',TelSoc='"+MaskEdit3->Text+"',CelSoc='"+MaskEdit4->Text+"',EscSoc='"+ComboBox4->Text+"',MatSoc='"+MaskEdit12->Text+"',RamSoc='"+MaskEdit5->Text+"',CargoSoc='" "',SalSoc='" "',TpFunc='" "',DefSoc='"+Edit29->Text+"',QtFilh='"+MaskEdit6->Text+"',QtFam='"+MaskEdit7->Text+"',QtTrab='"+MaskEdit8->Text+"',VlRen='"+Edit33->Text+"',CasaSoc='"+ComboBox7->Text+"',ImovSoc='"+ComboBox8->Text+"',ResidSoc='"+Edit36->Text+"',ParSoc='"+Edit37->Text+"',ObsSoc='"+Edit38->Text+"',NmRepr='" "'Where CdSoc='"
+Edit1->Text+"'");
                        Form1->Query1->ExecSQL();
                        Form1->Query1->Close();
                        }

                        if ( MaskEdit1->Text == "  /  /    " && MaskEdit2->Text == "  /  /    ")
                        {
                        Form1->Query1->Close();
                        Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Update Socio Set TpSoc='"+ComboBox1->Text+"',NmSoc='"+Edit5->Text+"',RgSoc='"+MaskEdit9->Text+"',CpfSoc='"+MaskEdit10->Text+"',CnpjSoc='" "',SexoSoc='"+ComboBox2->Text+"',NatSoc='"+Edit16->Text+"',EstCiv='"+ComboBox3->Text+"',MaeSoc='"+Edit6->Text+"',PaiSoc='"+Edit9->Text+"',EndSoc='"+Edit20->Text+"',CompSoc='"+Edit21->Text+"',BairroSoc='"+Edit22->Text+"',CepSoc='"+MaskEdit13->Text+"',CidSoc='"+Edit24->Text+"',EstSoc='"+ComboBox6->Text+"',TelSoc='"+MaskEdit3->Text+"',CelSoc='"+MaskEdit4->Text+"',EscSoc='"+ComboBox4->Text+"',MatSoc='"+MaskEdit12->Text+"',RamSoc='"+MaskEdit5->Text+"',CargoSoc='" "',SalSoc='" "',TpFunc='" "',DefSoc='"+Edit29->Text+"',QtFilh='"+MaskEdit6->Text+"',QtFam='"+MaskEdit7->Text+"',QtTrab='"+MaskEdit8->Text+"',VlRen='"+Edit33->Text+"',CasaSoc='"+ComboBox7->Text+"',ImovSoc='"+ComboBox8->Text+"',ResidSoc='"+Edit36->Text+"',ParSoc='"+Edit37->Text+"',ObsSoc='"+Edit38->Text+"',NmRepr='" "'Where CdSoc='"
+Edit1->Text+"'");
                        Form1->Query1->ExecSQL();
                        Form1->Query1->Close();
                        }

                }//IF SE NATURAL
//=============================================================================
//=============================================================================

                if (Form6->ComboBox1->Text == "Cliente" && Label39->Caption == "PF")
                {
                        if ( MaskEdit1->Text != "  /  /    " && MaskEdit2->Text != "  /  /    ")
                        {
                                Form1->Query1->Close();
                                Form1->Query1->SQL->Clear();
                                Form1->Query1->SQL->Add("Update Socio Set DtCad ='"+VDT11+"',TpSoc='"+ComboBox1->Text+"',NmSoc='"+Edit5->Text+"',RgSoc='"+MaskEdit9->Text+"',CpfSoc='"+MaskEdit10->Text+"',CnpjSoc='" "',SexoSoc='"+ComboBox2->Text+"',DtNasc='"+VDT12+"',NatSoc='"+Edit16->Text+"',EstCiv='"+ComboBox3->Text+"',MaeSoc='"+Edit6->Text+"',PaiSoc='"+Edit9->Text+"',EndSoc='"+Edit20->Text+"',CompSoc='"+Edit21->Text+"',BairroSoc='"+Edit22->Text+"',CepSoc='"+MaskEdit13->Text+"',CidSoc='"+Edit24->Text+"',EstSoc='"+ComboBox6->Text+"',TelSoc='"+MaskEdit3->Text+"',CelSoc='"+MaskEdit4->Text+"',EscSoc='"+ComboBox4->Text+"',MatSoc='"+MaskEdit12->Text+"',RamSoc='"+MaskEdit5->Text+"',CargoSoc='" "',SalSoc='" "',TpFunc='" "',DefSoc='" "',QtFilh='" "',QtFam='" "',QtTrab='" "',VlRen='" "',CasaSoc='" "',ImovSoc='" "',ResidSoc='" "',ParSoc='" "',ObsSoc='"+Edit38->Text+"',NmRepr='" "' where CdSoc='"+Edit1->Text+"'");
                                Form1->Query1->ExecSQL();
                                Form1->Query1->Close();
                        }

                        if ( MaskEdit1->Text != "  /  /    " && MaskEdit2->Text == "  /  /    ")
                        {
                                Form1->Query1->Close();
                                Form1->Query1->SQL->Clear();
                                Form1->Query1->SQL->Add("Update Socio Set DtCad ='"+VDT11+"',TpSoc='"+ComboBox1->Text+"',NmSoc='"+Edit5->Text+"',RgSoc='"+MaskEdit9->Text+"',CpfSoc='"+MaskEdit10->Text+"',CnpjSoc='" "',SexoSoc='"+ComboBox2->Text+"',NatSoc='"+Edit16->Text+"',EstCiv='"+ComboBox3->Text+"',MaeSoc='"+Edit6->Text+"',PaiSoc='"+Edit9->Text+"',EndSoc='"+Edit20->Text+"',CompSoc='"+Edit21->Text+"',BairroSoc='"+Edit22->Text+"',CepSoc='"+MaskEdit13->Text+"',CidSoc='"+Edit24->Text+"',EstSoc='"+ComboBox6->Text+"',TelSoc='"+MaskEdit3->Text+"',CelSoc='"+MaskEdit4->Text+"',EscSoc='"+ComboBox4->Text+"',MatSoc='"+MaskEdit12->Text+"',RamSoc='"+MaskEdit5->Text+"',CargoSoc='" "',SalSoc='" "',TpFunc='" "',DefSoc='" "',QtFilh='" "',QtFam='" "',QtTrab='" "',VlRen='" "',CasaSoc='" "',ImovSoc='" "',ResidSoc='" "',ParSoc='" "',ObsSoc='"+Edit38->Text+"',NmRepr='" "' where CdSoc='"+Edit1->Text+"'");
                                Form1->Query1->ExecSQL();
                                Form1->Query1->Close();
                        }

                        if ( MaskEdit1->Text == "  /  /    " && MaskEdit2->Text != "  /  /    ")
                        {
                                Form1->Query1->Close();
                                Form1->Query1->SQL->Clear();
                                Form1->Query1->SQL->Add("Update Socio Set TpSoc='"+ComboBox1->Text+"',NmSoc='"+Edit5->Text+"',RgSoc='"+MaskEdit9->Text+"',CpfSoc='"+MaskEdit10->Text+"',CnpjSoc='" "',SexoSoc='"+ComboBox2->Text+"',DtNasc='"+VDT12+"',NatSoc='"+Edit16->Text+"',EstCiv='"+ComboBox3->Text+"',MaeSoc='"+Edit6->Text+"',PaiSoc='"+Edit9->Text+"',EndSoc='"+Edit20->Text+"',CompSoc='"+Edit21->Text+"',BairroSoc='"+Edit22->Text+"',CepSoc='"+MaskEdit13->Text+"',CidSoc='"+Edit24->Text+"',EstSoc='"+ComboBox6->Text+"',TelSoc='"+MaskEdit3->Text+"',CelSoc='"+MaskEdit4->Text+"',EscSoc='"+ComboBox4->Text+"',MatSoc='"+MaskEdit12->Text+"',RamSoc='"+MaskEdit5->Text+"',CargoSoc='" "',SalSoc='" "',TpFunc='" "',DefSoc='" "',QtFilh='" "',QtFam='" "',QtTrab='" "',VlRen='" "',CasaSoc='" "',ImovSoc='" "',ResidSoc='" "',ParSoc='" "',ObsSoc='"+Edit38->Text+"',NmRepr='" "' where CdSoc='"+Edit1->Text+"'");
                                Form1->Query1->ExecSQL();
                                Form1->Query1->Close();
                        }

                        if ( MaskEdit1->Text == "  /  /    " && MaskEdit2->Text == "  /  /    ")
                        {
                                Form1->Query1->Close();
                                Form1->Query1->SQL->Clear();
                                Form1->Query1->SQL->Add("Update Socio Set TpSoc='"+ComboBox1->Text+"',NmSoc='"+Edit5->Text+"',RgSoc='"+MaskEdit9->Text+"',CpfSoc='"+MaskEdit10->Text+"',CnpjSoc='" "',SexoSoc='"+ComboBox2->Text+"',NatSoc='"+Edit16->Text+"',EstCiv='"+ComboBox3->Text+"',MaeSoc='"+Edit6->Text+"',PaiSoc='"+Edit9->Text+"',EndSoc='"+Edit20->Text+"',CompSoc='"+Edit21->Text+"',BairroSoc='"+Edit22->Text+"',CepSoc='"+MaskEdit13->Text+"',CidSoc='"+Edit24->Text+"',EstSoc='"+ComboBox6->Text+"',TelSoc='"+MaskEdit3->Text+"',CelSoc='"+MaskEdit4->Text+"',EscSoc='"+ComboBox4->Text+"',MatSoc='"+MaskEdit12->Text+"',RamSoc='"+MaskEdit5->Text+"',CargoSoc='" "',SalSoc='" "',TpFunc='" "',DefSoc='" "',QtFilh='" "',QtFam='" "',QtTrab='" "',VlRen='" "',CasaSoc='" "',ImovSoc='" "',ResidSoc='" "',ParSoc='" "',ObsSoc='"+Edit38->Text+"',NmRepr='" "' where CdSoc='"+Edit1->Text+"'");
                                Form1->Query1->ExecSQL();
                                Form1->Query1->Close();
                        }
                }

                if (Form6->ComboBox1->Text == "Contribuinte" && Label39->Caption == "PF")
                {
                        if ( MaskEdit1->Text != "  /  /    " && MaskEdit2->Text != "  /  /    ")
                        {
                                Form1->Query1->Close();
                                Form1->Query1->SQL->Clear();
                                Form1->Query1->SQL->Add("Update Socio Set DtCad ='"+VDT11+"',TpSoc='"+ComboBox1->Text+"',NmSoc='"+Edit5->Text+"',RgSoc='"+MaskEdit9->Text+"',CpfSoc='"+MaskEdit10->Text+"',CnpjSoc='"+ +"',SexoSoc='"+ComboBox2->Text+"',DtNasc='"+VDT12+"',NatSoc='"+Edit16->Text+"',EstCiv='"+ComboBox3->Text+"',MaeSoc='"+Edit6->Text+"',PaiSoc='"+Edit9->Text+"',EndSoc='"+Edit20->Text+"',CompSoc='"+Edit21->Text+"',BairroSoc='"+Edit22->Text+"',CepSoc='"+MaskEdit13->Text+"',CidSoc='"+Edit24->Text+"',EstSoc='"+ComboBox6->Text+"',TelSoc='"+MaskEdit3->Text+"',CelSoc='"+MaskEdit4->Text+"',EscSoc='"+ComboBox4->Text+"',MatSoc='"+MaskEdit12->Text+"',RamSoc='"+MaskEdit5->Text+"',CargoSoc='"+ +"',SalSoc='"+ +"',TpFunc='"+ +"',DefSoc='"+ +"',QtFilh='"+ +"',QtFam='"+ +"',QtTrab='"+ +"',VlRen='"+ +"',CasaSoc='"+ +"',ImovSoc='"+ +"',ResidSoc='"+ +"',ParSoc='"+ +"',ObsSoc='"+Edit38->Text+"',NmRepr='"+ +"' where CdSoc='"+Edit1->Text+"'");
                                Form1->Query1->ExecSQL();
                                Form1->Query1->Close();
                        }


                        if ( MaskEdit1->Text != "  /  /    " && MaskEdit2->Text == "  /  /    ")
                        {
                                Form1->Query1->Close();
                                Form1->Query1->SQL->Clear();
                                Form1->Query1->SQL->Add("Update Socio Set DtCad ='"+VDT11+"',TpSoc='"+ComboBox1->Text+"',NmSoc='"+Edit5->Text+"',RgSoc='"+MaskEdit9->Text+"',CpfSoc='"+MaskEdit10->Text+"',CnpjSoc='"+ +"',SexoSoc='"+ComboBox2->Text+"',NatSoc='"+Edit16->Text+"',EstCiv='"+ComboBox3->Text+"',MaeSoc='"+Edit6->Text+"',PaiSoc='"+Edit9->Text+"',EndSoc='"+Edit20->Text+"',CompSoc='"+Edit21->Text+"',BairroSoc='"+Edit22->Text+"',CepSoc='"+MaskEdit13->Text+"',CidSoc='"+Edit24->Text+"',EstSoc='"+ComboBox6->Text+"',TelSoc='"+MaskEdit3->Text+"',CelSoc='"+MaskEdit4->Text+"',EscSoc='"+ComboBox4->Text+"',MatSoc='"+MaskEdit12->Text+"',RamSoc='"+MaskEdit5->Text+"',CargoSoc='"+ +"',SalSoc='"+ +"',TpFunc='"+ +"',DefSoc='"+ +"',QtFilh='"+ +"',QtFam='"+ +"',QtTrab='"+ +"',VlRen='"+ +"',CasaSoc='"+ +"',ImovSoc='"+ +"',ResidSoc='"+ +"',ParSoc='"+ +"',ObsSoc='"+Edit38->Text+"',NmRepr='"+ +"' where CdSoc='"+Edit1->Text+"'");
                                Form1->Query1->ExecSQL();
                                Form1->Query1->Close();
                        }


                        if ( MaskEdit1->Text == "  /  /    " && MaskEdit2->Text != "  /  /    ")
                        {
                                Form1->Query1->Close();
                                Form1->Query1->SQL->Clear();
                                Form1->Query1->SQL->Add("Update Socio Set TpSoc='"+ComboBox1->Text+"',NmSoc='"+Edit5->Text+"',RgSoc='"+MaskEdit9->Text+"',CpfSoc='"+MaskEdit10->Text+"',CnpjSoc='"+ +"',SexoSoc='"+ComboBox2->Text+"',DtNasc='"+VDT12+"',NatSoc='"+Edit16->Text+"',EstCiv='"+ComboBox3->Text+"',MaeSoc='"+Edit6->Text+"',PaiSoc='"+Edit9->Text+"',EndSoc='"+Edit20->Text+"',CompSoc='"+Edit21->Text+"',BairroSoc='"+Edit22->Text+"',CepSoc='"+MaskEdit13->Text+"',CidSoc='"+Edit24->Text+"',EstSoc='"+ComboBox6->Text+"',TelSoc='"+MaskEdit3->Text+"',CelSoc='"+MaskEdit4->Text+"',EscSoc='"+ComboBox4->Text+"',MatSoc='"+MaskEdit12->Text+"',RamSoc='"+MaskEdit5->Text+"',CargoSoc='"+ +"',SalSoc='"+ +"',TpFunc='"+ +"',DefSoc='"+ +"',QtFilh='"+ +"',QtFam='"+ +"',QtTrab='"+ +"',VlRen='"+ +"',CasaSoc='"+ +"',ImovSoc='"+ +"',ResidSoc='"+ +"',ParSoc='"+ +"',ObsSoc='"+Edit38->Text+"',NmRepr='"+ +"' where CdSoc='"+Edit1->Text+"'");
                                Form1->Query1->ExecSQL();
                                Form1->Query1->Close();
                        }

                        if ( MaskEdit1->Text == "  /  /    " && MaskEdit2->Text == "  /  /    ")
                        {
                                Form1->Query1->Close();
                                Form1->Query1->SQL->Clear();
                                Form1->Query1->SQL->Add("Update Socio Set TpSoc='"+ComboBox1->Text+"',NmSoc='"+Edit5->Text+"',RgSoc='"+MaskEdit9->Text+"',CpfSoc='"+MaskEdit10->Text+"',CnpjSoc='"+ +"',SexoSoc='"+ComboBox2->Text+"',NatSoc='"+Edit16->Text+"',EstCiv='"+ComboBox3->Text+"',MaeSoc='"+Edit6->Text+"',PaiSoc='"+Edit9->Text+"',EndSoc='"+Edit20->Text+"',CompSoc='"+Edit21->Text+"',BairroSoc='"+Edit22->Text+"',CepSoc='"+MaskEdit13->Text+"',CidSoc='"+Edit24->Text+"',EstSoc='"+ComboBox6->Text+"',TelSoc='"+MaskEdit3->Text+"',CelSoc='"+MaskEdit4->Text+"',EscSoc='"+ComboBox4->Text+"',MatSoc='"+MaskEdit12->Text+"',RamSoc='"+MaskEdit5->Text+"',CargoSoc='"+ +"',SalSoc='"+ +"',TpFunc='"+ +"',DefSoc='"+ +"',QtFilh='"+ +"',QtFam='"+ +"',QtTrab='"+ +"',VlRen='"+ +"',CasaSoc='"+ +"',ImovSoc='"+ +"',ResidSoc='"+ +"',ParSoc='"+ +"',ObsSoc='"+Edit38->Text+"',NmRepr='"+ +"' where CdSoc='"+Edit1->Text+"'");
                                Form1->Query1->ExecSQL();
                                Form1->Query1->Close();
                        }
                }

//==========================================================

                if (Form6->ComboBox1->Text == "Cliente" && Label39->Caption == "PJ")
                {

                        if ( MaskEdit1->Text != "  /  /    " )
                        {

                                Form1->Query1->Close();
                                Form1->Query1->SQL->Clear();
                                Form1->Query1->SQL->Add("Update Socio Set DtCad ='"+VDT11+"',TpSoc='"+ComboBox1->Text+"',NmSoc='"+Edit5->Text+"',RgSoc='" "',CpfSoc='" "',CnpjSoc='"+MaskEdit14->Text+"',SexoSoc='" "',NatSoc='" "',EstCiv='" "',MaeSoc='" "',PaiSoc='" "',EndSoc='"+Edit20->Text+"',CompSoc='"+Edit21->Text+"',BairroSoc='"+Edit22->Text+"',CepSoc='"+MaskEdit13->Text+"',CidSoc='"+Edit24->Text+"',EstSoc='"+ComboBox6->Text+"',TelSoc='"+MaskEdit3->Text+"',CelSoc='"+MaskEdit4->Text+"',EscSoc='" "',MatSoc='" "',RamSoc='"+MaskEdit5->Text+"',CargoSoc='"+ +"',SalSoc='"+ +"',TpFunc='"+ +"',DefSoc='"+ +"',QtFilh='"+ +"',QtFam='"+ +"',QtTrab='"+ +"',VlRen='"+ +"',CasaSoc='"+ +"',ImovSoc='"+ +"',ResidSoc='"+ +"',ParSoc='"+ +"',ObsSoc='"+Edit38->Text+"',NmRepr='"+Edit10->Text+"' Where CdSoc='"+Edit1->Text+"'");
                                Form1->Query1->ExecSQL();
                                Form1->Query1->Close();

                        }


                        if ( MaskEdit1->Text == "  /  /    " )
                        {
                                Form1->Query1->Close();
                                Form1->Query1->SQL->Clear();
                                Form1->Query1->SQL->Add("Update Socio Set TpSoc='"+ComboBox1->Text+"',NmSoc='"+Edit5->Text+"',RgSoc='" "',CpfSoc='" "',CnpjSoc='"+MaskEdit14->Text+"',SexoSoc='" "',NatSoc='" "',EstCiv='" "',MaeSoc='" "',PaiSoc='" "',EndSoc='"+Edit20->Text+"',CompSoc='"+Edit21->Text+"',BairroSoc='"+Edit22->Text+"',CepSoc='"+MaskEdit13->Text+"',CidSoc='"+Edit24->Text+"',EstSoc='"+ComboBox6->Text+"',TelSoc='"+MaskEdit3->Text+"',CelSoc='"+MaskEdit4->Text+"',EscSoc='" "',MatSoc='" "',RamSoc='"+MaskEdit5->Text+"',CargoSoc='"+ +"',SalSoc='"+ +"',TpFunc='"+ +"',DefSoc='"+ +"',QtFilh='"+ +"',QtFam='"+ +"',QtTrab='"+ +"',VlRen='"+ +"',CasaSoc='"+ +"',ImovSoc='"+ +"',ResidSoc='"+ +"',ParSoc='"+ +"',ObsSoc='"+Edit38->Text+"',NmRepr='"+Edit10->Text+"' Where CdSoc='"+Edit1->Text+"'");
                                Form1->Query1->ExecSQL();
                                Form1->Query1->Close();
                        }
                }

                if (Form6->ComboBox1->Text == "Contribuinte" && Label39->Caption == "PJ")
                {
                        if ( MaskEdit1->Text != "  /  /    " )
                        {

                                Form1->Query1->Close();
                                Form1->Query1->SQL->Clear();
                                Form1->Query1->SQL->Add("Update Socio Set DtCad ='"+VDT11+"',TpSoc='"+ComboBox1->Text+"',NmSoc='"+Edit5->Text+"',RgSoc='" "',CpfSoc='" "',CnpjSoc='"+MaskEdit14->Text+"',SexoSoc='" "',NatSoc='" "',EstCiv='" "',MaeSoc='" "',PaiSoc='" "',EndSoc='"+Edit20->Text+"',CompSoc='"+Edit21->Text+"',BairroSoc='"+Edit22->Text+"',CepSoc='"+MaskEdit13->Text+"',CidSoc='"+Edit24->Text+"',EstSoc='"+ComboBox6->Text+"',TelSoc='"+MaskEdit3->Text+"',CelSoc='"+MaskEdit4->Text+"',EscSoc='" "',MatSoc='" "',RamSoc='"+MaskEdit5->Text+"',CargoSoc='"+ +"',SalSoc='"+ +"',TpFunc='"+ +"',DefSoc='"+ +"',QtFilh='"+ +"',QtFam='"+ +"',QtTrab='"+ +"',VlRen='"+ +"',CasaSoc='"+ +"',ImovSoc='"+ +"',ResidSoc='"+ +"',ParSoc='"+ +"',ObsSoc='"+Edit38->Text+"',NmRepr='"+Edit10->Text+"' Where CdSoc='"+Edit1->Text+"'");
                                Form1->Query1->ExecSQL();
                                Form1->Query1->Close();

                        }


                        if ( MaskEdit1->Text == "  /  /    " )
                        {
                                Form1->Query1->Close();
                                Form1->Query1->SQL->Clear();
                                Form1->Query1->SQL->Add("Update Socio Set TpSoc='"+ComboBox1->Text+"',NmSoc='"+Edit5->Text+"',RgSoc='" "',CpfSoc='" "',CnpjSoc='"+MaskEdit14->Text+"',SexoSoc='" "',NatSoc='" "',EstCiv='" "',MaeSoc='" "',PaiSoc='" "',EndSoc='"+Edit20->Text+"',CompSoc='"+Edit21->Text+"',BairroSoc='"+Edit22->Text+"',CepSoc='"+MaskEdit13->Text+"',CidSoc='"+Edit24->Text+"',EstSoc='"+ComboBox6->Text+"',TelSoc='"+MaskEdit3->Text+"',CelSoc='"+MaskEdit4->Text+"',EscSoc='" "',MatSoc='" "',RamSoc='"+MaskEdit5->Text+"',CargoSoc='"+ +"',SalSoc='"+ +"',TpFunc='"+ +"',DefSoc='"+ +"',QtFilh='"+ +"',QtFam='"+ +"',QtTrab='"+ +"',VlRen='"+ +"',CasaSoc='"+ +"',ImovSoc='"+ +"',ResidSoc='"+ +"',ParSoc='"+ +"',ObsSoc='"+Edit38->Text+"',NmRepr='"+Edit10->Text+"' Where CdSoc='"+Edit1->Text+"'");
                                Form1->Query1->ExecSQL();
                                Form1->Query1->Close();
                        }
                }// IF SE CONTRIBUINTE



        LimpaF6();
        ShowMessage("Atualização Concluída!!!");

        LimpaF6();
        DesabNatForm6();
        DesabFuncForm6();

        DesabPJuridicaF6();
        DesabPFisicaF6();

        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select * From Socio");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
        ExibeF6();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::SpeedButton2Click(TObject *Sender)
{
Form7->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::SpeedButton3Click(TObject *Sender)
{
/* ===== SELECIONA RESUMO E CONTA O NÚMERO DE REGISTROS ===== */
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From Historico Where CdSocHist = '"+Edit1->Text+"'");
Form1->Query1->ExecSQL();
Form1->Query1->Open();
int Historico = Form1->DataSource1->DataSet->RecordCount;

/* ===== SELECIONA DOACAO E CONTA O NÚMERO DE REGISTROS ===== */
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From Doacao Where CdSocDoa = '"+Edit1->Text+"'");
Form1->Query1->ExecSQL();
Form1->Query1->Open();
int Doacao = Form1->DataSource1->DataSet->RecordCount;

/* ===== SELECIONA MATRICULA E CONTA O NÚMERO DE REGISTROS ===== */
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From Atividade Where CdSocAtiv = '"+Edit1->Text+"'");
Form1->Query1->ExecSQL();
Form1->Query1->Open();
int Atividade = Form1->DataSource1->DataSet->RecordCount;

/* ===== SELECIONA SERVICO E CONTA O NÚMERO DE REGISTROS ===== */
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From Servico Where CdSocServ = '"+Edit1->Text+"'");
Form1->Query1->ExecSQL();
Form1->Query1->Open();
int Servico = Form1->DataSource1->DataSet->RecordCount;

if ( MessageDlg( " Este Sócio Possui os Seguintes Cadastros: \n"
"                " + IntToStr(Historico) + " Histórico(s), \n"
"                " + IntToStr(Doacao) + " Doação(es), \n"
"                " + IntToStr(Atividade) + " Atividade(s), \n"
"                " + IntToStr(Servico) + " Serviço(s)\n"
"          Deseja Excluir o Cadastro?",
 mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)

{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Delete From Socio Where Socio.CdSoc='"+Edit1->Text+"'");
        Form1->Query1->ExecSQL();

        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Delete From Historico Where Historico.CdSocHist='"+Edit1->Text+"'");
        Form1->Query1->ExecSQL();

        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Delete From Doacao Where Doacao.CdSocDoa='"+Edit1->Text+"'");
        Form1->Query1->ExecSQL();

        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Delete From Atividade Where Atividade.CdSocAtiv='"+Edit1->Text+"'");
        Form1->Query1->ExecSQL();

        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Delete From Servico Where Servico.CdSocServ='"+Edit1->Text+"'");
        Form1->Query1->ExecSQL();

        ShowMessage("Exclusão Concluída");
        LimpaF6();

}
else
{
        ShowMessage("Exclusão Cancelada");
}

Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("select * from Socio");
Form1->Query1->Active = true;
Form1->Query1->Open();

ExibeF6();        
}
//---------------------------------------------------------------------------

void __fastcall TForm6::SpeedButton4Click(TObject *Sender)
{
LimpaF6();        
}
//---------------------------------------------------------------------------

void __fastcall TForm6::RadioGroup1Click(TObject *Sender)
{
LimpaF6();

/* === CdSocHist =====*/
if (RadioGroup1->ItemIndex == 0)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select * From Socio Order By CdSoc");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        ExibeF6();
}

/* === CdHist =====*/
if (RadioGroup1->ItemIndex == 1)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select * From Socio Order By NmSoc");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        ExibeF6();

}        
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Fechar1Click(TObject *Sender)
{
Form6->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::SairClick(TObject *Sender)
{
Form1->Sair->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::CadastrarFuncionarioClick(TObject *Sender)
{
Form1->CadastrarFuncionario->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::CadastrarNaturalClick(TObject *Sender)
{
Form1->CadastrarNatural->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::CadastrarContribuintePFClick(TObject *Sender)
{
Form1->CadastrarContribuintePF->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::CadastrarContribuintePJClick(TObject *Sender)
{
Form1->CadastrarContribuintePJ->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::ConsultarSociosClick(TObject *Sender)
{
Form1->ConsultarSocios->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::AtualizarSociosClick(TObject *Sender)
{
Form1->AtualizarSocios->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::ExcluirSociosClick(TObject *Sender)
{
Form1->ExcluirSocios->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::CadastrarDoacaoSociosClick(TObject *Sender)
{
Form1->CadastrarDoacaoSocios->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::ConsultarDoacaoSociosClick(TObject *Sender)
{
Form1->ConsultarDoacaoSocios->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::AtualizarDoacaoSociosClick(TObject *Sender)
{
Form1->AtualizarDoacaoSocios->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::ExcluirDoacaoSociosClick(TObject *Sender)
{
Form1->ExcluirDoacaoSocios->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::CadastrarHistoricoClick(TObject *Sender)
{
Form1->CadastrarHistorico->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::ConsultarHistoricoClick(TObject *Sender)
{
Form1->ConsultarHistorico->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::AtualizarHistoricoClick(TObject *Sender)
{
Form1->AtualizarHistorico->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::ExcluirHistoricoClick(TObject *Sender)
{
Form1->ExcluirHistorico->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::CadastrarAtividadeClick(TObject *Sender)
{
Form1->CadastrarAtividade->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::ConsultarAtividadeClick(TObject *Sender)
{
Form1->ConsultarAtividade->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::AtualizarAtividadeClick(TObject *Sender)
{
Form1->AtualizarAtividade->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::ExcluirAtividadeClick(TObject *Sender)
{
Form1->ExcluirAtividade->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::CadastrarServicoClick(TObject *Sender)
{
Form1->CadastrarServico->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::ConsultarServicoClick(TObject *Sender)
{
Form1->ConsultarServico->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::AtualizarServicoClick(TObject *Sender)
{
Form1->AtualizarServico->Click();

}
//---------------------------------------------------------------------------

void __fastcall TForm6::ExcluirServicoClick(TObject *Sender)
{
Form1->ExcluirServico->Click();
}
//---------------------------------------------------------------------------

