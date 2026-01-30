/*
01. Crie um programa em C que peça 10 números,
armazene eles em um vetor e diga qual elemento é o menor,
e seu valor.
*/
#include <stdio.h>
#define TAM 10

int main(){

    int numeros[TAM];
    int menor;
    
    for (int i = 0; i < TAM; i++)
    {
        printf("insira o %d° numero: ", i+1);
        scanf("%d", &numeros[i]);
    }
    
    menor = numeros[0];
    for (int i = 1; i < TAM; i++)
    {
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }
    
    printf("\nMenor valor: %d\n", menor);
    return 0;
}