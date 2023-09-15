#include "stdio.h"

class DATA
{//INICIAL

        private:

                /* ===== VÁRIÁVEIS =====*/
                AnsiString dia, mes, ano;
                AnsiString diah, mesh, anoh;

        public:

                /* ===== FUNÇÃO SEPARA DIA, MES E ANO ===== */
                DATA(char D[10])
                {
                        int i;
                        /* ===== PARA I DE 0 A 10 =====*/
                        for (i=0;i<11;++i)
                        {
                                /* ===== VARIÁVEL RECEBE O DIA DIGITADO =====*/
                                if (i<2)
                                {
                                        dia = dia + D[i];
                                }

                                /* ===== VARIÁVEL RECEBE O MES DIGITADO =====*/
                                if (i>2 && i<5)
                                {
                                        mes = mes + D[i];
                                }

                                /* ===== VARIÁVEL RECEBE O ANO DIGITADO =====*/
                                if (i>5 && i<10)
                                {
                                        ano = ano + D[i];
                                }
                        } //FOR


                }
                unsigned char DATAZERO()
                {
                        if (
                        (
                        dia == "01" || dia == "02" || dia == "03" || dia == "04" || dia == "05" ||
                        dia == "06" || dia == "07" || dia == "08" || dia == "09" || dia == "10" ||
                        dia == "11" || dia == "12" || dia == "13" || dia == "14" || dia == "15" ||
                        dia == "16" || dia == "17" || dia == "18" || dia == "19" || dia == "20" ||
                        dia == "21" || dia == "22" || dia == "23" || dia == "24" || dia == "25" ||
                        dia == "26" || dia == "27" || dia == "28" || dia == "29" || dia == "30" ||
                        dia == "31"
                        )
                        &&
                        (
                        mes == "01" || mes == "02" || mes == "03" || mes == "04" || mes == "05" || mes == "06" ||
                        mes == "07" || mes == "08" || mes == "09" || mes == "10" || mes == "11" || mes == "12"
                        )

                           )
                        { return 1; }
                        else  { return 0; }
                }

                unsigned char DATAHOJE()
                {
                        TDate DataHoje;
                        unsigned short AYear, AMonth, ADay;

                        DataHoje = Date();

                        try
                        {
                                DataHoje.DecodeDate(&AYear,&AMonth,&ADay);
                                diah = IntToStr (ADay);
                                mesh = IntToStr (AMonth);
                                anoh = IntToStr (AYear);
                        }
                        catch(...)
                        {
                                ShowMessage("Erro!!! Verifique A Data Digitada...");
                        }

                        if (diah == 1 || diah == 2 || diah == 3 || diah == 4 || diah == 5 || diah == 6 || diah == 7 || diah == 8 || diah == 9)
                        {
                                diah = "0"+diah;
                        }

                        if(mesh == 1 || mesh == 2 || mesh == 3 || mesh == 4 || mesh == 5 || mesh == 6 || mesh == 7 || mesh == 8 || mesh == 9 )
                        {
                                mesh = "0"+mesh;
                        }

                        /* === VERIFICA ANO ENTRE 1920 E ANO ATUAL E DATAS FUTURAS === */

                        if (
                              ( ano > 1920 &&  ano <= anoh) &&
                              (
                                ( ano < anoh ) ||
                                ( ano == anoh && mes < mesh ) ||
                                ( ano == anoh && mes == mesh && dia <= diah ) ||
                                ( ano == anoh && mes == mesh && dia < diah )

                              )

                           )
                        {
                            return 1; 

                        }

                        else
                        {
                                return 0;
                        }
                }

               /* === SE O RESTO DA DIVISÃO DO ANO FOR 0 (ZERO), ELE É BISSEXTO */
                unsigned char BISSEXTO()
                {
                        return(ano%4==0)?1:0;
                }

                /* === DIAS DE FEVEREIRO NÃO BISSEXTO === */
                unsigned char DIASFEVEREIRO()
                {
                        if ( dia == "01" || dia =="02" || dia == "03" || dia =="04" || dia == "05" || dia =="06" || dia == "07" || dia =="08" || dia == "09" || dia =="10" || dia == "11" || dia =="12" || dia == "13" || dia =="14" || dia == "15" || dia =="16" || dia == "17" || dia =="18" || dia == "19" || dia =="20" || dia == "21" || dia =="22" || dia == "23" || dia =="24" || dia == "25" || dia =="26" || dia == "27" || dia =="28" )
                                return 1;
                        else
                                return 0;
                }

                /* === DIAS DE FEVEREIRO BISSEXTO === */
                unsigned char DIASBISSEXTO()
                {
                        if ( dia == "01" || dia =="02" || dia == "03" || dia =="04" || dia == "05" || dia =="06" || dia == "07" || dia =="08" || dia == "09" || dia =="10" || dia == "11" || dia =="12" || dia == "13" || dia =="14" || dia == "15" || dia =="16" || dia == "17" || dia =="18" || dia == "19" || dia =="20" || dia == "21" || dia =="22" || dia == "23" || dia =="24" || dia == "25" || dia =="26" || dia == "27" || dia =="28" || dia == "29")
                                return 1;
                        else
                                return 0;
                }

                /* === DIAS DE 1 A 31 === */
                unsigned char DIAS31()
                {
                        if (dia == "01" || dia=="02" || dia=="03" ||dia=="04" ||dia=="05" ||dia=="06" ||dia=="07" || dia=="08" ||dia=="09" ||dia=="10" || dia=="11" ||dia=="12" ||dia=="13" ||dia=="14" ||dia=="15" ||dia=="16" ||dia=="17" ||dia=="18" ||dia=="19" ||dia=="20" || dia=="21" || dia=="22" || dia=="23" || dia=="24" || dia=="25" || dia=="26" || dia=="27" || dia=="28" || dia=="29" || dia=="30" || dia=="31")
                                return 1;
                        else
                                return 0;
                }

                /* === DIAS DE 1 A 30 === */
                unsigned char DIAS30()
                {
                        if (dia == "01" || dia=="02" || dia=="03" ||dia=="04" ||dia=="05" ||dia=="06" ||dia=="07" || dia=="08" ||dia=="09" ||dia=="10" || dia=="11" ||dia=="12" ||dia=="13" ||dia=="14" ||dia=="15" ||dia=="16" ||dia=="17" ||dia=="18" ||dia=="19" ||dia=="20" || dia=="21" || dia=="22" || dia=="23" || dia=="24" || dia=="25" || dia=="26" || dia=="27" || dia=="28" || dia=="29" || dia=="30" )
                                return 1;
                        else
                                return 0;
                }

                /* === MESES COM 31 DIAS: 1,3,5,7,8,10,12  === */
                unsigned char MESES31()
                {
                        if ( mes=="01" || mes=="03" || mes=="05" || mes=="07" || mes=="08" || mes=="10" || mes=="12")
                                return 1;
                        else
                                return 0;
                }

                /* === MESES COM 30 DIAS: 4,6,9,11  === */
                unsigned char MESES30()
                {
                        if (mes=="04" || mes=="06" || mes=="09" || mes=="11" )
                                return 1;
                        else
                                return 0;
                }

                /* === VERIFICA SE A DATA É VÁLIDA === */
                unsigned char VERIFICADATA()
                {
                if (
                        ( BISSEXTO() && mes == "02" && DIASBISSEXTO() && DATAHOJE()) ||
                        ( mes == "02" && DIASFEVEREIRO() && DATAHOJE()) ||
                        ( MESES31() && DIAS31()&& DATAHOJE()) ||
                        ( MESES30() && DIAS30()&& DATAHOJE())
                            )
                {
                        return 1;
                }

                else
                {
                        return 0;
                }

                }

                /* === VERIFICA SE A DATA É VÁLIDA === */
                unsigned char VERIFICADATA2()
                {
                if (
                        ( BISSEXTO() && mes == "02" && DIASBISSEXTO() ) ||
                        ( mes == "02" && DIASFEVEREIRO() ) ||
                        ( MESES31() && DIAS31() ) ||
                        ( MESES30() && DIAS30() )
                            )
                {
                        return 1;
                }

                else
                {
                        return 0;
                }

                }

                AnsiString DT()
                {
                return mes +"/"+ dia +"/"+ ano;
                }

};//FINAL CLASSE