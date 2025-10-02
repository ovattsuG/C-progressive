/*
3. Crie um aplicativo bancário em C que pede o valor do depósito inicial, o valor do investimento mensal e o número de meses que o dinheiro vai ficar rendendo na poupança.
Após isso, calcule o lucro obtido, sabendo que o juros da poupança é de 0,5%
*/

#include <stdio.h>

int main(){

    float deposito_inicial, investimento_mensal;
    int meses;
    float juros = 0.005;
    float saldo;
    float lucro;

    printf("Insira o valor do deposito inicial: ");
    scanf("%f", &deposito_inicial);

    printf("Insira o valor do investimento mensal: ");
    scanf("%f", &investimento_mensal);

    printf("Insira o numero de meses que vai ficar rendendo: ");
    scanf("%d", &meses);

    saldo = deposito_inicial;

    for (int i = 0; i < meses; i++)
    {

        saldo = saldo + (saldo * juros);
        saldo = saldo + investimento_mensal;

    }
    
   lucro = saldo - deposito_inicial - (investimento_mensal * meses);
   printf("%.2f", lucro);
    
}