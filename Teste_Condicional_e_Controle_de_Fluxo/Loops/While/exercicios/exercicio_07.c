/*
7. Escreva um programa que lê o tamanho do lado de um quadrado e imprime um quadrado daquele tamanho com asteriscos.
Seu programa deve funcionar para quadrados com lados de todos os tamanhos entre 1 e 20.

Por exemplo, para lado igual a 5:
*****
*****
*****
*****
*****
*/

#include <stdio.h>

int main(){

    int lado_quadrado;
    int i = 1;
    
    printf("Digite um valor entre 1 e  20 para o tamanho do lado de um quadrado: ");
    scanf("%d", &lado_quadrado);

    while (i <= lado_quadrado * lado_quadrado)
    {
        if (i % lado_quadrado == 0)
        {
            printf("*\n");
        }
        else
        {
             printf("*");
        }
       
        i++;
    }
    
}