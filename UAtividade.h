//---------------------------------------------------------------------------

#ifndef UAtividadeH
#define UAtividadeH
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
class TForm12 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label7;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TEdit *Edit1;
        TEdit *Edit2;
        TMaskEdit *MaskEdit4;
        TGroupBox *GroupBox1;
        TCheckBox *CheckBox1;
        TCheckBox *CheckBox2;
        TCheckBox *CheckBox3;
        TCheckBox *CheckBox4;
        TCheckBox *CheckBox5;
        TCheckBox *CheckBox6;
        TMaskEdit *MaskEdit6;
        TEdit *Edit3;
        TMaskEdit *MaskEdit2;
        TMaskEdit *MaskEdit1;
        TMaskEdit *MaskEdit5;
        TMaskEdit *MaskEdit3;
        TMaskEdit *MaskEdit7;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label8;
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
        TMenuItem *Atividade;
        TMenuItem *CadastrarAtividade;
        TMenuItem *ConsultarAtividade;
        TMenuItem *AtualizarAtividade;
        TMenuItem *ExcluirAtividade;
        void __fastcall MaskEdit4Exit(TObject *Sender);
        void __fastcall MaskEdit5Exit(TObject *Sender);
        void __fastcall MaskEdit2Exit(TObject *Sender);
        void __fastcall RadioGroup1Click(TObject *Sender);
        void __fastcall DBNavigator1Click(TObject *Sender,
          TNavigateBtn Button);
        void __fastcall MaskEdit6Exit(TObject *Sender);
        void __fastcall MaskEdit7Exit(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall SpeedButton3Click(TObject *Sender);
        void __fastcall SpeedButton4Click(TObject *Sender);
        void __fastcall SpeedButton5Click(TObject *Sender);
        void __fastcall SpeedButton6Click(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall Fechar1Click(TObject *Sender);
        void __fastcall SairClick(TObject *Sender);
        void __fastcall CadastrarAtividadeClick(TObject *Sender);
        void __fastcall ConsultarAtividadeClick(TObject *Sender);
        void __fastcall AtualizarAtividadeClick(TObject *Sender);
        void __fastcall ExcluirAtividadeClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm12(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm12 *Form12;
//---------------------------------------------------------------------------
#endif
