// exemplo for calcular P.A
#include <stdio.h>

int main()
{
        int termos,
            razao,
            inicial,
            count;

        printf("Número de termos da P.A: ");
        scanf("%d", &termos);

        printf("Razão da P.A: ");
        scanf("%d", &razao);

        printf("Elemento inicial da P.A: ");
        scanf("%d", &inicial);

        for(count = 1; count <= termos ; count++)
        {
            printf("Termo %d: %d\n", count, (inicial + (count-1)*razao) );
        }
            

}
