#include <stdio.h>

int main(){

    int idade;
    printf("Digite a sua idade: ");
    scanf("%d",&idade);

    if(idade <= 44)
    {
        printf("Voce nao precisa fazer o exame de prostata ainda...");
    }
    else
    {
        printf("Voce precisa fazer o exame de prostata...");
    }
}