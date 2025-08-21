#include <stdio.h>

int main()
{
    char letra1, letra2;

    printf("Insira um caractere: ");
    scanf("%c", &letra1);

    fflush(stdin);
    // fpurge(stdin); LINUX

    printf("Insira outro caractere: ");
    scanf("%c", &letra2);

    printf("Você digitou: '%c' e '%c'", letra1, letra2);
}
/*
corrigindo o problema do programa salvar o enter como um caracter como no ultimo arquivo que executamos aqui limpamos a memoria 
antes de solicitar um segundo caracter no outro arquivo "fgetc_e_getc" ele armazena o enter como caracter e o usa como letra2
 ja aqui limpamos a memoria para evitar este "erro"
 */