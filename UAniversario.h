//---------------------------------------------------------------------------

#ifndef UAniversarioH
#define UAniversarioH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
#include <Menus.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TForm24 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TBevel *Bevel1;
        TGroupBox *GroupBox1;
        TRadioButton *RadioButton1;
        TRadioButton *RadioButton2;
        TRadioButton *RadioButton3;
        TRadioButton *RadioButton4;
        TRadioButton *RadioButton5;
        TRadioButton *RadioButton6;
        TRadioButton *RadioButton7;
        TRadioButton *RadioButton8;
        TRadioButton *RadioButton9;
        TRadioButton *RadioButton10;
        TRadioButton *RadioButton11;
        TRadioButton *RadioButton12;
        TSpeedButton *SpeedButton1;
        TGroupBox *GroupBox2;
        TRadioButton *RadioButton13;
        TRadioButton *RadioButton14;
        TMainMenu *MainMenu1;
        TMenuItem *Associacao;
        TMenuItem *Sair;
        TMenuItem *Relatorios;
        TMenuItem *RelatorioNatural;
        TMenuItem *RelatorioContribuinte;
        TMenuItem *RelatorioTeleMarketing;
        TMenuItem *RelatorioSociosTeleMarketing;
        TMenuItem *RelatorioDoacaoTeleMarketing;
        TMenuItem *RelatorioFuncionario;
        TMenuItem *RelatorioHistorico;
        TMenuItem *RelatorioDoacao;
        TMenuItem *RelatorioAtividade;
        TMenuItem *RelatorioServico;
        TMenuItem *Fechar;
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall RadioButton13Click(TObject *Sender);
        void __fastcall RadioButton14Click(TObject *Sender);
        void __fastcall FecharClick(TObject *Sender);
        void __fastcall SairClick(TObject *Sender);
        void __fastcall RelatorioNaturalClick(TObject *Sender);
        void __fastcall RelatorioContribuinteClick(TObject *Sender);
        void __fastcall RelatorioSociosTeleMarketingClick(TObject *Sender);
        void __fastcall RelatorioDoacaoTeleMarketingClick(TObject *Sender);
        void __fastcall RelatorioFuncionarioClick(TObject *Sender);
        void __fastcall RelatorioHistoricoClick(TObject *Sender);
        void __fastcall RelatorioDoacaoClick(TObject *Sender);
        void __fastcall RelatorioAtividadeClick(TObject *Sender);
        void __fastcall RelatorioServicoClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm24(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm24 *Form24;
//---------------------------------------------------------------------------
#endif
