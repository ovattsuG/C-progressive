#include <stdio.h>

int main()
{
        char operacao;
        float num1,
              num2;

        printf("Escolha sua operação [+ - * / ]: ");
        scanf("%c",&operacao);

        printf("Entre com o primeiro número: ");
        scanf("%f",&num1);

        printf("Entre com o segundo número: ");
        scanf("%f",&num2);

        switch( operacao )
        {
            case '+':
                printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
                break;

            case '-':
                printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
                break;

            case '*':
                printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
                break;

            case '/':
                printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
                break;

            default:
                printf("Você digitou uma operacao invalida.");

        }

}