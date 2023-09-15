//---------------------------------------------------------------------------

#ifndef UCadContribuinteTelPJH
#define UCadContribuinteTelPJH
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
class TForm32 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TLabel *Label1;
        TLabel *Label4;
        TLabel *Label3;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label12;
        TLabel *Label9;
        TLabel *Label13;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label15;
        TLabel *Label6;
        TLabel *Label5;
        TMaskEdit *MaskEdit1;
        TEdit *Edit1;
        TMaskEdit *MaskEdit4;
        TMaskEdit *MaskEdit5;
        TEdit *Edit3;
        TEdit *Edit4;
        TEdit *Edit6;
        TMaskEdit *MaskEdit3;
        TEdit *Edit5;
        TComboBox *ComboBox1;
        TEdit *Edit7;
        TEdit *Edit2;
        TMaskEdit *MaskEdit2;
        TLabel *Label22;
        TMaskEdit *MaskEdit7;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton3;
        TAnimate *Animate1;
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
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall MaskEdit1Exit(TObject *Sender);
        void __fastcall MaskEdit7KeyPress(TObject *Sender, char &Key);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall SpeedButton3Click(TObject *Sender);
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
private:	// User declarations
public:		// User declarations
        __fastcall TForm32(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm32 *Form32;
//---------------------------------------------------------------------------
#endif
