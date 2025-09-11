/*
4. Programa em C que calcula a média das notas de uma turma
Escreva um programa que pergunte ao usuário quantos alunos tem na sala dele.
Em seguida, através de um laço, pede ao usuário para que entre com as notas de todos os alunos da sala, um por vez.

Por fim, o programa mostra a média, aritmética, da turma.
*/

#include <stdio.h>

int main(){

    int alunos;
    float nota;
    float nota_total = 0;
    float media;

    printf("Digite quantos alunos tem na sala: ");
    scanf("%d", &alunos);
    
    for ( int i = 1; i <= alunos; i++)
    {
        printf("Digite a nota do aluno numero %d: ", i);
        scanf("%f", &nota);

        nota_total = nota_total + nota;

    }
    media = nota_total / alunos;
    printf("%.2f", media);
}