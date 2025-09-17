/*
6. Achando os dois maiores números
Escreva um programa em C que solicita 10 números ao usuário, através de um laço while, e ao final
mostre os dois maiores números digitados pelo usuário.
*/

#include <stdio.h>

int main(){

    int numero = 0;
    int maior = 0;
    int segundo_maior = 0;

    printf("Digite 10 numeros um de cada vez!\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero > maior)
        {
            segundo_maior = maior;
            maior = numero;
        }
    }
    printf("O maior numero: %d \n Segundo maior numero: %d", maior, segundo_maior);
}