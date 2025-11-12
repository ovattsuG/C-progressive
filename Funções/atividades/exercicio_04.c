/*
4. Crie uma função em linguagem C que receba 2 números e retorne o maior valor.
*/

#include <stdio.h>

int maior_valor(int num1, int num2);

int main()
{
    int valor1;
    int valor2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &valor1, &valor2 );

    int resultado = maior_valor(valor1, valor2);
    printf("O maior valor entre %d e %d : --> %d", valor1, valor2, resultado);

}

int maior_valor(int num1, int num2)
{
    int maior_valor;
    if (num1 > num2)
    {
        maior_valor = num1;
    }
    else
    {
        maior_valor = num2;
    }

    return maior_valor;
}