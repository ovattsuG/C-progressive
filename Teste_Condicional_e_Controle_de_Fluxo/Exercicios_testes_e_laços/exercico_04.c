/*
4. Crie um programa em C que peça um número inteiro ao usuário, e imprima a seguinte tabela::
1
2 4
3 6 9
4 8 12 16
*/

#include <stdio.h>

int main(){

    int n;
    printf("Digite um numero inteiro");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
        
    }
    
}