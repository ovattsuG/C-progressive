#include <stdio.h>

int main(){
    
    int numero;
    printf("Adivinhe o numero que estou pensando entre 1 e 10: ");
    scanf("%d", &numero);

    if(numero != 7)
    {
        printf("Voce errou o numero que eu estava pensando");
    }
    else
    {
        printf("Voce acerto o n° %d era exatamente o que estava pensando", numero);
    }
}