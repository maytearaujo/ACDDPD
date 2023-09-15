//---------------------------------------------------------------------------

#ifndef UDoacaoH
#define UDoacaoH
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
class TForm10 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TLabel *Label1;
        TMaskEdit *MaskEdit1;
        TLabel *Label2;
        TEdit *Edit1;
        TLabel *Label4;
        TLabel *Label7;
        TMaskEdit *MaskEdit3;
        TMaskEdit *MaskEdit2;
        TLabel *Label8;
        TMaskEdit *MaskEdit4;
        TLabel *Label9;
        TMaskEdit *MaskEdit5;
        TRadioGroup *RadioGroup1;
        TLabel *Label10;
        TEdit *Edit2;
        TLabel *Label3;
        TLabel *Label5;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton3;
        TSpeedButton *SpeedButton4;
        TSpeedButton *SpeedButton5;
        TSpeedButton *SpeedButton6;
        TRadioGroup *RadioGroup2;
        TDBNavigator *DBNavigator1;
        TMainMenu *MainMenu1;
        TMenuItem *Associacao;
        TMenuItem *Fechar1;
        TMenuItem *Sair;
        TMenuItem *DoacaoSocios;
        TMenuItem *CadastrarDoacaoSocios;
        TMenuItem *ConsultarDoacaoSocios;
        TMenuItem *AtualizarDoacaoSocios;
        TMenuItem *ExcluirDoacaoSocios;
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
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall Fechar1Click(TObject *Sender);
        void __fastcall SairClick(TObject *Sender);
        void __fastcall CadastrarDoacaoSociosClick(TObject *Sender);
        void __fastcall ConsultarDoacaoSociosClick(TObject *Sender);
        void __fastcall AtualizarDoacaoSociosClick(TObject *Sender);
        void __fastcall ExcluirDoacaoSociosClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm10(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm10 *Form10;
//---------------------------------------------------------------------------
#endif
