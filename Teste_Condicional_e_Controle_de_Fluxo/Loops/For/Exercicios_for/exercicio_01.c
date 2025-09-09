/*
1. Programa em C que mostra os números ímpares
Escreva um aplicativo em C mostra todos os números ímpares de 1 até 100.
*/

#include <stdio.h>

int main(){

    for(int i = 0; i <= 100; i++){
        
        if (i % 2 == 1){
            printf("%d\n", i);
        }
    }
}