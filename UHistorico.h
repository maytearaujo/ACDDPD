//---------------------------------------------------------------------------

#ifndef UHistoricoH
#define UHistoricoH
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
class TForm8 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TLabel *Label3;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label2;
        TLabel *Label4;
        TLabel *Label5;
        TMemo *Memo1;
        TEdit *Edit4;
        TMaskEdit *MaskEdit1;
        TMaskEdit *MaskEdit2;
        TEdit *Edit2;
        TMaskEdit *MaskEdit3;
        TLabel *Label1;
        TMaskEdit *MaskEdit4;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton3;
        TSpeedButton *SpeedButton4;
        TSpeedButton *SpeedButton5;
        TSpeedButton *SpeedButton6;
        TDBNavigator *DBNavigator1;
        TRadioGroup *RadioGroup1;
        TMainMenu *MainMenu1;
        TMenuItem *Associacao;
        TMenuItem *Fechar1;
        TMenuItem *Sair;
        TMenuItem *Historico;
        TMenuItem *CadastrarHistorico;
        TMenuItem *ConsultarHistorico;
        TMenuItem *AtualizarHistorico;
        TMenuItem *ExcluirHistorico;
        void __fastcall MaskEdit1Exit(TObject *Sender);
        void __fastcall MaskEdit2Exit(TObject *Sender);
        void __fastcall DBNavigator1Click(TObject *Sender,
          TNavigateBtn Button);
        void __fastcall RadioGroup1Click(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall SpeedButton3Click(TObject *Sender);
        void __fastcall SpeedButton4Click(TObject *Sender);
        void __fastcall SpeedButton5Click(TObject *Sender);
        void __fastcall SpeedButton6Click(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall Fechar1Click(TObject *Sender);
        void __fastcall SairClick(TObject *Sender);
        void __fastcall CadastrarHistoricoClick(TObject *Sender);
        void __fastcall ConsultarHistoricoClick(TObject *Sender);
        void __fastcall AtualizarHistoricoClick(TObject *Sender);
        void __fastcall ExcluirHistoricoClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm8(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm8 *Form8;
//---------------------------------------------------------------------------
#endif
