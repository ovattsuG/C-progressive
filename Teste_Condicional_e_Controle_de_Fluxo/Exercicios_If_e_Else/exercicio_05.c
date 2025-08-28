/*5. Escreva um programa que pergunte o dia, mês e ano do aniversário de uma pessoa e diga se a data é válida ou não.
Caso não seja, diga o motivo. Suponha que todos os meses tem 31 dias e que estejamos no ano de 2013.
*/

#include <stdio.h>

int main(){

    int dia;
    int mes;
    int ano;

    printf("Digite o dia em que voce nasceu: ");
    scanf("%d", &dia);

    printf("Digite o mes em que voce nasceu: ");
    scanf("%d", &mes);

    printf("Digite o ano em que voce nasceu: ");
    scanf("%d", &ano);

   if (dia < 1 || dia > 31)
    {
    printf("Dia invalido. Um mes so tem dias entre 1 e 31.\n");
    }

    else if (mes < 1 || mes > 12)
    {
    printf("Mes invalido. So existem meses de 1 ate 12.\n");
    }

    else if (ano < 1890 || ano > 2013)
    {
    printf("Ano invalido. De acordo com o ano digitado, voce teria mais de 120 anos ou ainda nao nasceu.\n");
    }
    
    else
    {
    printf("Sua data de nascimento e valida!\n");
    }

}