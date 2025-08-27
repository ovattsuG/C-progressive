#include <stdio.h>

int main(){

    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 18)
    {
        printf("voce e menor de idade");
    }
    else
    {
        printf("voce e maior de idade");
    }
}