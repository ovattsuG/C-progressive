/*
0. Escreva um programa em C que recebe 'n' números do usuário, e recebe o número 'n' também,
e determine qual destes números é o menor.
*/

#include <stdio.h>

int main()
{
    int num;
    int menor;
    int contador;

    printf("***Encontrando o menor numero digitado***\n");
    printf("Digite a quantidade que vai comparar: \n");
    scanf("%d", &contador);

    printf("Digite um numero: ");
    scanf("%d", &num);
    menor = num;

    for (int i = 1; i < contador; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (menor > num)
        {
            menor = num;
        }

    }

    printf("O menor numero digitado foi: %d", menor);

}