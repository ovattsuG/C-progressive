/*
Existem, basicamente, duas maneiras de definir constantes em linguagem C:
Através do comando const e da diretiva de pré-processamento: #define

Um costume dos programadores C é declarar essas constantes no começo do programa, depois dos #include .

A sintaxe para declarar constantes usando a palavra reservada const é:
const tipo_da_variavel nome_da_variavel = valor_da_variavel;
*/

#include <stdio.h>
#define MAIORIDADE 18
const int aposentadoria = 65;
const int motorista = 16;

int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if( idade >= MAIORIDADE )
        printf("Voce ja pode se alistar e dirigir.\n");
    else
        if( idade >= motorista )
            printf("Voce pode dirigir, mas nao pode se alistar.\n");
        else
            printf("Voce nao pode dirigir nem se alistar\n");

    if( idade >= aposentadoria )
        printf("Voce ja pode se aposentar!\n");
}