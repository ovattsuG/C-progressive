/*
03 - Crie um programa em C que recebe uma nota (entre 0.0 e 10.0) e checa se você passou direto, ficou de recuperação ou foi reprovado na matéria.
A regra é a seguinte:
Nota 7 ou mais: passou direto
Entre 4 e 7: tem direito de fazer uma prova de recuperação
Abaixo de 4: reprovado direto
*/

#include <stdio.h>

int main(){

    float nota;

    printf("Digite uma nota: ");
    scanf("%f", &nota);

    if( nota < 0.0 || nota > 10.0){

        printf("O valor da nota deve estar entre 0.0 e 10.0!");

    }else{
        if(nota >= 7){

            printf("Passou direto");

        }else if(nota >= 4 && nota <= 6.9){

            printf("Tem direito a recuperação");

        }else {

            printf("Reprovado!");
        }
    }
}