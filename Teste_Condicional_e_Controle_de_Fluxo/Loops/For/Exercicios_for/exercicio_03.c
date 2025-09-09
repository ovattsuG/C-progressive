/*
3. Programa em C que mostra os números pares e ímpares 
Escreva um aplicativo em C que recebe inteiro e mostra os números pares e ímpares (separados), de 1 até esse inteiro.
*/

#include <stdio.h>

int main(){

    int num;
    printf("Digite um inteiro: ");
    scanf("%d", &num);

    printf("Impares \tPares \n");
    
    for(int i = 1; i <= num; i++){

        if(i % 2 == 0)
        {
            printf("%d \n", i);
        }
        else
        {
            printf("%d \t \t", i);
        }
    }
}