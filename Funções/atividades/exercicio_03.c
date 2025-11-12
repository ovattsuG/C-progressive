/*
3. Usando as 3 funções acima, crie um aplicativo que calcula as raízes de uma equação do 2o grau:
ax² + bx + c=0
Para ela existir, o coeficiente 'a' deve ser diferente de zero.
Caso o delta seja maior ou igual a zero, as raízes serão reais.
Caso o delta seja negativo, as reais serão complexas e da forma: x + iy
*/

#include <stdio.h>
#include <math.h>


int positivo(int valor) {
    if (valor > 0) {
        printf("O numero %d e positivo!\n", valor);
    } else {
        printf("O numero %d nao e positivo!\n", valor);
    }
    return 0;
}


int verifica_valor(int valor) {
    if (valor == 0) {
        printf("%d = nulo\n", valor);
    } else {
        printf("%d nao nulo\n", valor);
    }
    return 0;
}


int bhaskara(int a, int b, int c) {
    int delta = (b * b) - (4 * a * c);
    printf("Delta = %d\n", delta);
    return delta;
}

int main() {
    int a, b, c;

    printf("Digite os valores para a, b, c da equacao de segundo grau aX² + bX + C = 0:\n");
    scanf("%d %d %d", &a, &b, &c);

    verifica_valor(a);

    if (a == 0) {
        printf("O coeficiente 'a' deve ser diferente de zero para ser uma equacao do 2o grau.\n");
        return 1;
    }

    int delta = bhaskara(a, b, c);
    positivo(delta);

    if (delta >= 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raizes reais:\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    } else {
        double parte_real = -b / (2.0 * a);
        double parte_imaginaria = sqrt(-delta) / (2.0 * a);
        printf("Raizes complexas:\n");
        printf("x1 = %.2lf + %.2lfi\n", parte_real, parte_imaginaria);
        printf("x2 = %.2lf - %.2lfi\n", parte_real, parte_imaginaria);
    }

    return 0;
}