//1. Escreva um programa em C que recebe um inteiro 'n' do usuário e calcula o produto dos números pares e o produtos dos números ímpares, de 1 até n.

#include <stdio.h>

int main(){

    int n;
    int p_pares = 1;
    int p_impares = 1;
    int i = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            p_pares =  i * p_pares;
        }
        else
        {
            p_impares = i * p_impares;
        }
    }
    printf("O produto dos pares: %d\n", p_pares);
    printf("O produto dos impares: %d\n", p_impares);
}