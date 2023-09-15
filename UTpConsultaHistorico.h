//---------------------------------------------------------------------------

#ifndef UTpConsultaHistoricoH
#define UTpConsultaHistoricoH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <Mask.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm9 : public TForm
{
__published:	// IDE-managed Components
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
        TRadioButton *RadioButton4;
        TMaskEdit *MaskEdit3;
        TMaskEdit *MaskEdit4;
        TRadioButton *RadioButton5;
        TLabel *Label3;
        TMaskEdit *MaskEdit5;
        TSpeedButton *SpeedButton1;
        TAnimate *Animate1;
        void __fastcall RadioButton1Click(TObject *Sender);
        void __fastcall RadioButton2Click(TObject *Sender);
        void __fastcall MaskEdit1Exit(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall RadioButton3Click(TObject *Sender);
        void __fastcall RadioButton4Click(TObject *Sender);
        void __fastcall MaskEdit3Exit(TObject *Sender);
        void __fastcall RadioButton5Click(TObject *Sender);
        void __fastcall MaskEdit4Exit(TObject *Sender);
        void __fastcall MaskEdit5Exit(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm9(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm9 *Form9;
//---------------------------------------------------------------------------
#endif
