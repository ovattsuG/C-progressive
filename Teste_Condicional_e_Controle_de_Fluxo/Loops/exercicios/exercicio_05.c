/*
5. Achar o maior, menor, média e organizar números ou seqüências são os algoritmos mais importantes e estudados em Computação. Em C não poderia ser diferente.
Em nosso curso, obviamente, também não será diferente.

Escreva um programa em C que solicita 10 números ao usuário, através de um laço while, e ao final
mostre qual destes números é o maior.
*/

#include <stdio.h>

int main(){

    float numero;
    int i = 0;
    int maior = 0;

    printf("Digite 10 numeros um de cada vez\n");
    while (i < 10)
    {
        printf("Digite um numero: ");
        scanf("%f", &numero);

        if(numero > maior)
        {

            maior = numero;
        
        }
        i++;
    }
    printf("O maior numero digitado: %d",maior);
}