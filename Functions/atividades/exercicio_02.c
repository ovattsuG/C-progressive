/*
2. Crie uma função que receba três valores, 'a', 'b' e 'c',
que são os coeficientes de uma equação do segundo grau e retorne o valor do delta, que é dado por 'b² - 4ac'
*/

#include <stdio.h>

int bhaskara(int a, int b, int c){
    
    int delta = (b*b)- (4*a*c);

    printf("delta = %d", delta);
    return delta;
}

int main(){

    int a;
    int b;
    int c;

    printf("Digite os valores para a, b, e c da função: \n");
    scanf("%d %d %d", &a, &b, &c);

    bhaskara(a, b, c);
}