/*
Ache o primeiro número, entre 1 e 1 milhão que é divisível por 11, 13 e 17. Use o comando BREAK.
exemplo:
*/


#include <stdio.h>

int main()
{
        int count,
            numero;

        for(count=1 ; count<=1000000 ; count++)
            if((count%11==0) && (count%13==0) && (count%17==0))
            {
                numero=count;
                break;
            }


        printf("O numero e: %d", numero);

}

