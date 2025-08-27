// 1. Faça um programa que receba três inteiros e diga qual deles é o maior e qual o menor. Consegue criar mais de uma solução?

#include <stdio.h>

int main() {

    int num1;
    int num2;
    int num3;

    printf("###################\nInsira tres inteiros para descobrir qual é o maior e o menor entre os tres\n###################\n");
    printf("Insira o primeiro inteiro: ");
    scanf("%d", &num1);

    printf("Insira o segundo inteiro: ");
    scanf("%d", &num2);

    printf("Insira o terceiro inteiro: ");
    scanf("%d", &num3);

    if(num1 > num2)
    {
        if(num1>num3)
        {
            printf("O numero %d que tem o maior valor", num1);
            
            if(num2 < num3)
            {
                printf("O numero %d que tem o menor valor", num2);
            }
            else
            {
                printf("O numero %d que tem o menor valor", num3);
            }
        }
        else
        {
            printf("O numero %d que tem o maior valor", num3);
            printf("O numero %d que tem o menor valor", num2);

        }
        
    }
    else
    {
        if(num2 > num3)
        {
            printf("O numero %d que tem o maior valor", num2);
            
             if(num1 < num3)
            {
                printf("O numero %d que tem o menor valor", num1);
            }
            else
            {
                printf("O numero %d que tem o menor valor", num3);
            }
        }
        else
        {
            printf("O numero %d que tem o maior valor", num3);
            printf("O numero %d que tem o menor valor", num1);
        }
    }
}