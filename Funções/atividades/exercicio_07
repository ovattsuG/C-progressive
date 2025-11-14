/*
7. Crie uma função em linguagem C que receba 3 números e retorne o menor valor, use a função da questão 5.
*/

#include <stdio.h>

int menor_valor(int num1, int num2, int num3);

int main()
{
    int valor1;
    int valor2;
    int valor3;

    printf("Digite dois numeros: ");
    scanf("%d %d", &valor1, &valor2, &valor3 );

    int resultado = menor_valor(valor1, valor2, valor3);
    printf("O menor valor entre %d, %d e %d : --> %d", valor1, valor2, valor3, resultado);

}

int menor_valor(int num1, int num2, int num3)
{
    int menor_valor;
    if (num1 < num2 && num1 < num3)
    {
        menor_valor = num1;
    }
    else if (num2 < num3)
    {
        menor_valor = num2;
    }
    else
    {
        menor_valor = num3;
    }

    return menor_valor;
}