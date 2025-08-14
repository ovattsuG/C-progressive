/*
Crie um programa em C que mostre o tamanho das seguintes variáveis em seu computador:
int
short int
long int
signed int
unsigned int
short signed int
short unsigned int
long signed int
long unsigned int
*/
#include <stdio.h>

int main (){
    printf("Int: %d bytes \n", sizeof(int));
    printf("short int: %d bytes \n", sizeof(short));
    printf("long int: %d bytes \n", sizeof(long));
    printf("signed int: %d bytes \n", sizeof(signed));
    printf("unsigned int: %d bytes \n", sizeof(unsigned));
    printf("short signed int: %d bytes \n", sizeof(short signed));
    printf("short unsigned int: %d bytes \n", sizeof(short unsigned));
    printf("long signed int: %d bytes \n", sizeof(long signed));
    printf("long unsigned int: %d bytes \n", sizeof(long unsigned));
}