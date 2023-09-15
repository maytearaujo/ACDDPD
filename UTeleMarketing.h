//---------------------------------------------------------------------------

#ifndef UTeleMarketingH
#define UTeleMarketingH
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
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm26 : public TForm
{
__published:	// IDE-managed Components
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton3;
        TSpeedButton *SpeedButton4;
        TLabel *Label39;
        TDBNavigator *DBNavigator1;
        TRadioGroup *RadioGroup1;
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
        TLabel *Label22;
        TLabel *Label2;
        TLabel *Label23;
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
        TEdit *Edit10;
        TEdit *Edit11;
        TMaskEdit *MaskEdit8;
        TMainMenu *MainMenu1;
        TMenuItem *Associacao;
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
        TMenuItem *Fechar;
        void __fastcall RadioGroup1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall SpeedButton4Click(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton3Click(TObject *Sender);
        void __fastcall DBNavigator1Click(TObject *Sender,
          TNavigateBtn Button);
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
        __fastcall TForm26(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm26 *Form26;
//---------------------------------------------------------------------------
#endif
