/*
2. Faça um programa em C que recebe um inteiro do usuário e calcula seu fatorial.
O fatorial de 'n' é dado por:
n*(n-1)*(n-2)...*3*2*1
e é representado por n!
*/
#include <stdio.h>

int main (){

    int n;
    int fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Voce digitou um numero negativo");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fatorial = fatorial * i;
        }
        
    }

    printf("%d", fatorial);
}
