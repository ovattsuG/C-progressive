/*
6. Escreva um programa em C que solicita 10 números ao usuário, através de um laço while, e ao final mostre os dois maiores números digitados pelo usuário.
*/

#include <stdio.h>

int main(){

    float numero;
    int i = 0;
    int maior;
    int segundo_maior;

    printf("Digite 10 numeros um de cada vez\n");
    while (i < 10)
    {
        printf("Digite um numero: ");
        scanf("%f", &numero);

        if(numero > maior)
        {
            segundo_maior = maior;
            maior = numero;

        }else{
            if (segundo_maior < numero)
            {
                segundo_maior = numero;
            }
            
        }
        i++;
    }
    printf("O maior numero digitado: %d",maior);
    printf("\n\nsegundo maior %d", segundo_maior);
}