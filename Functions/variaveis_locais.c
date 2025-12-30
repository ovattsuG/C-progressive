#include <stdio.h>

int teste(int a);

int main(void)
{
    int a = 1;

    printf("Valor inicial de 'a': %d\n\n", a);
    a=teste(a);
    printf("Valor de 'a' apos receber o return da funcao: %d\n", a);
}

int teste(int a)
{
    a++;
    printf("Estou dentro da funcao! A variavel foi alterada, e aqui dentro vale: a = %d\n\n",a);
    return a;
}