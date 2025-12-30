// 1. Crie uma função que receba um valor e diga se é nulo ou não.

#include <stdio.h>

int verifica_valor(int valor);

int main()
{
    int numero;
    printf("Digite um valor: ");
    scanf("%d", &numero);
    verifica_valor(numero);
}

int verifica_valor(int valor)
{
    if (valor == 0)
    {
        printf("%d = nulo", valor);
    }
    else
    {
        printf("%d nao nulo", valor);
    }
    return 0;
}