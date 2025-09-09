/*
0. Programa em C dos patinhos da Xuxa
Xuxa, a rainha dos baixinhos, criou uma música que tem o segunte formato:

n patinhos foram passear
Além das montanhas
Para brincar
A mamãe gritou: Quá, quá, quá, quá
Mas só n-1 patinhos voltaram de lá.

Que se repete até nenhum patinho voltar de lá.
Ao final, todos os patinhos voltam:

A mamãe patinha foi procurar
Além das montanhas
Na beira do mar
A mamãe gritou: Quá, quá, quá, quá
E os n patinhos voltaram de lá.

Crie um programa em C que recebe um inteiro positivo do usuário e exibe a música inteira na tela,
onde o inteiro recebido representa o número inicial n de patinhos que foram passear.
*/

#include <stdio.h>

int main(){

    int num;
    printf("Digite um inteiro: ");
    scanf("%d", &num);

    for (int i = num; 0 <= i; i--)
    {
       printf("\n%d patinhos foram passear\nAlém das montanhas\nPara brincar\nA mamãe gritou: Quá, quá, quá, quá\n",i+1);
      
       printf("Mas só %d patinhos voltaram de lá.\n\n",i);
       printf("%d", i);

       if(i == 0)
       {

        printf("A mamãe patinha foi procurar\nAlém das montanhas\nNa beira do mar\nE os %d patinhos voltaram de lá.",num);

       }
       
       
    }
    

}