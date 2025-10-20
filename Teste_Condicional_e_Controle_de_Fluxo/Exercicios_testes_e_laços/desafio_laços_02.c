#include <stdio.h>

int main() {
    int n;

    printf("Digite um número inteiro ímpar: ");
    scanf("%d", &n);

    if (n % 2 == 0 || n <= 0) {
        printf("O número deve ser ímpar e positivo!\n");
        return 1;
    }

    int metade = n / 2;

    for (int i = 0; i <= metade; i++) {
        for (int j = 0; j < metade - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = metade - 1; i >= 0; i--) {
        for (int j = 0; j < metade - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
