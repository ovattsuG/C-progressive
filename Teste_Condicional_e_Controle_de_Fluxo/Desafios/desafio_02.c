// Desafio 2. Escreva um programa que pede os coeficientes de uma equação do segundo grau e exibe as raízes da equação, sejam elas reais ou complexas.
// ax² + bx + c = 0 

#include <stdio.h>
#include <math.h>

int main(){

    int a;
    int b;
    int c;
    printf("Digite os coeficientes para uma equação de segundo grau!");

    printf("Digite o valor de a: \n");
    scanf("%d", &a);

    printf("Digite o valor de b: \n");
    scanf("%d", &b);

    printf("Digite o valor de c: \n");
    scanf("%d", &c);

    // -b² * 4ac 

    double delta = b * b - (4 * a * c);
if (a != 0){

     if (delta >= 0) {
        double x1 = (-b + sqrt(delta)) / (2*a);
        double x2 = (-b - sqrt(delta)) / (2*a);
        printf("Raízes reais:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else {
        double parte_real = -b / (2*a);
        double parte_imaginaria = sqrt(-delta) / (2*a);
        printf("Raízes imaginárias:\n");
        printf("x1 = %.2f + %.2fi\n", parte_real, parte_imaginaria);
        printf("x2 = %.2f - %.2fi\n", parte_real, parte_imaginaria);
    }

} else{
    printf("Em uma equação de 2° o a deve ser diferente de 0!!!");
}

}