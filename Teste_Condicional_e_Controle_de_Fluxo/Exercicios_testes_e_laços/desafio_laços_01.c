#include <stdio.h>

int main() {
    int n;
    unsigned long long primeiro = 0, segundo = 1, proximo;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1;
    }

    if (n == 1) {
        printf("O %dº termo da série de Fibonacci é: %llu\n", n, primeiro);
        return 0;
    } else if (n == 2) {
        printf("O %dº termo da série de Fibonacci é: %llu\n", n, segundo);
        return 0;
    }

    for (int i = 3; i <= n; i++) {
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }

    printf("O %dº termo da série de Fibonacci é: %llu\n", n, segundo);

    return 0;
}
