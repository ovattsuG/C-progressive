// passamos uma condição e o loop roda ate que essa condição nao seja mais verdadeira

#include <stdio.h>

int main(){

    int numero = 1;

    while (numero <= 10)
    {
        printf("%d\n", numero);
        numero++;
    }
    
}

/* 
exemplo comentado de um aplicativo em C 
que peça ao usuário o primeiro elemento de uma P.A, a razão da P.A e o número de elementos a serem exibidos.


#include <stdio.h>

int main(){

    int init, rate, term;

     int num,
            count=1;

        printf("Digite o numero inicial da P.A: ");
        scanf("%d", &init);

        printf("Digite a razao da P.A: ");
        scanf("%d", &rate);

        printf("Digite o numero de termos da P.A: ");
        scanf("%d", &term);

        while(count <= term)
        {
            num = init + (count - 1) * rate;
            printf("Termo %d: %d\n",count, num);
            count++;
        }
}

*/

