#include <stdio.h>

int main(){

    float num1, num2, sum, sub, mult, div;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // soma
    sum = num1 + num2;

    // subtração
    sub = num1 - num2;

    // multiplicação
    mult = num1 * num2;

    // divisão
    div = num1/num2;

    printf("%.2f + %.2f = %.2f\n", num1, num2, sum);
    printf("%.2f - %.2f = %.2f\n", num1, num2, sub);
    printf("%.2f * %.2f = %.2f\n", num1, num2, mult);
    printf("%.2f / %.2f = %.2f\n", num1, num2, div);
}