/*
5. Achando o maior número
Achar o maior, menor, média e organizar números ou sequências são os algoritmos mais importantes e estudados em Computação. Em C não poderia ser diferente.
Em nosso curso, obviamente, também não será diferente.

Escreva um programa em C que solicita 10 números ao usuário, através de um laço for, e ao final
mostre qual destes números é o maior.
*/

#include <stdio.h>

int main(){

    int numero = 0;
    int maior = 0;
    printf("Digite 10 numeros um de cada vez!\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero > maior)
        {
            maior = numero;
        }
    }

    printf("\nO maior numero digitado: %d", maior);
    

}