/*
6. Crie uma função em linguagem C que receba 3 números e retorne o maior valor, use a função da questão 4.
*/

#include <stdio.h>

int maior_valor(int num1, int num2, int num3);

int main()
{
    int valor1;
    int valor2;
    int valor3;

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &valor1, &valor2, &valor3 );

    int resultado = maior_valor(valor1, valor2, valor3);
    printf("O maior valor entre %d, %d e %d : --> %d", valor1, valor2, valor3, resultado);

}

int maior_valor(int num1, int num2, int num3)
{
    int maior_valor;
    if (num1 > num2 && num1 > num3)
    {
        maior_valor = num1;
    }
    else if( num2 > num3)
    {
        maior_valor = num2;
    }else
    {
        maior_valor = num3;
    }

    return maior_valor;
}