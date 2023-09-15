//---------------------------------------------------------------------------

#ifndef UInicioH
#define UInicioH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include <Buttons.hpp>
#include <Dialogs.hpp>
#include <MPlayer.hpp>
#include <OleCtnrs.hpp>
#include <Graphics.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TQuery *Query1;
        TDataSource *DataSource1;
        TTimer *Timer1;
        TMainMenu *MainMenu1;
        TMenuItem *Associacao;
        TMenuItem *Sair;
        TMenuItem *Socios1;
        TMenuItem *CadastrarSocios;
        TMenuItem *CadastrarFuncionario;
        TMenuItem *CadastrarNatural;
        TMenuItem *TeleMarketing;
        TMenuItem *CadastrarDoadorTelPF;
        TMenuItem *CadastrarDoadorTelPJ;
        TMenuItem *CadastrarContribuinte;
        TMenuItem *CadastrarContribuintePF;
        TMenuItem *CadastrarContribuintePJ;
        TMenuItem *ConsultarSocios;
        TMenuItem *AtualizarSocios;
        TMenuItem *ExcluirSocios;
        TMenuItem *Historico;
        TMenuItem *CadastrarHistorico;
        TMenuItem *ConsultarHistorico;
        TMenuItem *AtualizarHistorico;
        TMenuItem *ExcluirHistorico;
        TMenuItem *DoacaoSocios;
        TMenuItem *CadastrarDoacaoSocios;
        TMenuItem *ConsultarDoacaoSocios;
        TMenuItem *AtualizarDoacaoSocios;
        TMenuItem *ExcluirDoacaoSocios;
        TMenuItem *Atividade;
        TMenuItem *CadastrarAtividade;
        TMenuItem *ConsultarAtividade;
        TMenuItem *AtualizarAtividade;
        TMenuItem *ExcluirAtividade;
        TMenuItem *Servico;
        TMenuItem *CadastrarServico;
        TMenuItem *ConsultarServico;
        TMenuItem *AtualizarServico;
        TMenuItem *ExcluirServico;
        TMenuItem *Relatorios;
        TMenuItem *RelatorioNatural;
        TMenuItem *RelatorioContribuinte;
        TMenuItem *RelatorioTeleMarketing;
        TMenuItem *RelatorioFuncionario;
        TMenuItem *RelatorioHistorico;
        TMenuItem *RelatorioDoacao;
        TMenuItem *RelatorioAtividade;
        TMenuItem *RelatorioServico;
        TColorDialog *ColorDialog1;
        TMenuItem *Aparencia;
        TBevel *Bevel1;
        TImage *Image1;
        TImage *Image2;
        TMenuItem *Ajuda;
        TMenuItem *AjudaCadastro;
        TLabel *Label1;
        TMenuItem *Sobre;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TMenuItem *RelatorioAniversariantes;
        TAnimate *Animate1;
        TMenuItem *Seguranca;
        TMenuItem *Copiar;
        TMenuItem *Restaurar;
        TMenuItem *CadastrarDoadorTel;
        TMenuItem *ConsultarDoadorTel;
        TMenuItem *AtualizarDoadorTel;
        TMenuItem *ExcluirDoadorTel;
        TMenuItem *RelatorioSociosTeleMarketing;
        TMenuItem *RelatorioDoacaoTeleMarketing;
        TMenuItem *DoacaoTel;
        TMenuItem *CadastrarDoacaoTel;
        TMenuItem *ConsultarDoacaoTel;
        TMenuItem *AtualizarDoacaoTel;
        TMenuItem *ExcluirDoacaoTel;
        TMenuItem *Doador;
        TMenuItem *Socios;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall SairClick(TObject *Sender);
        void __fastcall CadastrarFuncionarioClick(TObject *Sender);
        void __fastcall CadastrarNaturalClick(TObject *Sender);
        void __fastcall CadastrarDoadorTelPFClick(TObject *Sender);
        void __fastcall CadastrarContribuintePFClick(TObject *Sender);
        void __fastcall CadastrarDoadorTelPJClick(TObject *Sender);
        void __fastcall CadastrarContribuintePJClick(TObject *Sender);
        void __fastcall ConsultarSociosClick(TObject *Sender);
        void __fastcall AtualizarSociosClick(TObject *Sender);
        void __fastcall ExcluirSociosClick(TObject *Sender);
        void __fastcall CadastrarHistoricoClick(TObject *Sender);
        void __fastcall ConsultarHistoricoClick(TObject *Sender);
        void __fastcall AtualizarHistoricoClick(TObject *Sender);
        void __fastcall ExcluirHistoricoClick(TObject *Sender);
        void __fastcall CadastrarDoacaoSociosClick(TObject *Sender);
        void __fastcall ConsultarDoacaoSociosClick(TObject *Sender);
        void __fastcall AtualizarDoacaoSociosClick(TObject *Sender);
        void __fastcall ExcluirDoacaoSociosClick(TObject *Sender);
        void __fastcall CadastrarAtividadeClick(TObject *Sender);
        void __fastcall ConsultarAtividadeClick(TObject *Sender);
        void __fastcall AtualizarAtividadeClick(TObject *Sender);
        void __fastcall ExcluirAtividadeClick(TObject *Sender);
        void __fastcall CadastrarServicoClick(TObject *Sender);
        void __fastcall ConsultarServicoClick(TObject *Sender);
        void __fastcall AtualizarServicoClick(TObject *Sender);
        void __fastcall ExcluirServicoClick(TObject *Sender);
        void __fastcall RelatorioNaturalClick(TObject *Sender);
        void __fastcall RelatorioContribuinteClick(TObject *Sender);
        void __fastcall RelatorioFuncionarioClick(TObject *Sender);
        void __fastcall RelatorioHistoricoClick(TObject *Sender);
        void __fastcall RelatorioDoacaoClick(TObject *Sender);
        void __fastcall RelatorioAtividadeClick(TObject *Sender);
        void __fastcall RelatorioServicoClick(TObject *Sender);
        void __fastcall AparenciaClick(TObject *Sender);
        void __fastcall AjudaCadastroClick(TObject *Sender);
        void __fastcall SobreClick(TObject *Sender);
        void __fastcall RelatorioAniversariantesClick(TObject *Sender);
        void __fastcall CopiarClick(TObject *Sender);
        void __fastcall RestaurarClick(TObject *Sender);
        void __fastcall ConsultarDoadorTelClick(TObject *Sender);
        void __fastcall AtualizarDoadorTelClick(TObject *Sender);
        void __fastcall ExcluirDoadorTelClick(TObject *Sender);
        void __fastcall RelatorioSociosTeleMarketingClick(TObject *Sender);
        void __fastcall CadastrarDoacaoTelClick(TObject *Sender);
        void __fastcall ConsultarDoacaoTelClick(TObject *Sender);
        void __fastcall AtualizarDoacaoTelClick(TObject *Sender);
        void __fastcall ExcluirDoacaoTelClick(TObject *Sender);
        void __fastcall RelatorioDoacaoTeleMarketingClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
