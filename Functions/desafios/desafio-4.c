/*
 Crie um programa em C que receba um número e imprima ele na ordem inversa.
Ou seja, se recebeu o inteiro 123, deve imprimir o inteiro 321.
*/

#include <stdio.h>

int main() {
    int numero, inverso = 0, resto;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int original = numero;

    while (numero != 0) {
        resto = numero % 10;
        
        inverso = inverso * 10 + resto;
        
        numero = numero / 10;
    }

    printf("Original: %d\n", original);
    printf("Invertido: %d\n", inverso);

    return 0;
}