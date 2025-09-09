/*
2. Programa em C que mostra os números pares
Escreva um aplicativo em C mostra todos os números pares de 1 até 100.
*/

#include <stdio.h>

int main(){

    for(int i = 1; i <= 100; i++){

        if(i % 2 == 0){

            printf("%d\n", i);
        }
    }
}