//---------------------------------------------------------------------------

#ifndef UConsAtuaExcSocioH
#define UConsAtuaExcSocioH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <Mask.hpp>
#include <DBCtrls.hpp>
#include <Menus.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm6 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TLabel *Label3;
        TLabel *Label10;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label21;
        TLabel *Label6;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label33;
        TLabel *Label32;
        TLabel *Label34;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label18;
        TLabel *Label15;
        TLabel *Label19;
        TLabel *Label16;
        TLabel *Label20;
        TLabel *Label17;
        TLabel *Label24;
        TLabel *Label26;
        TLabel *Label27;
        TLabel *Label28;
        TLabel *Label29;
        TLabel *Label35;
        TLabel *Label30;
        TLabel *Label31;
        TLabel *Label25;
        TLabel *Label12;
        TLabel *Label37;
        TLabel *Label22;
        TLabel *Label36;
        TLabel *Label23;
        TLabel *Label11;
        TEdit *Edit1;
        TEdit *Edit5;
        TEdit *Edit6;
        TEdit *Edit9;
        TEdit *Edit10;
        TEdit *Edit12;
        TEdit *Edit16;
        TEdit *Edit22;
        TEdit *Edit24;
        TEdit *Edit29;
        TEdit *Edit33;
        TEdit *Edit36;
        TEdit *Edit37;
        TEdit *Edit38;
        TEdit *Edit20;
        TEdit *Edit21;
        TMaskEdit *MaskEdit1;
        TComboBox *ComboBox1;
        TMaskEdit *MaskEdit2;
        TComboBox *ComboBox2;
        TComboBox *ComboBox3;
        TComboBox *ComboBox4;
        TComboBox *ComboBox5;
        TComboBox *ComboBox6;
        TMaskEdit *MaskEdit3;
        TMaskEdit *MaskEdit4;
        TMaskEdit *MaskEdit5;
        TMaskEdit *MaskEdit7;
        TMaskEdit *MaskEdit8;
        TMaskEdit *MaskEdit6;
        TComboBox *ComboBox7;
        TComboBox *ComboBox8;
        TMaskEdit *MaskEdit9;
        TMaskEdit *MaskEdit10;
        TMaskEdit *MaskEdit11;
        TMaskEdit *MaskEdit12;
        TMaskEdit *MaskEdit13;
        TMaskEdit *MaskEdit14;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton3;
        TSpeedButton *SpeedButton4;
        TDBNavigator *DBNavigator1;
        TLabel *Label39;
        TRadioGroup *RadioGroup1;
        TMainMenu *MainMenu1;
        TMenuItem *Associacao;
        TMenuItem *Fechar1;
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
        void __fastcall MaskEdit1Exit(TObject *Sender);
        void __fastcall MaskEdit2Exit(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall Edit1KeyPress(TObject *Sender, char &Key);
        void __fastcall ComboBox1Change(TObject *Sender);
        void __fastcall DBNavigator1Click(TObject *Sender,
          TNavigateBtn Button);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall SpeedButton3Click(TObject *Sender);
        void __fastcall SpeedButton4Click(TObject *Sender);
        void __fastcall RadioGroup1Click(TObject *Sender);
        void __fastcall Fechar1Click(TObject *Sender);
        void __fastcall SairClick(TObject *Sender);
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
private:	// User declarations
public:		// User declarations
        __fastcall TForm6(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif
