//0. Crie uma função que receba um valor e informe se ele é positivo ou não.
#include <stdio.h>

int positivo(int valor);

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    positivo(numero);
}

int positivo(int valor)
{
     
    if(valor > 0)
    {
        printf("O numero %d e positivo!", valor);
    }
    else
    {
        printf("O numero %d nao e positivo!", valor);
    }
    return 0;
}