#include <stdio.h>

int main(){

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade > 17)
    {
        printf("Voce e maior de idade");
    }
    else
    {
        printf("Voce e menor de idade");
    }
}