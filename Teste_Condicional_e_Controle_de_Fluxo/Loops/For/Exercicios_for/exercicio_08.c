/*
8. Quadrado de asteriscos e espaços em branco
Escreva um programa que lê o tamanho do lado de um quadrado e imprime um quadrado daquele tamanho com asteriscos e espaços em branco.
 Seu programa deve funcionar para quadrados com lados de todos os tamanhos entre 1 e 20.
Para lado igual a 5:
*****
*    *
*    *
*    *
*****
*/

#include <stdio.h>

int main(){

    int lado;

    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%d", &lado);

    if(lado > 0 && lado <= 20)
    {
        for (int i = 0; i < lado; i++)
        { 
            for (int j = 0; j < lado; j++)
            {
                if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        } 
    }
    
     
}