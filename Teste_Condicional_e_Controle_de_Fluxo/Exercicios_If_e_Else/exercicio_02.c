/*
2. Escreva um programa em C que recebe um inteiro e diga se é par ou ímpar.
Use o operador matemático % (resto da divisão ou módulo) e o teste condicional if.
*/
#include <stdio.h>

int main(){

    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if((numero % 2) == 0){

        printf("O numero %d e par", numero);
    }
    else{

        printf("O numero %d e impar", numero);
    }
}