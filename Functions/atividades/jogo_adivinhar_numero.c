/*
Crie um jogo, em C, que sorteia um número entre 1 e mil.
O jogador deve tentar acertar o número sorteado.

Se ele errar, o programa deve dizer se o número sorteado é maior ou menor que o número que o jogador tentou.

Ao acertar o número sorteado, o programa deverá dizer em quantas tentativas o usuário acertou.

Você consegue pensar na melhor estratégia para esse jogo?
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand( (unsigned)time(NULL) );

    int numero_sorteado = 1 + (rand() % 1000);
    int acertou = 0;
    int resposta;
    int tentativas = 0;
    while (acertou != 1)
    {
        printf("Adivinhe o numero que foi sorteado entre 1 e 1000: \n");
        scanf("%d", &resposta);

        if (resposta == numero_sorteado)
        {
            printf("Parabens voce acertou\n");
            tentativas++;
            acertou = 1;
            printf("Voce precisou de %d tentativas", tentativas);
        }
        else
        {
            if(resposta > numero_sorteado)
            {
                printf("%d e maior que o numero sorteado\n", resposta);
            }
            else
            {
                printf("%d e menor que o numero sorteado\n", resposta);
            }
            tentativas++;
        }
    }
    
}

