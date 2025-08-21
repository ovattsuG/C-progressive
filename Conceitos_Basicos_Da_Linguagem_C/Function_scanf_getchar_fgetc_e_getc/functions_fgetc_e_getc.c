#include <stdio.h>

int main()
{
    char letra1, letra2;

    printf("Insira um caractere: ");
    letra1 = getc(stdin);

    printf("Insira outro caractere: ");
    letra2 = getc(stdin);

    printf("Voce digitou: '%c' e '%c'", letra1, letra2);
    // lembrando que a tecla enter conta como um caracter por isso imprime a letra + ' ' como segunda letra ja q o enter é um \n
}
