/*
0. Se você lembrar bem, quando estudamos as variáveis do tipo caractere, char, dissemos que, na verdade, ela eram representadas por inteiros de 0 até 255.
Mostre a tabela completa do código ASCII.
*/

#include <stdio.h>

int  main(){

    int num = 255;
    int i = 1;
    char ascii;
    while (i <= num)
    {
        ascii = i;
        printf("%d = %c \n", i, ascii);
        i++;

    }
    
}