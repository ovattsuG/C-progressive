/*
Desafio 1. Crie um programa em C que peça um número ao usuário e armazene ele na variável x. Depois peça outro número e armazene na variável y.
Mostre esses números. Em seguida, faça com que x passe a ter o valor de y, e que y passe a ter o valor de x.
Dica: você vai precisar usar outra variável.
*/

#include <stdio.h>

int main(){

    int x;
    int y;

    printf("Digite o valor para X: ");
    scanf("%d", &x);

    printf("Digite o valor para Y: ");
    scanf("%d", &y);

    printf("X = %d \n", x);
    printf("Y = %d \n", y);

    int temp_x = x;

    x = y;

    y = temp_x;
    
    printf("Invertendo os valores fica: \n");
    printf("X = %d \n", x);
    printf("Y = %d \n", y);
    
}