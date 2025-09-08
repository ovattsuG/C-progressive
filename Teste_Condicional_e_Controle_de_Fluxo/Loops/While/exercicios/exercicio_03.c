/*
3. Programa em C que mostra os números pares e ímpares 
Escreva um aplicativo em C que recebe inteiro e mostra os números pares e ímpares (separados), de 1 até esse inteiro.
*/

#include <stdio.h>

int main(){

    int numero = 1;
    int inteiro;
    printf("Digite um numero inteiro para saber os numeros pares de 1 ate o numero escolhido:\n ");
    scanf("%d", &inteiro);
    printf("Impares \tPares \n");
    while (numero <= inteiro)
    {
        if((numero % 2) == 0)
        {
            printf("%d \n", numero);
        }else
        {
            printf("%d \t \t", numero);
        }

        numero = numero + 1;
    }
    
}