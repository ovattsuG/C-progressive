/*
5. Escreva um programa que peça um númer 'n' ao usuário, e que gere um novo n de acordo com a seguinte regra:

• se n é par, n = n / 2
• se n é impar, n = 3 * n + 1
• imprime n
• O programa deve parar quando x tiver o valor igual a 1. Por exemplo, para n = 13, a saída será:
40 -> 20 -> 10 -> 5 -> 16 -> ˜8 -> 4 -> 2 -> 1

*/

#include <stdio.h>

int main(){

    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);

    while (num > 1)
    {
        if (num % 2 == 0)
        {
            num = num / 2;
        }
        else
        {
            num = (3 * num) + 1;
        }

        printf("%d", num);
        if(num >= 2){
            printf(" --> ");
        }
    }
    
}

