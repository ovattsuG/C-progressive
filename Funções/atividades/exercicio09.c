/*
9. Use a função da questão passado e lance o dado 1 milhão de vezes. Conte quantas vezes cada número saiu.
A probabilidade deu certo? Ou seja, a porcentagem dos números foi parecida?
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado();

int main(){

    char resposta;

    printf("Quer Jogar o dado ?\n Y(sim) ou N(nao): ");
    scanf("%c", &resposta);

    if(resposta == 'Y' || resposta == 'y'){

        dado();

    }     
}

int dado(){
    srand( (unsigned)time(NULL) );
    int i = 0;
    int dado1 = 0, dado2 = 0, dado3 = 0, dado4 = 0, dado5 = 0, dado6 = 0;
    
    while (i < 1000000){
        

        int numero_sorteado = 1 + (rand() % 6);
        // printf("Voce tirou %d ao jogar o dado!\n", numero_sorteado);

        switch (numero_sorteado){
            case 1:
                dado1++;
                break;
                
            case 2:
                dado2++;
                break;

            case 3:
                dado3++;
                break;

            case 4:
                dado4++;
                break;

            case 5:
                dado5++;
                break;

            case 6:
                dado6++;
                break;
                
            default:
                break;
        }

        i++;

    }
    
    printf("Quantas vezes cada numero saiu:\n1- %d\n2- %d\n3- %d\n4- %d\n5- %d\n6- %d", dado1, dado2, dado3, dado4, dado5, dado6);
    return 0;
}