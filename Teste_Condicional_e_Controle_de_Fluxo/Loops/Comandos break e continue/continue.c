/*
Faça um aplicativo em C que some todos os números, de 1 até 100, exceto os múltiplos de 5.

Fazemos o laço for percorrer de 1 até 100.
Testamos se cada número deixa resto 0 quando dividido por 5. Caso deixe, é porque é múltiplo de 5 e não devemos somar.
Para não somar, simplesmente pulamos essa iteração.

Porém, se não for múltiplo de 5, é porque a iteração não foi pulada, ela continua, então vamos somar esse número na soma total.
*/

#include <stdio.h>

int main()
{
        int count,
            soma;

        for(count=1, soma=0 ; count<=100 ; count++)
        {
            if( count%5 ==0)
                continue;

            soma = soma + count;
        }


        printf("Soma %d", soma);

}