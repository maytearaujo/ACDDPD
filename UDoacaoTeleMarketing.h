//---------------------------------------------------------------------------

#ifndef UDoacaoTeleMarketingH
#define UDoacaoTeleMarketingH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <DBCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Mask.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm29 : public TForm
{
__published:	// IDE-managed Components
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton3;
        TSpeedButton *SpeedButton4;
        TSpeedButton *SpeedButton5;
        TSpeedButton *SpeedButton6;
        TDBNavigator *DBNavigator1;
        TPanel *Panel1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label4;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TMaskEdit *MaskEdit1;
        TEdit *Edit1;
        TMaskEdit *MaskEdit3;
        TMaskEdit *MaskEdit2;
        TMaskEdit *MaskEdit4;
        TMaskEdit *MaskEdit5;
        TEdit *Edit2;
        TRadioGroup *RadioGroup2;
        TMainMenu *MainMenu1;
        TMenuItem *Associacao;
        TMenuItem *Fechar;
        TMenuItem *Sair;
        TMenuItem *TeleMarketing;
        TMenuItem *Doador;
        TMenuItem *CadastrarDoadorTel;
        TMenuItem *CadastrarDoadorTelPF;
        TMenuItem *CadastrarDoadorTelPJ;
        TMenuItem *ConsultarDoadorTel;
        TMenuItem *AtualizarDoadorTel;
        TMenuItem *ExcluirDoadorTel;
        TMenuItem *Doacao;
        TMenuItem *CadastrarDoacaoTel;
        TMenuItem *ConsultarDoacaoTel;
        TMenuItem *AtualizarDoacaoTel;
        TMenuItem *ExcluirDoacaoTel;
        void __fastcall MaskEdit4Exit(TObject *Sender);
        void __fastcall MaskEdit2Exit(TObject *Sender);
        void __fastcall DBNavigator1Click(TObject *Sender,
          TNavigateBtn Button);
        void __fastcall RadioGroup2Click(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall SpeedButton3Click(TObject *Sender);
        void __fastcall SpeedButton4Click(TObject *Sender);
        void __fastcall SpeedButton5Click(TObject *Sender);
        void __fastcall SpeedButton6Click(TObject *Sender);
        void __fastcall FecharClick(TObject *Sender);
        void __fastcall SairClick(TObject *Sender);
        void __fastcall CadastrarDoadorTelPFClick(TObject *Sender);
        void __fastcall CadastrarDoadorTelPJClick(TObject *Sender);
        void __fastcall ConsultarDoadorTelClick(TObject *Sender);
        void __fastcall AtualizarDoadorTelClick(TObject *Sender);
        void __fastcall ExcluirDoadorTelClick(TObject *Sender);
        void __fastcall CadastrarDoacaoTelClick(TObject *Sender);
        void __fastcall ConsultarDoacaoTelClick(TObject *Sender);
        void __fastcall AtualizarDoacaoTelClick(TObject *Sender);
        void __fastcall ExcluirDoacaoTelClick(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm29(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm29 *Form29;
//---------------------------------------------------------------------------
#endif
