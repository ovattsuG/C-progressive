/*
5. Crie uma função em linguagem C que receba 2 números e retorne o menor valor.
*/

#include <stdio.h>

int menor_valor(int num1, int num2);

int main()
{
    int valor1;
    int valor2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &valor1, &valor2 );

    int resultado = menor_valor(valor1, valor2);
    printf("O menor valor entre %d e %d : --> %d", valor1, valor2, resultado);

}

int menor_valor(int num1, int num2)
{
    int menor_valor;
    if (num1 < num2)
    {
        menor_valor = num1;
    }
    else
    {
        menor_valor = num2;
    }

    return menor_valor;
}