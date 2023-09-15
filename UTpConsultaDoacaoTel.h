//---------------------------------------------------------------------------

#ifndef UTpConsultaDoacaoTelH
#define UTpConsultaDoacaoTelH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TForm30 : public TForm
{
__published:	// IDE-managed Components
        TSpeedButton *SpeedButton1;
        TPanel *Panel1;
        TGroupBox *GroupBox1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
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
        TRadioButton *RadioButton5;
        TMaskEdit *MaskEdit4;
        TMaskEdit *MaskEdit5;
        void __fastcall RadioButton1Click(TObject *Sender);
        void __fastcall RadioButton2Click(TObject *Sender);
        void __fastcall MaskEdit1Exit(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall RadioButton3Click(TObject *Sender);
        void __fastcall RadioButton4Click(TObject *Sender);
        void __fastcall MaskEdit3Exit(TObject *Sender);
        void __fastcall MaskEdit4Exit(TObject *Sender);
        void __fastcall MaskEdit5Exit(TObject *Sender);
        void __fastcall RadioButton5Click(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm30(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm30 *Form30;
//---------------------------------------------------------------------------
#endif
