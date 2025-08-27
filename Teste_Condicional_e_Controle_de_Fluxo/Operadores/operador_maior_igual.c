#include <stdio.h>

int main(){

    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 45)
    {
        printf("Voce precisa fazer o exame de prostata...");
    }
    
    else
    {
        printf("Voce ainda nao precisa fazer o exame de prostata...");
    }

}