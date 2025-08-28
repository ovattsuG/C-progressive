/*4. Para doar sangue é necessário ter entre 18 e 67 anos. Faça um aplicativo na linguagem C
 que pergunte a idade de uma pessoa e diga se ela pode doar sangue ou não. Use alguns dos operadores lógicos OU (||) e E (&&).
*/

#include <stdio.h>

int main(){

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18 && idade <= 67)
    {
        printf("Voce pode doar sangue!");
    }
    else
    {
        printf("Voce nao pode doar sangue!");
    }
}