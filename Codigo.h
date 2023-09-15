#include "stdio.h"

class CODIGO
{
        private:
                AnsiString cd;
                int i;

        public:

        CODIGO(char cod[8])
        {
                if (cod !="     ")
                {
                        for (i=0;i<8;++i)
                        {
                                if (cod[i]!= '_')
                                {
                                        if (cod[i] == '0' || cod[i] == '1' || cod[i] == '2' || cod[i] == '3' || cod[i] == '4' || cod[i] == '5' || cod[i] == '6' || cod[i] == '7' || cod[i] == '8' || cod[i] == '9')
                                        {
                                                cd=cd+cod[i];
                                        }
                                }
                        }
                }
        }


        ~CODIGO()
        {
        cd = 0;
        }

        AnsiString mostracodigo()
        {
                return(cd);
        }


};//FIM DA CLASSE
