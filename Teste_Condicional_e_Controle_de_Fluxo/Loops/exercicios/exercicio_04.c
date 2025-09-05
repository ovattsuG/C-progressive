/*
4.Escreva um programa que pergunte ao usuário quantos alunos tem na sala dele.
Em seguida, através de um laço while, pede ao usuário para que entre com as notas de todos os alunos da sala, um por vez.
Por fim, o programa deve mostrar a média, aritmética, da turma.
*/

#include <stdio.h>
int main(){

    int alunos;
    float nota;
    float total;
    float media;
    int i = 0;
    printf("Quantos alunos tem na sua sala de aula ?");
    scanf("%d", &alunos);

    while (i < alunos)
    {

        printf("entre com as notas de todos os alunos da sala, um por vez: ");

        if(nota < 0 || nota > 10)
        {
            printf("Nota deve ter valor entre 0 e 10!");
        }
        else
        {
            scanf("%f", &nota);
            total = total + nota;
            i++;
        }
       
    }

    media = total / alunos;

    printf("A media aritmetica da turma = %2.f", media);
    
}