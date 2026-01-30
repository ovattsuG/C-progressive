/*
00. Crie um programa em C que peça 10 números,
armazene eles em um vetor e diga qual elemento é o maior, e seu valor.
*/
#include <stdio.h>
#define TAM 10
int main(){

    int numeros[TAM];
    int maior;

    for (int i = 0; i < TAM; i++)
    {
        printf("insira o %d° numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    // Encontrar o maior
    maior = numeros[0];
    for (int i = 1; i < TAM; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
    }
    
    printf("\nO maior numero e: %d\n", maior);
    
    return 0;
}