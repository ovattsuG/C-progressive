/*
1. Programa em C que mostra os números ímpares
Escreva um aplicativo em C mostra todos os números ímpares de 1 até 100.
*/

#include <stdio.h>

int main(){

    int numero = 0;
    printf("Os numeros Impares entre 0 e 100 são: \n");
    while (numero <= 100)
    {
        if((numero % 2) == 1)
        {
            printf("%d \n", numero);
        }

        numero = numero + 1;
    
    }
    
}