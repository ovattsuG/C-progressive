/*
No artigo sobre o teste condicional SWITCH em C, mostramos como usar ele para fazer uma calculadora.
Refaça essa calculadora, com o mesmo SWITCH, mas agora mostrando as operações matemáticas como opções de um menu,
dentro de um laço DO WHILE.
*/

#include <stdio.h>

int main()
{
        int opcao;
        float num1,
              num2;

        do
        {
            printf("Menu para selecionar a operação matematica:\n");
            printf("1. +\n");
            printf("2. -\n");
            printf("3. *\n");
            printf("4. /\n");

            printf("\nDigite a expressao na forma: numero1 operador numero2\n");
            printf("Exemplos: 1 + 1 ,  2.1 * 3.1\n");
            printf("Para sair digite: 0 0 0\n");

            printf("opção: ");
            scanf("%d", &opcao);

            printf("Entre com o primeiro número: ");
            scanf("%f",&num1);

            printf("Entre com o segundo número: ");
            scanf("%f",&num2);

            switch( opcao )
            {
                case 1:
                    printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                    break;

                case 2:
                    printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                    break;

                case 3:
                    printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
                    break;

                case 4:
                    printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                    break;

                default:
                    if(num1 != 0 && opcao != 0 && num2 != 0)
                            printf(" Operador invalido\n\n ");
                        else
                            printf(" Fechando calculadora!\n ");

            }
        } while (opcao);

}