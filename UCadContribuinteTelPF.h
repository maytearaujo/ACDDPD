//---------------------------------------------------------------------------

#ifndef UCadContribuinteTelPFH
#define UCadContribuinteTelPFH
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
class TForm31 : public TForm
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
        void __fastcall MaskEdit4Exit(TObject *Sender);
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
        __fastcall TForm31(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm31 *Form31;
//---------------------------------------------------------------------------
#endif
