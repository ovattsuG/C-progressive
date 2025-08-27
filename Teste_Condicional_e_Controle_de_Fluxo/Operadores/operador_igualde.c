#include <stdio.h>

int main(){

    int resultado;
    printf("Quanto e 3 + 3 ?");
    scanf("%d", &resultado);

    if(resultado == 6)
    {
        printf("A resposta esta correta!");
    }
    else
    {
        printf("Voce esta usando muita droga...");
    }
}