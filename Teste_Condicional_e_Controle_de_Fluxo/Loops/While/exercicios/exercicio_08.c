/*
8. Escreva um programa que lê o tamanho do lado de um quadrado e imprime um quadrado daquele tamanho com asteriscos e espaços em branco.
Seu programa deve funcionar para quadrados com lados de todos os tamanhos entre 1 e 20.
Para lado igual a 5:
*****
*    *
*    *
*    *
*****
*/

#include <stdio.h>

int main()
{
        int lado,
            count=1;

        printf("Lado do quadrado: ");
        scanf("%d", &lado);

        while(count<=lado)
        {
            printf("*");
            count++;
        }
        printf("\n");

        count=1;
        while( count <= lado*(lado-2))
        {
            if( (count%lado == 1))
                printf("*");
            else
                if( (count%lado == 0))
                    printf("*\n");
                else
                    printf(" ");

            count++;
        }

        count=1;
        while(count<=lado)
        {
            printf("*");
            count++;
        }
        printf("\n");

}