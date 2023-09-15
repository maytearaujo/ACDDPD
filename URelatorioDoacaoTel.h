//---------------------------------------------------------------------------

#ifndef URelatorioDoacaoTelH
#define URelatorioDoacaoTelH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <ExtCtrls.hpp>
#include <Qrctrls.hpp>
#include <QuickRpt.hpp>
//---------------------------------------------------------------------------
class TForm28 : public TForm
{
__published:	// IDE-managed Components
        TQuickRep *QuickRep1;
        TQRBand *ColumnHeaderBand1;
        TQRLabel *QRLabel2;
        TQRLabel *QRLabel3;
        TQRLabel *QRLabel4;
        TQRLabel *QRLabel6;
        TQRLabel *QRLabel7;
        TQRLabel *QRLabel8;
        TQRLabel *QRLabel9;
        TQRBand *DetailBand1;
        TQRDBText *QRDBText1;
        TQRDBText *QRDBText2;
        TQRDBText *QRDBText3;
        TQRDBText *QRDBText5;
        TQRDBText *QRDBText7;
        TQRDBText *QRDBText8;
        TQRDBText *QRDBText9;
        TQRBand *PageFooterBand1;
        TQRSysData *QRSysData1;
        TQRSysData *QRSysData2;
        TQRSysData *QRSysData3;
        TQRBand *PageHeaderBand1;
        TQRLabel *QRLabel1;
        TQRImage *QRImage1;
        TQRLabel *QRLabel11;
        TQRLabel *QRLabel12;
        TDataSource *DataSource1;
        TQuery *Query1;
        void __fastcall FormActivate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm28(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm28 *Form28;
//---------------------------------------------------------------------------
#endif
