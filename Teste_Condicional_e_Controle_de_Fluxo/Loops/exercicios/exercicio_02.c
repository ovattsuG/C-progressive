/*
2. Programa em C que mostra os números pares
Escreva um aplicativo em C mostra todos os números pares de 1 até 100.
*/

#include <stdio.h>

int main(){

    int numero = 1;
    printf("Os numeros pares entre 0 e 100 sao: \n");

    while (numero <= 100)
    {
        if((numero % 2) == 0)
        {
            printf("%d \n", numero);
        }

        numero = numero + 1;
    }
    
}