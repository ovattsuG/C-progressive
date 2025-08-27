// 0. Faça um programa que peça dois números ao usuário e mostre qual o maior e qual o menor

#include <stdio.h>

int main(){

    int primeiro_numero;
    int segundo_numero;
    printf("##############################\nInsira Dois numeros para descobir qual o maior\n##############################\n");
    printf("Digite o primeiro numero: \n");
    scanf("%d", &primeiro_numero);
    
    fflush(stdin);

    printf("Digite o segundo numero: ");
    scanf("%d", &segundo_numero);

    if(primeiro_numero > segundo_numero)
    {
        printf("O numero %d tem o maior valor", primeiro_numero);
    }
    else
    {
        printf("O numero %d tem o maior valor", segundo_numero);
    }
}