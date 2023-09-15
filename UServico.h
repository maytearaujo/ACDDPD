//---------------------------------------------------------------------------

#ifndef UServicoH
#define UServicoH
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
class TForm14 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label4;
        TLabel *Label7;
        TLabel *Label6;
        TLabel *Label11;
        TLabel *Label3;
        TLabel *Label5;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TEdit *Edit1;
        TMaskEdit *MaskEdit3;
        TMaskEdit *MaskEdit4;
        TEdit *Edit2;
        TEdit *Edit4;
        TEdit *Edit3;
        TEdit *Edit5;
        TEdit *Edit6;
        TEdit *Edit7;
        TEdit *Edit8;
        TMaskEdit *MaskEdit7;
        TMaskEdit *MaskEdit1;
        TMaskEdit *MaskEdit2;
        TMaskEdit *MaskEdit5;
        TLabel *Label17;
        TMaskEdit *MaskEdit6;
        TRadioGroup *RadioGroup1;
        TLabel *Label16;
        TEdit *Edit9;
        TLabel *Label18;
        TMaskEdit *MaskEdit9;
        TLabel *Label19;
        TLabel *Label20;
        TMaskEdit *MaskEdit8;
        TRadioGroup *RadioGroup2;
        TDBNavigator *DBNavigator1;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton3;
        TSpeedButton *SpeedButton4;
        TSpeedButton *SpeedButton5;
        TSpeedButton *SpeedButton6;
        TMainMenu *MainMenu1;
        TMenuItem *Associacao;
        TMenuItem *Sair;
        TMenuItem *Servico;
        TMenuItem *CadastrarServico;
        TMenuItem *ConsultarServico;
        TMenuItem *AtualizarServico;
        TMenuItem *ExcluirServico;
        TMenuItem *Fechar1;
        void __fastcall DBNavigator1Click(TObject *Sender,
          TNavigateBtn Button);
        void __fastcall RadioGroup2Click(TObject *Sender);
        void __fastcall MaskEdit5Exit(TObject *Sender);
        void __fastcall MaskEdit6Exit(TObject *Sender);
        void __fastcall MaskEdit2Exit(TObject *Sender);
        void __fastcall MaskEdit3Exit(TObject *Sender);
        void __fastcall MaskEdit4Exit(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall SpeedButton3Click(TObject *Sender);
        void __fastcall SpeedButton4Click(TObject *Sender);
        void __fastcall SpeedButton5Click(TObject *Sender);
        void __fastcall SpeedButton6Click(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall Fechar1Click(TObject *Sender);
        void __fastcall SairClick(TObject *Sender);
        void __fastcall CadastrarServicoClick(TObject *Sender);
        void __fastcall ConsultarServicoClick(TObject *Sender);
        void __fastcall AtualizarServicoClick(TObject *Sender);
        void __fastcall ExcluirServicoClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm14(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm14 *Form14;
//---------------------------------------------------------------------------
#endif
