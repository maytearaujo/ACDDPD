//---------------------------------------------------------------------------

#ifndef UCadClienteContribuintePFH
#define UCadClienteContribuintePFH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <Mask.hpp>
#include <Menus.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TLabel *Label1;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label11;
        TLabel *Label10;
        TLabel *Label12;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *Label19;
        TLabel *Label16;
        TLabel *Label20;
        TLabel *Label17;
        TLabel *Label18;
        TLabel *Label21;
        TLabel *Label13;
        TLabel *Label6;
        TLabel *Label7;
        TMaskEdit *MaskEdit1;
        TMaskEdit *MaskEdit2;
        TMaskEdit *MaskEdit3;
        TEdit *Edit1;
        TComboBox *ComboBox1;
        TEdit *Edit4;
        TMaskEdit *MaskEdit4;
        TComboBox *ComboBox3;
        TComboBox *ComboBox2;
        TMaskEdit *MaskEdit6;
        TMaskEdit *MaskEdit7;
        TEdit *Edit5;
        TEdit *Edit6;
        TEdit *Edit8;
        TMaskEdit *MaskEdit5;
        TEdit *Edit7;
        TComboBox *ComboBox4;
        TEdit *Edit9;
        TEdit *Edit2;
        TEdit *Edit3;
        TLabel *Label22;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton3;
        TAnimate *Animate1;
        TEdit *Edit10;
        TLabel *Label2;
        TMainMenu *MainMenu1;
        TMenuItem *Associacao;
        TMenuItem *Sair;
        TMenuItem *Socios1;
        TMenuItem *Socios;
        TMenuItem *CadastrarSocios;
        TMenuItem *CadastrarFuncionario;
        TMenuItem *CadastrarNatural;
        TMenuItem *CadastrarContribuinte;
        TMenuItem *CadastrarContribuintePF;
        TMenuItem *CadastrarContribuintePJ;
        TMenuItem *ConsultarSocios;
        TMenuItem *AtualizarSocios;
        TMenuItem *ExcluirSocios;
        TMenuItem *DoacaoSocios;
        TMenuItem *CadastrarDoacaoSocios;
        TMenuItem *ConsultarDoacaoSocios;
        TMenuItem *AtualizarDoacaoSocios;
        TMenuItem *ExcluirDoacaoSocios;
        TMenuItem *Historico;
        TMenuItem *CadastrarHistorico;
        TMenuItem *ConsultarHistorico;
        TMenuItem *AtualizarHistorico;
        TMenuItem *ExcluirHistorico;
        TMenuItem *Atividade;
        TMenuItem *CadastrarAtividade;
        TMenuItem *ConsultarAtividade;
        TMenuItem *AtualizarAtividade;
        TMenuItem *ExcluirAtividade;
        TMenuItem *Servico;
        TMenuItem *CadastrarServico;
        TMenuItem *ConsultarServico;
        TMenuItem *AtualizarServico;
        TMenuItem *ExcluirServico;
        TMenuItem *Fechar1;
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall MaskEdit1Exit(TObject *Sender);
        void __fastcall MaskEdit4Exit(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall SpeedButton3Click(TObject *Sender);
        void __fastcall Fechar1Click(TObject *Sender);
        void __fastcall Sair1Click(TObject *Sender);
        void __fastcall CadastrarFuncionarioClick(TObject *Sender);
        void __fastcall CadastrarNaturalClick(TObject *Sender);
        void __fastcall CadastrarContribuintePFClick(TObject *Sender);
        void __fastcall CadastrarContribuintePJClick(TObject *Sender);
        void __fastcall ConsultarSociosClick(TObject *Sender);
        void __fastcall AtualizarSociosClick(TObject *Sender);
        void __fastcall ExcluirSociosClick(TObject *Sender);
        void __fastcall CadastrarDoacaoSociosClick(TObject *Sender);
        void __fastcall ConsultarDoacaoSociosClick(TObject *Sender);
        void __fastcall AtualizarDoacaoSociosClick(TObject *Sender);
        void __fastcall ExcluirDoacaoSociosClick(TObject *Sender);
        void __fastcall CadastrarHistoricoClick(TObject *Sender);
        void __fastcall ConsultarHistoricoClick(TObject *Sender);
        void __fastcall AtualizarHistoricoClick(TObject *Sender);
        void __fastcall ExcluirHistoricoClick(TObject *Sender);
        void __fastcall CadastrarAtividadeClick(TObject *Sender);
        void __fastcall ConsultarAtividadeClick(TObject *Sender);
        void __fastcall AtualizarAtividadeClick(TObject *Sender);
        void __fastcall ExcluirAtividadeClick(TObject *Sender);
        void __fastcall CadastrarServicoClick(TObject *Sender);
        void __fastcall ConsultarServicoClick(TObject *Sender);
        void __fastcall AtualizarServicoClick(TObject *Sender);
        void __fastcall ExcluirServicoClick(TObject *Sender);
        void __fastcall SairClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
