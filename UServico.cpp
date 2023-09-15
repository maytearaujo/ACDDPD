//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UServico.h" //Form14

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
#include "UAtividade.h" //Form12
#include "UTpConsultaAtividade.h"  //Form13

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
TForm14 *Form14;
//---------------------------------------------------------------------------
__fastcall TForm14::TForm14(TComponent* Owner)
        : TForm(Owner)
{
}

//---------------------------------------------------------------------------
AnsiString vcod8,       vtpServ,        VDT19,  VDT20,  vServ;//  AnsiString vdias;
//---------------------------------------------------------------------------
/* ===== FUNÇÕES ===== */
void LimparServico()
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
void SelecionaServico()
{
Form1->Query1->Close();
Form1->Query1->SQL->Clear();
Form1->Query1->SQL->Add("Select * From Servico");
Form1->Query1->ExecSQL();
Form1->Query1->Open();

Form1->Query1->Last();
}
//-------------------------------------------------------------------------
void SelecionaSocioServico()
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Servico.CdServ,Servico.CdSocServ,Servico.TpServ,Servico.DtPedServ,Servico.DtEntServ,Servico.HrIniServ,Servico.HrFimServ,Servico.EstabServ,Servico.RespServ,Servico.MedServ,Servico.QtDegServ,Servico.EventServ,Servico.VlServ,Servico.CheqServ,Servico.ModServ,Servico.DefServ,Servico.ObsServ From Socio, Servico Where Socio.CdSoc = Servico.CdSocServ Order By Servico.CdSocServ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
}
//-------------------------------------------------------------------------
void ExibeSocioServico()
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

void __fastcall TForm14::DBNavigator1Click(TObject *Sender,
      TNavigateBtn Button)
{
        ExibeSocioServico();
}
//---------------------------------------------------------------------------

void __fastcall TForm14::RadioGroup2Click(TObject *Sender)
{
        LimparServico();

if (RadioGroup2->ItemIndex == 0)
{       SelecionaSocioServico();        }

if (RadioGroup2->ItemIndex == 1)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Servico.CdServ,Servico.CdSocServ,Servico.TpServ,Servico.DtPedServ,Servico.DtEntServ,Servico.HrIniServ,Servico.HrFimServ,Servico.EstabServ,Servico.RespServ,Servico.MedServ,Servico.QtDegServ,Servico.EventServ,Servico.VlServ,Servico.CheqServ,Servico.ModServ,Servico.DefServ,Servico.ObsServ From Socio, Servico Where Socio.CdSoc = Servico.CdSocServ Order By Servico.CdServ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();
}


if (RadioGroup2->ItemIndex == 2)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.CdSoc,Socio.NmSoc,Socio.DtNasc,Servico.CdServ,Servico.CdSocServ,Servico.TpServ,Servico.DtPedServ,Servico.DtEntServ,Servico.HrIniServ,Servico.HrFimServ,Servico.EstabServ,Servico.RespServ,Servico.MedServ,Servico.QtDegServ,Servico.EventServ,Servico.VlServ,Servico.CheqServ,Servico.ModServ,Servico.DefServ,Servico.ObsServ From Socio, Servico Where Socio.CdSoc = Servico.CdSocServ Order By Servico.DtPedServ");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

}

        ExibeSocioServico();
}
//---------------------------------------------------------------------------


void __fastcall TForm14::MaskEdit5Exit(TObject *Sender)
{
/* == CRIA O OBJETO QUE RECEBE A HORA DIGITADA == */
HORA H1(MaskEdit5->Text.c_str());

if ( H1.VERIFICAHORA() )
;
else
{
   MaskEdit5->Clear();
   ShowMessage("Verifique o Horário de Inicio!!!");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm14::MaskEdit6Exit(TObject *Sender)
{
/* == CRIA O OBJETO QUE RECEBE A HORA DIGITADA == */
HORA H2(MaskEdit6->Text.c_str());

if ( H2.VERIFICAHORA() )
;
else
{
   MaskEdit6->Clear();
   ShowMessage("Verifique o Horário de Término!!!");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm14::MaskEdit2Exit(TObject *Sender)
{

if (MaskEdit2->Text != "")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit2->Text.c_str());

        try
        {
                vcod8 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código Digitado");
                return;
        }

        if (vcod8 > 0 && vcod8 <= 99999999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 999.999.99");
                vcod8 = 0;
        }


}
else ShowMessage("Digite um Código Válido");

        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Select Socio.NmSoc,Socio.DtNasc From Socio Where Socio.CdSoc = '"+vcod8+"'");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        Form14->Edit9->Text = Form1->Query1->FieldByName("NmSoc")->AsString;
        Form14->MaskEdit9->Text = Form1->Query1->FieldByName("DtNasc")->AsString;

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */
        if (Form1->DataSource1->DataSet->RecordCount == 0)
        {
                ShowMessage("Cadastrado Não Existente");
                MaskEdit2->Clear();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm14::MaskEdit3Exit(TObject *Sender)
{

        /* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D1 (MaskEdit3->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D1.DATAZERO() )
        {
               if (  D1.VERIFICADATA())
               ;
               else
               {
                ShowMessage("Verifique a Data Digitada!!!");
                MaskEdit3->Clear();
               }
        }

        else
        {
                ShowMessage("Verifique a Data Digitada!!!");
                MaskEdit3->Clear();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm14::MaskEdit4Exit(TObject *Sender)
{

        /* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D1 (MaskEdit4->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D1.DATAZERO() )
        {
               if (  D1.VERIFICADATA2())
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

void __fastcall TForm14::SpeedButton1Click(TObject *Sender)
{
vtpServ = " ";

if (RadioGroup1->ItemIndex == 0)
{ vtpServ = "Locação Quadra"; }

if (RadioGroup1->ItemIndex == 1)
{ vtpServ = "Conserto Cadeira"; }

if (RadioGroup1->ItemIndex == 2)
{ vtpServ = "Confecção Rampa"; }

//----------------------------------------------------------------------------
if (MaskEdit2->Text != "")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit2->Text.c_str());

        try
        {
                vcod8 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código do Socio");
                return;
        }

        if (vcod8 > 0 && vcod8 <= 99999999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 999.999.99");
                vcod8 = 0;
        }

}
else ShowMessage("Digite um Código Válido para o Sócio");

//----------------------------------------------------------------------------

       /* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D1 (MaskEdit3->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D1.DATAZERO() )
        {
               if (  D1.VERIFICADATA())
               {
                        VDT19 = D1.DT();
               }

               else
               {
                        ShowMessage("Verifique a Data do Pedido!!!");
                        MaskEdit3->Clear();
               }
        }

        else
        {
                ShowMessage("Verifique a Data do Pedido!!!");
                MaskEdit3->Clear();
        }

//----------------------------------------------------------------------------

               /* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D2 (MaskEdit4->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D2.DATAZERO() )
        {
               if (  D2.VERIFICADATA2())
               {
                 VDT20 = D2.DT();
               }

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

//---------------------------------------------------------------------------

if ( MaskEdit2->Text == "" )
        {ShowMessage("Serviço Não Cadastrado!!");}
else
{
        /* === SELECIONA O SÓCIO ==== */
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("select * from Socio where CdSoc ='"+vcod8+"'");
        Form1->Query1->ExecSQL();
        Form1->Query1->Open();

        /* ===== CONTA O NÚMERO DE REGISTROS ===== */
        if ( Form1->DataSource1->DataSet->RecordCount == 1 )
        {
                if(MaskEdit3->Text != "  /  /    " && MaskEdit4->Text != "  /  /    ")
                {
                        Form1->Query1->Close();
                        Form1->Query1->SQL->Clear();
                        Form1->Query1->SQL->Add(" Insert Into Servico (CdSocServ,TpServ,DtPedServ,DtEntServ,HrIniServ,HrFimServ,EstabServ,RespServ,MedServ,QtDegServ,EventServ,VlServ,CheqServ,ModServ,DefServ,ObsServ) values ('"+vcod8+"','"+vtpServ+"', '"+VDT19+"', '"+VDT20+"','"+MaskEdit5->Text+"','"+MaskEdit6->Text+"', '"+Edit1->Text+"','"+Edit2->Text+"','"+Edit4->Text+"','"+MaskEdit7->Text+"','"+Edit3->Text+"', '"+MaskEdit8->Text+"', '"+Edit5->Text+"', '"+Edit6->Text+"', '"+Edit7->Text+"', '"+Edit8->Text+"') ");
                        Form1->Query1->ExecSQL();
                }

                if(MaskEdit3->Text != "  /  /    " && MaskEdit4->Text == "  /  /    ")
                {
                        Form1->Query1->Close();
                        Form1->Query1->SQL->Clear();
                        Form1->Query1->SQL->Add(" Insert Into Servico(CdSocServ,TpServ,DtPedServ,HrIniServ,HrFimServ,EstabServ,RespServ,MedServ,QtDegServ,EventServ,VlServ,CheqServ,ModServ,DefServ,ObsServ) values('"+vcod8+"','"+vtpServ+"', '"+VDT19+"','"+MaskEdit5->Text+"','"+MaskEdit6->Text+"', '"+Edit1->Text+"','"+Edit2->Text+"','"+Edit4->Text+"','"+MaskEdit7->Text+"','"+Edit3->Text+"', '"+MaskEdit8->Text+"', '"+Edit5->Text+"', '"+Edit6->Text+"', '"+Edit7->Text+"', '"+Edit8->Text+"') ");
                        Form1->Query1->ExecSQL();
                }

                if(MaskEdit3->Text == "  /  /    " && MaskEdit4->Text == "  /  /    ")
                {
                        Form1->Query1->Close();
                        Form1->Query1->SQL->Clear();
                        Form1->Query1->SQL->Add(" Insert Into Servico (CdSocServ,TpServ,HrIniServ,HrFimServ,EstabServ,RespServ,MedServ,QtDegServ,EventServ,VlServ,CheqServ,ModServ,DefServ,ObsServ) values ('"+vcod8+"','"+vtpServ+"', '"+MaskEdit5->Text+"','"+MaskEdit6->Text+"', '"+Edit1->Text+"','"+Edit2->Text+"','"+Edit4->Text+"','"+MaskEdit7->Text+"','"+Edit3->Text+"', '"+MaskEdit8->Text+"', '"+Edit5->Text+"', '"+Edit6->Text+"', '"+Edit7->Text+"', '"+Edit8->Text+"') ");
                        Form1->Query1->ExecSQL();
                }


        LimparServico();
        ShowMessage("Serviço Cadastrado!!");
        }
}

//---------------------------------------------------------------------------
/*  === CÓDIGO DO PRÓXIMO SÓCIO === */
SelecionaServico();
Form14->MaskEdit1->Text = Form1->Query1->FieldByName("CdServ")->AsInteger + 1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm14::SpeedButton2Click(TObject *Sender)
{
Form15->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TForm14::SpeedButton3Click(TObject *Sender)
{
vtpServ = " ";

if (RadioGroup1->ItemIndex == 0)
{ vtpServ = "Locação Quadra"; }

if (RadioGroup1->ItemIndex == 1)
{ vtpServ = "Conserto Cadeira"; }

if (RadioGroup1->ItemIndex == 2)
{ vtpServ = "Confecção Rampa"; }

if (MaskEdit2->Text != "")
{
        /* == CRIANDO O OBJETO  == */
        CODIGO C1(MaskEdit2->Text.c_str());

        try
        {
                vcod8 = StrToInt(C1.mostracodigo());
        }
        catch(...)
        {
                ShowMessage("Erro!!! Verifique o Código do Socio");
                return;
        }

        if (vcod8 > 0 && vcod8 <= 99999999)
        ;

        else
        {
                ShowMessage("O Código Deve Ser Maior que  0 e Menor que 999.999.99");
                vcod8 = 0;
        }

}
else ShowMessage("Digite um Código Válido para o Sócio");

//----------------------------------------------------------------------------

       /* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D1 (MaskEdit3->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D1.DATAZERO() )
        {
               if (  D1.VERIFICADATA())
               {
                        VDT19 = D1.DT();
               }

               else
               {
                        ShowMessage("Verifique a Data do Pedido!!!");
                        MaskEdit3->Clear();
               }
        }

        else
        {
                ShowMessage("Verifique a Data do Pedido!!!");
                MaskEdit3->Clear();
        }
//----------------------------------------------------------------------------

               /* === CRIANDO OBJETO QUE RECEBE A DATA DIGITADA === */
       DATA D2 (MaskEdit4->Text.c_str());

       /* === VERIFICA SE A DATA É VÁLIDA === */

        if ( D2.DATAZERO() )
        {
               if (  D2.VERIFICADATA2())
               {
                 VDT20 = D2.DT();
               }

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
//---------------------------------------------------------------------------

if ( MaskEdit2->Text == "" )
        {ShowMessage("Serviço Não Atualizado!!");}
else
{

                if(MaskEdit3->Text != "  /  /    " && MaskEdit4->Text != "  /  /    ")
                {
                        Form1->Query1->Close();
                        Form1->Query1->SQL->Clear();
                        Form1->Query1->SQL->Add("Update Servico Set CdSocServ = '"+vcod8+"', TpServ = '"+vtpServ+"', DtPedServ = '"+VDT19+"',DtEntServ = '"+VDT20+"', HrIniServ = '"+MaskEdit5->Text+"', HrFimServ = '"+MaskEdit6->Text+"',EstabServ = '"+Edit1->Text+"', RespServ = '"+Edit2->Text+"', MedServ = '"+Edit4->Text+"', QtDegServ = '"+MaskEdit7->Text+"',EventServ = '"+Edit3->Text+"',VlServ = '"+MaskEdit8->Text+"', CheqServ = '"+Edit5->Text+"', ModServ = '"+Edit6->Text+"',DefServ = '"+Edit7->Text+"',ObsServ = '"+Edit8->Text+"'  Where CdServ = '"+MaskEdit1->Text+"' ");
                        Form1->Query1->ExecSQL();
                }

                if(MaskEdit3->Text != "  /  /    " && MaskEdit4->Text == "  /  /    ")
                {
                        Form1->Query1->Close();
                        Form1->Query1->SQL->Clear();
                        Form1->Query1->SQL->Add("Update Servico Set CdSocServ = '"+vcod8+"', TpServ = '"+vtpServ+"', DtPedServ = '"+VDT19+"', HrIniServ = '"+MaskEdit5->Text+"', HrFimServ = '"+MaskEdit6->Text+"',EstabServ = '"+Edit1->Text+"', RespServ = '"+Edit2->Text+"', MedServ = '"+Edit4->Text+"', QtDegServ = '"+MaskEdit7->Text+"',EventServ = '"+Edit3->Text+"',VlServ = '"+MaskEdit8->Text+"', CheqServ = '"+Edit5->Text+"', ModServ = '"+Edit6->Text+"',DefServ = '"+Edit7->Text+"',ObsServ = '"+Edit8->Text+"'  Where CdServ = '"+MaskEdit1->Text+"' ");
                        Form1->Query1->ExecSQL();
                }

                if(MaskEdit3->Text == "  /  /    " && MaskEdit4->Text == "  /  /    ")
                {
                        Form1->Query1->Close();
                        Form1->Query1->SQL->Clear();
                        Form1->Query1->SQL->Add("Update Servico Set CdSocServ = '"+vcod8+"', TpServ = '"+vtpServ+"', HrIniServ = '"+MaskEdit5->Text+"', HrFimServ = '"+MaskEdit6->Text+"',EstabServ = '"+Edit1->Text+"', RespServ = '"+Edit2->Text+"', MedServ = '"+Edit4->Text+"', QtDegServ = '"+MaskEdit7->Text+"',EventServ = '"+Edit3->Text+"',VlServ = '"+MaskEdit8->Text+"', CheqServ = '"+Edit5->Text+"', ModServ = '"+Edit6->Text+"',DefServ = '"+Edit7->Text+"',ObsServ = '"+Edit8->Text+"'  Where CdServ = '"+MaskEdit1->Text+"' ");
                        Form1->Query1->ExecSQL();
                }

        LimparServico();
        ShowMessage("Serviço Atualizado!!");
        SelecionaSocioServico();
        ExibeSocioServico();
}        
}
//---------------------------------------------------------------------------

void __fastcall TForm14::SpeedButton4Click(TObject *Sender)
{

if (MessageDlg("Deseja Excluir o Serviço?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
{
        Form1->Query1->Close();
        Form1->Query1->SQL->Clear();
        Form1->Query1->SQL->Add("Delete from Servico Where Servico.CdServ = '"+MaskEdit1->Text+"'");
        Form1->Query1->ExecSQL();

        ShowMessage("Exclusão Concluída");
        LimparServico();
}
else
        {ShowMessage("Exclusão Cancelada");}

SelecionaSocioServico();
ExibeSocioServico();        
}
//---------------------------------------------------------------------------

void __fastcall TForm14::SpeedButton5Click(TObject *Sender)
{
LimparServico();

//SE CADASTRAR
if ( SpeedButton1->Visible == true)
{
        /*  === CÓDIGO DO PRÓXIMO SERVICO === */
        SelecionaServico();
        Form14->MaskEdit1->Text = Form1->Query1->FieldByName("CdServ")->AsInteger + 1;
}

//SE ATUALIZAR
if ( SpeedButton3->Visible == true)
{
        SelecionaSocioServico();
        ExibeSocioServico();

}
        
}
//---------------------------------------------------------------------------

void __fastcall TForm14::SpeedButton6Click(TObject *Sender)
{
        LimparServico();
        SelecionaSocioServico();
        ExibeSocioServico();        
}
//---------------------------------------------------------------------------

void __fastcall TForm14::FormActivate(TObject *Sender)
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
Form12->Close();
Form13->Close();
//Form14->Close();
//Form15->Close();
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

SelecionaSocioServico();
}
//---------------------------------------------------------------------------

void __fastcall TForm14::Fechar1Click(TObject *Sender)
{
Form14->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm14::SairClick(TObject *Sender)
{
Form1->Sair->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm14::CadastrarServicoClick(TObject *Sender)
{
Form1->CadastrarServico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm14::ConsultarServicoClick(TObject *Sender)
{
Form1->ConsultarServico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm14::AtualizarServicoClick(TObject *Sender)
{
Form1->AtualizarServico->Click();
}
//---------------------------------------------------------------------------

void __fastcall TForm14::ExcluirServicoClick(TObject *Sender)
{
Form1->ExcluirServico->Click();
}
//---------------------------------------------------------------------------

