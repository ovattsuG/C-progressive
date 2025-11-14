/*
8. Crie uma função em linguagem C chamado Dado() que retorna, através de sorteio, um número de 1 até 6.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado();

int main()
{

    char resposta;

    printf("Quer Jogar o dado ?\n Y(sim) ou N(nao): ");
    scanf("%c", &resposta);

    if(resposta == 'Y' || resposta == 'y')
    {
        dado();
    }     
}

int dado()
{
    srand( (unsigned)time(NULL) );

    int numero_sorteado = 1 + (rand() % 6);
    printf("Voce tirou %d ao jogar o dado!\n", numero_sorteado);

    return 0;
}

    

