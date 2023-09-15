//---------------------------------------------------------------------------

#ifndef UTipoConsultaTeleMarKetingH
#define UTipoConsultaTeleMarKetingH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TForm27 : public TForm
{
__published:	// IDE-managed Components
        TSpeedButton *SpeedButton1;
        TPanel *Panel1;
        TGroupBox *GroupBox1;
        TLabel *Label1;
        TLabel *Label2;
        TRadioButton *RadioButton1;
        TRadioButton *RadioButton2;
        TEdit *Edit1;
        TEdit *Edit2;
        TMaskEdit *MaskEdit1;
        TRadioButton *RadioButton3;
        TMaskEdit *MaskEdit2;
        TEdit *Edit3;
        void __fastcall RadioButton1Click(TObject *Sender);
        void __fastcall RadioButton2Click(TObject *Sender);
        void __fastcall MaskEdit1Exit(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall RadioButton3Click(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
        __fastcall TForm27(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm27 *Form27;
//---------------------------------------------------------------------------
#endif
