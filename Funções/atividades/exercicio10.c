/*
10. Crie um aplicativo de conversão entre as temperaturas Celsius e Farenheit.
Primeiro o usuário deve escolher se vai entrar com a temperatura em Célsius ou Farenheit, depois a conversão escolhida é realizada através de um comando SWITCH.
Se C é a temperatura em Célsius e F em farenheit, as fórmulas de conversão são:
C= 5.(F-32)/9
F= (9.C/5) + 32
*/

#include <stdio.h>

int converteTemperatura(char temperatura);

int main(){

    char temperatura;
    printf("Selecione qual conversao quer fazer (C)Celsius (F)Farenheit: ");
    scanf("%c", &temperatura);
    converteTemperatura(temperatura);

}

int converteTemperatura(char temperatura){

    switch (temperatura)
    {
    case 'C':
        printf("Digite a temperatura em Celsius: ");
        float celsius, fahrenheit;
        scanf("%f", &celsius);
        fahrenheit = (9.0 * celsius / 5.0) + 32.0;
        printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);
        break;

    case 'F':
        printf("Digite a temperatura em Fahrenheit: ");
        float fahrenheitInput, celsiusOutput;
        scanf("%f", &fahrenheitInput);
        celsiusOutput = 5.0 * (fahrenheitInput - 32.0) / 9.0;
        printf("Temperatura em Celsius: %.2f\n", celsiusOutput);
        break;

   default:
        printf("Opcao invalida. Escolha 'C' ou 'F'.\n");
        break;
    }
}