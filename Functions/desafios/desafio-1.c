//Desafio 1: Programe um aplicativo em C que acha todos os números primos até 1000
// Número primo é aquele que é divisível somente por 1 e por ele mesmo.

#include <stdio.h>
#include <stdbool.h> 
#include <math.h>


bool verificarPrimo(int n) {
 
    if (n <= 1) return false;
    
    if (n == 2) return true;

    if (n % 2 == 0) return false;

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    printf("Lista de numeros primos ate 1000:\n");
    
    int contador = 0;

    for (int i = 2; i <= 1000; i++) {
        if (verificarPrimo(i)) {
            printf("%d ", i);
            contador++;
        }
    }

    printf("\n\nTotal de primos encontrados: %d\n", contador);

    return 0;
}