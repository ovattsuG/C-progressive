#include <stdio.h>

int calcularMDC(int a, int b) {
    int resto;

    while (b != 0) {
        resto = a % b; 
        a = b;        
        b = resto;
    }

    return a;
}

int main() {
    int num1, num2, resultado;

    printf("--- Calculadora de MDC ---\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    resultado = calcularMDC(num1, num2);

    printf("O MDC entre %d e %d eh: %d\n", num1, num2, resultado);

    return 0;
}