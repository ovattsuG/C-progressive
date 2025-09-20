/*
9. Tabuada em C
Escreva um programa que pergunta um número ao usuário, e mostra sua tabuada completa (de 1 até 10).
*/

#include <stdio.h>

int main()
{
    int num;
    int mult;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        mult = num * i;
        printf("%d x %d = %d \n", num, i, mult);
    }
    
}