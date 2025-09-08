/*
9. Escreva um programa que pergunta um número ao usuário, e mostra sua tabuada completa (de 1 até 10).
*/

#include <stdio.h>

int main(){

    int num;
    int i = 1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    while (i <= 10)
    {
        int multiplicacao = i * num;
        printf("%d X %d = %d \n", i, num, multiplicacao);
        i++;
    }
    

}