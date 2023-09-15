//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("Associacao.res");
USEFORM("UInicio.cpp", Form1);
USEFORM("UCadContribuinteTelPF.cpp", Form31);
USEFORM("UCadastroFuncionario.cpp", Form3);
USEFORM("UCadastroNatural.cpp", Form4);
USEFORM("UCadContribuinteTelPJ.cpp", Form32);
USEFORM("UConsAtuaExcSocio.cpp", Form6);
USEFORM("UTipoConsultaSocio.cpp", Form7);
USEFORM("UHistorico.cpp", Form8);
USEFORM("UTpConsultaHistorico.cpp", Form9);
USEFORM("UDoacao.cpp", Form10);
USEFORM("UTpConsultaDoacao.cpp", Form11);
USEFORM("UAtividade.cpp", Form12);
USEFORM("UTpConsultaAtividade.cpp", Form13);
USEFORM("UServico.cpp", Form14);
USEFORM("UTpConsultaServico.cpp", Form15);
USEFORM("URelatorioNatural.cpp", Form16);
USEFORM("URelatorioFuncionario.cpp", Form18);
USEFORM("URelatorioCliente.cpp", Form19);
USEFORM("URelatorioContribuinte.cpp", Form17);
USEFORM("URelatorioHistorico.cpp", Form20);
USEFORM("URelatorioDoacao.cpp", Form21);
USEFORM("URelatorioAtividade.cpp", Form22);
USEFORM("URelatorioServico.cpp", Form23);
USEFORM("USobre.cpp", AboutBox);
USEFORM("UAniversario.cpp", Form24);
USEFORM("URelatorioAniversario.cpp", Form25);
USEFORM("UTeleMarketing.cpp", Form26);
USEFORM("UTipoConsultaTeleMarKeting.cpp", Form27);
USEFORM("UDoacaoTeleMarketing.cpp", Form29);
USEFORM("UTpConsultaDoacaoTel.cpp", Form30);
USEFORM("URelatorioDoacaoTel.cpp", Form28);
USEFORM("UCadClienteContribuintePF.cpp", Form2);
USEFORM("UCadClienteContribuintePJ.cpp", Form5);
USEFORM("URelatorioAniversarioTel.cpp", Form33);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->Title = "ACDDPD";
                 Application->HelpFile = "";
                 Application->CreateForm(__classid(TForm1), &Form1);
                 Application->CreateForm(__classid(TForm31), &Form31);
                 Application->CreateForm(__classid(TForm3), &Form3);
                 Application->CreateForm(__classid(TForm4), &Form4);
                 Application->CreateForm(__classid(TForm32), &Form32);
                 Application->CreateForm(__classid(TForm6), &Form6);
                 Application->CreateForm(__classid(TForm7), &Form7);
                 Application->CreateForm(__classid(TForm8), &Form8);
                 Application->CreateForm(__classid(TForm9), &Form9);
                 Application->CreateForm(__classid(TForm10), &Form10);
                 Application->CreateForm(__classid(TForm11), &Form11);
                 Application->CreateForm(__classid(TForm12), &Form12);
                 Application->CreateForm(__classid(TForm13), &Form13);
                 Application->CreateForm(__classid(TForm14), &Form14);
                 Application->CreateForm(__classid(TForm15), &Form15);
                 Application->CreateForm(__classid(TForm16), &Form16);
                 Application->CreateForm(__classid(TForm18), &Form18);
                 Application->CreateForm(__classid(TForm19), &Form19);
                 Application->CreateForm(__classid(TForm17), &Form17);
                 Application->CreateForm(__classid(TForm20), &Form20);
                 Application->CreateForm(__classid(TForm21), &Form21);
                 Application->CreateForm(__classid(TForm22), &Form22);
                 Application->CreateForm(__classid(TForm23), &Form23);
                 Application->CreateForm(__classid(TAboutBox), &AboutBox);
                 Application->CreateForm(__classid(TForm24), &Form24);
                 Application->CreateForm(__classid(TForm25), &Form25);
                 Application->CreateForm(__classid(TForm26), &Form26);
                 Application->CreateForm(__classid(TForm27), &Form27);
                 Application->CreateForm(__classid(TForm29), &Form29);
                 Application->CreateForm(__classid(TForm30), &Form30);
                 Application->CreateForm(__classid(TForm28), &Form28);
                 Application->CreateForm(__classid(TForm2), &Form2);
                 Application->CreateForm(__classid(TForm5), &Form5);
                 Application->CreateForm(__classid(TForm33), &Form33);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        return 0;
}
//---------------------------------------------------------------------------
