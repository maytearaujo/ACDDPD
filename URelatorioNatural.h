//---------------------------------------------------------------------------

#ifndef URelatorioNaturalH
#define URelatorioNaturalH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <QuickRpt.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <Qrctrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm16 : public TForm
{
__published:	// IDE-managed Components
        TQuickRep *QuickRep1;
        TQRBand *ColumnHeaderBand1;
        TQRLabel *QRLabel2;
        TQRLabel *QRLabel3;
        TQRLabel *QRLabel4;
        TQRLabel *QRLabel6;
        TQRLabel *QRLabel7;
        TQRLabel *QRLabel9;
        TQRBand *DetailBand1;
        TQRDBText *QRDBText1;
        TQRDBText *QRDBText2;
        TQRDBText *QRDBText3;
        TQRDBText *QRDBText5;
        TQRDBText *QRDBText8;
        TQRDBText *QRDBText9;
        TQRBand *PageFooterBand1;
        TQRSysData *QRSysData1;
        TQRSysData *QRSysData2;
        TQRSysData *QRSysData3;
        TQRBand *PageHeaderBand1;
        TQRLabel *QRLabel1;
        TDataSource *DataSource1;
        TQuery *Query1;
        TQRImage *QRImage1;
        TQRLabel *QRLabel10;
        TQRLabel *QRLabel11;
        void __fastcall FormActivate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm16(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm16 *Form16;
//---------------------------------------------------------------------------
#endif
