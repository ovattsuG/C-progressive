/*
Programe um aplicativo em C que ache todos os números perfeitos até 1000.
Número perfeito é aquele que é a soma de seus fatores. Por exemplo, 6 é divisível por 1, 2 e 3 ao passo que 6 = 1 + 2 + 3.
*/

#include <stdio.h>

int main() {
    int num, i, soma;

    printf("Procurando numeros perfeitos ate 1000...\n");

    for (num = 1; num <= 1000; num++) {
        soma = 0;

        
        for (i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                soma += i; 
            }
        }

        if (soma == num) {
            printf("Encontrado: %d\n", num);
        }
    }

    return 0;
}