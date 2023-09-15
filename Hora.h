#include "stdio.h"

class HORA
{//INICIAL

        private:

                /* ===== VÁRIÁVEIS =====*/
                AnsiString hora, minuto, segundo;

        public:

                /* ===== FUNÇÃO SEPARA DIA, MES E ANO ===== */
                HORA (char H[8])
                {
                        int i;
                        /* ===== PARA I DE 0 A 10 =====*/
                        for ( i=0; i<9; ++i)
                        {
                                /* ===== VARIÁVEL RECEBE A HORA DIGITADO =====*/
                                if (i<2)
                                {
                                        hora = hora + H[i];
                                }

                                /* ===== VARIÁVEL RECEBE O MES DIGITADO =====*/
                                if (i>2 && i<5)
                                {
                                        minuto = minuto + H[i];
                                }

                                /* ===== VARIÁVEL RECEBE O ANO DIGITADO =====*/
                                if (i>5 && i<8)
                                {
                                        segundo = segundo + H[i];
                                }
                        } //FOR


                }

                 unsigned char VERIFICAHORA()
                {
                        if (
                        (
hora == "00" || hora == "01" || hora == "02" || hora == "03" || hora == "04" ||
hora == "05" || hora == "06" || hora == "07" || hora == "08" || hora == "09" ||
hora == "10" || hora == "11" || hora == "12" || hora == "13" || hora == "14" ||
hora == "15" || hora == "16" || hora == "17" || hora == "18" || hora == "19" ||
hora == "20" || hora == "21" || hora == "22" || hora == "23"
                        )
                        &&

                        (
minuto == "00" || minuto == "01" || minuto == "02" || minuto == "03" || minuto == "04" ||
minuto == "05" || minuto == "06" || minuto == "07" || minuto == "08" || minuto == "09" ||
minuto == "10" || minuto == "11" || minuto == "12" || minuto == "13" || minuto == "14" ||
minuto == "15" || minuto == "16" || minuto == "17" || minuto == "18" || minuto == "19" ||
minuto == "20" || minuto == "21" || minuto == "22" || minuto == "23" || minuto == "24" ||
minuto == "25" || minuto == "26" || minuto == "27" || minuto == "28" || minuto == "29" ||
minuto == "30" || minuto == "31" || minuto == "32" || minuto == "33" || minuto == "34" ||
minuto == "35" || minuto == "36" || minuto == "37" || minuto == "38" || minuto == "39" ||
minuto == "40" || minuto == "41" || minuto == "42" || minuto == "43" || minuto == "44" ||
minuto == "45" || minuto == "46" || minuto == "47" || minuto == "48" || minuto == "49" ||
minuto == "50" || minuto == "51" || minuto == "52" || minuto == "53" || minuto == "54" ||
minuto == "55" || minuto == "56" || minuto == "57" || minuto == "58" || minuto == "59"
                        )
                        &&

                        (
segundo == "00" || segundo == "01" || segundo == "02" || segundo == "03" || segundo == "04" ||
segundo == "05" || segundo == "06" || segundo == "07" || segundo == "08" || segundo == "09" ||
segundo == "10" || segundo == "11" || segundo == "12" || segundo == "13" || segundo == "14" ||
segundo == "15" || segundo == "16" || segundo == "17" || segundo == "18" || segundo == "19" ||
segundo == "20" || segundo == "21" || segundo == "22" || segundo == "23" || segundo == "24" ||
segundo == "25" || segundo == "26" || segundo == "27" || segundo == "28" || segundo == "29" ||
segundo == "30" || segundo == "31" || segundo == "32" || segundo == "33" || segundo == "34" ||
segundo == "35" || segundo == "36" || segundo == "37" || segundo == "38" || segundo == "39" ||
segundo == "40" || segundo == "41" || segundo == "42" || segundo == "43" || segundo == "44" ||
segundo == "45" || segundo == "46" || segundo == "47" || segundo == "48" || segundo == "49" ||
segundo == "50" || segundo == "51" || segundo == "52" || segundo == "53" || segundo == "54" ||
segundo == "55" || segundo == "56" || segundo == "57" || segundo == "58" || segundo == "59"
                        )

                           )
                        { return 1; }
                        else  { return 0; }
                }

};//FINAL CLASSE