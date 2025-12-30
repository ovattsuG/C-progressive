/*
11. Um professor, muito legal, fez 3 provas durante um semestre mas só vai levar em conta as duas notas mais altas para calcular a média.
Faça uma aplicação em C que peça o valor das 3 notas, mostre como seria a média com essas 3 provas,
a média com as 2 notas mais altas, bem como sua nota mais alta e sua nota mais baixa.
*/

#include <stdio.h>
void calculaNotas(float notaP1, float notaP2, float notaP3);

int main() {
    float n1, n2, n3;
    printf("Insira a nota que o aluno tirou em cada prova: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    calculaNotas(n1, n2, n3);

    return 0;
}

void calculaNotas(float notaP1, float notaP2, float notaP3) {
    float media;
    float maior;
    float segundoMaior;
    float menor;

    if (notaP1 == 0 && notaP2 == 0 && notaP3 == 0) {
        printf("Media das notas é 0!\n");
    } else {
        media = (notaP1 + notaP2 + notaP3) / 3;
        printf("A media das tres provas = %.2f \n", media);

        if (notaP1 > notaP2 && notaP1 > notaP3) {
            maior = notaP1;
            if (notaP2 > notaP3) {
                segundoMaior = notaP2;
                menor = notaP3;
            } else {
                segundoMaior = notaP3;
                menor = notaP2;
            }
        } else if (notaP2 > notaP1 && notaP2 > notaP3) {
            maior = notaP2;
            if (notaP1 > notaP3) {
                segundoMaior = notaP1;
                menor = notaP3;
            } else {
                segundoMaior = notaP3;
                menor = notaP1;
            }
        } else {
            maior = notaP3;
            if (notaP1 > notaP2) {
                segundoMaior = notaP1;
                menor = notaP2;
            } else {
                segundoMaior = notaP2;
                menor = notaP1;
            }
        }

        media = (maior + segundoMaior) / 2;
        printf("A media entre as duas maiores notas = %.2f\n", media);
        printf("A sua maior nota foi %.2f \nA menor foi %.2f\n", maior, menor);
    }
}