/*
3. Escreva um programa que pergunte o raio de uma circunferência,
 e sem seguida mostre o diâmetro, comprimento e área da circunferência.
*/

#include <stdio.h>

int main(){

    float raio;
    
    printf("Digite o raio da circuferencia: ");
    scanf("%f", &raio);

    float diametro = 2 * raio;
    float comprimento = (2 * 3.14) * raio;
    float area = 3.14 * (raio * raio);

    printf("O diametro = %.2f \n O compromento = %.2f \n A area = %.2f", diametro, comprimento, area);
}