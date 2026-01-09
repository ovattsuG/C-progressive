/*
Assim como nas variáveis, podemos inicializar os vetores assim que declaramos.
Como são vários valores, temos que colocar todos esses valores entre chaves {}.

Veja, pra inicializar um vetor de 3 inteiros:
int numeros[3] = { 1, 2, 3};
*/

#include <stdio.h>
 
int main()
{
    char curso[14] = {'C', ' ', 'P', 'r', 'o', 'g', 'r'
                     , 'e', 's', 's', 'i', 'v', 'o','\n'};
    int indice;
 
    for(indice=0 ; curso[indice] != '\n' ; indice++)
        printf("%c", curso[indice]);
}
