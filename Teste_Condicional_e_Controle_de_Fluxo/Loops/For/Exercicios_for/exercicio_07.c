/*
7. Quadrado de asteriscos
Escreva um programa que lê o tamanho do lado de um quadrado e imprime um quadrado daquele tamanho com asteriscos.
Seu programa deve funcionar para quadrados com lados de todos os tamanhos entre 1 e 20.
Para lado igual a 5:
*****
*****
*****
*****
*****
*/

#include <stdio.h>

int main(){

    int lado_do_quadrado;
    int area_do_quadrado;

    printf("Digite tamanho do lado do quadrado: ");
    scanf("%d", &lado_do_quadrado);

    area_do_quadrado = lado_do_quadrado * lado_do_quadrado;
    if(lado_do_quadrado > 0 && lado_do_quadrado <= 20)
    {

        for (int i = 0; i < area_do_quadrado; i++)
    {
        if(i % lado_do_quadrado == 0)
        {
            printf("\n*");
        }
        else{
            printf("*");
        }
    }
    
    }
}