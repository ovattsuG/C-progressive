/*2. Etiqueta
Elabore um programa que pede seu nome, endereço, CEP e telefone.
Ele deve imprimir:
- Na primeira linha: seu nome completo
- Na segunda linha: seu endereço
- Na terceira linha: CEP e telefone
*/
#include <stdio.h>
#include <string.h>

int main (){
    char name[40];
    printf("Digite seu nome: \n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    char endereco[40];
    printf("Digite seu endereço: \n");
    fgets(endereco, sizeof(endereco), stdin);
    endereco[strcspn(endereco, "\n")] = '\0';

    char cep[10];
    printf("Informe seu CEP: \n");
    fgets(cep, sizeof(cep), stdin);
    cep[strcspn(cep, "\n")] = '\0';

    char telefone[15];
    printf("Informe seu telefone: \n");
    fgets(telefone, sizeof(telefone), stdin);
    telefone[strcspn(telefone, "\n")] = '\0';

    printf("\nSeu nome completo: %s", name);
    printf("\nSeu endereco: %s", endereco);
    printf("\nSeu CEP: %s e seu telefone: %s\n", cep, telefone);

    return 0;
}
